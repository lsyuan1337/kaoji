from nuitka.distutils import setup

setup(
    # 应用程序名称
    name='拷机工具v2.12',
    # 入口模块
    entry_points={
        'console_scripts': [
            'myapp = myapp:main'
        ]
    },
    # 生成的二进制文件名称
    standalone=True,
)
