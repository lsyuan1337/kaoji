/* Generated code for Python module 'pyreadline.modes.notemacs'
 * created by Nuitka version 1.5.7
 *
 * This code is in part copyright 2022 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_pyreadline$modes$notemacs" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyreadline$modes$notemacs;
PyDictObject *moduledict_pyreadline$modes$notemacs;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[402];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[402];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("pyreadline.modes.notemacs"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 402; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pyreadline$modes$notemacs(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 402; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_d9df6061d933f1fc03ae016c4ad068e8;
static PyCodeObject *codeobj_d5e9b0637e2c1d73f26ac324a4c3e1d2;
static PyCodeObject *codeobj_8f00c6535b13b35335dc9cca767268c3;
static PyCodeObject *codeobj_bf9ac36e128d30c25a1f1a2446a93ab6;
static PyCodeObject *codeobj_a21b3b97ae8e185bbf074b1a2ddc0ca7;
static PyCodeObject *codeobj_8b112ce9fc53b6fca5accc87eb7ecce6;
static PyCodeObject *codeobj_113d24e59c4d8b07eeb8ab1d4314776a;
static PyCodeObject *codeobj_9b1d417ba2b80ec04f442211367e5755;
static PyCodeObject *codeobj_e95b4960abbcd38f420064691c8f5a33;
static PyCodeObject *codeobj_f1a74332028481b8becc2a03771dd0af;
static PyCodeObject *codeobj_edda410bbe66992fad6342388c86c7d3;
static PyCodeObject *codeobj_fb8c502ddba26bf3c6f5c56dd2f77111;
static PyCodeObject *codeobj_5c3954054f6782ee8aa592943d45694f;
static PyCodeObject *codeobj_e4adf7dc6d878e4ff5c67fa5ffb24fe0;
static PyCodeObject *codeobj_fb0fd6afa29a8fca8322a918ea73ccfb;
static PyCodeObject *codeobj_8cc570f9b7d1967ede3608100cbd7cd5;
static PyCodeObject *codeobj_47af369c9ff3c9981c4f6f76eaed0f99;
static PyCodeObject *codeobj_f9a7cbe84e2b8f0ab9a3db594d3ee0fa;
static PyCodeObject *codeobj_9b514f4b37c6f9b21bf5cbc144b74ec8;
static PyCodeObject *codeobj_ebd51cec1f10f65a5d2b3f515825e25e;
static PyCodeObject *codeobj_9982ee32a1898a2d1a3e7969c519d13b;
static PyCodeObject *codeobj_6dc92a89fd3776fbafb91df61276ad7f;
static PyCodeObject *codeobj_47258975aa9a62e5c4fbbd7c9b8b37e8;
static PyCodeObject *codeobj_ce170de7d0572bda1c2022b208e501b5;
static PyCodeObject *codeobj_86456480ce5478b610f84c443a66c758;
static PyCodeObject *codeobj_1e5628c85fea5da1080ecf9ec8ba7d80;
static PyCodeObject *codeobj_336605c76da913371a75357fc8820682;
static PyCodeObject *codeobj_4ceafd18542908846901d6197a5c5177;
static PyCodeObject *codeobj_30fc8408bbbbfbf18c39e42e9a96ea32;
static PyCodeObject *codeobj_1bc0dce1dde25b834e94cb0dc6cb23f8;
static PyCodeObject *codeobj_391b1a68c0c61b2f8fcd500a2125a56f;
static PyCodeObject *codeobj_46c180ad790c375e476967871edf475a;
static PyCodeObject *codeobj_c8eae4e61075a0c7d4c8bb680f312ca6;
static PyCodeObject *codeobj_c080d403382f8cab795fd3510a888144;
static PyCodeObject *codeobj_53cd0c0c27e4013b090500e1d0d02d05;
static PyCodeObject *codeobj_1a1d475b45cbafd93ed6d9f61e71bf1a;
static PyCodeObject *codeobj_f812b5287e219a40a862eb2a3306f0b9;
static PyCodeObject *codeobj_7049ee854a85c8647b45752d949a4be3;
static PyCodeObject *codeobj_b59c836148a46c035254f5af756d09df;
static PyCodeObject *codeobj_3fc7e681318c8c8d52c7deb50dfd7dca;
static PyCodeObject *codeobj_6879bd35a9b3f19fbed4d6e3b7df0dbc;
static PyCodeObject *codeobj_957a3f163b005361760bdadc91cced9b;
static PyCodeObject *codeobj_eb6a72c2954f18946410e32f21959829;
static PyCodeObject *codeobj_0c927945c4bf97c694f488d7fde073f9;
static PyCodeObject *codeobj_e39313f93a0d09b71e2b17bd72fc5c24;
static PyCodeObject *codeobj_92a60720c23a2f1e670e46c7f10fa186;
static PyCodeObject *codeobj_2b7e3899cc1fe8a8c2920336cdbb14a0;
static PyCodeObject *codeobj_3475e0a3c411c794cc2120e8be3ad0fe;
static PyCodeObject *codeobj_63cda26d95b71ff8e8ed4d652b39f23d;
static PyCodeObject *codeobj_e05cdad79f4141553243533ff3a3aa30;
static PyCodeObject *codeobj_594d640429959e9b1a56c4189f4e3f70;
static PyCodeObject *codeobj_5938eb9d8ff564af82084b0e5fc8f44d;
static PyCodeObject *codeobj_5d73488e3e175d257b0cb1cd36bb8f33;
static PyCodeObject *codeobj_78bef4a5baf6b8545a73eee1c04240d3;
static PyCodeObject *codeobj_36d6dec6d29843fca779d02872164723;
static PyCodeObject *codeobj_c4f00db63c1b50e985c4d220056c905d;
static PyCodeObject *codeobj_a9c9420899ac590405bfeb493b415bb5;
static PyCodeObject *codeobj_68c8a13e83b5225ef6a064dcfb1ceb45;
static PyCodeObject *codeobj_37cf552c3280cf9c8493068aa350f56b;
static PyCodeObject *codeobj_1aec86e96eac28b89af4a811840fe18f;
static PyCodeObject *codeobj_b8d6b7f9a89b0878a1f2f84c96d9536c;
static PyCodeObject *codeobj_1aa1b97c448293d67ba30abce023d8d1;
static PyCodeObject *codeobj_fd55a6c6793e7fcb15fd98b7af1ae5ae;
static PyCodeObject *codeobj_e816f3b99c433fcd38e5ffac80ef399f;
static PyCodeObject *codeobj_21e07642b9d1a7fd2914ad2b2e3227c6;
static PyCodeObject *codeobj_2b4c3fd9b872fecd157883da3d1bfe52;
static PyCodeObject *codeobj_6a2781ee7b930c2368d7f43d7add021e;
static PyCodeObject *codeobj_c378c1e77531c4596deae6fb70862035;
static PyCodeObject *codeobj_87b0e142f165ae7cfbb4529f3054515b;
static PyCodeObject *codeobj_a4c753ca86088b22c361342bdc31dacb;
static PyCodeObject *codeobj_55310bce0221ba6d814b9b2668ffffb8;
static PyCodeObject *codeobj_a08a7ff1a4d6d0b960d8533d069ccfd1;
static PyCodeObject *codeobj_38ffb2bbd3cd23298c2df31a631e940b;
static PyCodeObject *codeobj_392b404f8fda0dd7c6a9e86574ce456b;
static PyCodeObject *codeobj_c4e95d9136d445ad3dbfae8aa0e9e294;
static PyCodeObject *codeobj_b3251b32d4c4cb94be618a393c60b7c7;
static PyCodeObject *codeobj_4e43dd5cfd60eb7d121a44f0ebf44a2c;
static PyCodeObject *codeobj_c2d9c00766056e272c27fe3ac66f27dd;
static PyCodeObject *codeobj_88e27266b605c8b975cd61a8ecd771b5;
static PyCodeObject *codeobj_218c188053c315a2e721bc32f8cc7838;
static PyCodeObject *codeobj_16d82be4814f5339b4ceab1e0221ecf9;
static PyCodeObject *codeobj_e7c6fc21538b1fb43176159abb5535af;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[386]); CHECK_OBJECT(module_filename_obj);
    codeobj_d9df6061d933f1fc03ae016c4ad068e8 = MAKE_CODE_OBJECT(module_filename_obj, 407, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[387], mod_consts[387], mod_consts[388], NULL, 1, 0, 0);
    codeobj_d5e9b0637e2c1d73f26ac324a4c3e1d2 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[389], mod_consts[389], NULL, NULL, 0, 0, 0);
    codeobj_8f00c6535b13b35335dc9cca767268c3 = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[0], mod_consts[0], mod_consts[390], NULL, 0, 0, 0);
    codeobj_bf9ac36e128d30c25a1f1a2446a93ab6 = MAKE_CODE_OBJECT(module_filename_obj, 19, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[1], mod_consts[1], mod_consts[391], NULL, 2, 0, 0);
    codeobj_a21b3b97ae8e185bbf074b1a2ddc0ca7 = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[234], mod_consts[234], mod_consts[392], NULL, 1, 0, 0);
    codeobj_8b112ce9fc53b6fca5accc87eb7ecce6 = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[103], mod_consts[103], mod_consts[393], NULL, 4, 0, 0);
    codeobj_113d24e59c4d8b07eeb8ab1d4314776a = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[41], mod_consts[41], mod_consts[394], NULL, 1, 0, 0);
    codeobj_9b1d417ba2b80ec04f442211367e5755 = MAKE_CODE_OBJECT(module_filename_obj, 484, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[345], mod_consts[345], mod_consts[395], NULL, 2, 0, 0);
    codeobj_e95b4960abbcd38f420064691c8f5a33 = MAKE_CODE_OBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[188], mod_consts[188], mod_consts[395], NULL, 2, 0, 0);
    codeobj_f1a74332028481b8becc2a03771dd0af = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[54], mod_consts[54], mod_consts[395], NULL, 2, 0, 0);
    codeobj_edda410bbe66992fad6342388c86c7d3 = MAKE_CODE_OBJECT(module_filename_obj, 257, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[119], mod_consts[119], mod_consts[395], NULL, 2, 0, 0);
    codeobj_fb8c502ddba26bf3c6f5c56dd2f77111 = MAKE_CODE_OBJECT(module_filename_obj, 328, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[141], mod_consts[141], mod_consts[395], NULL, 2, 0, 0);
    codeobj_5c3954054f6782ee8aa592943d45694f = MAKE_CODE_OBJECT(module_filename_obj, 348, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[149], mod_consts[149], mod_consts[395], NULL, 2, 0, 0);
    codeobj_e4adf7dc6d878e4ff5c67fa5ffb24fe0 = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[58], mod_consts[58], mod_consts[395], NULL, 2, 0, 0);
    codeobj_fb0fd6afa29a8fca8322a918ea73ccfb = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[67], mod_consts[67], mod_consts[395], NULL, 2, 0, 0);
    codeobj_8cc570f9b7d1967ede3608100cbd7cd5 = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[48], mod_consts[48], mod_consts[395], NULL, 2, 0, 0);
    codeobj_47af369c9ff3c9981c4f6f76eaed0f99 = MAKE_CODE_OBJECT(module_filename_obj, 474, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[340], mod_consts[340], mod_consts[395], NULL, 2, 0, 0);
    codeobj_f9a7cbe84e2b8f0ab9a3db594d3ee0fa = MAKE_CODE_OBJECT(module_filename_obj, 308, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[137], mod_consts[137], mod_consts[395], NULL, 2, 0, 0);
    codeobj_9b514f4b37c6f9b21bf5cbc144b74ec8 = MAKE_CODE_OBJECT(module_filename_obj, 523, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[365], mod_consts[365], mod_consts[395], NULL, 2, 0, 0);
    codeobj_ebd51cec1f10f65a5d2b3f515825e25e = MAKE_CODE_OBJECT(module_filename_obj, 528, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[368], mod_consts[368], mod_consts[395], NULL, 2, 0, 0);
    codeobj_9982ee32a1898a2d1a3e7969c519d13b = MAKE_CODE_OBJECT(module_filename_obj, 120, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[198], mod_consts[198], mod_consts[395], NULL, 2, 0, 0);
    codeobj_6dc92a89fd3776fbafb91df61276ad7f = MAKE_CODE_OBJECT(module_filename_obj, 592, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[385], mod_consts[385], mod_consts[396], NULL, 1, 0, 0);
    codeobj_47258975aa9a62e5c4fbbd7c9b8b37e8 = MAKE_CODE_OBJECT(module_filename_obj, 383, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[307], mod_consts[307], mod_consts[395], NULL, 2, 0, 0);
    codeobj_ce170de7d0572bda1c2022b208e501b5 = MAKE_CODE_OBJECT(module_filename_obj, 389, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[310], mod_consts[310], mod_consts[395], NULL, 2, 0, 0);
    codeobj_86456480ce5478b610f84c443a66c758 = MAKE_CODE_OBJECT(module_filename_obj, 366, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[302], mod_consts[302], mod_consts[395], NULL, 2, 0, 0);
    codeobj_1e5628c85fea5da1080ecf9ec8ba7d80 = MAKE_CODE_OBJECT(module_filename_obj, 371, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[304], mod_consts[304], mod_consts[397], NULL, 2, 0, 0);
    codeobj_336605c76da913371a75357fc8820682 = MAKE_CODE_OBJECT(module_filename_obj, 251, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[117], mod_consts[117], mod_consts[395], NULL, 2, 0, 0);
    codeobj_4ceafd18542908846901d6197a5c5177 = MAKE_CODE_OBJECT(module_filename_obj, 458, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[331], mod_consts[331], mod_consts[395], NULL, 2, 0, 0);
    codeobj_30fc8408bbbbfbf18c39e42e9a96ea32 = MAKE_CODE_OBJECT(module_filename_obj, 358, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[296], mod_consts[296], mod_consts[395], NULL, 2, 0, 0);
    codeobj_1bc0dce1dde25b834e94cb0dc6cb23f8 = MAKE_CODE_OBJECT(module_filename_obj, 439, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[325], mod_consts[325], mod_consts[395], NULL, 2, 0, 0);
    codeobj_391b1a68c0c61b2f8fcd500a2125a56f = MAKE_CODE_OBJECT(module_filename_obj, 489, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[348], mod_consts[348], mod_consts[395], NULL, 2, 0, 0);
    codeobj_46c180ad790c375e476967871edf475a = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[135], mod_consts[135], mod_consts[395], NULL, 2, 0, 0);
    codeobj_c8eae4e61075a0c7d4c8bb680f312ca6 = MAKE_CODE_OBJECT(module_filename_obj, 544, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[374], mod_consts[374], mod_consts[395], NULL, 2, 0, 0);
    codeobj_c080d403382f8cab795fd3510a888144 = MAKE_CODE_OBJECT(module_filename_obj, 558, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[380], mod_consts[380], mod_consts[395], NULL, 2, 0, 0);
    codeobj_53cd0c0c27e4013b090500e1d0d02d05 = MAKE_CODE_OBJECT(module_filename_obj, 551, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[377], mod_consts[377], mod_consts[395], NULL, 2, 0, 0);
    codeobj_1a1d475b45cbafd93ed6d9f61e71bf1a = MAKE_CODE_OBJECT(module_filename_obj, 469, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[337], mod_consts[337], mod_consts[395], NULL, 2, 0, 0);
    codeobj_f812b5287e219a40a862eb2a3306f0b9 = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[69], mod_consts[69], mod_consts[395], NULL, 2, 0, 0);
    codeobj_7049ee854a85c8647b45752d949a4be3 = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[50], mod_consts[50], mod_consts[395], NULL, 2, 0, 0);
    codeobj_b59c836148a46c035254f5af756d09df = MAKE_CODE_OBJECT(module_filename_obj, 517, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[362], mod_consts[362], mod_consts[395], NULL, 2, 0, 0);
    codeobj_3fc7e681318c8c8d52c7deb50dfd7dca = MAKE_CODE_OBJECT(module_filename_obj, 262, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[273], mod_consts[273], mod_consts[395], NULL, 2, 0, 0);
    codeobj_6879bd35a9b3f19fbed4d6e3b7df0dbc = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[52], mod_consts[52], mod_consts[395], NULL, 2, 0, 0);
    codeobj_957a3f163b005361760bdadc91cced9b = MAKE_CODE_OBJECT(module_filename_obj, 204, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[107], mod_consts[107], mod_consts[395], NULL, 2, 0, 0);
    codeobj_eb6a72c2954f18946410e32f21959829 = MAKE_CODE_OBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[56], mod_consts[56], mod_consts[395], NULL, 2, 0, 0);
    codeobj_0c927945c4bf97c694f488d7fde073f9 = MAKE_CODE_OBJECT(module_filename_obj, 230, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[115], mod_consts[115], mod_consts[395], NULL, 2, 0, 0);
    codeobj_e39313f93a0d09b71e2b17bd72fc5c24 = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[113], mod_consts[113], mod_consts[395], NULL, 2, 0, 0);
    codeobj_92a60720c23a2f1e670e46c7f10fa186 = MAKE_CODE_OBJECT(module_filename_obj, 568, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[382], mod_consts[382], mod_consts[395], NULL, 2, 0, 0);
    codeobj_2b7e3899cc1fe8a8c2920336cdbb14a0 = MAKE_CODE_OBJECT(module_filename_obj, 534, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[371], mod_consts[371], mod_consts[395], NULL, 2, 0, 0);
    codeobj_3475e0a3c411c794cc2120e8be3ad0fe = MAKE_CODE_OBJECT(module_filename_obj, 417, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[316], mod_consts[316], mod_consts[398], NULL, 2, 0, 0);
    codeobj_63cda26d95b71ff8e8ed4d652b39f23d = MAKE_CODE_OBJECT(module_filename_obj, 324, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[139], mod_consts[139], mod_consts[395], NULL, 2, 0, 0);
    codeobj_e05cdad79f4141553243533ff3a3aa30 = MAKE_CODE_OBJECT(module_filename_obj, 362, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[299], mod_consts[299], mod_consts[395], NULL, 2, 0, 0);
    codeobj_594d640429959e9b1a56c4189f4e3f70 = MAKE_CODE_OBJECT(module_filename_obj, 337, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[145], mod_consts[145], mod_consts[395], NULL, 2, 0, 0);
    codeobj_5938eb9d8ff564af82084b0e5fc8f44d = MAKE_CODE_OBJECT(module_filename_obj, 342, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[147], mod_consts[147], mod_consts[395], NULL, 2, 0, 0);
    codeobj_5d73488e3e175d257b0cb1cd36bb8f33 = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[65], mod_consts[65], mod_consts[395], NULL, 2, 0, 0);
    codeobj_78bef4a5baf6b8545a73eee1c04240d3 = MAKE_CODE_OBJECT(module_filename_obj, 218, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[260], mod_consts[260], mod_consts[395], NULL, 2, 0, 0);
    codeobj_36d6dec6d29843fca779d02872164723 = MAKE_CODE_OBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[110], mod_consts[110], mod_consts[395], NULL, 2, 0, 0);
    codeobj_c4f00db63c1b50e985c4d220056c905d = MAKE_CODE_OBJECT(module_filename_obj, 313, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[286], mod_consts[286], mod_consts[395], NULL, 2, 0, 0);
    codeobj_a9c9420899ac590405bfeb493b415bb5 = MAKE_CODE_OBJECT(module_filename_obj, 395, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[312], mod_consts[312], mod_consts[398], NULL, 2, 0, 0);
    codeobj_68c8a13e83b5225ef6a064dcfb1ceb45 = MAKE_CODE_OBJECT(module_filename_obj, 401, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[314], mod_consts[314], mod_consts[399], NULL, 2, 0, 0);
    codeobj_37cf552c3280cf9c8493068aa350f56b = MAKE_CODE_OBJECT(module_filename_obj, 494, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[350], mod_consts[350], mod_consts[395], NULL, 2, 0, 0);
    codeobj_1aec86e96eac28b89af4a811840fe18f = MAKE_CODE_OBJECT(module_filename_obj, 137, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[63], mod_consts[63], mod_consts[395], NULL, 2, 0, 0);
    codeobj_b8d6b7f9a89b0878a1f2f84c96d9536c = MAKE_CODE_OBJECT(module_filename_obj, 268, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[275], mod_consts[275], mod_consts[395], NULL, 2, 0, 0);
    codeobj_1aa1b97c448293d67ba30abce023d8d1 = MAKE_CODE_OBJECT(module_filename_obj, 479, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[343], mod_consts[343], mod_consts[395], NULL, 2, 0, 0);
    codeobj_fd55a6c6793e7fcb15fd98b7af1ae5ae = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[238], mod_consts[238], mod_consts[400], NULL, 2, 0, 0);
    codeobj_e816f3b99c433fcd38e5ffac80ef399f = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[248], mod_consts[248], mod_consts[395], NULL, 2, 0, 0);
    codeobj_21e07642b9d1a7fd2914ad2b2e3227c6 = MAKE_CODE_OBJECT(module_filename_obj, 197, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[104], mod_consts[104], mod_consts[395], NULL, 2, 0, 0);
    codeobj_2b4c3fd9b872fecd157883da3d1bfe52 = MAKE_CODE_OBJECT(module_filename_obj, 503, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[355], mod_consts[355], mod_consts[395], NULL, 2, 0, 0);
    codeobj_6a2781ee7b930c2368d7f43d7add021e = MAKE_CODE_OBJECT(module_filename_obj, 280, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[18], mod_consts[18], mod_consts[395], NULL, 2, 0, 0);
    codeobj_c378c1e77531c4596deae6fb70862035 = MAKE_CODE_OBJECT(module_filename_obj, 512, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[180], mod_consts[180], mod_consts[395], NULL, 2, 0, 0);
    codeobj_87b0e142f165ae7cfbb4529f3054515b = MAKE_CODE_OBJECT(module_filename_obj, 465, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[334], mod_consts[334], mod_consts[395], NULL, 2, 0, 0);
    codeobj_a4c753ca86088b22c361342bdc31dacb = MAKE_CODE_OBJECT(module_filename_obj, 274, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[277], mod_consts[277], mod_consts[401], NULL, 2, 0, 0);
    codeobj_55310bce0221ba6d814b9b2668ffffb8 = MAKE_CODE_OBJECT(module_filename_obj, 508, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[358], mod_consts[358], mod_consts[395], NULL, 2, 0, 0);
    codeobj_a08a7ff1a4d6d0b960d8533d069ccfd1 = MAKE_CODE_OBJECT(module_filename_obj, 285, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[129], mod_consts[129], mod_consts[395], NULL, 2, 0, 0);
    codeobj_38ffb2bbd3cd23298c2df31a631e940b = MAKE_CODE_OBJECT(module_filename_obj, 292, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[131], mod_consts[131], mod_consts[395], NULL, 2, 0, 0);
    codeobj_392b404f8fda0dd7c6a9e86574ce456b = MAKE_CODE_OBJECT(module_filename_obj, 499, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[352], mod_consts[352], mod_consts[395], NULL, 2, 0, 0);
    codeobj_c4e95d9136d445ad3dbfae8aa0e9e294 = MAKE_CODE_OBJECT(module_filename_obj, 444, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[328], mod_consts[328], mod_consts[395], NULL, 2, 0, 0);
    codeobj_b3251b32d4c4cb94be618a393c60b7c7 = MAKE_CODE_OBJECT(module_filename_obj, 332, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[143], mod_consts[143], mod_consts[395], NULL, 2, 0, 0);
    codeobj_4e43dd5cfd60eb7d121a44f0ebf44a2c = MAKE_CODE_OBJECT(module_filename_obj, 353, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[151], mod_consts[151], mod_consts[395], NULL, 2, 0, 0);
    codeobj_c2d9c00766056e272c27fe3ac66f27dd = MAKE_CODE_OBJECT(module_filename_obj, 298, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[133], mod_consts[133], mod_consts[395], NULL, 2, 0, 0);
    codeobj_88e27266b605c8b975cd61a8ecd771b5 = MAKE_CODE_OBJECT(module_filename_obj, 429, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[319], mod_consts[319], mod_consts[395], NULL, 2, 0, 0);
    codeobj_218c188053c315a2e721bc32f8cc7838 = MAKE_CODE_OBJECT(module_filename_obj, 244, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[268], mod_consts[268], mod_consts[395], NULL, 2, 0, 0);
    codeobj_16d82be4814f5339b4ceab1e0221ecf9 = MAKE_CODE_OBJECT(module_filename_obj, 236, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[265], mod_consts[265], mod_consts[395], NULL, 2, 0, 0);
    codeobj_e7c6fc21538b1fb43176159abb5535af = MAKE_CODE_OBJECT(module_filename_obj, 433, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[322], mod_consts[322], mod_consts[395], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__10_backward_word();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__11_clear_screen();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__12_redraw_current_line();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__13_accept_line();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__14_previous_history();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__15_next_history();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__16_beginning_of_history();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__17_end_of_history();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__18__i_search();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__19_reverse_search_history();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__1___init__();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__20_forward_search_history();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__21_non_incremental_reverse_search_history();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__22_non_incremental_forward_search_history();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__23_history_search_forward();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__24_history_search_backward();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__25_yank_nth_arg();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__26_yank_last_arg();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__27_delete_char();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__28_backward_delete_char();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__29_forward_backward_delete_char();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__2___repr__();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__30_quoted_insert();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__31_tab_insert();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__32_self_insert();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__33_transpose_chars();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__34_transpose_words();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__35_upcase_word();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__36_downcase_word();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__37_capitalize_word();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__38_overwrite_mode();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__39_kill_line();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__3__readline_from_keyboard();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__40_backward_kill_line();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__41_unix_line_discard();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__42_kill_whole_line();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__43_kill_word();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__44_backward_kill_word();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__45_unix_word_rubout();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__46_delete_horizontal_space();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__47_kill_region();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__48_copy_region_as_kill();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__49_copy_region_to_clipboard();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__4_readline(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__50_copy_backward_word();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__51_copy_forward_word();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__52_paste();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__53_paste_mulitline_code();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__54_ipython_paste();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__55_yank();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__56_yank_pop();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__57_digit_argument();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__58_universal_argument();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__59_delete_char_or_list();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__5_beginning_of_line();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__60_start_kbd_macro();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__61_end_kbd_macro();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__62_call_last_kbd_macro();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__63_re_read_init_file();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__64_abort();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__65_do_uppercase_version();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__66_prefix_meta();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__67_undo();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__68_revert_line();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__69_tilde_expand();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__6_end_of_line();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__70_set_mark();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__71_exchange_point_and_mark();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__72_character_search();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__73_character_search_backward();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__74_insert_comment();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__75_dump_functions();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__76_dump_variables();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__77_dump_macros();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__78_init_editing_mode();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__79_commonprefix();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__7_forward_char();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__8_backward_char();


static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__9_forward_word();


// The module function definitions.
static PyObject *impl_pyreadline$modes$notemacs$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_rlobj = python_pars[1];
    struct Nuitka_FrameObject *frame_bf9ac36e128d30c25a1f1a2446a93ab6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bf9ac36e128d30c25a1f1a2446a93ab6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bf9ac36e128d30c25a1f1a2446a93ab6)) {
        Py_XDECREF(cache_frame_bf9ac36e128d30c25a1f1a2446a93ab6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bf9ac36e128d30c25a1f1a2446a93ab6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bf9ac36e128d30c25a1f1a2446a93ab6 = MAKE_FUNCTION_FRAME(codeobj_bf9ac36e128d30c25a1f1a2446a93ab6, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bf9ac36e128d30c25a1f1a2446a93ab6->m_type_description == NULL);
    frame_bf9ac36e128d30c25a1f1a2446a93ab6 = cache_frame_bf9ac36e128d30c25a1f1a2446a93ab6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bf9ac36e128d30c25a1f1a2446a93ab6);
    assert(Py_REFCNT(frame_bf9ac36e128d30c25a1f1a2446a93ab6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER2(moduledict_pyreadline$modes$notemacs, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rlobj);
        tmp_args_element_value_1 = par_rlobj;
        frame_bf9ac36e128d30c25a1f1a2446a93ab6->m_frame.f_lineno = 20;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[1], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bf9ac36e128d30c25a1f1a2446a93ab6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bf9ac36e128d30c25a1f1a2446a93ab6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bf9ac36e128d30c25a1f1a2446a93ab6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bf9ac36e128d30c25a1f1a2446a93ab6,
        type_description_1,
        par_self,
        par_rlobj,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_bf9ac36e128d30c25a1f1a2446a93ab6 == cache_frame_bf9ac36e128d30c25a1f1a2446a93ab6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bf9ac36e128d30c25a1f1a2446a93ab6);
        cache_frame_bf9ac36e128d30c25a1f1a2446a93ab6 = NULL;
    }

    assertFrameObject(frame_bf9ac36e128d30c25a1f1a2446a93ab6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_rlobj);
    Py_DECREF(par_rlobj);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_rlobj);
    Py_DECREF(par_rlobj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__3__readline_from_keyboard(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_c = NULL;
    PyObject *var_event = NULL;
    PyObject *var_control = NULL;
    PyObject *var_meta = NULL;
    PyObject *var_shift = NULL;
    PyObject *var_code = NULL;
    PyObject *var_dispatch_func = NULL;
    PyObject *var_r = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_113d24e59c4d8b07eeb8ab1d4314776a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_113d24e59c4d8b07eeb8ab1d4314776a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_113d24e59c4d8b07eeb8ab1d4314776a)) {
        Py_XDECREF(cache_frame_113d24e59c4d8b07eeb8ab1d4314776a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_113d24e59c4d8b07eeb8ab1d4314776a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_113d24e59c4d8b07eeb8ab1d4314776a = MAKE_FUNCTION_FRAME(codeobj_113d24e59c4d8b07eeb8ab1d4314776a, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_113d24e59c4d8b07eeb8ab1d4314776a->m_type_description == NULL);
    frame_113d24e59c4d8b07eeb8ab1d4314776a = cache_frame_113d24e59c4d8b07eeb8ab1d4314776a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_113d24e59c4d8b07eeb8ab1d4314776a);
    assert(Py_REFCNT(frame_113d24e59c4d8b07eeb8ab1d4314776a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_c == NULL);
        var_c = tmp_assign_source_1;
    }
    loop_start_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 28;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_self;
        frame_113d24e59c4d8b07eeb8ab1d4314776a->m_frame.f_lineno = 28;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[4]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        if (var_c == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 29;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = var_c;
        frame_113d24e59c4d8b07eeb8ab1d4314776a->m_frame.f_lineno = 29;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[6]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_event;
            var_event = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 30;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[7]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 30;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_False;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 31;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[7], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_event);
        tmp_expression_value_3 = var_event;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[8]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_1, 0, 4);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 32;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_2, 1, 4);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 32;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_3, 2, 4);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 32;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_3;
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_4, 3, 4);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 32;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_4;
            tmp_tuple_unpack_1__element_4 = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooo";
                    exception_lineno = 32;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[9];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooo";
            exception_lineno = 32;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_control;
            var_control = tmp_assign_source_8;
            Py_INCREF(var_control);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_meta;
            var_meta = tmp_assign_source_9;
            Py_INCREF(var_meta);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = var_shift;
            var_shift = tmp_assign_source_10;
            Py_INCREF(var_shift);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = var_code;
            var_code = tmp_assign_source_11;
            Py_INCREF(var_code);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_control);
        tmp_tuple_element_1 = var_control;
        tmp_assattr_value_2 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_assattr_value_2, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = Py_True;
        PyTuple_SET_ITEM0(tmp_assattr_value_2, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_shift);
        tmp_tuple_element_1 = var_shift;
        PyTuple_SET_ITEM0(tmp_assattr_value_2, 2, tmp_tuple_element_1);
        CHECK_OBJECT(var_code);
        tmp_tuple_element_1 = var_code;
        PyTuple_SET_ITEM0(tmp_assattr_value_2, 3, tmp_tuple_element_1);
        CHECK_OBJECT(var_event);
        tmp_assattr_target_2 = var_event;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[8], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        if (var_event == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 36;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = var_event;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[8]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_cmp_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 36;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[11]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 36;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_7;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[13]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 37;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[14]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 37;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_113d24e59c4d8b07eeb8ab1d4314776a->m_frame.f_lineno = 37;
        tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[15];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_EOFError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 38;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_11;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 40;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = par_self;
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[16]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[17]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_event == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 40;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = var_event;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[8]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 40;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 40;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[18]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 40;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_113d24e59c4d8b07eeb8ab1d4314776a->m_frame.f_lineno = 40;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_dispatch_func;
            var_dispatch_func = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_12;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[20];
        if (var_event == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 41;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = var_event;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[8]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
        tmp_args_element_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_113d24e59c4d8b07eeb8ab1d4314776a->m_frame.f_lineno = 41;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = Py_None;
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_13;
            Py_INCREF(var_r);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_dispatch_func);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_dispatch_func);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(var_dispatch_func);
        tmp_called_value_4 = var_dispatch_func;
        if (var_event == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 44;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = var_event;
        frame_113d24e59c4d8b07eeb8ab1d4314776a->m_frame.f_lineno = 44;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_r;
            assert(old != NULL);
            var_r = tmp_assign_source_14;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 45;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[14]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_113d24e59c4d8b07eeb8ab1d4314776a->m_frame.f_lineno = 45;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[21]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_4:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        if (var_dispatch_func == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 47;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_3 = var_dispatch_func;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 47;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[23], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_r);
        tmp_truth_name_3 = CHECK_IF_TRUE(var_r);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = par_self;
        frame_113d24e59c4d8b07eeb8ab1d4314776a->m_frame.f_lineno = 49;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[4]);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto loop_end_1;
    branch_no_5:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 27;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_113d24e59c4d8b07eeb8ab1d4314776a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_113d24e59c4d8b07eeb8ab1d4314776a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_113d24e59c4d8b07eeb8ab1d4314776a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_113d24e59c4d8b07eeb8ab1d4314776a,
        type_description_1,
        par_self,
        var_c,
        var_event,
        var_control,
        var_meta,
        var_shift,
        var_code,
        var_dispatch_func,
        var_r
    );


    // Release cached frame if used for exception.
    if (frame_113d24e59c4d8b07eeb8ab1d4314776a == cache_frame_113d24e59c4d8b07eeb8ab1d4314776a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_113d24e59c4d8b07eeb8ab1d4314776a);
        cache_frame_113d24e59c4d8b07eeb8ab1d4314776a = NULL;
    }

    assertFrameObject(frame_113d24e59c4d8b07eeb8ab1d4314776a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_event);
    var_event = NULL;
    Py_XDECREF(var_control);
    var_control = NULL;
    Py_XDECREF(var_meta);
    var_meta = NULL;
    Py_XDECREF(var_shift);
    var_shift = NULL;
    Py_XDECREF(var_code);
    var_code = NULL;
    Py_XDECREF(var_dispatch_func);
    var_dispatch_func = NULL;
    CHECK_OBJECT(var_r);
    Py_DECREF(var_r);
    var_r = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_event);
    var_event = NULL;
    Py_XDECREF(var_control);
    var_control = NULL;
    Py_XDECREF(var_meta);
    var_meta = NULL;
    Py_XDECREF(var_shift);
    var_shift = NULL;
    Py_XDECREF(var_code);
    var_code = NULL;
    Py_XDECREF(var_dispatch_func);
    var_dispatch_func = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__4_readline(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prompt = python_pars[1];
    PyObject *var_c = NULL;
    struct Nuitka_FrameObject *frame_fd55a6c6793e7fcb15fd98b7af1ae5ae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_fd55a6c6793e7fcb15fd98b7af1ae5ae = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_fd55a6c6793e7fcb15fd98b7af1ae5ae)) {
        Py_XDECREF(cache_frame_fd55a6c6793e7fcb15fd98b7af1ae5ae);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fd55a6c6793e7fcb15fd98b7af1ae5ae == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fd55a6c6793e7fcb15fd98b7af1ae5ae = MAKE_FUNCTION_FRAME(codeobj_fd55a6c6793e7fcb15fd98b7af1ae5ae, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fd55a6c6793e7fcb15fd98b7af1ae5ae->m_type_description == NULL);
    frame_fd55a6c6793e7fcb15fd98b7af1ae5ae = cache_frame_fd55a6c6793e7fcb15fd98b7af1ae5ae;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fd55a6c6793e7fcb15fd98b7af1ae5ae);
    assert(Py_REFCNT(frame_fd55a6c6793e7fcb15fd98b7af1ae5ae) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 55;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[24], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[25]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_fd55a6c6793e7fcb15fd98b7af1ae5ae->m_frame.f_lineno = 59;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[25]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_fd55a6c6793e7fcb15fd98b7af1ae5ae, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_fd55a6c6793e7fcb15fd98b7af1ae5ae, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_2;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[26]);
        assert(tmp_called_value_1 != NULL);
        frame_fd55a6c6793e7fcb15fd98b7af1ae5ae->m_frame.f_lineno = 61;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[27]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        frame_fd55a6c6793e7fcb15fd98b7af1ae5ae->m_frame.f_lineno = 62;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[29]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    branch_no_2:;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_c == NULL);
        var_c = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[14]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_fd55a6c6793e7fcb15fd98b7af1ae5ae->m_frame.f_lineno = 65;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[30]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_prompt);
        tmp_assattr_value_2 = par_prompt;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[31], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        frame_fd55a6c6793e7fcb15fd98b7af1ae5ae->m_frame.f_lineno = 67;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[32]);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_attribute_value_3;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[33]);
        if (tmp_attribute_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_3);

            exception_lineno = 69;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    // Tried code:
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        frame_fd55a6c6793e7fcb15fd98b7af1ae5ae->m_frame.f_lineno = 71;
        tmp_call_result_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[33]);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_6);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_fd55a6c6793e7fcb15fd98b7af1ae5ae, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_fd55a6c6793e7fcb15fd98b7af1ae5ae, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_7;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[26]);
        assert(tmp_called_value_2 != NULL);
        frame_fd55a6c6793e7fcb15fd98b7af1ae5ae->m_frame.f_lineno = 73;
        tmp_call_result_7 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[34]);

        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_8;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
        frame_fd55a6c6793e7fcb15fd98b7af1ae5ae->m_frame.f_lineno = 74;
        tmp_call_result_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[29]);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[33], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    branch_no_3:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_expression_value_6;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[35];
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_mod_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[36]);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_fd55a6c6793e7fcb15fd98b7af1ae5ae->m_frame.f_lineno = 77;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[36]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 0;
        tmp_condition_result_4 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_assattr_target_4;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[37]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[36]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[15];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_9, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_fd55a6c6793e7fcb15fd98b7af1ae5ae->m_frame.f_lineno = 79;
        tmp_assattr_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[14], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_10;
        CHECK_OBJECT(par_self);
        tmp_called_instance_7 = par_self;
        frame_fd55a6c6793e7fcb15fd98b7af1ae5ae->m_frame.f_lineno = 80;
        tmp_call_result_10 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[4]);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[36]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[38];
        tmp_assattr_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[36], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_11;
        CHECK_OBJECT(var_c);
        tmp_called_instance_8 = var_c;
        frame_fd55a6c6793e7fcb15fd98b7af1ae5ae->m_frame.f_lineno = 82;
        tmp_call_result_11 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_8,
            mod_consts[39],
            PyTuple_GET_ITEM(mod_consts[40], 0)
        );

        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_12;
        CHECK_OBJECT(par_self);
        tmp_called_instance_9 = par_self;
        frame_fd55a6c6793e7fcb15fd98b7af1ae5ae->m_frame.f_lineno = 84;
        tmp_call_result_12 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[41]);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_13;
        CHECK_OBJECT(var_c);
        tmp_called_instance_10 = var_c;
        frame_fd55a6c6793e7fcb15fd98b7af1ae5ae->m_frame.f_lineno = 85;
        tmp_call_result_13 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_10,
            mod_consts[39],
            PyTuple_GET_ITEM(mod_consts[40], 0)
        );

        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    branch_end_4:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[42]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[14]);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 87;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[43]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 87;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_fd55a6c6793e7fcb15fd98b7af1ae5ae->m_frame.f_lineno = 87;
        tmp_args_element_value_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
        Py_DECREF(tmp_called_value_6);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 87;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_fd55a6c6793e7fcb15fd98b7af1ae5ae->m_frame.f_lineno = 87;
        tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_expression_value_16;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_2 = mod_consts[44];
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_called_instance_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[14]);
        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_fd55a6c6793e7fcb15fd98b7af1ae5ae->m_frame.f_lineno = 89;
        tmp_mod_expr_right_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_11, mod_consts[45]);
        Py_DECREF(tmp_called_instance_11);
        if (tmp_mod_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_fd55a6c6793e7fcb15fd98b7af1ae5ae->m_frame.f_lineno = 89;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(par_self);
        tmp_expression_value_17 = par_self;
        tmp_called_instance_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[14]);
        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_fd55a6c6793e7fcb15fd98b7af1ae5ae->m_frame.f_lineno = 90;
        tmp_add_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_12, mod_consts[45]);
        Py_DECREF(tmp_called_instance_12);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[46];
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fd55a6c6793e7fcb15fd98b7af1ae5ae, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fd55a6c6793e7fcb15fd98b7af1ae5ae->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fd55a6c6793e7fcb15fd98b7af1ae5ae, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fd55a6c6793e7fcb15fd98b7af1ae5ae,
        type_description_1,
        par_self,
        par_prompt,
        var_c
    );


    // Release cached frame if used for exception.
    if (frame_fd55a6c6793e7fcb15fd98b7af1ae5ae == cache_frame_fd55a6c6793e7fcb15fd98b7af1ae5ae) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fd55a6c6793e7fcb15fd98b7af1ae5ae);
        cache_frame_fd55a6c6793e7fcb15fd98b7af1ae5ae = NULL;
    }

    assertFrameObject(frame_fd55a6c6793e7fcb15fd98b7af1ae5ae);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_c);
    var_c = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_c);
    var_c = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prompt);
    Py_DECREF(par_prompt);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prompt);
    Py_DECREF(par_prompt);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__5_beginning_of_line(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_8cc570f9b7d1967ede3608100cbd7cd5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8cc570f9b7d1967ede3608100cbd7cd5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8cc570f9b7d1967ede3608100cbd7cd5)) {
        Py_XDECREF(cache_frame_8cc570f9b7d1967ede3608100cbd7cd5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8cc570f9b7d1967ede3608100cbd7cd5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8cc570f9b7d1967ede3608100cbd7cd5 = MAKE_FUNCTION_FRAME(codeobj_8cc570f9b7d1967ede3608100cbd7cd5, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8cc570f9b7d1967ede3608100cbd7cd5->m_type_description == NULL);
    frame_8cc570f9b7d1967ede3608100cbd7cd5 = cache_frame_8cc570f9b7d1967ede3608100cbd7cd5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8cc570f9b7d1967ede3608100cbd7cd5);
    assert(Py_REFCNT(frame_8cc570f9b7d1967ede3608100cbd7cd5) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8cc570f9b7d1967ede3608100cbd7cd5->m_frame.f_lineno = 96;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[48]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8cc570f9b7d1967ede3608100cbd7cd5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8cc570f9b7d1967ede3608100cbd7cd5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8cc570f9b7d1967ede3608100cbd7cd5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8cc570f9b7d1967ede3608100cbd7cd5,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_8cc570f9b7d1967ede3608100cbd7cd5 == cache_frame_8cc570f9b7d1967ede3608100cbd7cd5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8cc570f9b7d1967ede3608100cbd7cd5);
        cache_frame_8cc570f9b7d1967ede3608100cbd7cd5 = NULL;
    }

    assertFrameObject(frame_8cc570f9b7d1967ede3608100cbd7cd5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__6_end_of_line(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_7049ee854a85c8647b45752d949a4be3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7049ee854a85c8647b45752d949a4be3 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7049ee854a85c8647b45752d949a4be3)) {
        Py_XDECREF(cache_frame_7049ee854a85c8647b45752d949a4be3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7049ee854a85c8647b45752d949a4be3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7049ee854a85c8647b45752d949a4be3 = MAKE_FUNCTION_FRAME(codeobj_7049ee854a85c8647b45752d949a4be3, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7049ee854a85c8647b45752d949a4be3->m_type_description == NULL);
    frame_7049ee854a85c8647b45752d949a4be3 = cache_frame_7049ee854a85c8647b45752d949a4be3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7049ee854a85c8647b45752d949a4be3);
    assert(Py_REFCNT(frame_7049ee854a85c8647b45752d949a4be3) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_7049ee854a85c8647b45752d949a4be3->m_frame.f_lineno = 100;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[50]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7049ee854a85c8647b45752d949a4be3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7049ee854a85c8647b45752d949a4be3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7049ee854a85c8647b45752d949a4be3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7049ee854a85c8647b45752d949a4be3,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_7049ee854a85c8647b45752d949a4be3 == cache_frame_7049ee854a85c8647b45752d949a4be3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7049ee854a85c8647b45752d949a4be3);
        cache_frame_7049ee854a85c8647b45752d949a4be3 = NULL;
    }

    assertFrameObject(frame_7049ee854a85c8647b45752d949a4be3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__7_forward_char(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_6879bd35a9b3f19fbed4d6e3b7df0dbc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6879bd35a9b3f19fbed4d6e3b7df0dbc = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6879bd35a9b3f19fbed4d6e3b7df0dbc)) {
        Py_XDECREF(cache_frame_6879bd35a9b3f19fbed4d6e3b7df0dbc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6879bd35a9b3f19fbed4d6e3b7df0dbc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6879bd35a9b3f19fbed4d6e3b7df0dbc = MAKE_FUNCTION_FRAME(codeobj_6879bd35a9b3f19fbed4d6e3b7df0dbc, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6879bd35a9b3f19fbed4d6e3b7df0dbc->m_type_description == NULL);
    frame_6879bd35a9b3f19fbed4d6e3b7df0dbc = cache_frame_6879bd35a9b3f19fbed4d6e3b7df0dbc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6879bd35a9b3f19fbed4d6e3b7df0dbc);
    assert(Py_REFCNT(frame_6879bd35a9b3f19fbed4d6e3b7df0dbc) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_6879bd35a9b3f19fbed4d6e3b7df0dbc->m_frame.f_lineno = 104;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[52]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6879bd35a9b3f19fbed4d6e3b7df0dbc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6879bd35a9b3f19fbed4d6e3b7df0dbc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6879bd35a9b3f19fbed4d6e3b7df0dbc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6879bd35a9b3f19fbed4d6e3b7df0dbc,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_6879bd35a9b3f19fbed4d6e3b7df0dbc == cache_frame_6879bd35a9b3f19fbed4d6e3b7df0dbc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6879bd35a9b3f19fbed4d6e3b7df0dbc);
        cache_frame_6879bd35a9b3f19fbed4d6e3b7df0dbc = NULL;
    }

    assertFrameObject(frame_6879bd35a9b3f19fbed4d6e3b7df0dbc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__8_backward_char(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_f1a74332028481b8becc2a03771dd0af;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f1a74332028481b8becc2a03771dd0af = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f1a74332028481b8becc2a03771dd0af)) {
        Py_XDECREF(cache_frame_f1a74332028481b8becc2a03771dd0af);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f1a74332028481b8becc2a03771dd0af == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f1a74332028481b8becc2a03771dd0af = MAKE_FUNCTION_FRAME(codeobj_f1a74332028481b8becc2a03771dd0af, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f1a74332028481b8becc2a03771dd0af->m_type_description == NULL);
    frame_f1a74332028481b8becc2a03771dd0af = cache_frame_f1a74332028481b8becc2a03771dd0af;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f1a74332028481b8becc2a03771dd0af);
    assert(Py_REFCNT(frame_f1a74332028481b8becc2a03771dd0af) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f1a74332028481b8becc2a03771dd0af->m_frame.f_lineno = 108;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[54]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f1a74332028481b8becc2a03771dd0af, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f1a74332028481b8becc2a03771dd0af->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f1a74332028481b8becc2a03771dd0af, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f1a74332028481b8becc2a03771dd0af,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_f1a74332028481b8becc2a03771dd0af == cache_frame_f1a74332028481b8becc2a03771dd0af) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f1a74332028481b8becc2a03771dd0af);
        cache_frame_f1a74332028481b8becc2a03771dd0af = NULL;
    }

    assertFrameObject(frame_f1a74332028481b8becc2a03771dd0af);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__9_forward_word(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_eb6a72c2954f18946410e32f21959829;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_eb6a72c2954f18946410e32f21959829 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_eb6a72c2954f18946410e32f21959829)) {
        Py_XDECREF(cache_frame_eb6a72c2954f18946410e32f21959829);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eb6a72c2954f18946410e32f21959829 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eb6a72c2954f18946410e32f21959829 = MAKE_FUNCTION_FRAME(codeobj_eb6a72c2954f18946410e32f21959829, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_eb6a72c2954f18946410e32f21959829->m_type_description == NULL);
    frame_eb6a72c2954f18946410e32f21959829 = cache_frame_eb6a72c2954f18946410e32f21959829;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_eb6a72c2954f18946410e32f21959829);
    assert(Py_REFCNT(frame_eb6a72c2954f18946410e32f21959829) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_eb6a72c2954f18946410e32f21959829->m_frame.f_lineno = 113;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[56]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_eb6a72c2954f18946410e32f21959829, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eb6a72c2954f18946410e32f21959829->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eb6a72c2954f18946410e32f21959829, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eb6a72c2954f18946410e32f21959829,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_eb6a72c2954f18946410e32f21959829 == cache_frame_eb6a72c2954f18946410e32f21959829) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_eb6a72c2954f18946410e32f21959829);
        cache_frame_eb6a72c2954f18946410e32f21959829 = NULL;
    }

    assertFrameObject(frame_eb6a72c2954f18946410e32f21959829);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__10_backward_word(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_e4adf7dc6d878e4ff5c67fa5ffb24fe0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e4adf7dc6d878e4ff5c67fa5ffb24fe0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e4adf7dc6d878e4ff5c67fa5ffb24fe0)) {
        Py_XDECREF(cache_frame_e4adf7dc6d878e4ff5c67fa5ffb24fe0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e4adf7dc6d878e4ff5c67fa5ffb24fe0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e4adf7dc6d878e4ff5c67fa5ffb24fe0 = MAKE_FUNCTION_FRAME(codeobj_e4adf7dc6d878e4ff5c67fa5ffb24fe0, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e4adf7dc6d878e4ff5c67fa5ffb24fe0->m_type_description == NULL);
    frame_e4adf7dc6d878e4ff5c67fa5ffb24fe0 = cache_frame_e4adf7dc6d878e4ff5c67fa5ffb24fe0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e4adf7dc6d878e4ff5c67fa5ffb24fe0);
    assert(Py_REFCNT(frame_e4adf7dc6d878e4ff5c67fa5ffb24fe0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e4adf7dc6d878e4ff5c67fa5ffb24fe0->m_frame.f_lineno = 118;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[58]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e4adf7dc6d878e4ff5c67fa5ffb24fe0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e4adf7dc6d878e4ff5c67fa5ffb24fe0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e4adf7dc6d878e4ff5c67fa5ffb24fe0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e4adf7dc6d878e4ff5c67fa5ffb24fe0,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_e4adf7dc6d878e4ff5c67fa5ffb24fe0 == cache_frame_e4adf7dc6d878e4ff5c67fa5ffb24fe0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e4adf7dc6d878e4ff5c67fa5ffb24fe0);
        cache_frame_e4adf7dc6d878e4ff5c67fa5ffb24fe0 = NULL;
    }

    assertFrameObject(frame_e4adf7dc6d878e4ff5c67fa5ffb24fe0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__11_clear_screen(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_9982ee32a1898a2d1a3e7969c519d13b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9982ee32a1898a2d1a3e7969c519d13b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9982ee32a1898a2d1a3e7969c519d13b)) {
        Py_XDECREF(cache_frame_9982ee32a1898a2d1a3e7969c519d13b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9982ee32a1898a2d1a3e7969c519d13b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9982ee32a1898a2d1a3e7969c519d13b = MAKE_FUNCTION_FRAME(codeobj_9982ee32a1898a2d1a3e7969c519d13b, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9982ee32a1898a2d1a3e7969c519d13b->m_type_description == NULL);
    frame_9982ee32a1898a2d1a3e7969c519d13b = cache_frame_9982ee32a1898a2d1a3e7969c519d13b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9982ee32a1898a2d1a3e7969c519d13b);
    assert(Py_REFCNT(frame_9982ee32a1898a2d1a3e7969c519d13b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9982ee32a1898a2d1a3e7969c519d13b->m_frame.f_lineno = 123;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[60]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9982ee32a1898a2d1a3e7969c519d13b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9982ee32a1898a2d1a3e7969c519d13b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9982ee32a1898a2d1a3e7969c519d13b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9982ee32a1898a2d1a3e7969c519d13b,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_9982ee32a1898a2d1a3e7969c519d13b == cache_frame_9982ee32a1898a2d1a3e7969c519d13b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9982ee32a1898a2d1a3e7969c519d13b);
        cache_frame_9982ee32a1898a2d1a3e7969c519d13b = NULL;
    }

    assertFrameObject(frame_9982ee32a1898a2d1a3e7969c519d13b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__14_previous_history(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_1aec86e96eac28b89af4a811840fe18f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1aec86e96eac28b89af4a811840fe18f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1aec86e96eac28b89af4a811840fe18f)) {
        Py_XDECREF(cache_frame_1aec86e96eac28b89af4a811840fe18f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1aec86e96eac28b89af4a811840fe18f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1aec86e96eac28b89af4a811840fe18f = MAKE_FUNCTION_FRAME(codeobj_1aec86e96eac28b89af4a811840fe18f, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1aec86e96eac28b89af4a811840fe18f->m_type_description == NULL);
    frame_1aec86e96eac28b89af4a811840fe18f = cache_frame_1aec86e96eac28b89af4a811840fe18f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1aec86e96eac28b89af4a811840fe18f);
    assert(Py_REFCNT(frame_1aec86e96eac28b89af4a811840fe18f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[62]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[63]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[14]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 139;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_1aec86e96eac28b89af4a811840fe18f->m_frame.f_lineno = 139;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1aec86e96eac28b89af4a811840fe18f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1aec86e96eac28b89af4a811840fe18f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1aec86e96eac28b89af4a811840fe18f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1aec86e96eac28b89af4a811840fe18f,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_1aec86e96eac28b89af4a811840fe18f == cache_frame_1aec86e96eac28b89af4a811840fe18f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1aec86e96eac28b89af4a811840fe18f);
        cache_frame_1aec86e96eac28b89af4a811840fe18f = NULL;
    }

    assertFrameObject(frame_1aec86e96eac28b89af4a811840fe18f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__15_next_history(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_5d73488e3e175d257b0cb1cd36bb8f33;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5d73488e3e175d257b0cb1cd36bb8f33 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5d73488e3e175d257b0cb1cd36bb8f33)) {
        Py_XDECREF(cache_frame_5d73488e3e175d257b0cb1cd36bb8f33);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5d73488e3e175d257b0cb1cd36bb8f33 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5d73488e3e175d257b0cb1cd36bb8f33 = MAKE_FUNCTION_FRAME(codeobj_5d73488e3e175d257b0cb1cd36bb8f33, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5d73488e3e175d257b0cb1cd36bb8f33->m_type_description == NULL);
    frame_5d73488e3e175d257b0cb1cd36bb8f33 = cache_frame_5d73488e3e175d257b0cb1cd36bb8f33;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5d73488e3e175d257b0cb1cd36bb8f33);
    assert(Py_REFCNT(frame_5d73488e3e175d257b0cb1cd36bb8f33) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[62]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[65]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[14]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 143;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5d73488e3e175d257b0cb1cd36bb8f33->m_frame.f_lineno = 143;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5d73488e3e175d257b0cb1cd36bb8f33, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5d73488e3e175d257b0cb1cd36bb8f33->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5d73488e3e175d257b0cb1cd36bb8f33, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5d73488e3e175d257b0cb1cd36bb8f33,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_5d73488e3e175d257b0cb1cd36bb8f33 == cache_frame_5d73488e3e175d257b0cb1cd36bb8f33) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5d73488e3e175d257b0cb1cd36bb8f33);
        cache_frame_5d73488e3e175d257b0cb1cd36bb8f33 = NULL;
    }

    assertFrameObject(frame_5d73488e3e175d257b0cb1cd36bb8f33);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__16_beginning_of_history(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_fb0fd6afa29a8fca8322a918ea73ccfb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fb0fd6afa29a8fca8322a918ea73ccfb = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fb0fd6afa29a8fca8322a918ea73ccfb)) {
        Py_XDECREF(cache_frame_fb0fd6afa29a8fca8322a918ea73ccfb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fb0fd6afa29a8fca8322a918ea73ccfb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fb0fd6afa29a8fca8322a918ea73ccfb = MAKE_FUNCTION_FRAME(codeobj_fb0fd6afa29a8fca8322a918ea73ccfb, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fb0fd6afa29a8fca8322a918ea73ccfb->m_type_description == NULL);
    frame_fb0fd6afa29a8fca8322a918ea73ccfb = cache_frame_fb0fd6afa29a8fca8322a918ea73ccfb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fb0fd6afa29a8fca8322a918ea73ccfb);
    assert(Py_REFCNT(frame_fb0fd6afa29a8fca8322a918ea73ccfb) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[62]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_fb0fd6afa29a8fca8322a918ea73ccfb->m_frame.f_lineno = 147;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[67]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fb0fd6afa29a8fca8322a918ea73ccfb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fb0fd6afa29a8fca8322a918ea73ccfb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fb0fd6afa29a8fca8322a918ea73ccfb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fb0fd6afa29a8fca8322a918ea73ccfb,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_fb0fd6afa29a8fca8322a918ea73ccfb == cache_frame_fb0fd6afa29a8fca8322a918ea73ccfb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fb0fd6afa29a8fca8322a918ea73ccfb);
        cache_frame_fb0fd6afa29a8fca8322a918ea73ccfb = NULL;
    }

    assertFrameObject(frame_fb0fd6afa29a8fca8322a918ea73ccfb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__17_end_of_history(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_f812b5287e219a40a862eb2a3306f0b9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f812b5287e219a40a862eb2a3306f0b9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f812b5287e219a40a862eb2a3306f0b9)) {
        Py_XDECREF(cache_frame_f812b5287e219a40a862eb2a3306f0b9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f812b5287e219a40a862eb2a3306f0b9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f812b5287e219a40a862eb2a3306f0b9 = MAKE_FUNCTION_FRAME(codeobj_f812b5287e219a40a862eb2a3306f0b9, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f812b5287e219a40a862eb2a3306f0b9->m_type_description == NULL);
    frame_f812b5287e219a40a862eb2a3306f0b9 = cache_frame_f812b5287e219a40a862eb2a3306f0b9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f812b5287e219a40a862eb2a3306f0b9);
    assert(Py_REFCNT(frame_f812b5287e219a40a862eb2a3306f0b9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[62]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[69]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[14]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 152;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f812b5287e219a40a862eb2a3306f0b9->m_frame.f_lineno = 152;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f812b5287e219a40a862eb2a3306f0b9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f812b5287e219a40a862eb2a3306f0b9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f812b5287e219a40a862eb2a3306f0b9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f812b5287e219a40a862eb2a3306f0b9,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_f812b5287e219a40a862eb2a3306f0b9 == cache_frame_f812b5287e219a40a862eb2a3306f0b9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f812b5287e219a40a862eb2a3306f0b9);
        cache_frame_f812b5287e219a40a862eb2a3306f0b9 = NULL;
    }

    assertFrameObject(frame_f812b5287e219a40a862eb2a3306f0b9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__18__i_search(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_searchfun = python_pars[1];
    PyObject *par_direction = python_pars[2];
    PyObject *par_init_event = python_pars[3];
    PyObject *var_c = NULL;
    PyObject *var_line = NULL;
    PyObject *var_query = NULL;
    PyObject *var_hc_start = NULL;
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *var_prompt = NULL;
    PyObject *var_scroll = NULL;
    PyObject *var_event = NULL;
    PyObject *var_px = NULL;
    PyObject *var_py = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_8b112ce9fc53b6fca5accc87eb7ecce6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_8b112ce9fc53b6fca5accc87eb7ecce6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8b112ce9fc53b6fca5accc87eb7ecce6)) {
        Py_XDECREF(cache_frame_8b112ce9fc53b6fca5accc87eb7ecce6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8b112ce9fc53b6fca5accc87eb7ecce6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8b112ce9fc53b6fca5accc87eb7ecce6 = MAKE_FUNCTION_FRAME(codeobj_8b112ce9fc53b6fca5accc87eb7ecce6, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8b112ce9fc53b6fca5accc87eb7ecce6->m_type_description == NULL);
    frame_8b112ce9fc53b6fca5accc87eb7ecce6 = cache_frame_8b112ce9fc53b6fca5accc87eb7ecce6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8b112ce9fc53b6fca5accc87eb7ecce6);
    assert(Py_REFCNT(frame_8b112ce9fc53b6fca5accc87eb7ecce6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_c == NULL);
        var_c = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_8b112ce9fc53b6fca5accc87eb7ecce6->m_frame.f_lineno = 156;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[71]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_line == NULL);
        var_line = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[72];
        assert(var_query == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_query = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[62]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[73]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_hc_start == NULL);
        var_hc_start = tmp_assign_source_4;
    }
    loop_start_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 160;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_4 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[74]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 160;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 160;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 160;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[75];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooo";
            exception_lineno = 160;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_x;
            var_x = tmp_assign_source_8;
            Py_INCREF(var_x);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_y;
            var_y = tmp_assign_source_9;
            Py_INCREF(var_y);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (var_c == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 161;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = var_c;
        tmp_args_element_value_1 = mod_consts[15];
        CHECK_OBJECT(var_y);
        tmp_args_element_value_2 = var_y;
        frame_8b112ce9fc53b6fca5accc87eb7ecce6->m_frame.f_lineno = 161;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[76],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (par_direction == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 162;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = par_direction;
        tmp_cmp_expr_right_1 = mod_consts[15];
        tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[78];
        {
            PyObject *old = var_prompt;
            var_prompt = tmp_assign_source_10;
            Py_INCREF(var_prompt);
            Py_XDECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[79];
        {
            PyObject *old = var_prompt;
            var_prompt = tmp_assign_source_11;
            Py_INCREF(var_prompt);
            Py_XDECREF(old);
        }

    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        if (var_c == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 167;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = var_c;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[80]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[81];
        CHECK_OBJECT(var_prompt);
        tmp_tuple_element_1 = var_prompt;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 167;
            type_description_1 = "ooooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_query;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        if (var_line == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[83]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 167;
            type_description_1 = "ooooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_line;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 167;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8b112ce9fc53b6fca5accc87eb7ecce6->m_frame.f_lineno = 167;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_scroll;
            var_scroll = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 168;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_scroll);
        tmp_args_element_value_4 = var_scroll;
        frame_8b112ce9fc53b6fca5accc87eb7ecce6->m_frame.f_lineno = 168;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[84], tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = par_self;
        frame_8b112ce9fc53b6fca5accc87eb7ecce6->m_frame.f_lineno = 169;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[85]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_5;
        if (var_c == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = var_c;
        frame_8b112ce9fc53b6fca5accc87eb7ecce6->m_frame.f_lineno = 171;
        tmp_assign_source_13 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[6]);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_event;
            var_event = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_event);
        tmp_expression_value_6 = var_event;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[86]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[87];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        nuitka_digit tmp_cmp_expr_right_3;
        PyObject *tmp_len_arg_1;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 173;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_1 = var_query;
        tmp_cmp_expr_left_3 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = 0;
        tmp_condition_result_3 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_1;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 174;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = var_query;
        tmp_subscript_value_1 = mod_consts[88];
        tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_query;
            var_query = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_8;
        if (var_hc_start == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[89]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 175;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_1 = var_hc_start;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 175;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[62]);
        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[73], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 177;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = par_self;
        frame_8b112ce9fc53b6fca5accc87eb7ecce6->m_frame.f_lineno = 177;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[90]);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_end_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(var_event);
        tmp_expression_value_9 = var_event;
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[91]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);

            exception_lineno = 178;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[93]);
        if (tmp_add_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);

            exception_lineno = 178;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);
            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 178;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[94]);
        if (tmp_add_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);
            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 178;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);

            exception_lineno = 178;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 178;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[95]);
        if (tmp_add_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 178;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);

            exception_lineno = 178;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[96];
        tmp_cmp_expr_right_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);

            exception_lineno = 178;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_expression_value_13;
        if (var_hc_start == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[89]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 179;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_2 = var_hc_start;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 179;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = par_self;
        tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[62]);
        if (tmp_assattr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[73], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_target_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_expression_value_14;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 180;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_1 = var_query;
        CHECK_OBJECT(var_event);
        tmp_expression_value_14 = var_event;
        tmp_iadd_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[91]);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = tmp_iadd_expr_left_1;
        var_query = tmp_assign_source_15;

    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(var_event);
        tmp_expression_value_15 = var_event;
        tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[8]);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_init_event == NULL) {
            Py_DECREF(tmp_cmp_expr_left_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[97]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 181;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_16 = par_init_event;
        tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[8]);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_5);

            exception_lineno = 181;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 182;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_18 = par_self;
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[62]);
        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[73]);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = tmp_inplace_assign_1__value;
            tmp_inplace_assign_1__value = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_2 = tmp_inplace_assign_1__value;
        if (par_direction == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 182;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_iadd_expr_right_2 = par_direction;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_17 = tmp_iadd_expr_left_2;
        tmp_inplace_assign_1__value = tmp_assign_source_17;

    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_3 = tmp_inplace_assign_1__value;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 182;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_19 = par_self;
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[62]);
        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[73], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_5;
        if (par_searchfun == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 183;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = par_searchfun;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 183;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = var_query;
        frame_8b112ce9fc53b6fca5accc87eb7ecce6->m_frame.f_lineno = 183;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_5);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(var_event);
        tmp_expression_value_20 = var_event;
        tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[86]);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = mod_consts[99];
        tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_5;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 187;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_7 = par_self;
        frame_8b112ce9fc53b6fca5accc87eb7ecce6->m_frame.f_lineno = 187;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[90]);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_6:;
    goto loop_end_1;
    branch_end_5:;
    branch_end_4:;
    branch_end_2:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_6;
        if (par_searchfun == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_3 = par_searchfun;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = var_query;
        frame_8b112ce9fc53b6fca5accc87eb7ecce6->m_frame.f_lineno = 189;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_6);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 159;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_expression_value_21;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 191;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_21 = par_self;
        tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[100]);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_20 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_20;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_21 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_21 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 191;
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_22 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 191;
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_22;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 191;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[75];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooo";
            exception_lineno = 191;
            goto try_except_handler_6;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_23 = tmp_tuple_unpack_2__element_1;
        assert(var_px == NULL);
        Py_INCREF(tmp_assign_source_23);
        var_px = tmp_assign_source_23;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_24 = tmp_tuple_unpack_2__element_2;
        assert(var_py == NULL);
        Py_INCREF(tmp_assign_source_24);
        var_py = tmp_assign_source_24;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        if (var_c == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 192;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_8 = var_c;
        tmp_args_element_value_7 = mod_consts[15];
        CHECK_OBJECT(var_py);
        tmp_args_element_value_8 = var_py;
        frame_8b112ce9fc53b6fca5accc87eb7ecce6->m_frame.f_lineno = 192;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_6 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_8,
                mod_consts[76],
                call_args
            );
        }

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_9;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 193;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_23 = par_self;
        tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[14]);
        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[101]);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_line == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[83]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 193;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_9 = var_line;
        frame_8b112ce9fc53b6fca5accc87eb7ecce6->m_frame.f_lineno = 193;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_8;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 194;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_9 = par_self;
        frame_8b112ce9fc53b6fca5accc87eb7ecce6->m_frame.f_lineno = 194;
        tmp_call_result_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[32]);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_expression_value_26;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 195;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_25 = par_self;
        tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[62]);
        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[102]);
        Py_DECREF(tmp_expression_value_24);
        if (tmp_len_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_4 = BUILTIN_LEN(tmp_len_arg_2);
        Py_DECREF(tmp_len_arg_2);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 195;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_26 = par_self;
        tmp_assattr_target_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[62]);
        if (tmp_assattr_target_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_4);

            exception_lineno = 195;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[73], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_target_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8b112ce9fc53b6fca5accc87eb7ecce6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8b112ce9fc53b6fca5accc87eb7ecce6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8b112ce9fc53b6fca5accc87eb7ecce6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8b112ce9fc53b6fca5accc87eb7ecce6,
        type_description_1,
        par_self,
        par_searchfun,
        par_direction,
        par_init_event,
        var_c,
        var_line,
        var_query,
        var_hc_start,
        var_x,
        var_y,
        var_prompt,
        var_scroll,
        var_event,
        var_px,
        var_py
    );


    // Release cached frame if used for exception.
    if (frame_8b112ce9fc53b6fca5accc87eb7ecce6 == cache_frame_8b112ce9fc53b6fca5accc87eb7ecce6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8b112ce9fc53b6fca5accc87eb7ecce6);
        cache_frame_8b112ce9fc53b6fca5accc87eb7ecce6 = NULL;
    }

    assertFrameObject(frame_8b112ce9fc53b6fca5accc87eb7ecce6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_line);
    var_line = NULL;
    Py_XDECREF(var_query);
    var_query = NULL;
    Py_XDECREF(var_hc_start);
    var_hc_start = NULL;
    CHECK_OBJECT(var_x);
    Py_DECREF(var_x);
    var_x = NULL;
    CHECK_OBJECT(var_y);
    Py_DECREF(var_y);
    var_y = NULL;
    CHECK_OBJECT(var_prompt);
    Py_DECREF(var_prompt);
    var_prompt = NULL;
    CHECK_OBJECT(var_scroll);
    Py_DECREF(var_scroll);
    var_scroll = NULL;
    CHECK_OBJECT(var_event);
    Py_DECREF(var_event);
    var_event = NULL;
    CHECK_OBJECT(var_px);
    Py_DECREF(var_px);
    var_px = NULL;
    CHECK_OBJECT(var_py);
    Py_DECREF(var_py);
    var_py = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_line);
    var_line = NULL;
    Py_XDECREF(var_query);
    var_query = NULL;
    Py_XDECREF(var_hc_start);
    var_hc_start = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_prompt);
    var_prompt = NULL;
    Py_XDECREF(var_scroll);
    var_scroll = NULL;
    Py_XDECREF(var_event);
    var_event = NULL;
    Py_XDECREF(var_px);
    var_px = NULL;
    Py_XDECREF(var_py);
    var_py = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_searchfun);
    Py_DECREF(par_searchfun);
    CHECK_OBJECT(par_direction);
    Py_DECREF(par_direction);
    CHECK_OBJECT(par_init_event);
    Py_DECREF(par_init_event);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_searchfun);
    Py_DECREF(par_searchfun);
    CHECK_OBJECT(par_direction);
    Py_DECREF(par_direction);
    CHECK_OBJECT(par_init_event);
    Py_DECREF(par_init_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__19_reverse_search_history(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_21e07642b9d1a7fd2914ad2b2e3227c6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_21e07642b9d1a7fd2914ad2b2e3227c6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_21e07642b9d1a7fd2914ad2b2e3227c6)) {
        Py_XDECREF(cache_frame_21e07642b9d1a7fd2914ad2b2e3227c6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_21e07642b9d1a7fd2914ad2b2e3227c6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_21e07642b9d1a7fd2914ad2b2e3227c6 = MAKE_FUNCTION_FRAME(codeobj_21e07642b9d1a7fd2914ad2b2e3227c6, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_21e07642b9d1a7fd2914ad2b2e3227c6->m_type_description == NULL);
    frame_21e07642b9d1a7fd2914ad2b2e3227c6 = cache_frame_21e07642b9d1a7fd2914ad2b2e3227c6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_21e07642b9d1a7fd2914ad2b2e3227c6);
    assert(Py_REFCNT(frame_21e07642b9d1a7fd2914ad2b2e3227c6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[103]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[62]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 202;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[104]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 202;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[105];
        CHECK_OBJECT(par_e);
        tmp_args_element_value_3 = par_e;
        frame_21e07642b9d1a7fd2914ad2b2e3227c6->m_frame.f_lineno = 202;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_21e07642b9d1a7fd2914ad2b2e3227c6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_21e07642b9d1a7fd2914ad2b2e3227c6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_21e07642b9d1a7fd2914ad2b2e3227c6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_21e07642b9d1a7fd2914ad2b2e3227c6,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_21e07642b9d1a7fd2914ad2b2e3227c6 == cache_frame_21e07642b9d1a7fd2914ad2b2e3227c6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_21e07642b9d1a7fd2914ad2b2e3227c6);
        cache_frame_21e07642b9d1a7fd2914ad2b2e3227c6 = NULL;
    }

    assertFrameObject(frame_21e07642b9d1a7fd2914ad2b2e3227c6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__20_forward_search_history(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_957a3f163b005361760bdadc91cced9b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_957a3f163b005361760bdadc91cced9b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_957a3f163b005361760bdadc91cced9b)) {
        Py_XDECREF(cache_frame_957a3f163b005361760bdadc91cced9b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_957a3f163b005361760bdadc91cced9b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_957a3f163b005361760bdadc91cced9b = MAKE_FUNCTION_FRAME(codeobj_957a3f163b005361760bdadc91cced9b, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_957a3f163b005361760bdadc91cced9b->m_type_description == NULL);
    frame_957a3f163b005361760bdadc91cced9b = cache_frame_957a3f163b005361760bdadc91cced9b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_957a3f163b005361760bdadc91cced9b);
    assert(Py_REFCNT(frame_957a3f163b005361760bdadc91cced9b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[103]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[62]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 209;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[107]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 209;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[108];
        CHECK_OBJECT(par_e);
        tmp_args_element_value_3 = par_e;
        frame_957a3f163b005361760bdadc91cced9b->m_frame.f_lineno = 209;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_957a3f163b005361760bdadc91cced9b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_957a3f163b005361760bdadc91cced9b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_957a3f163b005361760bdadc91cced9b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_957a3f163b005361760bdadc91cced9b,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_957a3f163b005361760bdadc91cced9b == cache_frame_957a3f163b005361760bdadc91cced9b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_957a3f163b005361760bdadc91cced9b);
        cache_frame_957a3f163b005361760bdadc91cced9b = NULL;
    }

    assertFrameObject(frame_957a3f163b005361760bdadc91cced9b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__21_non_incremental_reverse_search_history(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_36d6dec6d29843fca779d02872164723;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_36d6dec6d29843fca779d02872164723 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_36d6dec6d29843fca779d02872164723)) {
        Py_XDECREF(cache_frame_36d6dec6d29843fca779d02872164723);

#if _DEBUG_REFCOUNTS
        if (cache_frame_36d6dec6d29843fca779d02872164723 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_36d6dec6d29843fca779d02872164723 = MAKE_FUNCTION_FRAME(codeobj_36d6dec6d29843fca779d02872164723, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_36d6dec6d29843fca779d02872164723->m_type_description == NULL);
    frame_36d6dec6d29843fca779d02872164723 = cache_frame_36d6dec6d29843fca779d02872164723;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_36d6dec6d29843fca779d02872164723);
    assert(Py_REFCNT(frame_36d6dec6d29843fca779d02872164723) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[62]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[110]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[14]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 216;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_36d6dec6d29843fca779d02872164723->m_frame.f_lineno = 216;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_36d6dec6d29843fca779d02872164723, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_36d6dec6d29843fca779d02872164723->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_36d6dec6d29843fca779d02872164723, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_36d6dec6d29843fca779d02872164723,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_36d6dec6d29843fca779d02872164723 == cache_frame_36d6dec6d29843fca779d02872164723) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_36d6dec6d29843fca779d02872164723);
        cache_frame_36d6dec6d29843fca779d02872164723 = NULL;
    }

    assertFrameObject(frame_36d6dec6d29843fca779d02872164723);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__22_non_incremental_forward_search_history(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_78bef4a5baf6b8545a73eee1c04240d3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_78bef4a5baf6b8545a73eee1c04240d3 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_78bef4a5baf6b8545a73eee1c04240d3)) {
        Py_XDECREF(cache_frame_78bef4a5baf6b8545a73eee1c04240d3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_78bef4a5baf6b8545a73eee1c04240d3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_78bef4a5baf6b8545a73eee1c04240d3 = MAKE_FUNCTION_FRAME(codeobj_78bef4a5baf6b8545a73eee1c04240d3, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_78bef4a5baf6b8545a73eee1c04240d3->m_type_description == NULL);
    frame_78bef4a5baf6b8545a73eee1c04240d3 = cache_frame_78bef4a5baf6b8545a73eee1c04240d3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_78bef4a5baf6b8545a73eee1c04240d3);
    assert(Py_REFCNT(frame_78bef4a5baf6b8545a73eee1c04240d3) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[62]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[110]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[14]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_78bef4a5baf6b8545a73eee1c04240d3->m_frame.f_lineno = 222;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_78bef4a5baf6b8545a73eee1c04240d3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_78bef4a5baf6b8545a73eee1c04240d3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_78bef4a5baf6b8545a73eee1c04240d3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_78bef4a5baf6b8545a73eee1c04240d3,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_78bef4a5baf6b8545a73eee1c04240d3 == cache_frame_78bef4a5baf6b8545a73eee1c04240d3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_78bef4a5baf6b8545a73eee1c04240d3);
        cache_frame_78bef4a5baf6b8545a73eee1c04240d3 = NULL;
    }

    assertFrameObject(frame_78bef4a5baf6b8545a73eee1c04240d3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__23_history_search_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_e39313f93a0d09b71e2b17bd72fc5c24;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e39313f93a0d09b71e2b17bd72fc5c24 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e39313f93a0d09b71e2b17bd72fc5c24)) {
        Py_XDECREF(cache_frame_e39313f93a0d09b71e2b17bd72fc5c24);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e39313f93a0d09b71e2b17bd72fc5c24 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e39313f93a0d09b71e2b17bd72fc5c24 = MAKE_FUNCTION_FRAME(codeobj_e39313f93a0d09b71e2b17bd72fc5c24, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e39313f93a0d09b71e2b17bd72fc5c24->m_type_description == NULL);
    frame_e39313f93a0d09b71e2b17bd72fc5c24 = cache_frame_e39313f93a0d09b71e2b17bd72fc5c24;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e39313f93a0d09b71e2b17bd72fc5c24);
    assert(Py_REFCNT(frame_e39313f93a0d09b71e2b17bd72fc5c24) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[62]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[113]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[14]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 228;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e39313f93a0d09b71e2b17bd72fc5c24->m_frame.f_lineno = 228;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[14], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e39313f93a0d09b71e2b17bd72fc5c24, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e39313f93a0d09b71e2b17bd72fc5c24->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e39313f93a0d09b71e2b17bd72fc5c24, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e39313f93a0d09b71e2b17bd72fc5c24,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_e39313f93a0d09b71e2b17bd72fc5c24 == cache_frame_e39313f93a0d09b71e2b17bd72fc5c24) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e39313f93a0d09b71e2b17bd72fc5c24);
        cache_frame_e39313f93a0d09b71e2b17bd72fc5c24 = NULL;
    }

    assertFrameObject(frame_e39313f93a0d09b71e2b17bd72fc5c24);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__24_history_search_backward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_0c927945c4bf97c694f488d7fde073f9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_0c927945c4bf97c694f488d7fde073f9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0c927945c4bf97c694f488d7fde073f9)) {
        Py_XDECREF(cache_frame_0c927945c4bf97c694f488d7fde073f9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0c927945c4bf97c694f488d7fde073f9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0c927945c4bf97c694f488d7fde073f9 = MAKE_FUNCTION_FRAME(codeobj_0c927945c4bf97c694f488d7fde073f9, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0c927945c4bf97c694f488d7fde073f9->m_type_description == NULL);
    frame_0c927945c4bf97c694f488d7fde073f9 = cache_frame_0c927945c4bf97c694f488d7fde073f9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0c927945c4bf97c694f488d7fde073f9);
    assert(Py_REFCNT(frame_0c927945c4bf97c694f488d7fde073f9) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[62]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[115]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[14]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 234;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_0c927945c4bf97c694f488d7fde073f9->m_frame.f_lineno = 234;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[14], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0c927945c4bf97c694f488d7fde073f9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0c927945c4bf97c694f488d7fde073f9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0c927945c4bf97c694f488d7fde073f9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0c927945c4bf97c694f488d7fde073f9,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_0c927945c4bf97c694f488d7fde073f9 == cache_frame_0c927945c4bf97c694f488d7fde073f9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0c927945c4bf97c694f488d7fde073f9);
        cache_frame_0c927945c4bf97c694f488d7fde073f9 = NULL;
    }

    assertFrameObject(frame_0c927945c4bf97c694f488d7fde073f9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__27_delete_char(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_336605c76da913371a75357fc8820682;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_336605c76da913371a75357fc8820682 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_336605c76da913371a75357fc8820682)) {
        Py_XDECREF(cache_frame_336605c76da913371a75357fc8820682);

#if _DEBUG_REFCOUNTS
        if (cache_frame_336605c76da913371a75357fc8820682 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_336605c76da913371a75357fc8820682 = MAKE_FUNCTION_FRAME(codeobj_336605c76da913371a75357fc8820682, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_336605c76da913371a75357fc8820682->m_type_description == NULL);
    frame_336605c76da913371a75357fc8820682 = cache_frame_336605c76da913371a75357fc8820682;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_336605c76da913371a75357fc8820682);
    assert(Py_REFCNT(frame_336605c76da913371a75357fc8820682) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_336605c76da913371a75357fc8820682->m_frame.f_lineno = 255;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[117]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_336605c76da913371a75357fc8820682, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_336605c76da913371a75357fc8820682->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_336605c76da913371a75357fc8820682, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_336605c76da913371a75357fc8820682,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_336605c76da913371a75357fc8820682 == cache_frame_336605c76da913371a75357fc8820682) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_336605c76da913371a75357fc8820682);
        cache_frame_336605c76da913371a75357fc8820682 = NULL;
    }

    assertFrameObject(frame_336605c76da913371a75357fc8820682);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__28_backward_delete_char(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_edda410bbe66992fad6342388c86c7d3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_edda410bbe66992fad6342388c86c7d3 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_edda410bbe66992fad6342388c86c7d3)) {
        Py_XDECREF(cache_frame_edda410bbe66992fad6342388c86c7d3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_edda410bbe66992fad6342388c86c7d3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_edda410bbe66992fad6342388c86c7d3 = MAKE_FUNCTION_FRAME(codeobj_edda410bbe66992fad6342388c86c7d3, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_edda410bbe66992fad6342388c86c7d3->m_type_description == NULL);
    frame_edda410bbe66992fad6342388c86c7d3 = cache_frame_edda410bbe66992fad6342388c86c7d3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_edda410bbe66992fad6342388c86c7d3);
    assert(Py_REFCNT(frame_edda410bbe66992fad6342388c86c7d3) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_edda410bbe66992fad6342388c86c7d3->m_frame.f_lineno = 260;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[119]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_edda410bbe66992fad6342388c86c7d3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_edda410bbe66992fad6342388c86c7d3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_edda410bbe66992fad6342388c86c7d3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_edda410bbe66992fad6342388c86c7d3,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_edda410bbe66992fad6342388c86c7d3 == cache_frame_edda410bbe66992fad6342388c86c7d3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_edda410bbe66992fad6342388c86c7d3);
        cache_frame_edda410bbe66992fad6342388c86c7d3 = NULL;
    }

    assertFrameObject(frame_edda410bbe66992fad6342388c86c7d3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__30_quoted_insert(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_b8d6b7f9a89b0878a1f2f84c96d9536c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b8d6b7f9a89b0878a1f2f84c96d9536c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b8d6b7f9a89b0878a1f2f84c96d9536c)) {
        Py_XDECREF(cache_frame_b8d6b7f9a89b0878a1f2f84c96d9536c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b8d6b7f9a89b0878a1f2f84c96d9536c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b8d6b7f9a89b0878a1f2f84c96d9536c = MAKE_FUNCTION_FRAME(codeobj_b8d6b7f9a89b0878a1f2f84c96d9536c, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b8d6b7f9a89b0878a1f2f84c96d9536c->m_type_description == NULL);
    frame_b8d6b7f9a89b0878a1f2f84c96d9536c = cache_frame_b8d6b7f9a89b0878a1f2f84c96d9536c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b8d6b7f9a89b0878a1f2f84c96d9536c);
    assert(Py_REFCNT(frame_b8d6b7f9a89b0878a1f2f84c96d9536c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_b8d6b7f9a89b0878a1f2f84c96d9536c->m_frame.f_lineno = 271;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[6]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_e;
            assert(old != NULL);
            par_e = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[121]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_e);
        tmp_expression_value_3 = par_e;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[91]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 272;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_b8d6b7f9a89b0878a1f2f84c96d9536c->m_frame.f_lineno = 272;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b8d6b7f9a89b0878a1f2f84c96d9536c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b8d6b7f9a89b0878a1f2f84c96d9536c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b8d6b7f9a89b0878a1f2f84c96d9536c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b8d6b7f9a89b0878a1f2f84c96d9536c,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_b8d6b7f9a89b0878a1f2f84c96d9536c == cache_frame_b8d6b7f9a89b0878a1f2f84c96d9536c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b8d6b7f9a89b0878a1f2f84c96d9536c);
        cache_frame_b8d6b7f9a89b0878a1f2f84c96d9536c = NULL;
    }

    assertFrameObject(frame_b8d6b7f9a89b0878a1f2f84c96d9536c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    par_e = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_e);
    par_e = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__31_tab_insert(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    PyObject *var_cursor = NULL;
    PyObject *var_ws = NULL;
    struct Nuitka_FrameObject *frame_a4c753ca86088b22c361342bdc31dacb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_a4c753ca86088b22c361342bdc31dacb = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a4c753ca86088b22c361342bdc31dacb)) {
        Py_XDECREF(cache_frame_a4c753ca86088b22c361342bdc31dacb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a4c753ca86088b22c361342bdc31dacb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a4c753ca86088b22c361342bdc31dacb = MAKE_FUNCTION_FRAME(codeobj_a4c753ca86088b22c361342bdc31dacb, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a4c753ca86088b22c361342bdc31dacb->m_type_description == NULL);
    frame_a4c753ca86088b22c361342bdc31dacb = cache_frame_a4c753ca86088b22c361342bdc31dacb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a4c753ca86088b22c361342bdc31dacb);
    assert(Py_REFCNT(frame_a4c753ca86088b22c361342bdc31dacb) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[123]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[124]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[14]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 276;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[125]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 276;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 276;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_a4c753ca86088b22c361342bdc31dacb->m_frame.f_lineno = 276;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_cursor == NULL);
        var_cursor = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_expression_value_6;
        tmp_mult_expr_left_1 = mod_consts[96];
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[126]);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_cursor);
        tmp_mod_expr_left_1 = var_cursor;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_mod_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[126]);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 277;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 277;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_MULT_OBJECT_UNICODE_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_ws == NULL);
        var_ws = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(var_ws);
        tmp_args_element_value_3 = var_ws;
        frame_a4c753ca86088b22c361342bdc31dacb->m_frame.f_lineno = 278;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[121], tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a4c753ca86088b22c361342bdc31dacb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a4c753ca86088b22c361342bdc31dacb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a4c753ca86088b22c361342bdc31dacb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a4c753ca86088b22c361342bdc31dacb,
        type_description_1,
        par_self,
        par_e,
        var_cursor,
        var_ws
    );


    // Release cached frame if used for exception.
    if (frame_a4c753ca86088b22c361342bdc31dacb == cache_frame_a4c753ca86088b22c361342bdc31dacb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a4c753ca86088b22c361342bdc31dacb);
        cache_frame_a4c753ca86088b22c361342bdc31dacb = NULL;
    }

    assertFrameObject(frame_a4c753ca86088b22c361342bdc31dacb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_cursor);
    Py_DECREF(var_cursor);
    var_cursor = NULL;
    CHECK_OBJECT(var_ws);
    Py_DECREF(var_ws);
    var_ws = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_cursor);
    var_cursor = NULL;
    Py_XDECREF(var_ws);
    var_ws = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__32_self_insert(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_6a2781ee7b930c2368d7f43d7add021e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6a2781ee7b930c2368d7f43d7add021e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6a2781ee7b930c2368d7f43d7add021e)) {
        Py_XDECREF(cache_frame_6a2781ee7b930c2368d7f43d7add021e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6a2781ee7b930c2368d7f43d7add021e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6a2781ee7b930c2368d7f43d7add021e = MAKE_FUNCTION_FRAME(codeobj_6a2781ee7b930c2368d7f43d7add021e, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6a2781ee7b930c2368d7f43d7add021e->m_type_description == NULL);
    frame_6a2781ee7b930c2368d7f43d7add021e = cache_frame_6a2781ee7b930c2368d7f43d7add021e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6a2781ee7b930c2368d7f43d7add021e);
    assert(Py_REFCNT(frame_6a2781ee7b930c2368d7f43d7add021e) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_ord_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_e);
        tmp_expression_value_1 = par_e;
        tmp_ord_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[91]);
        if (tmp_ord_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = BUILTIN_ORD(tmp_ord_arg_1);
        Py_DECREF(tmp_ord_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[15];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[121]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_e);
        tmp_expression_value_3 = par_e;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[91]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 283;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_6a2781ee7b930c2368d7f43d7add021e->m_frame.f_lineno = 283;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6a2781ee7b930c2368d7f43d7add021e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6a2781ee7b930c2368d7f43d7add021e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6a2781ee7b930c2368d7f43d7add021e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6a2781ee7b930c2368d7f43d7add021e,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_6a2781ee7b930c2368d7f43d7add021e == cache_frame_6a2781ee7b930c2368d7f43d7add021e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6a2781ee7b930c2368d7f43d7add021e);
        cache_frame_6a2781ee7b930c2368d7f43d7add021e = NULL;
    }

    assertFrameObject(frame_6a2781ee7b930c2368d7f43d7add021e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__33_transpose_chars(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_a08a7ff1a4d6d0b960d8533d069ccfd1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a08a7ff1a4d6d0b960d8533d069ccfd1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a08a7ff1a4d6d0b960d8533d069ccfd1)) {
        Py_XDECREF(cache_frame_a08a7ff1a4d6d0b960d8533d069ccfd1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a08a7ff1a4d6d0b960d8533d069ccfd1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a08a7ff1a4d6d0b960d8533d069ccfd1 = MAKE_FUNCTION_FRAME(codeobj_a08a7ff1a4d6d0b960d8533d069ccfd1, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a08a7ff1a4d6d0b960d8533d069ccfd1->m_type_description == NULL);
    frame_a08a7ff1a4d6d0b960d8533d069ccfd1 = cache_frame_a08a7ff1a4d6d0b960d8533d069ccfd1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a08a7ff1a4d6d0b960d8533d069ccfd1);
    assert(Py_REFCNT(frame_a08a7ff1a4d6d0b960d8533d069ccfd1) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a08a7ff1a4d6d0b960d8533d069ccfd1->m_frame.f_lineno = 290;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[129]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a08a7ff1a4d6d0b960d8533d069ccfd1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a08a7ff1a4d6d0b960d8533d069ccfd1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a08a7ff1a4d6d0b960d8533d069ccfd1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a08a7ff1a4d6d0b960d8533d069ccfd1,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_a08a7ff1a4d6d0b960d8533d069ccfd1 == cache_frame_a08a7ff1a4d6d0b960d8533d069ccfd1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a08a7ff1a4d6d0b960d8533d069ccfd1);
        cache_frame_a08a7ff1a4d6d0b960d8533d069ccfd1 = NULL;
    }

    assertFrameObject(frame_a08a7ff1a4d6d0b960d8533d069ccfd1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__34_transpose_words(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_38ffb2bbd3cd23298c2df31a631e940b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_38ffb2bbd3cd23298c2df31a631e940b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_38ffb2bbd3cd23298c2df31a631e940b)) {
        Py_XDECREF(cache_frame_38ffb2bbd3cd23298c2df31a631e940b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_38ffb2bbd3cd23298c2df31a631e940b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_38ffb2bbd3cd23298c2df31a631e940b = MAKE_FUNCTION_FRAME(codeobj_38ffb2bbd3cd23298c2df31a631e940b, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_38ffb2bbd3cd23298c2df31a631e940b->m_type_description == NULL);
    frame_38ffb2bbd3cd23298c2df31a631e940b = cache_frame_38ffb2bbd3cd23298c2df31a631e940b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_38ffb2bbd3cd23298c2df31a631e940b);
    assert(Py_REFCNT(frame_38ffb2bbd3cd23298c2df31a631e940b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_38ffb2bbd3cd23298c2df31a631e940b->m_frame.f_lineno = 296;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[131]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_38ffb2bbd3cd23298c2df31a631e940b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_38ffb2bbd3cd23298c2df31a631e940b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_38ffb2bbd3cd23298c2df31a631e940b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_38ffb2bbd3cd23298c2df31a631e940b,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_38ffb2bbd3cd23298c2df31a631e940b == cache_frame_38ffb2bbd3cd23298c2df31a631e940b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_38ffb2bbd3cd23298c2df31a631e940b);
        cache_frame_38ffb2bbd3cd23298c2df31a631e940b = NULL;
    }

    assertFrameObject(frame_38ffb2bbd3cd23298c2df31a631e940b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__35_upcase_word(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_c2d9c00766056e272c27fe3ac66f27dd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c2d9c00766056e272c27fe3ac66f27dd = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c2d9c00766056e272c27fe3ac66f27dd)) {
        Py_XDECREF(cache_frame_c2d9c00766056e272c27fe3ac66f27dd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c2d9c00766056e272c27fe3ac66f27dd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c2d9c00766056e272c27fe3ac66f27dd = MAKE_FUNCTION_FRAME(codeobj_c2d9c00766056e272c27fe3ac66f27dd, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c2d9c00766056e272c27fe3ac66f27dd->m_type_description == NULL);
    frame_c2d9c00766056e272c27fe3ac66f27dd = cache_frame_c2d9c00766056e272c27fe3ac66f27dd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c2d9c00766056e272c27fe3ac66f27dd);
    assert(Py_REFCNT(frame_c2d9c00766056e272c27fe3ac66f27dd) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_c2d9c00766056e272c27fe3ac66f27dd->m_frame.f_lineno = 301;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[133]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c2d9c00766056e272c27fe3ac66f27dd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c2d9c00766056e272c27fe3ac66f27dd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c2d9c00766056e272c27fe3ac66f27dd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c2d9c00766056e272c27fe3ac66f27dd,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_c2d9c00766056e272c27fe3ac66f27dd == cache_frame_c2d9c00766056e272c27fe3ac66f27dd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c2d9c00766056e272c27fe3ac66f27dd);
        cache_frame_c2d9c00766056e272c27fe3ac66f27dd = NULL;
    }

    assertFrameObject(frame_c2d9c00766056e272c27fe3ac66f27dd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__36_downcase_word(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_46c180ad790c375e476967871edf475a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_46c180ad790c375e476967871edf475a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_46c180ad790c375e476967871edf475a)) {
        Py_XDECREF(cache_frame_46c180ad790c375e476967871edf475a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_46c180ad790c375e476967871edf475a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_46c180ad790c375e476967871edf475a = MAKE_FUNCTION_FRAME(codeobj_46c180ad790c375e476967871edf475a, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_46c180ad790c375e476967871edf475a->m_type_description == NULL);
    frame_46c180ad790c375e476967871edf475a = cache_frame_46c180ad790c375e476967871edf475a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_46c180ad790c375e476967871edf475a);
    assert(Py_REFCNT(frame_46c180ad790c375e476967871edf475a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_46c180ad790c375e476967871edf475a->m_frame.f_lineno = 306;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[135]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_46c180ad790c375e476967871edf475a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_46c180ad790c375e476967871edf475a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_46c180ad790c375e476967871edf475a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_46c180ad790c375e476967871edf475a,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_46c180ad790c375e476967871edf475a == cache_frame_46c180ad790c375e476967871edf475a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_46c180ad790c375e476967871edf475a);
        cache_frame_46c180ad790c375e476967871edf475a = NULL;
    }

    assertFrameObject(frame_46c180ad790c375e476967871edf475a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__37_capitalize_word(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_f9a7cbe84e2b8f0ab9a3db594d3ee0fa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f9a7cbe84e2b8f0ab9a3db594d3ee0fa = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f9a7cbe84e2b8f0ab9a3db594d3ee0fa)) {
        Py_XDECREF(cache_frame_f9a7cbe84e2b8f0ab9a3db594d3ee0fa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f9a7cbe84e2b8f0ab9a3db594d3ee0fa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f9a7cbe84e2b8f0ab9a3db594d3ee0fa = MAKE_FUNCTION_FRAME(codeobj_f9a7cbe84e2b8f0ab9a3db594d3ee0fa, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f9a7cbe84e2b8f0ab9a3db594d3ee0fa->m_type_description == NULL);
    frame_f9a7cbe84e2b8f0ab9a3db594d3ee0fa = cache_frame_f9a7cbe84e2b8f0ab9a3db594d3ee0fa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f9a7cbe84e2b8f0ab9a3db594d3ee0fa);
    assert(Py_REFCNT(frame_f9a7cbe84e2b8f0ab9a3db594d3ee0fa) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f9a7cbe84e2b8f0ab9a3db594d3ee0fa->m_frame.f_lineno = 311;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[137]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f9a7cbe84e2b8f0ab9a3db594d3ee0fa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f9a7cbe84e2b8f0ab9a3db594d3ee0fa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f9a7cbe84e2b8f0ab9a3db594d3ee0fa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f9a7cbe84e2b8f0ab9a3db594d3ee0fa,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_f9a7cbe84e2b8f0ab9a3db594d3ee0fa == cache_frame_f9a7cbe84e2b8f0ab9a3db594d3ee0fa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f9a7cbe84e2b8f0ab9a3db594d3ee0fa);
        cache_frame_f9a7cbe84e2b8f0ab9a3db594d3ee0fa = NULL;
    }

    assertFrameObject(frame_f9a7cbe84e2b8f0ab9a3db594d3ee0fa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__39_kill_line(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_63cda26d95b71ff8e8ed4d652b39f23d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_63cda26d95b71ff8e8ed4d652b39f23d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_63cda26d95b71ff8e8ed4d652b39f23d)) {
        Py_XDECREF(cache_frame_63cda26d95b71ff8e8ed4d652b39f23d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_63cda26d95b71ff8e8ed4d652b39f23d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_63cda26d95b71ff8e8ed4d652b39f23d = MAKE_FUNCTION_FRAME(codeobj_63cda26d95b71ff8e8ed4d652b39f23d, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_63cda26d95b71ff8e8ed4d652b39f23d->m_type_description == NULL);
    frame_63cda26d95b71ff8e8ed4d652b39f23d = cache_frame_63cda26d95b71ff8e8ed4d652b39f23d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_63cda26d95b71ff8e8ed4d652b39f23d);
    assert(Py_REFCNT(frame_63cda26d95b71ff8e8ed4d652b39f23d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_63cda26d95b71ff8e8ed4d652b39f23d->m_frame.f_lineno = 326;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[139]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_63cda26d95b71ff8e8ed4d652b39f23d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_63cda26d95b71ff8e8ed4d652b39f23d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_63cda26d95b71ff8e8ed4d652b39f23d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_63cda26d95b71ff8e8ed4d652b39f23d,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_63cda26d95b71ff8e8ed4d652b39f23d == cache_frame_63cda26d95b71ff8e8ed4d652b39f23d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_63cda26d95b71ff8e8ed4d652b39f23d);
        cache_frame_63cda26d95b71ff8e8ed4d652b39f23d = NULL;
    }

    assertFrameObject(frame_63cda26d95b71ff8e8ed4d652b39f23d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__40_backward_kill_line(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_fb8c502ddba26bf3c6f5c56dd2f77111;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fb8c502ddba26bf3c6f5c56dd2f77111 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fb8c502ddba26bf3c6f5c56dd2f77111)) {
        Py_XDECREF(cache_frame_fb8c502ddba26bf3c6f5c56dd2f77111);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fb8c502ddba26bf3c6f5c56dd2f77111 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fb8c502ddba26bf3c6f5c56dd2f77111 = MAKE_FUNCTION_FRAME(codeobj_fb8c502ddba26bf3c6f5c56dd2f77111, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fb8c502ddba26bf3c6f5c56dd2f77111->m_type_description == NULL);
    frame_fb8c502ddba26bf3c6f5c56dd2f77111 = cache_frame_fb8c502ddba26bf3c6f5c56dd2f77111;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fb8c502ddba26bf3c6f5c56dd2f77111);
    assert(Py_REFCNT(frame_fb8c502ddba26bf3c6f5c56dd2f77111) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_fb8c502ddba26bf3c6f5c56dd2f77111->m_frame.f_lineno = 330;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[141]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fb8c502ddba26bf3c6f5c56dd2f77111, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fb8c502ddba26bf3c6f5c56dd2f77111->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fb8c502ddba26bf3c6f5c56dd2f77111, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fb8c502ddba26bf3c6f5c56dd2f77111,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_fb8c502ddba26bf3c6f5c56dd2f77111 == cache_frame_fb8c502ddba26bf3c6f5c56dd2f77111) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fb8c502ddba26bf3c6f5c56dd2f77111);
        cache_frame_fb8c502ddba26bf3c6f5c56dd2f77111 = NULL;
    }

    assertFrameObject(frame_fb8c502ddba26bf3c6f5c56dd2f77111);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__41_unix_line_discard(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_b3251b32d4c4cb94be618a393c60b7c7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b3251b32d4c4cb94be618a393c60b7c7 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b3251b32d4c4cb94be618a393c60b7c7)) {
        Py_XDECREF(cache_frame_b3251b32d4c4cb94be618a393c60b7c7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b3251b32d4c4cb94be618a393c60b7c7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b3251b32d4c4cb94be618a393c60b7c7 = MAKE_FUNCTION_FRAME(codeobj_b3251b32d4c4cb94be618a393c60b7c7, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b3251b32d4c4cb94be618a393c60b7c7->m_type_description == NULL);
    frame_b3251b32d4c4cb94be618a393c60b7c7 = cache_frame_b3251b32d4c4cb94be618a393c60b7c7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b3251b32d4c4cb94be618a393c60b7c7);
    assert(Py_REFCNT(frame_b3251b32d4c4cb94be618a393c60b7c7) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_b3251b32d4c4cb94be618a393c60b7c7->m_frame.f_lineno = 335;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[143]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b3251b32d4c4cb94be618a393c60b7c7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b3251b32d4c4cb94be618a393c60b7c7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b3251b32d4c4cb94be618a393c60b7c7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b3251b32d4c4cb94be618a393c60b7c7,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_b3251b32d4c4cb94be618a393c60b7c7 == cache_frame_b3251b32d4c4cb94be618a393c60b7c7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b3251b32d4c4cb94be618a393c60b7c7);
        cache_frame_b3251b32d4c4cb94be618a393c60b7c7 = NULL;
    }

    assertFrameObject(frame_b3251b32d4c4cb94be618a393c60b7c7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__42_kill_whole_line(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_594d640429959e9b1a56c4189f4e3f70;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_594d640429959e9b1a56c4189f4e3f70 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_594d640429959e9b1a56c4189f4e3f70)) {
        Py_XDECREF(cache_frame_594d640429959e9b1a56c4189f4e3f70);

#if _DEBUG_REFCOUNTS
        if (cache_frame_594d640429959e9b1a56c4189f4e3f70 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_594d640429959e9b1a56c4189f4e3f70 = MAKE_FUNCTION_FRAME(codeobj_594d640429959e9b1a56c4189f4e3f70, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_594d640429959e9b1a56c4189f4e3f70->m_type_description == NULL);
    frame_594d640429959e9b1a56c4189f4e3f70 = cache_frame_594d640429959e9b1a56c4189f4e3f70;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_594d640429959e9b1a56c4189f4e3f70);
    assert(Py_REFCNT(frame_594d640429959e9b1a56c4189f4e3f70) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_594d640429959e9b1a56c4189f4e3f70->m_frame.f_lineno = 340;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[145]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_594d640429959e9b1a56c4189f4e3f70, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_594d640429959e9b1a56c4189f4e3f70->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_594d640429959e9b1a56c4189f4e3f70, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_594d640429959e9b1a56c4189f4e3f70,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_594d640429959e9b1a56c4189f4e3f70 == cache_frame_594d640429959e9b1a56c4189f4e3f70) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_594d640429959e9b1a56c4189f4e3f70);
        cache_frame_594d640429959e9b1a56c4189f4e3f70 = NULL;
    }

    assertFrameObject(frame_594d640429959e9b1a56c4189f4e3f70);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__43_kill_word(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_5938eb9d8ff564af82084b0e5fc8f44d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5938eb9d8ff564af82084b0e5fc8f44d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5938eb9d8ff564af82084b0e5fc8f44d)) {
        Py_XDECREF(cache_frame_5938eb9d8ff564af82084b0e5fc8f44d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5938eb9d8ff564af82084b0e5fc8f44d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5938eb9d8ff564af82084b0e5fc8f44d = MAKE_FUNCTION_FRAME(codeobj_5938eb9d8ff564af82084b0e5fc8f44d, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5938eb9d8ff564af82084b0e5fc8f44d->m_type_description == NULL);
    frame_5938eb9d8ff564af82084b0e5fc8f44d = cache_frame_5938eb9d8ff564af82084b0e5fc8f44d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5938eb9d8ff564af82084b0e5fc8f44d);
    assert(Py_REFCNT(frame_5938eb9d8ff564af82084b0e5fc8f44d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5938eb9d8ff564af82084b0e5fc8f44d->m_frame.f_lineno = 346;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[147]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5938eb9d8ff564af82084b0e5fc8f44d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5938eb9d8ff564af82084b0e5fc8f44d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5938eb9d8ff564af82084b0e5fc8f44d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5938eb9d8ff564af82084b0e5fc8f44d,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_5938eb9d8ff564af82084b0e5fc8f44d == cache_frame_5938eb9d8ff564af82084b0e5fc8f44d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5938eb9d8ff564af82084b0e5fc8f44d);
        cache_frame_5938eb9d8ff564af82084b0e5fc8f44d = NULL;
    }

    assertFrameObject(frame_5938eb9d8ff564af82084b0e5fc8f44d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__44_backward_kill_word(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_5c3954054f6782ee8aa592943d45694f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5c3954054f6782ee8aa592943d45694f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5c3954054f6782ee8aa592943d45694f)) {
        Py_XDECREF(cache_frame_5c3954054f6782ee8aa592943d45694f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5c3954054f6782ee8aa592943d45694f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5c3954054f6782ee8aa592943d45694f = MAKE_FUNCTION_FRAME(codeobj_5c3954054f6782ee8aa592943d45694f, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5c3954054f6782ee8aa592943d45694f->m_type_description == NULL);
    frame_5c3954054f6782ee8aa592943d45694f = cache_frame_5c3954054f6782ee8aa592943d45694f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5c3954054f6782ee8aa592943d45694f);
    assert(Py_REFCNT(frame_5c3954054f6782ee8aa592943d45694f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5c3954054f6782ee8aa592943d45694f->m_frame.f_lineno = 351;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[149]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5c3954054f6782ee8aa592943d45694f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5c3954054f6782ee8aa592943d45694f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5c3954054f6782ee8aa592943d45694f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5c3954054f6782ee8aa592943d45694f,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_5c3954054f6782ee8aa592943d45694f == cache_frame_5c3954054f6782ee8aa592943d45694f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5c3954054f6782ee8aa592943d45694f);
        cache_frame_5c3954054f6782ee8aa592943d45694f = NULL;
    }

    assertFrameObject(frame_5c3954054f6782ee8aa592943d45694f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__45_unix_word_rubout(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_4e43dd5cfd60eb7d121a44f0ebf44a2c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4e43dd5cfd60eb7d121a44f0ebf44a2c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4e43dd5cfd60eb7d121a44f0ebf44a2c)) {
        Py_XDECREF(cache_frame_4e43dd5cfd60eb7d121a44f0ebf44a2c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4e43dd5cfd60eb7d121a44f0ebf44a2c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4e43dd5cfd60eb7d121a44f0ebf44a2c = MAKE_FUNCTION_FRAME(codeobj_4e43dd5cfd60eb7d121a44f0ebf44a2c, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4e43dd5cfd60eb7d121a44f0ebf44a2c->m_type_description == NULL);
    frame_4e43dd5cfd60eb7d121a44f0ebf44a2c = cache_frame_4e43dd5cfd60eb7d121a44f0ebf44a2c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4e43dd5cfd60eb7d121a44f0ebf44a2c);
    assert(Py_REFCNT(frame_4e43dd5cfd60eb7d121a44f0ebf44a2c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_4e43dd5cfd60eb7d121a44f0ebf44a2c->m_frame.f_lineno = 356;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[151]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4e43dd5cfd60eb7d121a44f0ebf44a2c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4e43dd5cfd60eb7d121a44f0ebf44a2c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4e43dd5cfd60eb7d121a44f0ebf44a2c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4e43dd5cfd60eb7d121a44f0ebf44a2c,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_4e43dd5cfd60eb7d121a44f0ebf44a2c == cache_frame_4e43dd5cfd60eb7d121a44f0ebf44a2c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4e43dd5cfd60eb7d121a44f0ebf44a2c);
        cache_frame_4e43dd5cfd60eb7d121a44f0ebf44a2c = NULL;
    }

    assertFrameObject(frame_4e43dd5cfd60eb7d121a44f0ebf44a2c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__49_copy_region_to_clipboard(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    PyObject *var_mark = NULL;
    PyObject *var_cursor = NULL;
    PyObject *var_begin = NULL;
    PyObject *var_end = NULL;
    PyObject *var_toclipboard = NULL;
    struct Nuitka_FrameObject *frame_1e5628c85fea5da1080ecf9ec8ba7d80;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1e5628c85fea5da1080ecf9ec8ba7d80 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1e5628c85fea5da1080ecf9ec8ba7d80)) {
        Py_XDECREF(cache_frame_1e5628c85fea5da1080ecf9ec8ba7d80);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1e5628c85fea5da1080ecf9ec8ba7d80 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1e5628c85fea5da1080ecf9ec8ba7d80 = MAKE_FUNCTION_FRAME(codeobj_1e5628c85fea5da1080ecf9ec8ba7d80, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1e5628c85fea5da1080ecf9ec8ba7d80->m_type_description == NULL);
    frame_1e5628c85fea5da1080ecf9ec8ba7d80 = cache_frame_1e5628c85fea5da1080ecf9ec8ba7d80;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1e5628c85fea5da1080ecf9ec8ba7d80);
    assert(Py_REFCNT(frame_1e5628c85fea5da1080ecf9ec8ba7d80) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[153]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 373;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[123]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[14]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[154]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[14]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 374;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[125]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 374;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 374;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e5628c85fea5da1080ecf9ec8ba7d80->m_frame.f_lineno = 374;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mark == NULL);
        var_mark = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[123]);
        assert(tmp_called_value_2 != NULL);
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[14]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[124]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[14]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 375;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[125]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_len_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 375;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = BUILTIN_LEN(tmp_len_arg_2);
        Py_DECREF(tmp_len_arg_2);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 375;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e5628c85fea5da1080ecf9ec8ba7d80->m_frame.f_lineno = 375;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cursor == NULL);
        var_cursor = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[14]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[154]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[105];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[123]);
        assert(tmp_called_value_3 != NULL);
        CHECK_OBJECT(var_cursor);
        tmp_args_element_value_5 = var_cursor;
        CHECK_OBJECT(var_mark);
        tmp_args_element_value_6 = var_mark;
        frame_1e5628c85fea5da1080ecf9ec8ba7d80->m_frame.f_lineno = 378;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_begin == NULL);
        var_begin = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts[155]);
        assert(tmp_called_value_4 != NULL);
        CHECK_OBJECT(var_cursor);
        tmp_args_element_value_7 = var_cursor;
        CHECK_OBJECT(var_mark);
        tmp_args_element_value_8 = var_mark;
        frame_1e5628c85fea5da1080ecf9ec8ba7d80->m_frame.f_lineno = 379;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_end == NULL);
        var_end = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        tmp_str_arg_value_1 = mod_consts[72];
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[14]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[125]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_begin);
        tmp_start_value_1 = var_begin;
        CHECK_OBJECT(var_end);
        tmp_stop_value_1 = var_end;
        tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_iterable_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_12);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_iterable_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_toclipboard == NULL);
        var_toclipboard = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_unicode_arg_1;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[157]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_toclipboard);
        tmp_unicode_arg_1 = var_toclipboard;
        tmp_args_element_value_9 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 381;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e5628c85fea5da1080ecf9ec8ba7d80->m_frame.f_lineno = 381;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1e5628c85fea5da1080ecf9ec8ba7d80, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1e5628c85fea5da1080ecf9ec8ba7d80->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1e5628c85fea5da1080ecf9ec8ba7d80, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1e5628c85fea5da1080ecf9ec8ba7d80,
        type_description_1,
        par_self,
        par_e,
        var_mark,
        var_cursor,
        var_begin,
        var_end,
        var_toclipboard
    );


    // Release cached frame if used for exception.
    if (frame_1e5628c85fea5da1080ecf9ec8ba7d80 == cache_frame_1e5628c85fea5da1080ecf9ec8ba7d80) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1e5628c85fea5da1080ecf9ec8ba7d80);
        cache_frame_1e5628c85fea5da1080ecf9ec8ba7d80 = NULL;
    }

    assertFrameObject(frame_1e5628c85fea5da1080ecf9ec8ba7d80);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_mark);
    var_mark = NULL;
    Py_XDECREF(var_cursor);
    var_cursor = NULL;
    Py_XDECREF(var_begin);
    var_begin = NULL;
    Py_XDECREF(var_end);
    var_end = NULL;
    Py_XDECREF(var_toclipboard);
    var_toclipboard = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_mark);
    var_mark = NULL;
    Py_XDECREF(var_cursor);
    var_cursor = NULL;
    Py_XDECREF(var_begin);
    var_begin = NULL;
    Py_XDECREF(var_end);
    var_end = NULL;
    Py_XDECREF(var_toclipboard);
    var_toclipboard = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__52_paste(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    PyObject *var_txt = NULL;
    struct Nuitka_FrameObject *frame_a9c9420899ac590405bfeb493b415bb5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_a9c9420899ac590405bfeb493b415bb5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a9c9420899ac590405bfeb493b415bb5)) {
        Py_XDECREF(cache_frame_a9c9420899ac590405bfeb493b415bb5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a9c9420899ac590405bfeb493b415bb5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a9c9420899ac590405bfeb493b415bb5 = MAKE_FUNCTION_FRAME(codeobj_a9c9420899ac590405bfeb493b415bb5, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a9c9420899ac590405bfeb493b415bb5->m_type_description == NULL);
    frame_a9c9420899ac590405bfeb493b415bb5 = cache_frame_a9c9420899ac590405bfeb493b415bb5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a9c9420899ac590405bfeb493b415bb5);
    assert(Py_REFCNT(frame_a9c9420899ac590405bfeb493b415bb5) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[153]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 397;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_a9c9420899ac590405bfeb493b415bb5->m_frame.f_lineno = 398;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[159],
            PyTuple_GET_ITEM(mod_consts[160], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_txt == NULL);
        var_txt = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var_txt);
        tmp_args_element_value_1 = var_txt;
        frame_a9c9420899ac590405bfeb493b415bb5->m_frame.f_lineno = 399;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[121], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a9c9420899ac590405bfeb493b415bb5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a9c9420899ac590405bfeb493b415bb5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a9c9420899ac590405bfeb493b415bb5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a9c9420899ac590405bfeb493b415bb5,
        type_description_1,
        par_self,
        par_e,
        var_txt
    );


    // Release cached frame if used for exception.
    if (frame_a9c9420899ac590405bfeb493b415bb5 == cache_frame_a9c9420899ac590405bfeb493b415bb5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a9c9420899ac590405bfeb493b415bb5);
        cache_frame_a9c9420899ac590405bfeb493b415bb5 = NULL;
    }

    assertFrameObject(frame_a9c9420899ac590405bfeb493b415bb5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_txt);
    var_txt = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_txt);
    var_txt = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__53_paste_mulitline_code(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    PyObject *var_reg = NULL;
    PyObject *var_txt = NULL;
    PyObject *var_t = NULL;
    PyObject *outline_0_var_row = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_68c8a13e83b5225ef6a064dcfb1ceb45;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_d9df6061d933f1fc03ae016c4ad068e8_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_d9df6061d933f1fc03ae016c4ad068e8_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_68c8a13e83b5225ef6a064dcfb1ceb45 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_68c8a13e83b5225ef6a064dcfb1ceb45)) {
        Py_XDECREF(cache_frame_68c8a13e83b5225ef6a064dcfb1ceb45);

#if _DEBUG_REFCOUNTS
        if (cache_frame_68c8a13e83b5225ef6a064dcfb1ceb45 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_68c8a13e83b5225ef6a064dcfb1ceb45 = MAKE_FUNCTION_FRAME(codeobj_68c8a13e83b5225ef6a064dcfb1ceb45, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_68c8a13e83b5225ef6a064dcfb1ceb45->m_type_description == NULL);
    frame_68c8a13e83b5225ef6a064dcfb1ceb45 = cache_frame_68c8a13e83b5225ef6a064dcfb1ceb45;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_68c8a13e83b5225ef6a064dcfb1ceb45);
    assert(Py_REFCNT(frame_68c8a13e83b5225ef6a064dcfb1ceb45) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_68c8a13e83b5225ef6a064dcfb1ceb45->m_frame.f_lineno = 403;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[163],
            PyTuple_GET_ITEM(mod_consts[164], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_reg == NULL);
        var_reg = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[153]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 404;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_68c8a13e83b5225ef6a064dcfb1ceb45->m_frame.f_lineno = 405;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[159],
            PyTuple_GET_ITEM(mod_consts[160], 0)
        );

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_txt == NULL);
        var_txt = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_reg);
        tmp_expression_value_2 = var_reg;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[165]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_txt);
        tmp_args_element_value_1 = var_txt;
        frame_68c8a13e83b5225ef6a064dcfb1ceb45->m_frame.f_lineno = 406;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_t == NULL);
        var_t = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_t);
            tmp_iter_arg_1 = var_t;
            tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 407;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_6;
        }
        if (isFrameUnusable(cache_frame_d9df6061d933f1fc03ae016c4ad068e8_2)) {
            Py_XDECREF(cache_frame_d9df6061d933f1fc03ae016c4ad068e8_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_d9df6061d933f1fc03ae016c4ad068e8_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_d9df6061d933f1fc03ae016c4ad068e8_2 = MAKE_FUNCTION_FRAME(codeobj_d9df6061d933f1fc03ae016c4ad068e8, module_pyreadline$modes$notemacs, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_d9df6061d933f1fc03ae016c4ad068e8_2->m_type_description == NULL);
        frame_d9df6061d933f1fc03ae016c4ad068e8_2 = cache_frame_d9df6061d933f1fc03ae016c4ad068e8_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_d9df6061d933f1fc03ae016c4ad068e8_2);
        assert(Py_REFCNT(frame_d9df6061d933f1fc03ae016c4ad068e8_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_7 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 407;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_7;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_8 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_row;
                outline_0_var_row = tmp_assign_source_8;
                Py_INCREF(outline_0_var_row);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_3;
            CHECK_OBJECT(outline_0_var_row);
            tmp_expression_value_3 = outline_0_var_row;
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[166]);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 407;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            frame_d9df6061d933f1fc03ae016c4ad068e8_2->m_frame.f_lineno = 407;
            tmp_cmp_expr_left_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
            Py_DECREF(tmp_called_value_2);
            if (tmp_cmp_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 407;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_cmp_expr_right_1 = mod_consts[72];
            tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            Py_DECREF(tmp_cmp_expr_left_1);
            if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 407;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
        }
        branch_yes_2:;
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_row);
            tmp_append_value_1 = outline_0_var_row;
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 407;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        branch_no_2:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_4 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_4);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d9df6061d933f1fc03ae016c4ad068e8_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d9df6061d933f1fc03ae016c4ad068e8_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d9df6061d933f1fc03ae016c4ad068e8_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d9df6061d933f1fc03ae016c4ad068e8_2,
            type_description_2,
            outline_0_var_row
        );


        // Release cached frame if used for exception.
        if (frame_d9df6061d933f1fc03ae016c4ad068e8_2 == cache_frame_d9df6061d933f1fc03ae016c4ad068e8_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_d9df6061d933f1fc03ae016c4ad068e8_2);
            cache_frame_d9df6061d933f1fc03ae016c4ad068e8_2 = NULL;
        }

        assertFrameObject(frame_d9df6061d933f1fc03ae016c4ad068e8_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_row);
        outline_0_var_row = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_row);
        outline_0_var_row = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 407;
        goto frame_exception_exit_1;
        outline_result_1:;
        {
            PyObject *old = var_t;
            assert(old != NULL);
            var_t = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_t);
        tmp_cmp_expr_left_2 = var_t;
        tmp_cmp_expr_right_2 = MAKE_LIST1(mod_consts[72]);
        tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_LIST(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[121]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_t);
        tmp_expression_value_5 = var_t;
        tmp_subscript_value_1 = mod_consts[15];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 409;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_68c8a13e83b5225ef6a064dcfb1ceb45->m_frame.f_lineno = 409;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[42]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[14]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 410;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[43]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 410;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_68c8a13e83b5225ef6a064dcfb1ceb45->m_frame.f_lineno = 410;
        tmp_args_element_value_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 410;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_68c8a13e83b5225ef6a064dcfb1ceb45->m_frame.f_lineno = 410;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_t);
        tmp_expression_value_9 = var_t;
        tmp_subscript_value_2 = mod_consts[38];
        tmp_assattr_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_2);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[36], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_expression_value_10;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[167];
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_mod_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[36]);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_68c8a13e83b5225ef6a064dcfb1ceb45->m_frame.f_lineno = 412;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_3:;
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_68c8a13e83b5225ef6a064dcfb1ceb45, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_68c8a13e83b5225ef6a064dcfb1ceb45->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_68c8a13e83b5225ef6a064dcfb1ceb45, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_68c8a13e83b5225ef6a064dcfb1ceb45,
        type_description_1,
        par_self,
        par_e,
        var_reg,
        var_txt,
        var_t
    );


    // Release cached frame if used for exception.
    if (frame_68c8a13e83b5225ef6a064dcfb1ceb45 == cache_frame_68c8a13e83b5225ef6a064dcfb1ceb45) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_68c8a13e83b5225ef6a064dcfb1ceb45);
        cache_frame_68c8a13e83b5225ef6a064dcfb1ceb45 = NULL;
    }

    assertFrameObject(frame_68c8a13e83b5225ef6a064dcfb1ceb45);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_reg);
    var_reg = NULL;
    Py_XDECREF(var_txt);
    var_txt = NULL;
    Py_XDECREF(var_t);
    var_t = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_reg);
    var_reg = NULL;
    Py_XDECREF(var_txt);
    var_txt = NULL;
    Py_XDECREF(var_t);
    var_t = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__54_ipython_paste(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    PyObject *var_txt = NULL;
    struct Nuitka_FrameObject *frame_3475e0a3c411c794cc2120e8be3ad0fe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_3475e0a3c411c794cc2120e8be3ad0fe = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3475e0a3c411c794cc2120e8be3ad0fe)) {
        Py_XDECREF(cache_frame_3475e0a3c411c794cc2120e8be3ad0fe);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3475e0a3c411c794cc2120e8be3ad0fe == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3475e0a3c411c794cc2120e8be3ad0fe = MAKE_FUNCTION_FRAME(codeobj_3475e0a3c411c794cc2120e8be3ad0fe, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3475e0a3c411c794cc2120e8be3ad0fe->m_type_description == NULL);
    frame_3475e0a3c411c794cc2120e8be3ad0fe = cache_frame_3475e0a3c411c794cc2120e8be3ad0fe;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3475e0a3c411c794cc2120e8be3ad0fe);
    assert(Py_REFCNT(frame_3475e0a3c411c794cc2120e8be3ad0fe) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[153]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 421;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[159]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[168]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 423;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_3475e0a3c411c794cc2120e8be3ad0fe->m_frame.f_lineno = 422;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_txt == NULL);
        var_txt = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[169]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 424;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        int tmp_and_left_truth_2;
        bool tmp_and_left_value_2;
        bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_txt);
        tmp_len_arg_1 = var_txt;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 300;
        tmp_and_left_value_1 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_cmp_expr_left_2 = mod_consts[170];
        CHECK_OBJECT(var_txt);
        tmp_cmp_expr_right_2 = var_txt;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = (tmp_res == 0) ? true : false;
        tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        tmp_cmp_expr_left_3 = mod_consts[46];
        CHECK_OBJECT(var_txt);
        tmp_cmp_expr_right_3 = var_txt;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = (tmp_res == 0) ? true : false;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_txt);
        tmp_expression_value_6 = var_txt;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[171]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_3475e0a3c411c794cc2120e8be3ad0fe->m_frame.f_lineno = 426;
        tmp_expression_value_5 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[172]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[171]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_3475e0a3c411c794cc2120e8be3ad0fe->m_frame.f_lineno = 426;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[173]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_txt;
            assert(old != NULL);
            var_txt = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    branch_no_2:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[121]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (var_txt == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[174]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 427;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = var_txt;
        frame_3475e0a3c411c794cc2120e8be3ad0fe->m_frame.f_lineno = 427;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3475e0a3c411c794cc2120e8be3ad0fe, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3475e0a3c411c794cc2120e8be3ad0fe->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3475e0a3c411c794cc2120e8be3ad0fe, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3475e0a3c411c794cc2120e8be3ad0fe,
        type_description_1,
        par_self,
        par_e,
        var_txt
    );


    // Release cached frame if used for exception.
    if (frame_3475e0a3c411c794cc2120e8be3ad0fe == cache_frame_3475e0a3c411c794cc2120e8be3ad0fe) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3475e0a3c411c794cc2120e8be3ad0fe);
        cache_frame_3475e0a3c411c794cc2120e8be3ad0fe = NULL;
    }

    assertFrameObject(frame_3475e0a3c411c794cc2120e8be3ad0fe);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_txt);
    var_txt = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_txt);
    var_txt = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__64_abort(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_9b1d417ba2b80ec04f442211367e5755;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9b1d417ba2b80ec04f442211367e5755 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9b1d417ba2b80ec04f442211367e5755)) {
        Py_XDECREF(cache_frame_9b1d417ba2b80ec04f442211367e5755);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9b1d417ba2b80ec04f442211367e5755 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9b1d417ba2b80ec04f442211367e5755 = MAKE_FUNCTION_FRAME(codeobj_9b1d417ba2b80ec04f442211367e5755, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9b1d417ba2b80ec04f442211367e5755->m_type_description == NULL);
    frame_9b1d417ba2b80ec04f442211367e5755 = cache_frame_9b1d417ba2b80ec04f442211367e5755;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9b1d417ba2b80ec04f442211367e5755);
    assert(Py_REFCNT(frame_9b1d417ba2b80ec04f442211367e5755) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_9b1d417ba2b80ec04f442211367e5755->m_frame.f_lineno = 487;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[90]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9b1d417ba2b80ec04f442211367e5755, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9b1d417ba2b80ec04f442211367e5755->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9b1d417ba2b80ec04f442211367e5755, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9b1d417ba2b80ec04f442211367e5755,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_9b1d417ba2b80ec04f442211367e5755 == cache_frame_9b1d417ba2b80ec04f442211367e5755) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9b1d417ba2b80ec04f442211367e5755);
        cache_frame_9b1d417ba2b80ec04f442211367e5755 = NULL;
    }

    assertFrameObject(frame_9b1d417ba2b80ec04f442211367e5755);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__66_prefix_meta(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_37cf552c3280cf9c8493068aa350f56b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_37cf552c3280cf9c8493068aa350f56b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_37cf552c3280cf9c8493068aa350f56b)) {
        Py_XDECREF(cache_frame_37cf552c3280cf9c8493068aa350f56b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_37cf552c3280cf9c8493068aa350f56b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_37cf552c3280cf9c8493068aa350f56b = MAKE_FUNCTION_FRAME(codeobj_37cf552c3280cf9c8493068aa350f56b, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_37cf552c3280cf9c8493068aa350f56b->m_type_description == NULL);
    frame_37cf552c3280cf9c8493068aa350f56b = cache_frame_37cf552c3280cf9c8493068aa350f56b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_37cf552c3280cf9c8493068aa350f56b);
    assert(Py_REFCNT(frame_37cf552c3280cf9c8493068aa350f56b) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[7], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_37cf552c3280cf9c8493068aa350f56b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_37cf552c3280cf9c8493068aa350f56b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_37cf552c3280cf9c8493068aa350f56b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_37cf552c3280cf9c8493068aa350f56b,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_37cf552c3280cf9c8493068aa350f56b == cache_frame_37cf552c3280cf9c8493068aa350f56b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_37cf552c3280cf9c8493068aa350f56b);
        cache_frame_37cf552c3280cf9c8493068aa350f56b = NULL;
    }

    assertFrameObject(frame_37cf552c3280cf9c8493068aa350f56b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__67_undo(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_392b404f8fda0dd7c6a9e86574ce456b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_392b404f8fda0dd7c6a9e86574ce456b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_392b404f8fda0dd7c6a9e86574ce456b)) {
        Py_XDECREF(cache_frame_392b404f8fda0dd7c6a9e86574ce456b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_392b404f8fda0dd7c6a9e86574ce456b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_392b404f8fda0dd7c6a9e86574ce456b = MAKE_FUNCTION_FRAME(codeobj_392b404f8fda0dd7c6a9e86574ce456b, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_392b404f8fda0dd7c6a9e86574ce456b->m_type_description == NULL);
    frame_392b404f8fda0dd7c6a9e86574ce456b = cache_frame_392b404f8fda0dd7c6a9e86574ce456b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_392b404f8fda0dd7c6a9e86574ce456b);
    assert(Py_REFCNT(frame_392b404f8fda0dd7c6a9e86574ce456b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_392b404f8fda0dd7c6a9e86574ce456b->m_frame.f_lineno = 501;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[178]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_392b404f8fda0dd7c6a9e86574ce456b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_392b404f8fda0dd7c6a9e86574ce456b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_392b404f8fda0dd7c6a9e86574ce456b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_392b404f8fda0dd7c6a9e86574ce456b,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_392b404f8fda0dd7c6a9e86574ce456b == cache_frame_392b404f8fda0dd7c6a9e86574ce456b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_392b404f8fda0dd7c6a9e86574ce456b);
        cache_frame_392b404f8fda0dd7c6a9e86574ce456b = NULL;
    }

    assertFrameObject(frame_392b404f8fda0dd7c6a9e86574ce456b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__70_set_mark(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_c378c1e77531c4596deae6fb70862035;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c378c1e77531c4596deae6fb70862035 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c378c1e77531c4596deae6fb70862035)) {
        Py_XDECREF(cache_frame_c378c1e77531c4596deae6fb70862035);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c378c1e77531c4596deae6fb70862035 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c378c1e77531c4596deae6fb70862035 = MAKE_FUNCTION_FRAME(codeobj_c378c1e77531c4596deae6fb70862035, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c378c1e77531c4596deae6fb70862035->m_type_description == NULL);
    frame_c378c1e77531c4596deae6fb70862035 = cache_frame_c378c1e77531c4596deae6fb70862035;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c378c1e77531c4596deae6fb70862035);
    assert(Py_REFCNT(frame_c378c1e77531c4596deae6fb70862035) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_c378c1e77531c4596deae6fb70862035->m_frame.f_lineno = 515;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[180]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c378c1e77531c4596deae6fb70862035, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c378c1e77531c4596deae6fb70862035->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c378c1e77531c4596deae6fb70862035, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c378c1e77531c4596deae6fb70862035,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_c378c1e77531c4596deae6fb70862035 == cache_frame_c378c1e77531c4596deae6fb70862035) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c378c1e77531c4596deae6fb70862035);
        cache_frame_c378c1e77531c4596deae6fb70862035 = NULL;
    }

    assertFrameObject(frame_c378c1e77531c4596deae6fb70862035);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__78_init_editing_mode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_e = python_pars[1];
    struct Nuitka_FrameObject *frame_92a60720c23a2f1e670e46c7f10fa186;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_92a60720c23a2f1e670e46c7f10fa186 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_92a60720c23a2f1e670e46c7f10fa186)) {
        Py_XDECREF(cache_frame_92a60720c23a2f1e670e46c7f10fa186);

#if _DEBUG_REFCOUNTS
        if (cache_frame_92a60720c23a2f1e670e46c7f10fa186 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_92a60720c23a2f1e670e46c7f10fa186 = MAKE_FUNCTION_FRAME(codeobj_92a60720c23a2f1e670e46c7f10fa186, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_92a60720c23a2f1e670e46c7f10fa186->m_type_description == NULL);
    frame_92a60720c23a2f1e670e46c7f10fa186 = cache_frame_92a60720c23a2f1e670e46c7f10fa186;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_92a60720c23a2f1e670e46c7f10fa186);
    assert(Py_REFCNT(frame_92a60720c23a2f1e670e46c7f10fa186) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_92a60720c23a2f1e670e46c7f10fa186->m_frame.f_lineno = 572;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[182],
            PyTuple_GET_ITEM(mod_consts[183], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_92a60720c23a2f1e670e46c7f10fa186->m_frame.f_lineno = 573;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[182],
            PyTuple_GET_ITEM(mod_consts[184], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[185]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[186];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[18]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 576;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_92a60720c23a2f1e670e46c7f10fa186->m_frame.f_lineno = 576;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[185]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[187];
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[18]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 577;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_92a60720c23a2f1e670e46c7f10fa186->m_frame.f_lineno = 577;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[185]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[99];
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[188]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 578;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_92a60720c23a2f1e670e46c7f10fa186->m_frame.f_lineno = 578;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[185]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[189];
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[54]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 579;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_92a60720c23a2f1e670e46c7f10fa186->m_frame.f_lineno = 579;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[185]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = mod_consts[190];
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[54]);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 580;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_92a60720c23a2f1e670e46c7f10fa186->m_frame.f_lineno = 580;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[185]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 581;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = mod_consts[191];
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[52]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 581;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_92a60720c23a2f1e670e46c7f10fa186->m_frame.f_lineno = 581;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 581;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[185]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = mod_consts[192];
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[52]);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 582;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_92a60720c23a2f1e670e46c7f10fa186->m_frame.f_lineno = 582;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[185]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = mod_consts[87];
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[119]);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 583;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_92a60720c23a2f1e670e46c7f10fa186->m_frame.f_lineno = 583;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(par_self);
        tmp_expression_value_17 = par_self;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[185]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = mod_consts[193];
        CHECK_OBJECT(par_self);
        tmp_expression_value_18 = par_self;
        tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[48]);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 584;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_92a60720c23a2f1e670e46c7f10fa186->m_frame.f_lineno = 584;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(par_self);
        tmp_expression_value_19 = par_self;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[185]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = mod_consts[194];
        CHECK_OBJECT(par_self);
        tmp_expression_value_20 = par_self;
        tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[50]);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 585;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_92a60720c23a2f1e670e46c7f10fa186->m_frame.f_lineno = 585;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(par_self);
        tmp_expression_value_21 = par_self;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[185]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 586;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = mod_consts[195];
        CHECK_OBJECT(par_self);
        tmp_expression_value_22 = par_self;
        tmp_args_element_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[117]);
        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 586;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_92a60720c23a2f1e670e46c7f10fa186->m_frame.f_lineno = 586;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 586;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(par_self);
        tmp_expression_value_23 = par_self;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[185]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_23 = mod_consts[196];
        CHECK_OBJECT(par_self);
        tmp_expression_value_24 = par_self;
        tmp_args_element_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[117]);
        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 587;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_92a60720c23a2f1e670e46c7f10fa186->m_frame.f_lineno = 587;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(par_self);
        tmp_expression_value_25 = par_self;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[185]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 588;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = mod_consts[197];
        CHECK_OBJECT(par_self);
        tmp_expression_value_26 = par_self;
        tmp_args_element_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[198]);
        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 588;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_92a60720c23a2f1e670e46c7f10fa186->m_frame.f_lineno = 588;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_13, call_args);
        }

        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 588;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_92a60720c23a2f1e670e46c7f10fa186, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_92a60720c23a2f1e670e46c7f10fa186->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_92a60720c23a2f1e670e46c7f10fa186, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_92a60720c23a2f1e670e46c7f10fa186,
        type_description_1,
        par_self,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_92a60720c23a2f1e670e46c7f10fa186 == cache_frame_92a60720c23a2f1e670e46c7f10fa186) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_92a60720c23a2f1e670e46c7f10fa186);
        cache_frame_92a60720c23a2f1e670e46c7f10fa186 = NULL;
    }

    assertFrameObject(frame_92a60720c23a2f1e670e46c7f10fa186);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyreadline$modes$notemacs$$$function__79_commonprefix(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_m = python_pars[0];
    PyObject *var_prefix = NULL;
    PyObject *var_item = NULL;
    PyObject *var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_6dc92a89fd3776fbafb91df61276ad7f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_6dc92a89fd3776fbafb91df61276ad7f = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6dc92a89fd3776fbafb91df61276ad7f)) {
        Py_XDECREF(cache_frame_6dc92a89fd3776fbafb91df61276ad7f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6dc92a89fd3776fbafb91df61276ad7f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6dc92a89fd3776fbafb91df61276ad7f = MAKE_FUNCTION_FRAME(codeobj_6dc92a89fd3776fbafb91df61276ad7f, module_pyreadline$modes$notemacs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6dc92a89fd3776fbafb91df61276ad7f->m_type_description == NULL);
    frame_6dc92a89fd3776fbafb91df61276ad7f = cache_frame_6dc92a89fd3776fbafb91df61276ad7f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6dc92a89fd3776fbafb91df61276ad7f);
    assert(Py_REFCNT(frame_6dc92a89fd3776fbafb91df61276ad7f) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_m);
        tmp_operand_value_1 = par_m;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = mod_consts[72];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_m);
        tmp_expression_value_1 = par_m;
        tmp_subscript_value_1 = mod_consts[15];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 595;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_prefix == NULL);
        var_prefix = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_m);
        tmp_iter_arg_1 = par_m;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 596;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooo";
                exception_lineno = 596;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_item;
            var_item = tmp_assign_source_4;
            Py_INCREF(var_item);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_len_arg_1;
        if (var_prefix == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[200]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 597;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_len_arg_1 = var_prefix;
        tmp_xrange_low_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_xrange_low_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_2 = BUILTIN_XRANGE1(tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_low_1);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooo";
                exception_lineno = 597;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_7 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_7;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_stop_value_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        if (var_prefix == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[200]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 598;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_3 = var_prefix;
        CHECK_OBJECT(var_i);
        tmp_add_expr_left_1 = var_i;
        tmp_add_expr_right_1 = mod_consts[108];
        tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_stop_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_2 = MAKE_SLICE_OBJECT1(tmp_stop_value_1);
        Py_DECREF(tmp_stop_value_1);
        assert(!(tmp_subscript_value_2 == NULL));
        tmp_expression_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[201]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        frame_6dc92a89fd3776fbafb91df61276ad7f->m_frame.f_lineno = 598;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_item);
        tmp_expression_value_5 = var_item;
        CHECK_OBJECT(var_i);
        tmp_add_expr_left_2 = var_i;
        tmp_add_expr_right_2 = mod_consts[108];
        tmp_stop_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_stop_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 598;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_3 = MAKE_SLICE_OBJECT1(tmp_stop_value_2);
        Py_DECREF(tmp_stop_value_2);
        assert(!(tmp_subscript_value_3 == NULL));
        tmp_expression_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 598;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[201]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 598;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        frame_6dc92a89fd3776fbafb91df61276ad7f->m_frame.f_lineno = 598;
        tmp_cmp_expr_right_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 598;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_stop_value_3;
        if (var_prefix == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[200]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 599;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_6 = var_prefix;
        CHECK_OBJECT(var_i);
        tmp_stop_value_3 = var_i;
        tmp_subscript_value_4 = MAKE_SLICE_OBJECT1(tmp_stop_value_3);
        assert(!(tmp_subscript_value_4 == NULL));
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_4);
        Py_DECREF(tmp_subscript_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 599;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_prefix;
            var_prefix = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_i);
        tmp_cmp_expr_left_2 = var_i;
        tmp_cmp_expr_right_2 = mod_consts[15];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_return_value = mod_consts[72];
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    branch_no_3:;
    goto loop_end_2;
    branch_no_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 597;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT(tmp_for_loop_2__iter_value);
    Py_DECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    goto try_return_handler_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 596;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_for_loop_1__iter_value);
    Py_DECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_prefix == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[200]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 602;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_prefix;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6dc92a89fd3776fbafb91df61276ad7f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6dc92a89fd3776fbafb91df61276ad7f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6dc92a89fd3776fbafb91df61276ad7f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6dc92a89fd3776fbafb91df61276ad7f,
        type_description_1,
        par_m,
        var_prefix,
        var_item,
        var_i
    );


    // Release cached frame if used for exception.
    if (frame_6dc92a89fd3776fbafb91df61276ad7f == cache_frame_6dc92a89fd3776fbafb91df61276ad7f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6dc92a89fd3776fbafb91df61276ad7f);
        cache_frame_6dc92a89fd3776fbafb91df61276ad7f = NULL;
    }

    assertFrameObject(frame_6dc92a89fd3776fbafb91df61276ad7f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_prefix);
    var_prefix = NULL;
    Py_XDECREF(var_item);
    var_item = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_prefix);
    var_prefix = NULL;
    Py_XDECREF(var_item);
    var_item = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__10_backward_word() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__10_backward_word,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        mod_consts[245],
#endif
        codeobj_e4adf7dc6d878e4ff5c67fa5ffb24fe0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[59],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__11_clear_screen() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__11_clear_screen,
        mod_consts[198],
#if PYTHON_VERSION >= 0x300
        mod_consts[246],
#endif
        codeobj_9982ee32a1898a2d1a3e7969c519d13b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[61],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__12_redraw_current_line() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[248],
#if PYTHON_VERSION >= 0x300
        mod_consts[249],
#endif
        codeobj_e816f3b99c433fcd38e5ffac80ef399f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[247],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__13_accept_line() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[188],
#if PYTHON_VERSION >= 0x300
        mod_consts[251],
#endif
        codeobj_e95b4960abbcd38f420064691c8f5a33,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[250],
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnTrue(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__14_previous_history() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__14_previous_history,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        mod_consts[252],
#endif
        codeobj_1aec86e96eac28b89af4a811840fe18f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[64],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__15_next_history() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__15_next_history,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        mod_consts[253],
#endif
        codeobj_5d73488e3e175d257b0cb1cd36bb8f33,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[66],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__16_beginning_of_history() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__16_beginning_of_history,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        mod_consts[254],
#endif
        codeobj_fb0fd6afa29a8fca8322a918ea73ccfb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[68],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__17_end_of_history() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__17_end_of_history,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        mod_consts[255],
#endif
        codeobj_f812b5287e219a40a862eb2a3306f0b9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[70],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__18__i_search() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__18__i_search,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        mod_consts[256],
#endif
        codeobj_8b112ce9fc53b6fca5accc87eb7ecce6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__19_reverse_search_history() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__19_reverse_search_history,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        mod_consts[257],
#endif
        codeobj_21e07642b9d1a7fd2914ad2b2e3227c6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[106],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[232],
#endif
        codeobj_bf9ac36e128d30c25a1f1a2446a93ab6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__20_forward_search_history() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__20_forward_search_history,
        mod_consts[107],
#if PYTHON_VERSION >= 0x300
        mod_consts[258],
#endif
        codeobj_957a3f163b005361760bdadc91cced9b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[109],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__21_non_incremental_reverse_search_history() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__21_non_incremental_reverse_search_history,
        mod_consts[110],
#if PYTHON_VERSION >= 0x300
        mod_consts[259],
#endif
        codeobj_36d6dec6d29843fca779d02872164723,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[111],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__22_non_incremental_forward_search_history() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__22_non_incremental_forward_search_history,
        mod_consts[260],
#if PYTHON_VERSION >= 0x300
        mod_consts[261],
#endif
        codeobj_78bef4a5baf6b8545a73eee1c04240d3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[112],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__23_history_search_forward() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__23_history_search_forward,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        mod_consts[262],
#endif
        codeobj_e39313f93a0d09b71e2b17bd72fc5c24,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[114],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__24_history_search_backward() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__24_history_search_backward,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        mod_consts[263],
#endif
        codeobj_0c927945c4bf97c694f488d7fde073f9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[116],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__25_yank_nth_arg() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[265],
#if PYTHON_VERSION >= 0x300
        mod_consts[266],
#endif
        codeobj_16d82be4814f5339b4ceab1e0221ecf9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[264],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__26_yank_last_arg() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[268],
#if PYTHON_VERSION >= 0x300
        mod_consts[269],
#endif
        codeobj_218c188053c315a2e721bc32f8cc7838,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[267],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__27_delete_char() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__27_delete_char,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        mod_consts[270],
#endif
        codeobj_336605c76da913371a75357fc8820682,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[118],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__28_backward_delete_char() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__28_backward_delete_char,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        mod_consts[271],
#endif
        codeobj_edda410bbe66992fad6342388c86c7d3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[120],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__29_forward_backward_delete_char() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[273],
#if PYTHON_VERSION >= 0x300
        mod_consts[274],
#endif
        codeobj_3fc7e681318c8c8d52c7deb50dfd7dca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[272],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__2___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[234],
#if PYTHON_VERSION >= 0x300
        mod_consts[235],
#endif
        codeobj_a21b3b97ae8e185bbf074b1a2ddc0ca7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[233]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__30_quoted_insert() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__30_quoted_insert,
        mod_consts[275],
#if PYTHON_VERSION >= 0x300
        mod_consts[276],
#endif
        codeobj_b8d6b7f9a89b0878a1f2f84c96d9536c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[122],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__31_tab_insert() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__31_tab_insert,
        mod_consts[277],
#if PYTHON_VERSION >= 0x300
        mod_consts[278],
#endif
        codeobj_a4c753ca86088b22c361342bdc31dacb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[127],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__32_self_insert() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__32_self_insert,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        mod_consts[279],
#endif
        codeobj_6a2781ee7b930c2368d7f43d7add021e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[128],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__33_transpose_chars() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__33_transpose_chars,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        mod_consts[280],
#endif
        codeobj_a08a7ff1a4d6d0b960d8533d069ccfd1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[130],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__34_transpose_words() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__34_transpose_words,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        mod_consts[281],
#endif
        codeobj_38ffb2bbd3cd23298c2df31a631e940b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[132],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__35_upcase_word() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__35_upcase_word,
        mod_consts[133],
#if PYTHON_VERSION >= 0x300
        mod_consts[282],
#endif
        codeobj_c2d9c00766056e272c27fe3ac66f27dd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[134],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__36_downcase_word() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__36_downcase_word,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        mod_consts[283],
#endif
        codeobj_46c180ad790c375e476967871edf475a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[136],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__37_capitalize_word() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__37_capitalize_word,
        mod_consts[137],
#if PYTHON_VERSION >= 0x300
        mod_consts[284],
#endif
        codeobj_f9a7cbe84e2b8f0ab9a3db594d3ee0fa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[138],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__38_overwrite_mode() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[286],
#if PYTHON_VERSION >= 0x300
        mod_consts[287],
#endif
        codeobj_c4f00db63c1b50e985c4d220056c905d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[285],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__39_kill_line() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__39_kill_line,
        mod_consts[139],
#if PYTHON_VERSION >= 0x300
        mod_consts[288],
#endif
        codeobj_63cda26d95b71ff8e8ed4d652b39f23d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[140],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__3__readline_from_keyboard() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__3__readline_from_keyboard,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        mod_consts[236],
#endif
        codeobj_113d24e59c4d8b07eeb8ab1d4314776a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__40_backward_kill_line() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__40_backward_kill_line,
        mod_consts[141],
#if PYTHON_VERSION >= 0x300
        mod_consts[289],
#endif
        codeobj_fb8c502ddba26bf3c6f5c56dd2f77111,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[142],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__41_unix_line_discard() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__41_unix_line_discard,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        mod_consts[290],
#endif
        codeobj_b3251b32d4c4cb94be618a393c60b7c7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[144],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__42_kill_whole_line() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__42_kill_whole_line,
        mod_consts[145],
#if PYTHON_VERSION >= 0x300
        mod_consts[291],
#endif
        codeobj_594d640429959e9b1a56c4189f4e3f70,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[146],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__43_kill_word() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__43_kill_word,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        mod_consts[292],
#endif
        codeobj_5938eb9d8ff564af82084b0e5fc8f44d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[148],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__44_backward_kill_word() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__44_backward_kill_word,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        mod_consts[293],
#endif
        codeobj_5c3954054f6782ee8aa592943d45694f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[150],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__45_unix_word_rubout() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__45_unix_word_rubout,
        mod_consts[151],
#if PYTHON_VERSION >= 0x300
        mod_consts[294],
#endif
        codeobj_4e43dd5cfd60eb7d121a44f0ebf44a2c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[152],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__46_delete_horizontal_space() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[296],
#if PYTHON_VERSION >= 0x300
        mod_consts[297],
#endif
        codeobj_30fc8408bbbbfbf18c39e42e9a96ea32,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[295],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__47_kill_region() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[299],
#if PYTHON_VERSION >= 0x300
        mod_consts[300],
#endif
        codeobj_e05cdad79f4141553243533ff3a3aa30,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[298],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__48_copy_region_as_kill() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[302],
#if PYTHON_VERSION >= 0x300
        mod_consts[303],
#endif
        codeobj_86456480ce5478b610f84c443a66c758,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[301],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__49_copy_region_to_clipboard() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__49_copy_region_to_clipboard,
        mod_consts[304],
#if PYTHON_VERSION >= 0x300
        mod_consts[305],
#endif
        codeobj_1e5628c85fea5da1080ecf9ec8ba7d80,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[158],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__4_readline(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__4_readline,
        mod_consts[238],
#if PYTHON_VERSION >= 0x300
        mod_consts[239],
#endif
        codeobj_fd55a6c6793e7fcb15fd98b7af1ae5ae,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[47],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__50_copy_backward_word() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[307],
#if PYTHON_VERSION >= 0x300
        mod_consts[308],
#endif
        codeobj_47258975aa9a62e5c4fbbd7c9b8b37e8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[306],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__51_copy_forward_word() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[310],
#if PYTHON_VERSION >= 0x300
        mod_consts[311],
#endif
        codeobj_ce170de7d0572bda1c2022b208e501b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[309],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__52_paste() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__52_paste,
        mod_consts[312],
#if PYTHON_VERSION >= 0x300
        mod_consts[313],
#endif
        codeobj_a9c9420899ac590405bfeb493b415bb5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[161],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__53_paste_mulitline_code() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__53_paste_mulitline_code,
        mod_consts[314],
#if PYTHON_VERSION >= 0x300
        mod_consts[315],
#endif
        codeobj_68c8a13e83b5225ef6a064dcfb1ceb45,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[161],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__54_ipython_paste() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__54_ipython_paste,
        mod_consts[316],
#if PYTHON_VERSION >= 0x300
        mod_consts[317],
#endif
        codeobj_3475e0a3c411c794cc2120e8be3ad0fe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[175],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__55_yank() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[319],
#if PYTHON_VERSION >= 0x300
        mod_consts[320],
#endif
        codeobj_88e27266b605c8b975cd61a8ecd771b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[318],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__56_yank_pop() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[322],
#if PYTHON_VERSION >= 0x300
        mod_consts[323],
#endif
        codeobj_e7c6fc21538b1fb43176159abb5535af,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[321],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__57_digit_argument() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[325],
#if PYTHON_VERSION >= 0x300
        mod_consts[326],
#endif
        codeobj_1bc0dce1dde25b834e94cb0dc6cb23f8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[324],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__58_universal_argument() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[328],
#if PYTHON_VERSION >= 0x300
        mod_consts[329],
#endif
        codeobj_c4e95d9136d445ad3dbfae8aa0e9e294,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[327],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__59_delete_char_or_list() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[331],
#if PYTHON_VERSION >= 0x300
        mod_consts[332],
#endif
        codeobj_4ceafd18542908846901d6197a5c5177,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[330],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__5_beginning_of_line() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__5_beginning_of_line,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[240],
#endif
        codeobj_8cc570f9b7d1967ede3608100cbd7cd5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[49],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__60_start_kbd_macro() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[334],
#if PYTHON_VERSION >= 0x300
        mod_consts[335],
#endif
        codeobj_87b0e142f165ae7cfbb4529f3054515b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[333],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__61_end_kbd_macro() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[337],
#if PYTHON_VERSION >= 0x300
        mod_consts[338],
#endif
        codeobj_1a1d475b45cbafd93ed6d9f61e71bf1a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[336],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__62_call_last_kbd_macro() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[340],
#if PYTHON_VERSION >= 0x300
        mod_consts[341],
#endif
        codeobj_47af369c9ff3c9981c4f6f76eaed0f99,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[339],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__63_re_read_init_file() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[343],
#if PYTHON_VERSION >= 0x300
        mod_consts[344],
#endif
        codeobj_1aa1b97c448293d67ba30abce023d8d1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[342],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__64_abort() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__64_abort,
        mod_consts[345],
#if PYTHON_VERSION >= 0x300
        mod_consts[346],
#endif
        codeobj_9b1d417ba2b80ec04f442211367e5755,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[176],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__65_do_uppercase_version() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[348],
#if PYTHON_VERSION >= 0x300
        mod_consts[349],
#endif
        codeobj_391b1a68c0c61b2f8fcd500a2125a56f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[347],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__66_prefix_meta() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__66_prefix_meta,
        mod_consts[350],
#if PYTHON_VERSION >= 0x300
        mod_consts[351],
#endif
        codeobj_37cf552c3280cf9c8493068aa350f56b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[177],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__67_undo() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__67_undo,
        mod_consts[352],
#if PYTHON_VERSION >= 0x300
        mod_consts[353],
#endif
        codeobj_392b404f8fda0dd7c6a9e86574ce456b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[179],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__68_revert_line() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[355],
#if PYTHON_VERSION >= 0x300
        mod_consts[356],
#endif
        codeobj_2b4c3fd9b872fecd157883da3d1bfe52,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[354],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__69_tilde_expand() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[358],
#if PYTHON_VERSION >= 0x300
        mod_consts[359],
#endif
        codeobj_55310bce0221ba6d814b9b2668ffffb8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[357],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__6_end_of_line() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__6_end_of_line,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        mod_consts[241],
#endif
        codeobj_7049ee854a85c8647b45752d949a4be3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[51],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__70_set_mark() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__70_set_mark,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        mod_consts[360],
#endif
        codeobj_c378c1e77531c4596deae6fb70862035,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[181],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__71_exchange_point_and_mark() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[362],
#if PYTHON_VERSION >= 0x300
        mod_consts[363],
#endif
        codeobj_b59c836148a46c035254f5af756d09df,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[361],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__72_character_search() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[365],
#if PYTHON_VERSION >= 0x300
        mod_consts[366],
#endif
        codeobj_9b514f4b37c6f9b21bf5cbc144b74ec8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[364],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__73_character_search_backward() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[368],
#if PYTHON_VERSION >= 0x300
        mod_consts[369],
#endif
        codeobj_ebd51cec1f10f65a5d2b3f515825e25e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[367],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__74_insert_comment() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[371],
#if PYTHON_VERSION >= 0x300
        mod_consts[372],
#endif
        codeobj_2b7e3899cc1fe8a8c2920336cdbb14a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[370],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__75_dump_functions() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[374],
#if PYTHON_VERSION >= 0x300
        mod_consts[375],
#endif
        codeobj_c8eae4e61075a0c7d4c8bb680f312ca6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[373],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__76_dump_variables() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[377],
#if PYTHON_VERSION >= 0x300
        mod_consts[378],
#endif
        codeobj_53cd0c0c27e4013b090500e1d0d02d05,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[376],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__77_dump_macros() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[380],
#if PYTHON_VERSION >= 0x300
        mod_consts[381],
#endif
        codeobj_c080d403382f8cab795fd3510a888144,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[379],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__78_init_editing_mode() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__78_init_editing_mode,
        mod_consts[382],
#if PYTHON_VERSION >= 0x300
        mod_consts[383],
#endif
        codeobj_92a60720c23a2f1e670e46c7f10fa186,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[199],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__79_commonprefix() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__79_commonprefix,
        mod_consts[385],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6dc92a89fd3776fbafb91df61276ad7f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[202],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__7_forward_char() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__7_forward_char,
        mod_consts[52],
#if PYTHON_VERSION >= 0x300
        mod_consts[242],
#endif
        codeobj_6879bd35a9b3f19fbed4d6e3b7df0dbc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[53],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__8_backward_char() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__8_backward_char,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        mod_consts[243],
#endif
        codeobj_f1a74332028481b8becc2a03771dd0af,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[55],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__9_forward_word() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyreadline$modes$notemacs$$$function__9_forward_word,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        mod_consts[244],
#endif
        codeobj_eb6a72c2954f18946410e32f21959829,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyreadline$modes$notemacs,
        mod_consts[57],
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_pyreadline$modes$notemacs[] = {
    impl_pyreadline$modes$notemacs$$$function__1___init__,
    NULL,
    impl_pyreadline$modes$notemacs$$$function__3__readline_from_keyboard,
    impl_pyreadline$modes$notemacs$$$function__4_readline,
    impl_pyreadline$modes$notemacs$$$function__5_beginning_of_line,
    impl_pyreadline$modes$notemacs$$$function__6_end_of_line,
    impl_pyreadline$modes$notemacs$$$function__7_forward_char,
    impl_pyreadline$modes$notemacs$$$function__8_backward_char,
    impl_pyreadline$modes$notemacs$$$function__9_forward_word,
    impl_pyreadline$modes$notemacs$$$function__10_backward_word,
    impl_pyreadline$modes$notemacs$$$function__11_clear_screen,
    NULL,
    NULL,
    impl_pyreadline$modes$notemacs$$$function__14_previous_history,
    impl_pyreadline$modes$notemacs$$$function__15_next_history,
    impl_pyreadline$modes$notemacs$$$function__16_beginning_of_history,
    impl_pyreadline$modes$notemacs$$$function__17_end_of_history,
    impl_pyreadline$modes$notemacs$$$function__18__i_search,
    impl_pyreadline$modes$notemacs$$$function__19_reverse_search_history,
    impl_pyreadline$modes$notemacs$$$function__20_forward_search_history,
    impl_pyreadline$modes$notemacs$$$function__21_non_incremental_reverse_search_history,
    impl_pyreadline$modes$notemacs$$$function__22_non_incremental_forward_search_history,
    impl_pyreadline$modes$notemacs$$$function__23_history_search_forward,
    impl_pyreadline$modes$notemacs$$$function__24_history_search_backward,
    NULL,
    NULL,
    impl_pyreadline$modes$notemacs$$$function__27_delete_char,
    impl_pyreadline$modes$notemacs$$$function__28_backward_delete_char,
    NULL,
    impl_pyreadline$modes$notemacs$$$function__30_quoted_insert,
    impl_pyreadline$modes$notemacs$$$function__31_tab_insert,
    impl_pyreadline$modes$notemacs$$$function__32_self_insert,
    impl_pyreadline$modes$notemacs$$$function__33_transpose_chars,
    impl_pyreadline$modes$notemacs$$$function__34_transpose_words,
    impl_pyreadline$modes$notemacs$$$function__35_upcase_word,
    impl_pyreadline$modes$notemacs$$$function__36_downcase_word,
    impl_pyreadline$modes$notemacs$$$function__37_capitalize_word,
    NULL,
    impl_pyreadline$modes$notemacs$$$function__39_kill_line,
    impl_pyreadline$modes$notemacs$$$function__40_backward_kill_line,
    impl_pyreadline$modes$notemacs$$$function__41_unix_line_discard,
    impl_pyreadline$modes$notemacs$$$function__42_kill_whole_line,
    impl_pyreadline$modes$notemacs$$$function__43_kill_word,
    impl_pyreadline$modes$notemacs$$$function__44_backward_kill_word,
    impl_pyreadline$modes$notemacs$$$function__45_unix_word_rubout,
    NULL,
    NULL,
    NULL,
    impl_pyreadline$modes$notemacs$$$function__49_copy_region_to_clipboard,
    NULL,
    NULL,
    impl_pyreadline$modes$notemacs$$$function__52_paste,
    impl_pyreadline$modes$notemacs$$$function__53_paste_mulitline_code,
    impl_pyreadline$modes$notemacs$$$function__54_ipython_paste,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    impl_pyreadline$modes$notemacs$$$function__64_abort,
    NULL,
    impl_pyreadline$modes$notemacs$$$function__66_prefix_meta,
    impl_pyreadline$modes$notemacs$$$function__67_undo,
    NULL,
    NULL,
    impl_pyreadline$modes$notemacs$$$function__70_set_mark,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    impl_pyreadline$modes$notemacs$$$function__78_init_editing_mode,
    impl_pyreadline$modes$notemacs$$$function__79_commonprefix,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_pyreadline$modes$notemacs;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_pyreadline$modes$notemacs) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_pyreadline$modes$notemacs[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_pyreadline$modes$notemacs,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_pyreadline$modes$notemacs(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyreadline.modes.notemacs");

    // Store the module for future use.
    module_pyreadline$modes$notemacs = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("pyreadline.modes.notemacs: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pyreadline.modes.notemacs: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pyreadline.modes.notemacs: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyreadline$modes$notemacs\n");

    moduledict_pyreadline$modes$notemacs = MODULE_DICT(module_pyreadline$modes$notemacs);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyreadline$modes$notemacs,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyreadline$modes$notemacs,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[72]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyreadline$modes$notemacs,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyreadline$modes$notemacs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyreadline$modes$notemacs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyreadline$modes$notemacs);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_pyreadline$modes$notemacs);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_d5e9b0637e2c1d73f26ac324a4c3e1d2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_8f00c6535b13b35335dc9cca767268c3_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_2);
    }
    frame_d5e9b0637e2c1d73f26ac324a4c3e1d2 = MAKE_MODULE_FRAME(codeobj_d5e9b0637e2c1d73f26ac324a4c3e1d2, module_pyreadline$modes$notemacs);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d5e9b0637e2c1d73f26ac324a4c3e1d2);
    assert(Py_REFCNT(frame_d5e9b0637e2c1d73f26ac324a4c3e1d2) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[205]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[206], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[205]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[207], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD___FUTURE__();
        assert(!(tmp_assign_source_4 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_4);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_5 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[209]);
        }
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_6 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[210]);
        }
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT1(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_7 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[211]);
        }
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT1(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_7);
    }
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_8 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[213];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyreadline$modes$notemacs;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[15];
        frame_d5e9b0637e2c1d73f26ac324a4c3e1d2->m_frame.f_lineno = 11;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pyreadline$modes$notemacs,
                mod_consts[214],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[214]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[213];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pyreadline$modes$notemacs;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[215];
        tmp_level_value_2 = mod_consts[15];
        frame_d5e9b0637e2c1d73f26ac324a4c3e1d2->m_frame.f_lineno = 12;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_pyreadline$modes$notemacs,
                mod_consts[19],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[19]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[216];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pyreadline$modes$notemacs;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[15];
        frame_d5e9b0637e2c1d73f26ac324a4c3e1d2->m_frame.f_lineno = 13;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_import_name_from_3 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_pyreadline$modes$notemacs,
                mod_consts[217],
                mod_consts[15]
            );
        } else {
            tmp_import_name_from_3 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[217]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_pyreadline$modes$notemacs,
                mod_consts[12],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[12]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[218];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_pyreadline$modes$notemacs;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[15];
        frame_d5e9b0637e2c1d73f26ac324a4c3e1d2->m_frame.f_lineno = 14;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_import_name_from_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_pyreadline$modes$notemacs,
                mod_consts[217],
                mod_consts[15]
            );
        } else {
            tmp_import_name_from_5 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[217]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_pyreadline$modes$notemacs,
                mod_consts[102],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[102]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[72];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_pyreadline$modes$notemacs;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[219];
        tmp_level_value_5 = mod_consts[108];
        frame_d5e9b0637e2c1d73f26ac324a4c3e1d2->m_frame.f_lineno = 15;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_pyreadline$modes$notemacs,
                mod_consts[220],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[220]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_13);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[220]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[220]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[221]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        tmp_assign_source_14 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_14, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_15 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_2 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[15];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_17 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_17;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_3, mod_consts[222]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[222]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[0];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_d5e9b0637e2c1d73f26ac324a4c3e1d2->m_frame.f_lineno = 17;
        tmp_assign_source_18 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_18;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_5, mod_consts[223]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[224];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[225];
        tmp_getattr_default_1 = mod_consts[226];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[225]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 17;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_19;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_20;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[227];
        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[228], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[0];
        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[229], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        frame_8f00c6535b13b35335dc9cca767268c3_2 = MAKE_CLASS_FRAME(codeobj_8f00c6535b13b35335dc9cca767268c3, module_pyreadline$modes$notemacs, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_8f00c6535b13b35335dc9cca767268c3_2);
        assert(Py_REFCNT(frame_8f00c6535b13b35335dc9cca767268c3_2) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[230];
        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[231], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__1___init__();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[1], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__2___repr__();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[234], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__3__readline_from_keyboard();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[41], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[237];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__4_readline(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[238], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__5_beginning_of_line();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[48], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__6_end_of_line();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[50], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__7_forward_char();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[52], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__8_backward_char();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[54], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__9_forward_word();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[56], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__10_backward_word();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[58], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__11_clear_screen();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[198], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__12_redraw_current_line();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[248], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__13_accept_line();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[188], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__14_previous_history();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[63], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__15_next_history();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[65], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__16_beginning_of_history();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[67], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__17_end_of_history();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[69], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__18__i_search();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[103], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__19_reverse_search_history();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[104], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__20_forward_search_history();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[107], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__21_non_incremental_reverse_search_history();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[110], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__22_non_incremental_forward_search_history();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[260], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__23_history_search_forward();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[113], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__24_history_search_backward();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[115], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__25_yank_nth_arg();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[265], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__26_yank_last_arg();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[268], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__27_delete_char();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[117], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__28_backward_delete_char();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[119], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__29_forward_backward_delete_char();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[273], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__30_quoted_insert();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[275], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__31_tab_insert();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[277], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__32_self_insert();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[18], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__33_transpose_chars();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[129], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__34_transpose_words();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[131], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__35_upcase_word();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[133], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__36_downcase_word();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[135], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__37_capitalize_word();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[137], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__38_overwrite_mode();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[286], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__39_kill_line();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[139], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__40_backward_kill_line();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[141], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__41_unix_line_discard();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[143], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__42_kill_whole_line();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[145], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__43_kill_word();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[147], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__44_backward_kill_word();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[149], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__45_unix_word_rubout();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[151], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__46_delete_horizontal_space();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[296], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__47_kill_region();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[299], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__48_copy_region_as_kill();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[302], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__49_copy_region_to_clipboard();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[304], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__50_copy_backward_word();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[307], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__51_copy_forward_word();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[310], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__52_paste();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[312], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__53_paste_mulitline_code();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[314], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__54_ipython_paste();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[316], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__55_yank();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[319], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__56_yank_pop();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[322], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__57_digit_argument();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[325], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__58_universal_argument();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[328], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__59_delete_char_or_list();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[331], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__60_start_kbd_macro();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[334], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__61_end_kbd_macro();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[337], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__62_call_last_kbd_macro();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[340], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__63_re_read_init_file();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[343], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__64_abort();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[345], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__65_do_uppercase_version();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[348], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__66_prefix_meta();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[350], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__67_undo();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[352], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__68_revert_line();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[355], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__69_tilde_expand();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[358], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__70_set_mark();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[180], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__71_exchange_point_and_mark();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[362], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__72_character_search();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[365], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__73_character_search_backward();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[368], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__74_insert_comment();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[371], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__75_dump_functions();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[374], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__76_dump_variables();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[377], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__77_dump_macros();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[380], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__78_init_editing_mode();

        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[382], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8f00c6535b13b35335dc9cca767268c3_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_8f00c6535b13b35335dc9cca767268c3_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8f00c6535b13b35335dc9cca767268c3_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_8f00c6535b13b35335dc9cca767268c3_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_8f00c6535b13b35335dc9cca767268c3_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17, mod_consts[384], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[0];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_d5e9b0637e2c1d73f26ac324a4c3e1d2->m_frame.f_lineno = 17;
            tmp_assign_source_21 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_21;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_20 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_20);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17);
        locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17);
        locals_pyreadline$modes$notemacs$$$class__1_NotEmacsMode_17 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 17;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_20);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d5e9b0637e2c1d73f26ac324a4c3e1d2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d5e9b0637e2c1d73f26ac324a4c3e1d2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d5e9b0637e2c1d73f26ac324a4c3e1d2, exception_lineno);
    }



    assertFrameObject(frame_d5e9b0637e2c1d73f26ac324a4c3e1d2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_pyreadline$modes$notemacs$$$function__79_commonprefix();

        UPDATE_STRING_DICT1(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)mod_consts[385], tmp_assign_source_22);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyreadline.modes.notemacs", false);

    Py_INCREF(module_pyreadline$modes$notemacs);
    return module_pyreadline$modes$notemacs;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyreadline$modes$notemacs, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("pyreadline$modes$notemacs", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
