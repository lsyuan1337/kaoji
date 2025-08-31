from xlrd import *
from os import path,mkdir

# 文件生成参数
xlsFn = r"C:\Users\Stanford\Desktop\PE场景长稳环境网络规划-20230602.xlsx"  #长稳业务规划xlsx路径
cfgFloder = r'1234'  #配置存放路径（文件夹名称）
UCMPNum = 26    # UCMP切换数目，26-48
SRv6BackupIndex = 1 #SRV6备份口的位置

# 配置参数
mtu = 9200
keyChainOspf = 'Cmcc@111#*'
ISISid = 65535
OSPFid = 65535


def createFloder(Fname):
    try:
        if not path.isdir(Fname):
            mkdir(Fname)
    finally:
        return path.abspath(Fname)

    
def portCollect(xlsFn,SRv6BackupIndex=1):
    # global portInfoDut1
    # global portInfoDut2
    portInfoDut1 = {}
    portInfoDut2 = {}
    workbook = open_workbook(xlsFn)
    sheet = workbook.sheet_by_name('网络侧')
    dut1AP1List_10G = sheet.col_values(1,5,15)
    dut2AP1List_10G = sheet.col_values(2,5,15)
    dut1AP1List_100G = sheet.col_values(1,15,17)
    dut2AP1List_100G = sheet.col_values(2,15,17)
    dut1AP2List = sheet.col_values(4,5,37)
    dut2AP2List = sheet.col_values(5,5,37)
    dut1AP3List = sheet.col_values(7,5,8)
    dut2AP3List = sheet.col_values(8,5,8)
    dut1Srv6 = sheet.cell_value(3,10)
    dut2Srv6 = sheet.cell_value(3,11)

    #dut1
    portInfoDut1[dut1Srv6] = {'speed':'100G'}
    portInfoDut1[dut1Srv6].update({'belong':'SRV6'})

    # index = 1
    for port in dut1AP1List_100G + dut1AP3List:
        portInfoDut1[port] = {'speed':'100G'}
    for port in dut1AP1List_10G + dut1AP2List:
        portInfoDut1[port] = {'speed':'10G'}

    for port in dut1AP1List_10G + dut1AP1List_100G:
        portInfoDut1[port].update({'belong':'AP1'})
    for port in dut1AP2List:
        portInfoDut1[port].update({'belong':'AP2'})
    for port in dut1AP3List:
        portInfoDut1[port].update({'belong':'AP3'})

    index = 1
    #dut2
    
    portInfoDut2[dut2Srv6] = {'speed':'100G'}
    portInfoDut2[dut2Srv6].update({'belong':'SRV6'})
    

    for port in dut2AP1List_100G + dut2AP3List:
        portInfoDut2[port] = {'speed':'100G'}
    for port in dut2AP1List_10G + dut2AP2List:
        portInfoDut2[port] = {'speed':'10G'}

    for port in dut2AP1List_10G + dut2AP1List_100G:
        portInfoDut2[port].update({'belong':'AP1'})
    for port in dut2AP2List:
        portInfoDut2[port].update({'belong':'AP2'})
    for port in dut2AP3List:
        portInfoDut2[port].update({'belong':'AP3'})
    
    return portInfoDut1,portInfoDut2

    '''
    Index:
    (1-2) AP1  100G成员口
    (3-5) AP3  100G成员口
    (6-15) AP1 10G成员口
    (16-47) AP2 10G成员口
    '''
    #
def getPortList(portInfo:dict,mode='speed',arg='10G'):
    ls = []
    for port in list(portInfo.keys()):
        if portInfo[port].get(mode) == arg:
            ls.append(port)
    return ls


def cfgCreate(ucmpNum,folderName,dut1Info,dut2Info):
    fnDut1AP = path.join(folderName,'Dut1_AP.txt')
    fnDut2AP = path.join(folderName,'Dut2_AP.txt')
    fnDut1Ucmp = path.join(folderName,'Dut1_UCMP.txt')
    fnDut2Ucmp = path.join(folderName,'Dut2_UCMP.txt')
    addrv4ApDut1 = ['11.0.2.1','11.0.3.1','11.0.4.1']
    addrv6ApDut1 = ['2011:1:2002::1','2011:1:2003::1','2011:1:2004::1']
    addrv4ApDut2 = ['11.0.2.2','11.0.3.2','11.0.4.2']
    addrv6ApDut2 = ['2011:1:2002::2','2011:1:2003::2','2011:1:2004::2']
    addrv4ucmpDut1 = ['11.0.{}.1'.format(x) for x in range(11,58)]
    addrv6ucmpDut1 = ['2011:1:{}::1'.format(x) for x in range(2011,2058)]
    addrv4ucmpDut2 = ['11.0.{}.2'.format(x) for x in range(11,58)]
    addrv6ucmpDut2 = ['2011:1:{}::2'.format(x) for x in range(2011,2058)]

    dut1Ap1 = getPortList(dut1Info,mode='belong',arg='AP1')
    dut2Ap1 = getPortList(dut2Info,mode='belong',arg='AP1')
    dut1Ap2 = getPortList(dut1Info,mode='belong',arg='AP2')
    dut2Ap2 = getPortList(dut2Info,mode='belong',arg='AP2')
    dut1Ap3 = getPortList(dut1Info,mode='belong',arg='AP3')
    dut2Ap3 = getPortList(dut2Info,mode='belong',arg='AP3')

#dut1_ap
    with open(fnDut1AP,'w+') as f:
        f.write('en\nconfig\n!\n')
        for port in dut1Ap1:
            f.write('interface {}\n'.format(port))
            f.write(' description AP1 member port\n')
            f.write(' port-group 1\n')
            if dut1Info.get(port).get('speed') == '100G':
                f.write(' aggregateport load-balance weight 10\n')
            f.write(' no shutdown\n')
            f.write('!\n')
        for port in dut1Ap2:
            f.write('interface {}\n'.format(port))
            f.write(' description AP2 member port\n')
            f.write(' port-group 2 mode active\n')
            f.write(' no shutdown\n!\n')
        for port in dut1Ap3:
            f.write('interface {}\n'.format(port))
            f.write(' description AP3 member port\n')
            f.write(' port-group 3\n')
            f.write(' no shutdown\n!\n')

        for i in range(3):
            f.write('''interface AggregatePort {0}
 no shutdown
 mls qos trust auto 
 aggregate bfd-detect ipv4 {1} {2} min-tx 3 min-rx 3 multiplier 3 unshare
 aggregate bfd-detect ipv6 {3} {4} min-tx 3 min-rx 3 multiplier 3 unshare
 ip address {1} 255.255.255.0
 ipv6 address {3}/64
 ipv6 enable
 ip router isis {5}
 ipv6 router isis {5}
 ip ospf {6} area 0
 ip ospf authentication message-digest
 ip ospf message-digest-key 1 md5 {7}
 ipv6 ospf {6} area 0
 ipv6 ospf authentication-mode 1 hmac-sha256 {7}
 bfd interval 50 min_rx 50 multiplier 3
 mpls ldp enable
 label-switching
 ipv6 pim sparse-mode
 ip pim sparse-mode
 ipv6 verify unicast source reachable-via rx
 ip verify unicast source reachable-via rx
 load-balance ucmp
 mpls ucmp enable
 isis bfd
 ip ospf bfd
 ipv6 ospf bfd
 isis suppress 40 
 ip mtu {8}
 ipv6 mtu {8}\n!
'''.format(i+1,addrv4ApDut1[i],addrv4ApDut2[i],addrv6ApDut1[i],addrv6ApDut2[i],ISISid,OSPFid,keyChainOspf,mtu))
        for port in getPortList(dut1Info,mode='belong',arg='SRV6'):
            f.write('''interface {0}
 isis wide-metric 100
 isis ipv6 wide-metric 100
 no ip ospf {1} area 0
 no ip ospf authentication
 no ip ospf message-digest-key 1 
 no ipv6 ospf {1} area 0
 no ipv6 ospf authentication-mode
 no mpls ldp enable
 no label-switching
 no ipv6 pim sparse-mode
 no ip pim sparse-mode
 no load-balance ucmp
 no mpls ucmp enable
 no ip ospf bfd
 no ipv6 ospf bfd
 ip mtu {2}
 ipv6 mtu {2}
!
end
'''.format(port,OSPFid,mtu))

#dut2_ap
    with open(fnDut2AP,'w+') as f:
        f.write('en\nconfig\n!\n')
        for port in dut2Ap1:
            f.write('interface {}\n'.format(port))
            f.write(' description AP1 member port\n')
            f.write(' port-group 1\n')
            if dut2Info.get(port).get('speed') == '100G':
                f.write(' aggregateport load-balance weight 10\n')
            f.write(' no shutdown\n')
            f.write('!\n')
        for port in dut2Ap2:
            f.write('interface {}\n'.format(port))
            f.write(' description AP2 member port\n')
            f.write(' port-group 2 mode active\n')
            f.write(' no shutdown\n!\n')
        for port in dut2Ap3:
            f.write('interface {}\n'.format(port))
            f.write(' description AP3 member port\n')
            f.write(' port-group 3\n')
            f.write(' no shutdown\n!\n')

        for i in range(3):
            f.write('''interface AggregatePort {0}
 no shutdown
 mls qos trust auto 
 aggregate bfd-detect ipv4 {2} {1} min-tx 3 min-rx 3 multiplier 3 unshare
 aggregate bfd-detect ipv6 {4} {3} min-tx 3 min-rx 3 multiplier 3 unshare
 ip address {2} 255.255.255.0
 ipv6 address {4}/64
 ipv6 enable
 ip router isis {5}
 ipv6 router isis {5}
 ip ospf {6} area 0
 ip ospf authentication message-digest
 ip ospf message-digest-key 1 md5 {7}
 ipv6 ospf {6} area 0
 ipv6 ospf authentication-mode 1 hmac-sha256 {7}
 bfd interval 50 min_rx 50 multiplier 3
 mpls ldp enable
 label-switching
 ipv6 pim sparse-mode
 ip pim sparse-mode
 ipv6 verify unicast source reachable-via rx
 ip verify unicast source reachable-via rx
 load-balance ucmp
 mpls ucmp enable
 isis bfd
 ip ospf bfd
 ipv6 ospf bfd
 isis suppress 40 
 ip mtu {8}
 ipv6 mtu {8}\n!
'''.format(i+1,addrv4ApDut1[i],addrv4ApDut2[i],addrv6ApDut1[i],addrv6ApDut2[i],ISISid,OSPFid,keyChainOspf,mtu))

        for port in getPortList(dut2Info,mode='belong',arg='SRV6'):
            f.write('''interface {0}
 isis wide-metric 100
 isis ipv6 wide-metric 100
 no ip ospf {1} area 0
 no ip ospf authentication
 no ip ospf message-digest-key 1 
 no ipv6 ospf {1} area 0
 no ipv6 ospf authentication-mode
 no mpls ldp enable
 no label-switching
 no ipv6 pim sparse-mode
 no ip pim sparse-mode
 no load-balance ucmp
 no mpls ucmp enable
 no ip ospf bfd
 no ipv6 ospf bfd
 ip mtu {2}
 ipv6 mtu {2}
!
end
'''.format(port,OSPFid,mtu))


    dut1_100G = getPortList(dut1Info,mode='speed',arg='100G')
    dut2_100G = getPortList(dut2Info,mode='speed',arg='100G')
    dut1_10G = getPortList(dut1Info,mode='speed',arg='10G')
    dut2_10G = getPortList(dut2Info,mode='speed',arg='10G')
    ucmpListDut1 = dut1_100G + dut1_10G
    ucmpListDut2 = dut2_100G + dut2_10G

#dut1_ucmp
    with open(fnDut1Ucmp,'w+') as f:
        f.write('en\nconfig\n!\n')
        for i in range(3):
            f.write('interface AggregatePort {}\nshutdown\n!\n'.format(i+1))
        for i in range(3):
            f.write('no interface AggregatePort {}\n!\n'.format(i+1))
            
        #Srv6备份口，优先
        f.write('''interface {0}
 no isis wide-metric 100
 no isis ipv6 wide-metric 100
 ip ospf {1} area 0
 ip ospf authentication message-digest
 ip ospf message-digest-key 1 md5 Cmcc@111#*
 ipv6 ospf {1} area 0
 ipv6 ospf authentication-mode 1 hmac-sha256 Cmcc@111#*
 mpls ldp enable
 label-switching
 ipv6 pim sparse-mode
 ip pim sparse-mode
 ipv6 pim dr-priority 100
 ip pim dr-priority 100
 load-balance ucmp
 mpls ucmp enable
 isis bfd
 ip ospf bfd
 ipv6 ospf bfd
 ip mtu {2}
 ipv6 mtu {2}\n!\n'''.format(ucmpListDut1[0],OSPFid,mtu))
        
        #其他
        for i in range(ucmpNum-1):
            f.write('''interface {0}
 no port-group
 ipv6 traffic-filter acl-v6 in
 ip access-group acl-v4 in
 mls qos trust auto 
 bfd interval 3 min_rx 3 multiplier 3 
 ip address {1} 255.255.255.0
 ipv6 address {2}/64
 ipv6 enable
 ip router isis {3}
 ipv6 router isis {3}
 isis suppress 40 
 ip ospf {4} area 0
 ip ospf authentication message-digest
 ip ospf message-digest-key 1 md5 {5}
 ipv6 ospf {4} area 0
 ipv6 ospf authentication-mode 1 hmac-sha256 {5}
 bfd interval 50 min_rx 50 multiplier 3
 mpls ldp enable
 label-switching
 ipv6 verify unicast source reachable-via rx
 ip verify unicast source reachable-via rx
 load-balance ucmp
 mpls ucmp enable
 isis bfd
 ip ospf bfd
 ipv6 ospf bfd
 ipv6 flow-sampler cmcc_sampler
 ipv6 flow-sampler cmcc_sampler egress
 flow-sampler cmcc_sampler
 flow-sampler cmcc_sampler egress
 ipv6 flow ingress
 ipv6 flow egress
 ip flow ingress
 ip flow egress
 ipv6 pim sparse-mode
 ip pim sparse-mode
 ip mtu {6}
 ipv6 mtu {6}
 no shutdown\n!\n'''.format(ucmpListDut1[i+1],addrv4ucmpDut1[i],addrv6ucmpDut1[i],ISISid,OSPFid,keyChainOspf,mtu))


#dut2_ucmp
    with open(fnDut2Ucmp,'w+') as f:
        f.write('en\nconfig\n!\n')
        for i in range(3):
            f.write('interface AggregatePort {}\nshutdown\n!\n'.format(i+1))
        for i in range(3):
            f.write('no interface AggregatePort {}\n!\n'.format(i+1))
            
        #Srv6备份口，优先
        f.write('''interface {0}
 no isis wide-metric 100
 no isis ipv6 wide-metric 100
 ip ospf {1} area 0
 ip ospf authentication message-digest
 ip ospf message-digest-key 1 md5 Cmcc@111#*
 ipv6 ospf {1} area 0
 ipv6 ospf authentication-mode 1 hmac-sha256 Cmcc@111#*
 mpls ldp enable
 label-switching
 ipv6 pim sparse-mode
 ip pim sparse-mode
 ipv6 pim dr-priority 100
 ip pim dr-priority 100
 load-balance ucmp
 mpls ucmp enable
 isis bfd
 ip ospf bfd
 ipv6 ospf bfd
 ip mtu {2}
 ipv6 mtu {2}\n!\n'''.format(ucmpListDut2[0],OSPFid,mtu))
        
        #其他
        for i in range(ucmpNum-1):
            f.write('''interface {0}
 no port-group
 ipv6 traffic-filter acl-v6 in
 ip access-group acl-v4 in
 mls qos trust auto 
 bfd interval 3 min_rx 3 multiplier 3 
 ip address {1} 255.255.255.0
 ipv6 address {2}/64
 ipv6 enable
 ip router isis {3}
 ipv6 router isis {3}
 isis suppress 40 
 ip ospf {4} area 0
 ip ospf authentication message-digest
 ip ospf message-digest-key 1 md5 {5}
 ipv6 ospf {4} area 0
 ipv6 ospf authentication-mode 1 hmac-sha256 {5}
 bfd interval 50 min_rx 50 multiplier 3
 mpls ldp enable
 label-switching
 ipv6 verify unicast source reachable-via rx
 ip verify unicast source reachable-via rx
 load-balance ucmp
 mpls ucmp enable
 isis bfd
 ip ospf bfd
 ipv6 ospf bfd
 ipv6 flow-sampler cmcc_sampler
 ipv6 flow-sampler cmcc_sampler egress
 flow-sampler cmcc_sampler
 flow-sampler cmcc_sampler egress
 ipv6 flow ingress
 ipv6 flow egress
 ip flow ingress
 ip flow egress
 ipv6 pim sparse-mode
 ip pim sparse-mode
 ip mtu {6}
 ipv6 mtu {6}
 no shutdown\n!\n'''.format(ucmpListDut2[i+1],addrv4ucmpDut2[i],addrv6ucmpDut2[i],ISISid,OSPFid,keyChainOspf,mtu))




if __name__ == "__main__":
    createFloder(cfgFloder)
    portInfoDut1,portInfoDut2 = portCollect(xlsFn)
    cfgCreate(UCMPNum,cfgFloder,portInfoDut1,portInfoDut2)

