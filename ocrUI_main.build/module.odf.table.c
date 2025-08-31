/* Generated code for Python module 'odf.table'
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

/* The "module_odf$table" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_odf$table;
PyDictObject *moduledict_odf$table;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[216];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[216];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("odf.table"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 216; i++) {
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
void checkModuleConstants_odf$table(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 216; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_05ac0b7f831b73fdf9e1b6a68f143e84;
static PyCodeObject *codeobj_0a13855a869410c66e1823be2b8aab42;
static PyCodeObject *codeobj_dc2733823c4291abc7aa27ca454b1bc0;
static PyCodeObject *codeobj_84d08bcdcd000189527dc108dc085492;
static PyCodeObject *codeobj_15b7ce62b35c5db3ea72c2c5f2fc15b7;
static PyCodeObject *codeobj_57618dd9564960d6a1ff80b5a3be49ce;
static PyCodeObject *codeobj_760300474c58b1365b5c76dd48c2a2b5;
static PyCodeObject *codeobj_d1fce01fa715e0d15ac80c88bcc2f183;
static PyCodeObject *codeobj_5c023f84b1156953d896d72c31ffa1cc;
static PyCodeObject *codeobj_28fffbb02f561f86395495f89bffa3a7;
static PyCodeObject *codeobj_967a10a0f767df7e2aea6c74785af0d7;
static PyCodeObject *codeobj_81406e7c13a968a88a0c8977395e2b83;
static PyCodeObject *codeobj_b2db5770d0cde3b7beb6c9b2a9c74c3f;
static PyCodeObject *codeobj_2f22c41665261253103d0ca17c0a31fb;
static PyCodeObject *codeobj_43319f39840e38aecdf7f8656adc71bd;
static PyCodeObject *codeobj_deb6997a0074603c4286e9662d533e5d;
static PyCodeObject *codeobj_3cd0565d5663e3153f45cdbcbf00d5ad;
static PyCodeObject *codeobj_f89e99cca53237792641b2bc87bb910e;
static PyCodeObject *codeobj_cc9651072f998dd71fb97e8b065bc16b;
static PyCodeObject *codeobj_5d848efbbb714b272fa1d8ed5557762f;
static PyCodeObject *codeobj_8d5163d64b2575067bfdc87a94a53165;
static PyCodeObject *codeobj_cf3d16170a64e1a98ae547ce88949108;
static PyCodeObject *codeobj_aade796fc94cd90a3d2bc357af2e042a;
static PyCodeObject *codeobj_c930c311d1e61fa3fe7548ff2e197a35;
static PyCodeObject *codeobj_dfbc235f23006b9d83204c22cb529c16;
static PyCodeObject *codeobj_394835631fa965eebe85ec798a58b2c4;
static PyCodeObject *codeobj_b9d1fb9b33ef0cda4c49c580129cba48;
static PyCodeObject *codeobj_a416e4ab2d8b6b63d581c95f5758906a;
static PyCodeObject *codeobj_cee2cf5d563e52b014db2bd3484c10c8;
static PyCodeObject *codeobj_68abd0679288ffe5f8d56964b1ac6b28;
static PyCodeObject *codeobj_372b98f37e960cc3ed946ac22cc066a5;
static PyCodeObject *codeobj_927d8003cea23557ef79ebbb76935e2a;
static PyCodeObject *codeobj_b5d9f40a015381510ba6dc71ab28efa9;
static PyCodeObject *codeobj_ffa1c46be029f5474dd23b1f77ba5aa8;
static PyCodeObject *codeobj_ad7aa7884397306cfbe10220c4e50d68;
static PyCodeObject *codeobj_3236f5821420e24ef3949c5fd5b5f196;
static PyCodeObject *codeobj_d3d256a007368559ac4e5045c7fe405d;
static PyCodeObject *codeobj_45b35739de05a30b9bcb4589bcc301ca;
static PyCodeObject *codeobj_19d699ca4a42353baa70de4790c42145;
static PyCodeObject *codeobj_ac7ce4597290b68d46cbfc5ef3c66f26;
static PyCodeObject *codeobj_7b0cefb90baed623cba060462163777b;
static PyCodeObject *codeobj_fcaf55a4cc560419b9a745e203b6d66e;
static PyCodeObject *codeobj_7613ebf36c4269b12dd3e52054861b26;
static PyCodeObject *codeobj_c9260fa26a21e011aa7ded85ba5e7e54;
static PyCodeObject *codeobj_d084c39d851d29a040451e7228671a65;
static PyCodeObject *codeobj_b9756574c8dcd07d74a02be6a7cc567b;
static PyCodeObject *codeobj_1bd6be80b3e36a879d46e45a5646175d;
static PyCodeObject *codeobj_b1e9ecb3b830751595213a639bf7f3a0;
static PyCodeObject *codeobj_c79b3b384b7da0549aa1cd4c7ff0969b;
static PyCodeObject *codeobj_bd82c4ac27350c3e5e2d8bc63aa457f2;
static PyCodeObject *codeobj_b2c56737bff9339c5167a72576897e20;
static PyCodeObject *codeobj_46e545d54fd22c3bc2e5f5af98b294a2;
static PyCodeObject *codeobj_da7b4d7e27f0d948dadd2fcd283eb3d2;
static PyCodeObject *codeobj_a55aeb3d25b17e0aef15e70b40744fc2;
static PyCodeObject *codeobj_ac5c609b919b16b445355d9cf9c0de37;
static PyCodeObject *codeobj_c69ca32eee1553db91fa39ab8a110ade;
static PyCodeObject *codeobj_b44c68028fbe0551f1b251be9c5cc7f5;
static PyCodeObject *codeobj_cb7f5ef793868ddf339dde5326d3b528;
static PyCodeObject *codeobj_f5dc9de45fa93dd405fcf15b214c9768;
static PyCodeObject *codeobj_f6b1f8fd26f4154f2225f0b1efb6283e;
static PyCodeObject *codeobj_a63a1ce7cddda0badae814aaa6cbbea6;
static PyCodeObject *codeobj_80016ed03fce0c0bdd89769f29e0e514;
static PyCodeObject *codeobj_861ecc31882624927eab588210bdb787;
static PyCodeObject *codeobj_e8a9db330b73fdc83a471ca9b7b761f9;
static PyCodeObject *codeobj_32cf5eaabbc1b8b2f5ea08191f7736ba;
static PyCodeObject *codeobj_4dff9ab5676c1cd0ca58c793515e0812;
static PyCodeObject *codeobj_41967ae2952a92fbd92affb0dfa2e044;
static PyCodeObject *codeobj_fd9edbeb30d4220410a402e83d6f9ee3;
static PyCodeObject *codeobj_2c1f09de378c3c29a17205215770e0e8;
static PyCodeObject *codeobj_4a94d86ee563b255a4b27cb39daa56d1;
static PyCodeObject *codeobj_908e590f319b7e95409aab1618312dcd;
static PyCodeObject *codeobj_74e32e2d0d77f84e07e8fe03da8763b6;
static PyCodeObject *codeobj_9aff25202be21bd1c1312ee271be8d72;
static PyCodeObject *codeobj_1c172e9584a4a00a972ac150eea9469f;
static PyCodeObject *codeobj_ff1fe1e1007543b7052ff849c04cd464;
static PyCodeObject *codeobj_0c27583d1a8c6b041b39443acb8678fe;
static PyCodeObject *codeobj_e8c9dab504d6ab63ad0f225443e95fb7;
static PyCodeObject *codeobj_ef5e36d17392a253616998aca0e14a3d;
static PyCodeObject *codeobj_367a9bd7123ee03a04e4a643ff82fee8;
static PyCodeObject *codeobj_cdd27b5060b3d7810a2f403211561844;
static PyCodeObject *codeobj_d7fcc1f8b018bc396e61c979ba2eea9c;
static PyCodeObject *codeobj_c8d6c8114e694867c0eb1663459aa615;
static PyCodeObject *codeobj_fa970a9bb0a84327774007d085d0efce;
static PyCodeObject *codeobj_d027ae5b96951774d75511e10fdf4d2d;
static PyCodeObject *codeobj_974e80ef487c2668beaddb8992a20720;
static PyCodeObject *codeobj_5af3048db94a6caf523ecf61c110ef5f;
static PyCodeObject *codeobj_6eddad22fc264dc96f9426b96e6d9006;
static PyCodeObject *codeobj_9d75df27a9bba0175cc907fe2ebb8d2d;
static PyCodeObject *codeobj_809a8a375cddba1dbde14f1c966b5bba;
static PyCodeObject *codeobj_2c8a986a4c83d47225ca2f289b0a79c4;
static PyCodeObject *codeobj_7c4438b537b1d73d6abedcffc8c5ec52;
static PyCodeObject *codeobj_c0072e7c9f46fc9426b57e6a352e6ecd;
static PyCodeObject *codeobj_a7608cc6989ab57ea5a33125ad687230;
static PyCodeObject *codeobj_90b449830cce2b02f408b4a6b861db96;
static PyCodeObject *codeobj_fc8d998e53ba8eb5c655817c62792f1b;
static PyCodeObject *codeobj_7adc24dc3ad3a99ceaf8bd596dd1836a;
static PyCodeObject *codeobj_2c48003fd1ba86cf703eaa6360ef428f;
static PyCodeObject *codeobj_33d8b88f1f6fe05113d8accddc117ff4;
static PyCodeObject *codeobj_205a65826cb32bb28150c4c6c4a67427;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[212]); CHECK_OBJECT(module_filename_obj);
    codeobj_05ac0b7f831b73fdf9e1b6a68f143e84 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[213], mod_consts[213], NULL, NULL, 0, 0, 0);
    codeobj_0a13855a869410c66e1823be2b8aab42 = MAKE_CODE_OBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[114], mod_consts[114], mod_consts[214], NULL, 0, 0, 0);
    codeobj_dc2733823c4291abc7aa27ca454b1bc0 = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[115], mod_consts[115], mod_consts[214], NULL, 0, 0, 0);
    codeobj_84d08bcdcd000189527dc108dc085492 = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[116], mod_consts[116], mod_consts[214], NULL, 0, 0, 0);
    codeobj_15b7ce62b35c5db3ea72c2c5f2fc15b7 = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[117], mod_consts[117], mod_consts[214], NULL, 0, 0, 0);
    codeobj_57618dd9564960d6a1ff80b5a3be49ce = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[118], mod_consts[118], mod_consts[214], NULL, 0, 0, 0);
    codeobj_760300474c58b1365b5c76dd48c2a2b5 = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[119], mod_consts[119], mod_consts[214], NULL, 0, 0, 0);
    codeobj_d1fce01fa715e0d15ac80c88bcc2f183 = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[120], mod_consts[120], mod_consts[214], NULL, 0, 0, 0);
    codeobj_5c023f84b1156953d896d72c31ffa1cc = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[121], mod_consts[121], mod_consts[214], NULL, 0, 0, 0);
    codeobj_28fffbb02f561f86395495f89bffa3a7 = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[122], mod_consts[122], mod_consts[214], NULL, 0, 0, 0);
    codeobj_967a10a0f767df7e2aea6c74785af0d7 = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[123], mod_consts[123], mod_consts[214], NULL, 0, 0, 0);
    codeobj_81406e7c13a968a88a0c8977395e2b83 = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[124], mod_consts[124], mod_consts[214], NULL, 0, 0, 0);
    codeobj_b2db5770d0cde3b7beb6c9b2a9c74c3f = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[125], mod_consts[125], mod_consts[214], NULL, 0, 0, 0);
    codeobj_2f22c41665261253103d0ca17c0a31fb = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[126], mod_consts[126], mod_consts[214], NULL, 0, 0, 0);
    codeobj_43319f39840e38aecdf7f8656adc71bd = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[127], mod_consts[127], mod_consts[214], NULL, 0, 0, 0);
    codeobj_deb6997a0074603c4286e9662d533e5d = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[128], mod_consts[128], mod_consts[214], NULL, 0, 0, 0);
    codeobj_3cd0565d5663e3153f45cdbcbf00d5ad = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[129], mod_consts[129], mod_consts[214], NULL, 0, 0, 0);
    codeobj_f89e99cca53237792641b2bc87bb910e = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[130], mod_consts[130], mod_consts[214], NULL, 0, 0, 0);
    codeobj_cc9651072f998dd71fb97e8b065bc16b = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[131], mod_consts[131], mod_consts[214], NULL, 0, 0, 0);
    codeobj_5d848efbbb714b272fa1d8ed5557762f = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[132], mod_consts[132], mod_consts[214], NULL, 0, 0, 0);
    codeobj_8d5163d64b2575067bfdc87a94a53165 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[133], mod_consts[133], mod_consts[214], NULL, 0, 0, 0);
    codeobj_cf3d16170a64e1a98ae547ce88949108 = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[134], mod_consts[134], mod_consts[214], NULL, 0, 0, 0);
    codeobj_aade796fc94cd90a3d2bc357af2e042a = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[135], mod_consts[135], mod_consts[214], NULL, 0, 0, 0);
    codeobj_c930c311d1e61fa3fe7548ff2e197a35 = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[136], mod_consts[136], mod_consts[214], NULL, 0, 0, 0);
    codeobj_dfbc235f23006b9d83204c22cb529c16 = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[137], mod_consts[137], mod_consts[214], NULL, 0, 0, 0);
    codeobj_394835631fa965eebe85ec798a58b2c4 = MAKE_CODE_OBJECT(module_filename_obj, 99, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[138], mod_consts[138], mod_consts[214], NULL, 0, 0, 0);
    codeobj_b9d1fb9b33ef0cda4c49c580129cba48 = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[139], mod_consts[139], mod_consts[214], NULL, 0, 0, 0);
    codeobj_a416e4ab2d8b6b63d581c95f5758906a = MAKE_CODE_OBJECT(module_filename_obj, 105, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[140], mod_consts[140], mod_consts[214], NULL, 0, 0, 0);
    codeobj_cee2cf5d563e52b014db2bd3484c10c8 = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[141], mod_consts[141], mod_consts[214], NULL, 0, 0, 0);
    codeobj_68abd0679288ffe5f8d56964b1ac6b28 = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[142], mod_consts[142], mod_consts[214], NULL, 0, 0, 0);
    codeobj_372b98f37e960cc3ed946ac22cc066a5 = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[143], mod_consts[143], mod_consts[214], NULL, 0, 0, 0);
    codeobj_927d8003cea23557ef79ebbb76935e2a = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[144], mod_consts[144], mod_consts[214], NULL, 0, 0, 0);
    codeobj_b5d9f40a015381510ba6dc71ab28efa9 = MAKE_CODE_OBJECT(module_filename_obj, 120, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[145], mod_consts[145], mod_consts[214], NULL, 0, 0, 0);
    codeobj_ffa1c46be029f5474dd23b1f77ba5aa8 = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[146], mod_consts[146], mod_consts[214], NULL, 0, 0, 0);
    codeobj_ad7aa7884397306cfbe10220c4e50d68 = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[147], mod_consts[147], mod_consts[214], NULL, 0, 0, 0);
    codeobj_3236f5821420e24ef3949c5fd5b5f196 = MAKE_CODE_OBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[148], mod_consts[148], mod_consts[214], NULL, 0, 0, 0);
    codeobj_d3d256a007368559ac4e5045c7fe405d = MAKE_CODE_OBJECT(module_filename_obj, 132, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[149], mod_consts[149], mod_consts[214], NULL, 0, 0, 0);
    codeobj_45b35739de05a30b9bcb4589bcc301ca = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[150], mod_consts[150], mod_consts[214], NULL, 0, 0, 0);
    codeobj_19d699ca4a42353baa70de4790c42145 = MAKE_CODE_OBJECT(module_filename_obj, 138, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[151], mod_consts[151], mod_consts[214], NULL, 0, 0, 0);
    codeobj_ac7ce4597290b68d46cbfc5ef3c66f26 = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[152], mod_consts[152], mod_consts[214], NULL, 0, 0, 0);
    codeobj_7b0cefb90baed623cba060462163777b = MAKE_CODE_OBJECT(module_filename_obj, 144, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[153], mod_consts[153], mod_consts[214], NULL, 0, 0, 0);
    codeobj_fcaf55a4cc560419b9a745e203b6d66e = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[154], mod_consts[154], mod_consts[214], NULL, 0, 0, 0);
    codeobj_7613ebf36c4269b12dd3e52054861b26 = MAKE_CODE_OBJECT(module_filename_obj, 150, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[155], mod_consts[155], mod_consts[214], NULL, 0, 0, 0);
    codeobj_c9260fa26a21e011aa7ded85ba5e7e54 = MAKE_CODE_OBJECT(module_filename_obj, 153, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[156], mod_consts[156], mod_consts[214], NULL, 0, 0, 0);
    codeobj_d084c39d851d29a040451e7228671a65 = MAKE_CODE_OBJECT(module_filename_obj, 156, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[157], mod_consts[157], mod_consts[214], NULL, 0, 0, 0);
    codeobj_b9756574c8dcd07d74a02be6a7cc567b = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[158], mod_consts[158], mod_consts[214], NULL, 0, 0, 0);
    codeobj_1bd6be80b3e36a879d46e45a5646175d = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[159], mod_consts[159], mod_consts[214], NULL, 0, 0, 0);
    codeobj_b1e9ecb3b830751595213a639bf7f3a0 = MAKE_CODE_OBJECT(module_filename_obj, 165, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[160], mod_consts[160], mod_consts[214], NULL, 0, 0, 0);
    codeobj_c79b3b384b7da0549aa1cd4c7ff0969b = MAKE_CODE_OBJECT(module_filename_obj, 168, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[161], mod_consts[161], mod_consts[214], NULL, 0, 0, 0);
    codeobj_bd82c4ac27350c3e5e2d8bc63aa457f2 = MAKE_CODE_OBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[162], mod_consts[162], mod_consts[214], NULL, 0, 0, 0);
    codeobj_b2c56737bff9339c5167a72576897e20 = MAKE_CODE_OBJECT(module_filename_obj, 174, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[163], mod_consts[163], mod_consts[214], NULL, 0, 0, 0);
    codeobj_46e545d54fd22c3bc2e5f5af98b294a2 = MAKE_CODE_OBJECT(module_filename_obj, 177, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[164], mod_consts[164], mod_consts[214], NULL, 0, 0, 0);
    codeobj_da7b4d7e27f0d948dadd2fcd283eb3d2 = MAKE_CODE_OBJECT(module_filename_obj, 180, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[165], mod_consts[165], mod_consts[214], NULL, 0, 0, 0);
    codeobj_a55aeb3d25b17e0aef15e70b40744fc2 = MAKE_CODE_OBJECT(module_filename_obj, 183, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[166], mod_consts[166], mod_consts[214], NULL, 0, 0, 0);
    codeobj_ac5c609b919b16b445355d9cf9c0de37 = MAKE_CODE_OBJECT(module_filename_obj, 186, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[167], mod_consts[167], mod_consts[214], NULL, 0, 0, 0);
    codeobj_c69ca32eee1553db91fa39ab8a110ade = MAKE_CODE_OBJECT(module_filename_obj, 189, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[168], mod_consts[168], mod_consts[214], NULL, 0, 0, 0);
    codeobj_b44c68028fbe0551f1b251be9c5cc7f5 = MAKE_CODE_OBJECT(module_filename_obj, 192, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[169], mod_consts[169], mod_consts[214], NULL, 0, 0, 0);
    codeobj_cb7f5ef793868ddf339dde5326d3b528 = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[170], mod_consts[170], mod_consts[214], NULL, 0, 0, 0);
    codeobj_f5dc9de45fa93dd405fcf15b214c9768 = MAKE_CODE_OBJECT(module_filename_obj, 198, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[171], mod_consts[171], mod_consts[214], NULL, 0, 0, 0);
    codeobj_f6b1f8fd26f4154f2225f0b1efb6283e = MAKE_CODE_OBJECT(module_filename_obj, 201, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[214], NULL, 0, 0, 0);
    codeobj_a63a1ce7cddda0badae814aaa6cbbea6 = MAKE_CODE_OBJECT(module_filename_obj, 204, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[173], mod_consts[173], mod_consts[214], NULL, 0, 0, 0);
    codeobj_80016ed03fce0c0bdd89769f29e0e514 = MAKE_CODE_OBJECT(module_filename_obj, 207, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[174], mod_consts[174], mod_consts[214], NULL, 0, 0, 0);
    codeobj_861ecc31882624927eab588210bdb787 = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[175], mod_consts[175], mod_consts[214], NULL, 0, 0, 0);
    codeobj_e8a9db330b73fdc83a471ca9b7b761f9 = MAKE_CODE_OBJECT(module_filename_obj, 213, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[176], mod_consts[176], mod_consts[214], NULL, 0, 0, 0);
    codeobj_32cf5eaabbc1b8b2f5ea08191f7736ba = MAKE_CODE_OBJECT(module_filename_obj, 216, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[177], mod_consts[177], mod_consts[214], NULL, 0, 0, 0);
    codeobj_4dff9ab5676c1cd0ca58c793515e0812 = MAKE_CODE_OBJECT(module_filename_obj, 219, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[178], mod_consts[178], mod_consts[214], NULL, 0, 0, 0);
    codeobj_41967ae2952a92fbd92affb0dfa2e044 = MAKE_CODE_OBJECT(module_filename_obj, 222, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[179], mod_consts[179], mod_consts[214], NULL, 0, 0, 0);
    codeobj_fd9edbeb30d4220410a402e83d6f9ee3 = MAKE_CODE_OBJECT(module_filename_obj, 225, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[180], mod_consts[180], mod_consts[214], NULL, 0, 0, 0);
    codeobj_2c1f09de378c3c29a17205215770e0e8 = MAKE_CODE_OBJECT(module_filename_obj, 228, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[181], mod_consts[181], mod_consts[214], NULL, 0, 0, 0);
    codeobj_4a94d86ee563b255a4b27cb39daa56d1 = MAKE_CODE_OBJECT(module_filename_obj, 231, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[182], mod_consts[182], mod_consts[214], NULL, 0, 0, 0);
    codeobj_908e590f319b7e95409aab1618312dcd = MAKE_CODE_OBJECT(module_filename_obj, 234, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[183], mod_consts[183], mod_consts[214], NULL, 0, 0, 0);
    codeobj_74e32e2d0d77f84e07e8fe03da8763b6 = MAKE_CODE_OBJECT(module_filename_obj, 237, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[184], mod_consts[184], mod_consts[214], NULL, 0, 0, 0);
    codeobj_9aff25202be21bd1c1312ee271be8d72 = MAKE_CODE_OBJECT(module_filename_obj, 240, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[185], mod_consts[185], mod_consts[214], NULL, 0, 0, 0);
    codeobj_1c172e9584a4a00a972ac150eea9469f = MAKE_CODE_OBJECT(module_filename_obj, 243, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[186], mod_consts[186], mod_consts[214], NULL, 0, 0, 0);
    codeobj_ff1fe1e1007543b7052ff849c04cd464 = MAKE_CODE_OBJECT(module_filename_obj, 246, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[187], mod_consts[187], mod_consts[214], NULL, 0, 0, 0);
    codeobj_0c27583d1a8c6b041b39443acb8678fe = MAKE_CODE_OBJECT(module_filename_obj, 249, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[188], mod_consts[188], mod_consts[214], NULL, 0, 0, 0);
    codeobj_e8c9dab504d6ab63ad0f225443e95fb7 = MAKE_CODE_OBJECT(module_filename_obj, 252, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[189], mod_consts[189], mod_consts[214], NULL, 0, 0, 0);
    codeobj_ef5e36d17392a253616998aca0e14a3d = MAKE_CODE_OBJECT(module_filename_obj, 255, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[190], mod_consts[190], mod_consts[214], NULL, 0, 0, 0);
    codeobj_367a9bd7123ee03a04e4a643ff82fee8 = MAKE_CODE_OBJECT(module_filename_obj, 258, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[191], mod_consts[191], mod_consts[214], NULL, 0, 0, 0);
    codeobj_cdd27b5060b3d7810a2f403211561844 = MAKE_CODE_OBJECT(module_filename_obj, 261, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[192], mod_consts[192], mod_consts[214], NULL, 0, 0, 0);
    codeobj_d7fcc1f8b018bc396e61c979ba2eea9c = MAKE_CODE_OBJECT(module_filename_obj, 264, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[193], mod_consts[193], mod_consts[214], NULL, 0, 0, 0);
    codeobj_c8d6c8114e694867c0eb1663459aa615 = MAKE_CODE_OBJECT(module_filename_obj, 267, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[194], mod_consts[194], mod_consts[214], NULL, 0, 0, 0);
    codeobj_fa970a9bb0a84327774007d085d0efce = MAKE_CODE_OBJECT(module_filename_obj, 270, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[195], mod_consts[195], mod_consts[214], NULL, 0, 0, 0);
    codeobj_d027ae5b96951774d75511e10fdf4d2d = MAKE_CODE_OBJECT(module_filename_obj, 273, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[196], mod_consts[196], mod_consts[214], NULL, 0, 0, 0);
    codeobj_974e80ef487c2668beaddb8992a20720 = MAKE_CODE_OBJECT(module_filename_obj, 276, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[197], mod_consts[197], mod_consts[214], NULL, 0, 0, 0);
    codeobj_5af3048db94a6caf523ecf61c110ef5f = MAKE_CODE_OBJECT(module_filename_obj, 279, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[198], mod_consts[198], mod_consts[214], NULL, 0, 0, 0);
    codeobj_6eddad22fc264dc96f9426b96e6d9006 = MAKE_CODE_OBJECT(module_filename_obj, 282, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[199], mod_consts[199], mod_consts[214], NULL, 0, 0, 0);
    codeobj_9d75df27a9bba0175cc907fe2ebb8d2d = MAKE_CODE_OBJECT(module_filename_obj, 285, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[200], mod_consts[200], mod_consts[214], NULL, 0, 0, 0);
    codeobj_809a8a375cddba1dbde14f1c966b5bba = MAKE_CODE_OBJECT(module_filename_obj, 288, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[201], mod_consts[201], mod_consts[214], NULL, 0, 0, 0);
    codeobj_2c8a986a4c83d47225ca2f289b0a79c4 = MAKE_CODE_OBJECT(module_filename_obj, 291, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[202], mod_consts[202], mod_consts[214], NULL, 0, 0, 0);
    codeobj_7c4438b537b1d73d6abedcffc8c5ec52 = MAKE_CODE_OBJECT(module_filename_obj, 294, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[203], mod_consts[203], mod_consts[214], NULL, 0, 0, 0);
    codeobj_c0072e7c9f46fc9426b57e6a352e6ecd = MAKE_CODE_OBJECT(module_filename_obj, 297, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[204], mod_consts[204], mod_consts[214], NULL, 0, 0, 0);
    codeobj_a7608cc6989ab57ea5a33125ad687230 = MAKE_CODE_OBJECT(module_filename_obj, 300, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[205], mod_consts[205], mod_consts[214], NULL, 0, 0, 0);
    codeobj_90b449830cce2b02f408b4a6b861db96 = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[206], mod_consts[206], mod_consts[214], NULL, 0, 0, 0);
    codeobj_fc8d998e53ba8eb5c655817c62792f1b = MAKE_CODE_OBJECT(module_filename_obj, 306, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[207], mod_consts[207], mod_consts[214], NULL, 0, 0, 0);
    codeobj_7adc24dc3ad3a99ceaf8bd596dd1836a = MAKE_CODE_OBJECT(module_filename_obj, 310, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[208], mod_consts[208], mod_consts[214], NULL, 0, 0, 0);
    codeobj_2c48003fd1ba86cf703eaa6360ef428f = MAKE_CODE_OBJECT(module_filename_obj, 313, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[209], mod_consts[209], mod_consts[214], NULL, 0, 0, 0);
    codeobj_33d8b88f1f6fe05113d8accddc117ff4 = MAKE_CODE_OBJECT(module_filename_obj, 316, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[210], mod_consts[210], mod_consts[214], NULL, 0, 0, 0);
    codeobj_205a65826cb32bb28150c4c6c4a67427 = MAKE_CODE_OBJECT(module_filename_obj, 319, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[211], mod_consts[211], mod_consts[214], NULL, 0, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__11_complex_call_helper_keywords_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_odf$table$$$function__10_Consolidation();


static PyObject *MAKE_FUNCTION_odf$table$$$function__11_ContentValidation();


static PyObject *MAKE_FUNCTION_odf$table$$$function__12_ContentValidations();


static PyObject *MAKE_FUNCTION_odf$table$$$function__13_CoveredTableCell();


static PyObject *MAKE_FUNCTION_odf$table$$$function__14_CutOffs();


static PyObject *MAKE_FUNCTION_odf$table$$$function__15_DataPilotDisplayInfo();


static PyObject *MAKE_FUNCTION_odf$table$$$function__16_DataPilotField();


static PyObject *MAKE_FUNCTION_odf$table$$$function__17_DataPilotFieldReference();


static PyObject *MAKE_FUNCTION_odf$table$$$function__18_DataPilotGroup();


static PyObject *MAKE_FUNCTION_odf$table$$$function__19_DataPilotGroupMember();


static PyObject *MAKE_FUNCTION_odf$table$$$function__1_Background();


static PyObject *MAKE_FUNCTION_odf$table$$$function__20_DataPilotGroups();


static PyObject *MAKE_FUNCTION_odf$table$$$function__21_DataPilotLayoutInfo();


static PyObject *MAKE_FUNCTION_odf$table$$$function__22_DataPilotLevel();


static PyObject *MAKE_FUNCTION_odf$table$$$function__23_DataPilotMember();


static PyObject *MAKE_FUNCTION_odf$table$$$function__24_DataPilotMembers();


static PyObject *MAKE_FUNCTION_odf$table$$$function__25_DataPilotSortInfo();


static PyObject *MAKE_FUNCTION_odf$table$$$function__26_DataPilotSubtotal();


static PyObject *MAKE_FUNCTION_odf$table$$$function__27_DataPilotSubtotals();


static PyObject *MAKE_FUNCTION_odf$table$$$function__28_DataPilotTable();


static PyObject *MAKE_FUNCTION_odf$table$$$function__29_DataPilotTables();


static PyObject *MAKE_FUNCTION_odf$table$$$function__2_Body();


static PyObject *MAKE_FUNCTION_odf$table$$$function__30_DatabaseRange();


static PyObject *MAKE_FUNCTION_odf$table$$$function__31_DatabaseRanges();


static PyObject *MAKE_FUNCTION_odf$table$$$function__32_DatabaseSourceQuery();


static PyObject *MAKE_FUNCTION_odf$table$$$function__33_DatabaseSourceSql();


static PyObject *MAKE_FUNCTION_odf$table$$$function__34_DatabaseSourceTable();


static PyObject *MAKE_FUNCTION_odf$table$$$function__35_DdeLink();


static PyObject *MAKE_FUNCTION_odf$table$$$function__36_DdeLinks();


static PyObject *MAKE_FUNCTION_odf$table$$$function__37_Deletion();


static PyObject *MAKE_FUNCTION_odf$table$$$function__38_Deletions();


static PyObject *MAKE_FUNCTION_odf$table$$$function__39_Dependencies();


static PyObject *MAKE_FUNCTION_odf$table$$$function__3_CalculationSettings();


static PyObject *MAKE_FUNCTION_odf$table$$$function__40_Dependency();


static PyObject *MAKE_FUNCTION_odf$table$$$function__41_Desc();


static PyObject *MAKE_FUNCTION_odf$table$$$function__42_Detective();


static PyObject *MAKE_FUNCTION_odf$table$$$function__43_ErrorMacro();


static PyObject *MAKE_FUNCTION_odf$table$$$function__44_ErrorMessage();


static PyObject *MAKE_FUNCTION_odf$table$$$function__45_EvenColumns();


static PyObject *MAKE_FUNCTION_odf$table$$$function__46_EvenRows();


static PyObject *MAKE_FUNCTION_odf$table$$$function__47_Filter();


static PyObject *MAKE_FUNCTION_odf$table$$$function__48_FilterAnd();


static PyObject *MAKE_FUNCTION_odf$table$$$function__49_FilterCondition();


static PyObject *MAKE_FUNCTION_odf$table$$$function__4_CellAddress();


static PyObject *MAKE_FUNCTION_odf$table$$$function__50_FilterOr();


static PyObject *MAKE_FUNCTION_odf$table$$$function__51_FilterSetItem();


static PyObject *MAKE_FUNCTION_odf$table$$$function__52_FirstColumn();


static PyObject *MAKE_FUNCTION_odf$table$$$function__53_FirstRow();


static PyObject *MAKE_FUNCTION_odf$table$$$function__54_HelpMessage();


static PyObject *MAKE_FUNCTION_odf$table$$$function__55_HighlightedRange();


static PyObject *MAKE_FUNCTION_odf$table$$$function__56_Insertion();


static PyObject *MAKE_FUNCTION_odf$table$$$function__57_InsertionCutOff();


static PyObject *MAKE_FUNCTION_odf$table$$$function__58_Iteration();


static PyObject *MAKE_FUNCTION_odf$table$$$function__59_LabelRange();


static PyObject *MAKE_FUNCTION_odf$table$$$function__5_CellContentChange();


static PyObject *MAKE_FUNCTION_odf$table$$$function__60_LabelRanges();


static PyObject *MAKE_FUNCTION_odf$table$$$function__61_LastColumn();


static PyObject *MAKE_FUNCTION_odf$table$$$function__62_LastRow();


static PyObject *MAKE_FUNCTION_odf$table$$$function__63_Movement();


static PyObject *MAKE_FUNCTION_odf$table$$$function__64_MovementCutOff();


static PyObject *MAKE_FUNCTION_odf$table$$$function__65_NamedExpression();


static PyObject *MAKE_FUNCTION_odf$table$$$function__66_NamedExpressions();


static PyObject *MAKE_FUNCTION_odf$table$$$function__67_NamedRange();


static PyObject *MAKE_FUNCTION_odf$table$$$function__68_NullDate();


static PyObject *MAKE_FUNCTION_odf$table$$$function__69_OddColumns();


static PyObject *MAKE_FUNCTION_odf$table$$$function__6_CellContentDeletion();


static PyObject *MAKE_FUNCTION_odf$table$$$function__70_OddRows();


static PyObject *MAKE_FUNCTION_odf$table$$$function__71_Operation();


static PyObject *MAKE_FUNCTION_odf$table$$$function__72_Previous();


static PyObject *MAKE_FUNCTION_odf$table$$$function__73_Scenario();


static PyObject *MAKE_FUNCTION_odf$table$$$function__74_Shapes();


static PyObject *MAKE_FUNCTION_odf$table$$$function__75_Sort();


static PyObject *MAKE_FUNCTION_odf$table$$$function__76_SortBy();


static PyObject *MAKE_FUNCTION_odf$table$$$function__77_SortGroups();


static PyObject *MAKE_FUNCTION_odf$table$$$function__78_SourceCellRange();


static PyObject *MAKE_FUNCTION_odf$table$$$function__79_SourceRangeAddress();


static PyObject *MAKE_FUNCTION_odf$table$$$function__7_CellRangeSource();


static PyObject *MAKE_FUNCTION_odf$table$$$function__80_SourceService();


static PyObject *MAKE_FUNCTION_odf$table$$$function__81_SubtotalField();


static PyObject *MAKE_FUNCTION_odf$table$$$function__82_SubtotalRule();


static PyObject *MAKE_FUNCTION_odf$table$$$function__83_SubtotalRules();


static PyObject *MAKE_FUNCTION_odf$table$$$function__84_Table();


static PyObject *MAKE_FUNCTION_odf$table$$$function__85_TableCell();


static PyObject *MAKE_FUNCTION_odf$table$$$function__86_TableColumn();


static PyObject *MAKE_FUNCTION_odf$table$$$function__87_TableColumnGroup();


static PyObject *MAKE_FUNCTION_odf$table$$$function__88_TableColumns();


static PyObject *MAKE_FUNCTION_odf$table$$$function__89_TableHeaderColumns();


static PyObject *MAKE_FUNCTION_odf$table$$$function__8_ChangeDeletion();


static PyObject *MAKE_FUNCTION_odf$table$$$function__90_TableHeaderRows();


static PyObject *MAKE_FUNCTION_odf$table$$$function__91_TableRow();


static PyObject *MAKE_FUNCTION_odf$table$$$function__92_TableRowGroup();


static PyObject *MAKE_FUNCTION_odf$table$$$function__93_TableRows();


static PyObject *MAKE_FUNCTION_odf$table$$$function__94_TableSource();


static PyObject *MAKE_FUNCTION_odf$table$$$function__95_TableTemplate();


static PyObject *MAKE_FUNCTION_odf$table$$$function__96_TargetRangeAddress();


static PyObject *MAKE_FUNCTION_odf$table$$$function__97_Title();


static PyObject *MAKE_FUNCTION_odf$table$$$function__98_TrackedChanges();


static PyObject *MAKE_FUNCTION_odf$table$$$function__9_ChangeTrackTableCell();


// The module function definitions.
static PyObject *impl_odf$table$$$function__1_Background(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_0a13855a869410c66e1823be2b8aab42;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_0a13855a869410c66e1823be2b8aab42 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0a13855a869410c66e1823be2b8aab42)) {
        Py_XDECREF(cache_frame_0a13855a869410c66e1823be2b8aab42);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0a13855a869410c66e1823be2b8aab42 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0a13855a869410c66e1823be2b8aab42 = MAKE_FUNCTION_FRAME(codeobj_0a13855a869410c66e1823be2b8aab42, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0a13855a869410c66e1823be2b8aab42->m_type_description == NULL);
    frame_0a13855a869410c66e1823be2b8aab42 = cache_frame_0a13855a869410c66e1823be2b8aab42;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0a13855a869410c66e1823be2b8aab42);
    assert(Py_REFCNT(frame_0a13855a869410c66e1823be2b8aab42) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[3];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0a13855a869410c66e1823be2b8aab42, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0a13855a869410c66e1823be2b8aab42->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0a13855a869410c66e1823be2b8aab42, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0a13855a869410c66e1823be2b8aab42,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_0a13855a869410c66e1823be2b8aab42 == cache_frame_0a13855a869410c66e1823be2b8aab42) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0a13855a869410c66e1823be2b8aab42);
        cache_frame_0a13855a869410c66e1823be2b8aab42 = NULL;
    }

    assertFrameObject(frame_0a13855a869410c66e1823be2b8aab42);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__2_Body(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_dc2733823c4291abc7aa27ca454b1bc0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_dc2733823c4291abc7aa27ca454b1bc0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dc2733823c4291abc7aa27ca454b1bc0)) {
        Py_XDECREF(cache_frame_dc2733823c4291abc7aa27ca454b1bc0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dc2733823c4291abc7aa27ca454b1bc0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dc2733823c4291abc7aa27ca454b1bc0 = MAKE_FUNCTION_FRAME(codeobj_dc2733823c4291abc7aa27ca454b1bc0, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dc2733823c4291abc7aa27ca454b1bc0->m_type_description == NULL);
    frame_dc2733823c4291abc7aa27ca454b1bc0 = cache_frame_dc2733823c4291abc7aa27ca454b1bc0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dc2733823c4291abc7aa27ca454b1bc0);
    assert(Py_REFCNT(frame_dc2733823c4291abc7aa27ca454b1bc0) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[4];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dc2733823c4291abc7aa27ca454b1bc0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dc2733823c4291abc7aa27ca454b1bc0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dc2733823c4291abc7aa27ca454b1bc0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dc2733823c4291abc7aa27ca454b1bc0,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_dc2733823c4291abc7aa27ca454b1bc0 == cache_frame_dc2733823c4291abc7aa27ca454b1bc0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dc2733823c4291abc7aa27ca454b1bc0);
        cache_frame_dc2733823c4291abc7aa27ca454b1bc0 = NULL;
    }

    assertFrameObject(frame_dc2733823c4291abc7aa27ca454b1bc0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__3_CalculationSettings(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_84d08bcdcd000189527dc108dc085492;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_84d08bcdcd000189527dc108dc085492 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_84d08bcdcd000189527dc108dc085492)) {
        Py_XDECREF(cache_frame_84d08bcdcd000189527dc108dc085492);

#if _DEBUG_REFCOUNTS
        if (cache_frame_84d08bcdcd000189527dc108dc085492 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_84d08bcdcd000189527dc108dc085492 = MAKE_FUNCTION_FRAME(codeobj_84d08bcdcd000189527dc108dc085492, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_84d08bcdcd000189527dc108dc085492->m_type_description == NULL);
    frame_84d08bcdcd000189527dc108dc085492 = cache_frame_84d08bcdcd000189527dc108dc085492;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_84d08bcdcd000189527dc108dc085492);
    assert(Py_REFCNT(frame_84d08bcdcd000189527dc108dc085492) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[5];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_84d08bcdcd000189527dc108dc085492, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_84d08bcdcd000189527dc108dc085492->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_84d08bcdcd000189527dc108dc085492, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_84d08bcdcd000189527dc108dc085492,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_84d08bcdcd000189527dc108dc085492 == cache_frame_84d08bcdcd000189527dc108dc085492) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_84d08bcdcd000189527dc108dc085492);
        cache_frame_84d08bcdcd000189527dc108dc085492 = NULL;
    }

    assertFrameObject(frame_84d08bcdcd000189527dc108dc085492);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__4_CellAddress(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_15b7ce62b35c5db3ea72c2c5f2fc15b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_15b7ce62b35c5db3ea72c2c5f2fc15b7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_15b7ce62b35c5db3ea72c2c5f2fc15b7)) {
        Py_XDECREF(cache_frame_15b7ce62b35c5db3ea72c2c5f2fc15b7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_15b7ce62b35c5db3ea72c2c5f2fc15b7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_15b7ce62b35c5db3ea72c2c5f2fc15b7 = MAKE_FUNCTION_FRAME(codeobj_15b7ce62b35c5db3ea72c2c5f2fc15b7, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_15b7ce62b35c5db3ea72c2c5f2fc15b7->m_type_description == NULL);
    frame_15b7ce62b35c5db3ea72c2c5f2fc15b7 = cache_frame_15b7ce62b35c5db3ea72c2c5f2fc15b7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_15b7ce62b35c5db3ea72c2c5f2fc15b7);
    assert(Py_REFCNT(frame_15b7ce62b35c5db3ea72c2c5f2fc15b7) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[6];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_15b7ce62b35c5db3ea72c2c5f2fc15b7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_15b7ce62b35c5db3ea72c2c5f2fc15b7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_15b7ce62b35c5db3ea72c2c5f2fc15b7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_15b7ce62b35c5db3ea72c2c5f2fc15b7,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_15b7ce62b35c5db3ea72c2c5f2fc15b7 == cache_frame_15b7ce62b35c5db3ea72c2c5f2fc15b7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_15b7ce62b35c5db3ea72c2c5f2fc15b7);
        cache_frame_15b7ce62b35c5db3ea72c2c5f2fc15b7 = NULL;
    }

    assertFrameObject(frame_15b7ce62b35c5db3ea72c2c5f2fc15b7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__5_CellContentChange(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_57618dd9564960d6a1ff80b5a3be49ce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_57618dd9564960d6a1ff80b5a3be49ce = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_57618dd9564960d6a1ff80b5a3be49ce)) {
        Py_XDECREF(cache_frame_57618dd9564960d6a1ff80b5a3be49ce);

#if _DEBUG_REFCOUNTS
        if (cache_frame_57618dd9564960d6a1ff80b5a3be49ce == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_57618dd9564960d6a1ff80b5a3be49ce = MAKE_FUNCTION_FRAME(codeobj_57618dd9564960d6a1ff80b5a3be49ce, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_57618dd9564960d6a1ff80b5a3be49ce->m_type_description == NULL);
    frame_57618dd9564960d6a1ff80b5a3be49ce = cache_frame_57618dd9564960d6a1ff80b5a3be49ce;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_57618dd9564960d6a1ff80b5a3be49ce);
    assert(Py_REFCNT(frame_57618dd9564960d6a1ff80b5a3be49ce) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[7];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_57618dd9564960d6a1ff80b5a3be49ce, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_57618dd9564960d6a1ff80b5a3be49ce->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_57618dd9564960d6a1ff80b5a3be49ce, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_57618dd9564960d6a1ff80b5a3be49ce,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_57618dd9564960d6a1ff80b5a3be49ce == cache_frame_57618dd9564960d6a1ff80b5a3be49ce) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_57618dd9564960d6a1ff80b5a3be49ce);
        cache_frame_57618dd9564960d6a1ff80b5a3be49ce = NULL;
    }

    assertFrameObject(frame_57618dd9564960d6a1ff80b5a3be49ce);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__6_CellContentDeletion(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_760300474c58b1365b5c76dd48c2a2b5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_760300474c58b1365b5c76dd48c2a2b5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_760300474c58b1365b5c76dd48c2a2b5)) {
        Py_XDECREF(cache_frame_760300474c58b1365b5c76dd48c2a2b5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_760300474c58b1365b5c76dd48c2a2b5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_760300474c58b1365b5c76dd48c2a2b5 = MAKE_FUNCTION_FRAME(codeobj_760300474c58b1365b5c76dd48c2a2b5, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_760300474c58b1365b5c76dd48c2a2b5->m_type_description == NULL);
    frame_760300474c58b1365b5c76dd48c2a2b5 = cache_frame_760300474c58b1365b5c76dd48c2a2b5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_760300474c58b1365b5c76dd48c2a2b5);
    assert(Py_REFCNT(frame_760300474c58b1365b5c76dd48c2a2b5) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[8];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_760300474c58b1365b5c76dd48c2a2b5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_760300474c58b1365b5c76dd48c2a2b5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_760300474c58b1365b5c76dd48c2a2b5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_760300474c58b1365b5c76dd48c2a2b5,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_760300474c58b1365b5c76dd48c2a2b5 == cache_frame_760300474c58b1365b5c76dd48c2a2b5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_760300474c58b1365b5c76dd48c2a2b5);
        cache_frame_760300474c58b1365b5c76dd48c2a2b5 = NULL;
    }

    assertFrameObject(frame_760300474c58b1365b5c76dd48c2a2b5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__7_CellRangeSource(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_FrameObject *frame_d1fce01fa715e0d15ac80c88bcc2f183;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_d1fce01fa715e0d15ac80c88bcc2f183 = NULL;

    // Actual function body.
    {
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(par_args);
        tmp_dict_arg_value_1 = par_args;
        tmp_key_value_1 = mod_consts[9];
        tmp_default_value_1 = mod_consts[10];
        tmp_capi_result_1 = DICT_SETDEFAULT3(tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
        assert(!(tmp_capi_result_1 == NULL));
        Py_DECREF(tmp_capi_result_1);
    }
    if (isFrameUnusable(cache_frame_d1fce01fa715e0d15ac80c88bcc2f183)) {
        Py_XDECREF(cache_frame_d1fce01fa715e0d15ac80c88bcc2f183);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d1fce01fa715e0d15ac80c88bcc2f183 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d1fce01fa715e0d15ac80c88bcc2f183 = MAKE_FUNCTION_FRAME(codeobj_d1fce01fa715e0d15ac80c88bcc2f183, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d1fce01fa715e0d15ac80c88bcc2f183->m_type_description == NULL);
    frame_d1fce01fa715e0d15ac80c88bcc2f183 = cache_frame_d1fce01fa715e0d15ac80c88bcc2f183;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d1fce01fa715e0d15ac80c88bcc2f183);
    assert(Py_REFCNT(frame_d1fce01fa715e0d15ac80c88bcc2f183) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[11];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d1fce01fa715e0d15ac80c88bcc2f183, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d1fce01fa715e0d15ac80c88bcc2f183->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d1fce01fa715e0d15ac80c88bcc2f183, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d1fce01fa715e0d15ac80c88bcc2f183,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_d1fce01fa715e0d15ac80c88bcc2f183 == cache_frame_d1fce01fa715e0d15ac80c88bcc2f183) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d1fce01fa715e0d15ac80c88bcc2f183);
        cache_frame_d1fce01fa715e0d15ac80c88bcc2f183 = NULL;
    }

    assertFrameObject(frame_d1fce01fa715e0d15ac80c88bcc2f183);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__8_ChangeDeletion(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_5c023f84b1156953d896d72c31ffa1cc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_5c023f84b1156953d896d72c31ffa1cc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5c023f84b1156953d896d72c31ffa1cc)) {
        Py_XDECREF(cache_frame_5c023f84b1156953d896d72c31ffa1cc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5c023f84b1156953d896d72c31ffa1cc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5c023f84b1156953d896d72c31ffa1cc = MAKE_FUNCTION_FRAME(codeobj_5c023f84b1156953d896d72c31ffa1cc, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5c023f84b1156953d896d72c31ffa1cc->m_type_description == NULL);
    frame_5c023f84b1156953d896d72c31ffa1cc = cache_frame_5c023f84b1156953d896d72c31ffa1cc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5c023f84b1156953d896d72c31ffa1cc);
    assert(Py_REFCNT(frame_5c023f84b1156953d896d72c31ffa1cc) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[12];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5c023f84b1156953d896d72c31ffa1cc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5c023f84b1156953d896d72c31ffa1cc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5c023f84b1156953d896d72c31ffa1cc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5c023f84b1156953d896d72c31ffa1cc,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_5c023f84b1156953d896d72c31ffa1cc == cache_frame_5c023f84b1156953d896d72c31ffa1cc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5c023f84b1156953d896d72c31ffa1cc);
        cache_frame_5c023f84b1156953d896d72c31ffa1cc = NULL;
    }

    assertFrameObject(frame_5c023f84b1156953d896d72c31ffa1cc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__9_ChangeTrackTableCell(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_28fffbb02f561f86395495f89bffa3a7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_28fffbb02f561f86395495f89bffa3a7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_28fffbb02f561f86395495f89bffa3a7)) {
        Py_XDECREF(cache_frame_28fffbb02f561f86395495f89bffa3a7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_28fffbb02f561f86395495f89bffa3a7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_28fffbb02f561f86395495f89bffa3a7 = MAKE_FUNCTION_FRAME(codeobj_28fffbb02f561f86395495f89bffa3a7, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_28fffbb02f561f86395495f89bffa3a7->m_type_description == NULL);
    frame_28fffbb02f561f86395495f89bffa3a7 = cache_frame_28fffbb02f561f86395495f89bffa3a7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_28fffbb02f561f86395495f89bffa3a7);
    assert(Py_REFCNT(frame_28fffbb02f561f86395495f89bffa3a7) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[13];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_28fffbb02f561f86395495f89bffa3a7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_28fffbb02f561f86395495f89bffa3a7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_28fffbb02f561f86395495f89bffa3a7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_28fffbb02f561f86395495f89bffa3a7,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_28fffbb02f561f86395495f89bffa3a7 == cache_frame_28fffbb02f561f86395495f89bffa3a7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_28fffbb02f561f86395495f89bffa3a7);
        cache_frame_28fffbb02f561f86395495f89bffa3a7 = NULL;
    }

    assertFrameObject(frame_28fffbb02f561f86395495f89bffa3a7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__10_Consolidation(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_967a10a0f767df7e2aea6c74785af0d7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_967a10a0f767df7e2aea6c74785af0d7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_967a10a0f767df7e2aea6c74785af0d7)) {
        Py_XDECREF(cache_frame_967a10a0f767df7e2aea6c74785af0d7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_967a10a0f767df7e2aea6c74785af0d7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_967a10a0f767df7e2aea6c74785af0d7 = MAKE_FUNCTION_FRAME(codeobj_967a10a0f767df7e2aea6c74785af0d7, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_967a10a0f767df7e2aea6c74785af0d7->m_type_description == NULL);
    frame_967a10a0f767df7e2aea6c74785af0d7 = cache_frame_967a10a0f767df7e2aea6c74785af0d7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_967a10a0f767df7e2aea6c74785af0d7);
    assert(Py_REFCNT(frame_967a10a0f767df7e2aea6c74785af0d7) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[14];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_967a10a0f767df7e2aea6c74785af0d7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_967a10a0f767df7e2aea6c74785af0d7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_967a10a0f767df7e2aea6c74785af0d7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_967a10a0f767df7e2aea6c74785af0d7,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_967a10a0f767df7e2aea6c74785af0d7 == cache_frame_967a10a0f767df7e2aea6c74785af0d7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_967a10a0f767df7e2aea6c74785af0d7);
        cache_frame_967a10a0f767df7e2aea6c74785af0d7 = NULL;
    }

    assertFrameObject(frame_967a10a0f767df7e2aea6c74785af0d7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__11_ContentValidation(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_81406e7c13a968a88a0c8977395e2b83;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_81406e7c13a968a88a0c8977395e2b83 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_81406e7c13a968a88a0c8977395e2b83)) {
        Py_XDECREF(cache_frame_81406e7c13a968a88a0c8977395e2b83);

#if _DEBUG_REFCOUNTS
        if (cache_frame_81406e7c13a968a88a0c8977395e2b83 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_81406e7c13a968a88a0c8977395e2b83 = MAKE_FUNCTION_FRAME(codeobj_81406e7c13a968a88a0c8977395e2b83, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_81406e7c13a968a88a0c8977395e2b83->m_type_description == NULL);
    frame_81406e7c13a968a88a0c8977395e2b83 = cache_frame_81406e7c13a968a88a0c8977395e2b83;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_81406e7c13a968a88a0c8977395e2b83);
    assert(Py_REFCNT(frame_81406e7c13a968a88a0c8977395e2b83) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[15];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_81406e7c13a968a88a0c8977395e2b83, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_81406e7c13a968a88a0c8977395e2b83->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_81406e7c13a968a88a0c8977395e2b83, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_81406e7c13a968a88a0c8977395e2b83,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_81406e7c13a968a88a0c8977395e2b83 == cache_frame_81406e7c13a968a88a0c8977395e2b83) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_81406e7c13a968a88a0c8977395e2b83);
        cache_frame_81406e7c13a968a88a0c8977395e2b83 = NULL;
    }

    assertFrameObject(frame_81406e7c13a968a88a0c8977395e2b83);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__12_ContentValidations(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_b2db5770d0cde3b7beb6c9b2a9c74c3f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_b2db5770d0cde3b7beb6c9b2a9c74c3f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b2db5770d0cde3b7beb6c9b2a9c74c3f)) {
        Py_XDECREF(cache_frame_b2db5770d0cde3b7beb6c9b2a9c74c3f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b2db5770d0cde3b7beb6c9b2a9c74c3f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b2db5770d0cde3b7beb6c9b2a9c74c3f = MAKE_FUNCTION_FRAME(codeobj_b2db5770d0cde3b7beb6c9b2a9c74c3f, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b2db5770d0cde3b7beb6c9b2a9c74c3f->m_type_description == NULL);
    frame_b2db5770d0cde3b7beb6c9b2a9c74c3f = cache_frame_b2db5770d0cde3b7beb6c9b2a9c74c3f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b2db5770d0cde3b7beb6c9b2a9c74c3f);
    assert(Py_REFCNT(frame_b2db5770d0cde3b7beb6c9b2a9c74c3f) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[16];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b2db5770d0cde3b7beb6c9b2a9c74c3f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b2db5770d0cde3b7beb6c9b2a9c74c3f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b2db5770d0cde3b7beb6c9b2a9c74c3f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b2db5770d0cde3b7beb6c9b2a9c74c3f,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_b2db5770d0cde3b7beb6c9b2a9c74c3f == cache_frame_b2db5770d0cde3b7beb6c9b2a9c74c3f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b2db5770d0cde3b7beb6c9b2a9c74c3f);
        cache_frame_b2db5770d0cde3b7beb6c9b2a9c74c3f = NULL;
    }

    assertFrameObject(frame_b2db5770d0cde3b7beb6c9b2a9c74c3f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__13_CoveredTableCell(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_2f22c41665261253103d0ca17c0a31fb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_2f22c41665261253103d0ca17c0a31fb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2f22c41665261253103d0ca17c0a31fb)) {
        Py_XDECREF(cache_frame_2f22c41665261253103d0ca17c0a31fb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2f22c41665261253103d0ca17c0a31fb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2f22c41665261253103d0ca17c0a31fb = MAKE_FUNCTION_FRAME(codeobj_2f22c41665261253103d0ca17c0a31fb, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2f22c41665261253103d0ca17c0a31fb->m_type_description == NULL);
    frame_2f22c41665261253103d0ca17c0a31fb = cache_frame_2f22c41665261253103d0ca17c0a31fb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2f22c41665261253103d0ca17c0a31fb);
    assert(Py_REFCNT(frame_2f22c41665261253103d0ca17c0a31fb) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[17];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2f22c41665261253103d0ca17c0a31fb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2f22c41665261253103d0ca17c0a31fb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2f22c41665261253103d0ca17c0a31fb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2f22c41665261253103d0ca17c0a31fb,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_2f22c41665261253103d0ca17c0a31fb == cache_frame_2f22c41665261253103d0ca17c0a31fb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2f22c41665261253103d0ca17c0a31fb);
        cache_frame_2f22c41665261253103d0ca17c0a31fb = NULL;
    }

    assertFrameObject(frame_2f22c41665261253103d0ca17c0a31fb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__14_CutOffs(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_43319f39840e38aecdf7f8656adc71bd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_43319f39840e38aecdf7f8656adc71bd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_43319f39840e38aecdf7f8656adc71bd)) {
        Py_XDECREF(cache_frame_43319f39840e38aecdf7f8656adc71bd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_43319f39840e38aecdf7f8656adc71bd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_43319f39840e38aecdf7f8656adc71bd = MAKE_FUNCTION_FRAME(codeobj_43319f39840e38aecdf7f8656adc71bd, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_43319f39840e38aecdf7f8656adc71bd->m_type_description == NULL);
    frame_43319f39840e38aecdf7f8656adc71bd = cache_frame_43319f39840e38aecdf7f8656adc71bd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_43319f39840e38aecdf7f8656adc71bd);
    assert(Py_REFCNT(frame_43319f39840e38aecdf7f8656adc71bd) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[18];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_43319f39840e38aecdf7f8656adc71bd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_43319f39840e38aecdf7f8656adc71bd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_43319f39840e38aecdf7f8656adc71bd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_43319f39840e38aecdf7f8656adc71bd,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_43319f39840e38aecdf7f8656adc71bd == cache_frame_43319f39840e38aecdf7f8656adc71bd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_43319f39840e38aecdf7f8656adc71bd);
        cache_frame_43319f39840e38aecdf7f8656adc71bd = NULL;
    }

    assertFrameObject(frame_43319f39840e38aecdf7f8656adc71bd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__15_DataPilotDisplayInfo(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_deb6997a0074603c4286e9662d533e5d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_deb6997a0074603c4286e9662d533e5d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_deb6997a0074603c4286e9662d533e5d)) {
        Py_XDECREF(cache_frame_deb6997a0074603c4286e9662d533e5d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_deb6997a0074603c4286e9662d533e5d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_deb6997a0074603c4286e9662d533e5d = MAKE_FUNCTION_FRAME(codeobj_deb6997a0074603c4286e9662d533e5d, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_deb6997a0074603c4286e9662d533e5d->m_type_description == NULL);
    frame_deb6997a0074603c4286e9662d533e5d = cache_frame_deb6997a0074603c4286e9662d533e5d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_deb6997a0074603c4286e9662d533e5d);
    assert(Py_REFCNT(frame_deb6997a0074603c4286e9662d533e5d) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[19];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_deb6997a0074603c4286e9662d533e5d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_deb6997a0074603c4286e9662d533e5d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_deb6997a0074603c4286e9662d533e5d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_deb6997a0074603c4286e9662d533e5d,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_deb6997a0074603c4286e9662d533e5d == cache_frame_deb6997a0074603c4286e9662d533e5d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_deb6997a0074603c4286e9662d533e5d);
        cache_frame_deb6997a0074603c4286e9662d533e5d = NULL;
    }

    assertFrameObject(frame_deb6997a0074603c4286e9662d533e5d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__16_DataPilotField(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_3cd0565d5663e3153f45cdbcbf00d5ad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_3cd0565d5663e3153f45cdbcbf00d5ad = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3cd0565d5663e3153f45cdbcbf00d5ad)) {
        Py_XDECREF(cache_frame_3cd0565d5663e3153f45cdbcbf00d5ad);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3cd0565d5663e3153f45cdbcbf00d5ad == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3cd0565d5663e3153f45cdbcbf00d5ad = MAKE_FUNCTION_FRAME(codeobj_3cd0565d5663e3153f45cdbcbf00d5ad, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3cd0565d5663e3153f45cdbcbf00d5ad->m_type_description == NULL);
    frame_3cd0565d5663e3153f45cdbcbf00d5ad = cache_frame_3cd0565d5663e3153f45cdbcbf00d5ad;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3cd0565d5663e3153f45cdbcbf00d5ad);
    assert(Py_REFCNT(frame_3cd0565d5663e3153f45cdbcbf00d5ad) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[20];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3cd0565d5663e3153f45cdbcbf00d5ad, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3cd0565d5663e3153f45cdbcbf00d5ad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3cd0565d5663e3153f45cdbcbf00d5ad, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3cd0565d5663e3153f45cdbcbf00d5ad,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_3cd0565d5663e3153f45cdbcbf00d5ad == cache_frame_3cd0565d5663e3153f45cdbcbf00d5ad) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3cd0565d5663e3153f45cdbcbf00d5ad);
        cache_frame_3cd0565d5663e3153f45cdbcbf00d5ad = NULL;
    }

    assertFrameObject(frame_3cd0565d5663e3153f45cdbcbf00d5ad);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__17_DataPilotFieldReference(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_f89e99cca53237792641b2bc87bb910e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f89e99cca53237792641b2bc87bb910e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f89e99cca53237792641b2bc87bb910e)) {
        Py_XDECREF(cache_frame_f89e99cca53237792641b2bc87bb910e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f89e99cca53237792641b2bc87bb910e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f89e99cca53237792641b2bc87bb910e = MAKE_FUNCTION_FRAME(codeobj_f89e99cca53237792641b2bc87bb910e, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f89e99cca53237792641b2bc87bb910e->m_type_description == NULL);
    frame_f89e99cca53237792641b2bc87bb910e = cache_frame_f89e99cca53237792641b2bc87bb910e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f89e99cca53237792641b2bc87bb910e);
    assert(Py_REFCNT(frame_f89e99cca53237792641b2bc87bb910e) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[21];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f89e99cca53237792641b2bc87bb910e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f89e99cca53237792641b2bc87bb910e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f89e99cca53237792641b2bc87bb910e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f89e99cca53237792641b2bc87bb910e,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_f89e99cca53237792641b2bc87bb910e == cache_frame_f89e99cca53237792641b2bc87bb910e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f89e99cca53237792641b2bc87bb910e);
        cache_frame_f89e99cca53237792641b2bc87bb910e = NULL;
    }

    assertFrameObject(frame_f89e99cca53237792641b2bc87bb910e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__18_DataPilotGroup(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_cc9651072f998dd71fb97e8b065bc16b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_cc9651072f998dd71fb97e8b065bc16b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cc9651072f998dd71fb97e8b065bc16b)) {
        Py_XDECREF(cache_frame_cc9651072f998dd71fb97e8b065bc16b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cc9651072f998dd71fb97e8b065bc16b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cc9651072f998dd71fb97e8b065bc16b = MAKE_FUNCTION_FRAME(codeobj_cc9651072f998dd71fb97e8b065bc16b, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cc9651072f998dd71fb97e8b065bc16b->m_type_description == NULL);
    frame_cc9651072f998dd71fb97e8b065bc16b = cache_frame_cc9651072f998dd71fb97e8b065bc16b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cc9651072f998dd71fb97e8b065bc16b);
    assert(Py_REFCNT(frame_cc9651072f998dd71fb97e8b065bc16b) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[22];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cc9651072f998dd71fb97e8b065bc16b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cc9651072f998dd71fb97e8b065bc16b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cc9651072f998dd71fb97e8b065bc16b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cc9651072f998dd71fb97e8b065bc16b,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_cc9651072f998dd71fb97e8b065bc16b == cache_frame_cc9651072f998dd71fb97e8b065bc16b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cc9651072f998dd71fb97e8b065bc16b);
        cache_frame_cc9651072f998dd71fb97e8b065bc16b = NULL;
    }

    assertFrameObject(frame_cc9651072f998dd71fb97e8b065bc16b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__19_DataPilotGroupMember(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_5d848efbbb714b272fa1d8ed5557762f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_5d848efbbb714b272fa1d8ed5557762f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5d848efbbb714b272fa1d8ed5557762f)) {
        Py_XDECREF(cache_frame_5d848efbbb714b272fa1d8ed5557762f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5d848efbbb714b272fa1d8ed5557762f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5d848efbbb714b272fa1d8ed5557762f = MAKE_FUNCTION_FRAME(codeobj_5d848efbbb714b272fa1d8ed5557762f, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5d848efbbb714b272fa1d8ed5557762f->m_type_description == NULL);
    frame_5d848efbbb714b272fa1d8ed5557762f = cache_frame_5d848efbbb714b272fa1d8ed5557762f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5d848efbbb714b272fa1d8ed5557762f);
    assert(Py_REFCNT(frame_5d848efbbb714b272fa1d8ed5557762f) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[23];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5d848efbbb714b272fa1d8ed5557762f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5d848efbbb714b272fa1d8ed5557762f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5d848efbbb714b272fa1d8ed5557762f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5d848efbbb714b272fa1d8ed5557762f,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_5d848efbbb714b272fa1d8ed5557762f == cache_frame_5d848efbbb714b272fa1d8ed5557762f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5d848efbbb714b272fa1d8ed5557762f);
        cache_frame_5d848efbbb714b272fa1d8ed5557762f = NULL;
    }

    assertFrameObject(frame_5d848efbbb714b272fa1d8ed5557762f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__20_DataPilotGroups(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_8d5163d64b2575067bfdc87a94a53165;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8d5163d64b2575067bfdc87a94a53165 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8d5163d64b2575067bfdc87a94a53165)) {
        Py_XDECREF(cache_frame_8d5163d64b2575067bfdc87a94a53165);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8d5163d64b2575067bfdc87a94a53165 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8d5163d64b2575067bfdc87a94a53165 = MAKE_FUNCTION_FRAME(codeobj_8d5163d64b2575067bfdc87a94a53165, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8d5163d64b2575067bfdc87a94a53165->m_type_description == NULL);
    frame_8d5163d64b2575067bfdc87a94a53165 = cache_frame_8d5163d64b2575067bfdc87a94a53165;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8d5163d64b2575067bfdc87a94a53165);
    assert(Py_REFCNT(frame_8d5163d64b2575067bfdc87a94a53165) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[24];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8d5163d64b2575067bfdc87a94a53165, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8d5163d64b2575067bfdc87a94a53165->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8d5163d64b2575067bfdc87a94a53165, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8d5163d64b2575067bfdc87a94a53165,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_8d5163d64b2575067bfdc87a94a53165 == cache_frame_8d5163d64b2575067bfdc87a94a53165) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8d5163d64b2575067bfdc87a94a53165);
        cache_frame_8d5163d64b2575067bfdc87a94a53165 = NULL;
    }

    assertFrameObject(frame_8d5163d64b2575067bfdc87a94a53165);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__21_DataPilotLayoutInfo(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_cf3d16170a64e1a98ae547ce88949108;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_cf3d16170a64e1a98ae547ce88949108 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cf3d16170a64e1a98ae547ce88949108)) {
        Py_XDECREF(cache_frame_cf3d16170a64e1a98ae547ce88949108);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cf3d16170a64e1a98ae547ce88949108 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cf3d16170a64e1a98ae547ce88949108 = MAKE_FUNCTION_FRAME(codeobj_cf3d16170a64e1a98ae547ce88949108, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cf3d16170a64e1a98ae547ce88949108->m_type_description == NULL);
    frame_cf3d16170a64e1a98ae547ce88949108 = cache_frame_cf3d16170a64e1a98ae547ce88949108;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cf3d16170a64e1a98ae547ce88949108);
    assert(Py_REFCNT(frame_cf3d16170a64e1a98ae547ce88949108) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[25];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cf3d16170a64e1a98ae547ce88949108, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cf3d16170a64e1a98ae547ce88949108->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cf3d16170a64e1a98ae547ce88949108, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cf3d16170a64e1a98ae547ce88949108,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_cf3d16170a64e1a98ae547ce88949108 == cache_frame_cf3d16170a64e1a98ae547ce88949108) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cf3d16170a64e1a98ae547ce88949108);
        cache_frame_cf3d16170a64e1a98ae547ce88949108 = NULL;
    }

    assertFrameObject(frame_cf3d16170a64e1a98ae547ce88949108);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__22_DataPilotLevel(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_aade796fc94cd90a3d2bc357af2e042a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_aade796fc94cd90a3d2bc357af2e042a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_aade796fc94cd90a3d2bc357af2e042a)) {
        Py_XDECREF(cache_frame_aade796fc94cd90a3d2bc357af2e042a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aade796fc94cd90a3d2bc357af2e042a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aade796fc94cd90a3d2bc357af2e042a = MAKE_FUNCTION_FRAME(codeobj_aade796fc94cd90a3d2bc357af2e042a, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_aade796fc94cd90a3d2bc357af2e042a->m_type_description == NULL);
    frame_aade796fc94cd90a3d2bc357af2e042a = cache_frame_aade796fc94cd90a3d2bc357af2e042a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_aade796fc94cd90a3d2bc357af2e042a);
    assert(Py_REFCNT(frame_aade796fc94cd90a3d2bc357af2e042a) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[26];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_aade796fc94cd90a3d2bc357af2e042a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aade796fc94cd90a3d2bc357af2e042a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aade796fc94cd90a3d2bc357af2e042a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aade796fc94cd90a3d2bc357af2e042a,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_aade796fc94cd90a3d2bc357af2e042a == cache_frame_aade796fc94cd90a3d2bc357af2e042a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_aade796fc94cd90a3d2bc357af2e042a);
        cache_frame_aade796fc94cd90a3d2bc357af2e042a = NULL;
    }

    assertFrameObject(frame_aade796fc94cd90a3d2bc357af2e042a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__23_DataPilotMember(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_c930c311d1e61fa3fe7548ff2e197a35;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_c930c311d1e61fa3fe7548ff2e197a35 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c930c311d1e61fa3fe7548ff2e197a35)) {
        Py_XDECREF(cache_frame_c930c311d1e61fa3fe7548ff2e197a35);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c930c311d1e61fa3fe7548ff2e197a35 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c930c311d1e61fa3fe7548ff2e197a35 = MAKE_FUNCTION_FRAME(codeobj_c930c311d1e61fa3fe7548ff2e197a35, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c930c311d1e61fa3fe7548ff2e197a35->m_type_description == NULL);
    frame_c930c311d1e61fa3fe7548ff2e197a35 = cache_frame_c930c311d1e61fa3fe7548ff2e197a35;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c930c311d1e61fa3fe7548ff2e197a35);
    assert(Py_REFCNT(frame_c930c311d1e61fa3fe7548ff2e197a35) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[27];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c930c311d1e61fa3fe7548ff2e197a35, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c930c311d1e61fa3fe7548ff2e197a35->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c930c311d1e61fa3fe7548ff2e197a35, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c930c311d1e61fa3fe7548ff2e197a35,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_c930c311d1e61fa3fe7548ff2e197a35 == cache_frame_c930c311d1e61fa3fe7548ff2e197a35) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c930c311d1e61fa3fe7548ff2e197a35);
        cache_frame_c930c311d1e61fa3fe7548ff2e197a35 = NULL;
    }

    assertFrameObject(frame_c930c311d1e61fa3fe7548ff2e197a35);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__24_DataPilotMembers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_dfbc235f23006b9d83204c22cb529c16;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_dfbc235f23006b9d83204c22cb529c16 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dfbc235f23006b9d83204c22cb529c16)) {
        Py_XDECREF(cache_frame_dfbc235f23006b9d83204c22cb529c16);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dfbc235f23006b9d83204c22cb529c16 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dfbc235f23006b9d83204c22cb529c16 = MAKE_FUNCTION_FRAME(codeobj_dfbc235f23006b9d83204c22cb529c16, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dfbc235f23006b9d83204c22cb529c16->m_type_description == NULL);
    frame_dfbc235f23006b9d83204c22cb529c16 = cache_frame_dfbc235f23006b9d83204c22cb529c16;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dfbc235f23006b9d83204c22cb529c16);
    assert(Py_REFCNT(frame_dfbc235f23006b9d83204c22cb529c16) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[28];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dfbc235f23006b9d83204c22cb529c16, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dfbc235f23006b9d83204c22cb529c16->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dfbc235f23006b9d83204c22cb529c16, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dfbc235f23006b9d83204c22cb529c16,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_dfbc235f23006b9d83204c22cb529c16 == cache_frame_dfbc235f23006b9d83204c22cb529c16) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dfbc235f23006b9d83204c22cb529c16);
        cache_frame_dfbc235f23006b9d83204c22cb529c16 = NULL;
    }

    assertFrameObject(frame_dfbc235f23006b9d83204c22cb529c16);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__25_DataPilotSortInfo(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_394835631fa965eebe85ec798a58b2c4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_394835631fa965eebe85ec798a58b2c4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_394835631fa965eebe85ec798a58b2c4)) {
        Py_XDECREF(cache_frame_394835631fa965eebe85ec798a58b2c4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_394835631fa965eebe85ec798a58b2c4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_394835631fa965eebe85ec798a58b2c4 = MAKE_FUNCTION_FRAME(codeobj_394835631fa965eebe85ec798a58b2c4, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_394835631fa965eebe85ec798a58b2c4->m_type_description == NULL);
    frame_394835631fa965eebe85ec798a58b2c4 = cache_frame_394835631fa965eebe85ec798a58b2c4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_394835631fa965eebe85ec798a58b2c4);
    assert(Py_REFCNT(frame_394835631fa965eebe85ec798a58b2c4) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[29];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_394835631fa965eebe85ec798a58b2c4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_394835631fa965eebe85ec798a58b2c4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_394835631fa965eebe85ec798a58b2c4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_394835631fa965eebe85ec798a58b2c4,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_394835631fa965eebe85ec798a58b2c4 == cache_frame_394835631fa965eebe85ec798a58b2c4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_394835631fa965eebe85ec798a58b2c4);
        cache_frame_394835631fa965eebe85ec798a58b2c4 = NULL;
    }

    assertFrameObject(frame_394835631fa965eebe85ec798a58b2c4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__26_DataPilotSubtotal(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_b9d1fb9b33ef0cda4c49c580129cba48;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_b9d1fb9b33ef0cda4c49c580129cba48 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b9d1fb9b33ef0cda4c49c580129cba48)) {
        Py_XDECREF(cache_frame_b9d1fb9b33ef0cda4c49c580129cba48);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b9d1fb9b33ef0cda4c49c580129cba48 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b9d1fb9b33ef0cda4c49c580129cba48 = MAKE_FUNCTION_FRAME(codeobj_b9d1fb9b33ef0cda4c49c580129cba48, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b9d1fb9b33ef0cda4c49c580129cba48->m_type_description == NULL);
    frame_b9d1fb9b33ef0cda4c49c580129cba48 = cache_frame_b9d1fb9b33ef0cda4c49c580129cba48;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b9d1fb9b33ef0cda4c49c580129cba48);
    assert(Py_REFCNT(frame_b9d1fb9b33ef0cda4c49c580129cba48) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b9d1fb9b33ef0cda4c49c580129cba48, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b9d1fb9b33ef0cda4c49c580129cba48->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b9d1fb9b33ef0cda4c49c580129cba48, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b9d1fb9b33ef0cda4c49c580129cba48,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_b9d1fb9b33ef0cda4c49c580129cba48 == cache_frame_b9d1fb9b33ef0cda4c49c580129cba48) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b9d1fb9b33ef0cda4c49c580129cba48);
        cache_frame_b9d1fb9b33ef0cda4c49c580129cba48 = NULL;
    }

    assertFrameObject(frame_b9d1fb9b33ef0cda4c49c580129cba48);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__27_DataPilotSubtotals(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_a416e4ab2d8b6b63d581c95f5758906a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a416e4ab2d8b6b63d581c95f5758906a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a416e4ab2d8b6b63d581c95f5758906a)) {
        Py_XDECREF(cache_frame_a416e4ab2d8b6b63d581c95f5758906a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a416e4ab2d8b6b63d581c95f5758906a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a416e4ab2d8b6b63d581c95f5758906a = MAKE_FUNCTION_FRAME(codeobj_a416e4ab2d8b6b63d581c95f5758906a, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a416e4ab2d8b6b63d581c95f5758906a->m_type_description == NULL);
    frame_a416e4ab2d8b6b63d581c95f5758906a = cache_frame_a416e4ab2d8b6b63d581c95f5758906a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a416e4ab2d8b6b63d581c95f5758906a);
    assert(Py_REFCNT(frame_a416e4ab2d8b6b63d581c95f5758906a) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[31];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a416e4ab2d8b6b63d581c95f5758906a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a416e4ab2d8b6b63d581c95f5758906a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a416e4ab2d8b6b63d581c95f5758906a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a416e4ab2d8b6b63d581c95f5758906a,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_a416e4ab2d8b6b63d581c95f5758906a == cache_frame_a416e4ab2d8b6b63d581c95f5758906a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a416e4ab2d8b6b63d581c95f5758906a);
        cache_frame_a416e4ab2d8b6b63d581c95f5758906a = NULL;
    }

    assertFrameObject(frame_a416e4ab2d8b6b63d581c95f5758906a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__28_DataPilotTable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_cee2cf5d563e52b014db2bd3484c10c8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_cee2cf5d563e52b014db2bd3484c10c8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cee2cf5d563e52b014db2bd3484c10c8)) {
        Py_XDECREF(cache_frame_cee2cf5d563e52b014db2bd3484c10c8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cee2cf5d563e52b014db2bd3484c10c8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cee2cf5d563e52b014db2bd3484c10c8 = MAKE_FUNCTION_FRAME(codeobj_cee2cf5d563e52b014db2bd3484c10c8, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cee2cf5d563e52b014db2bd3484c10c8->m_type_description == NULL);
    frame_cee2cf5d563e52b014db2bd3484c10c8 = cache_frame_cee2cf5d563e52b014db2bd3484c10c8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cee2cf5d563e52b014db2bd3484c10c8);
    assert(Py_REFCNT(frame_cee2cf5d563e52b014db2bd3484c10c8) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[32];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cee2cf5d563e52b014db2bd3484c10c8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cee2cf5d563e52b014db2bd3484c10c8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cee2cf5d563e52b014db2bd3484c10c8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cee2cf5d563e52b014db2bd3484c10c8,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_cee2cf5d563e52b014db2bd3484c10c8 == cache_frame_cee2cf5d563e52b014db2bd3484c10c8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cee2cf5d563e52b014db2bd3484c10c8);
        cache_frame_cee2cf5d563e52b014db2bd3484c10c8 = NULL;
    }

    assertFrameObject(frame_cee2cf5d563e52b014db2bd3484c10c8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__29_DataPilotTables(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_68abd0679288ffe5f8d56964b1ac6b28;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_68abd0679288ffe5f8d56964b1ac6b28 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_68abd0679288ffe5f8d56964b1ac6b28)) {
        Py_XDECREF(cache_frame_68abd0679288ffe5f8d56964b1ac6b28);

#if _DEBUG_REFCOUNTS
        if (cache_frame_68abd0679288ffe5f8d56964b1ac6b28 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_68abd0679288ffe5f8d56964b1ac6b28 = MAKE_FUNCTION_FRAME(codeobj_68abd0679288ffe5f8d56964b1ac6b28, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_68abd0679288ffe5f8d56964b1ac6b28->m_type_description == NULL);
    frame_68abd0679288ffe5f8d56964b1ac6b28 = cache_frame_68abd0679288ffe5f8d56964b1ac6b28;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_68abd0679288ffe5f8d56964b1ac6b28);
    assert(Py_REFCNT(frame_68abd0679288ffe5f8d56964b1ac6b28) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[33];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_68abd0679288ffe5f8d56964b1ac6b28, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_68abd0679288ffe5f8d56964b1ac6b28->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_68abd0679288ffe5f8d56964b1ac6b28, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_68abd0679288ffe5f8d56964b1ac6b28,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_68abd0679288ffe5f8d56964b1ac6b28 == cache_frame_68abd0679288ffe5f8d56964b1ac6b28) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_68abd0679288ffe5f8d56964b1ac6b28);
        cache_frame_68abd0679288ffe5f8d56964b1ac6b28 = NULL;
    }

    assertFrameObject(frame_68abd0679288ffe5f8d56964b1ac6b28);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__30_DatabaseRange(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_372b98f37e960cc3ed946ac22cc066a5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_372b98f37e960cc3ed946ac22cc066a5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_372b98f37e960cc3ed946ac22cc066a5)) {
        Py_XDECREF(cache_frame_372b98f37e960cc3ed946ac22cc066a5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_372b98f37e960cc3ed946ac22cc066a5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_372b98f37e960cc3ed946ac22cc066a5 = MAKE_FUNCTION_FRAME(codeobj_372b98f37e960cc3ed946ac22cc066a5, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_372b98f37e960cc3ed946ac22cc066a5->m_type_description == NULL);
    frame_372b98f37e960cc3ed946ac22cc066a5 = cache_frame_372b98f37e960cc3ed946ac22cc066a5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_372b98f37e960cc3ed946ac22cc066a5);
    assert(Py_REFCNT(frame_372b98f37e960cc3ed946ac22cc066a5) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[34];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_372b98f37e960cc3ed946ac22cc066a5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_372b98f37e960cc3ed946ac22cc066a5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_372b98f37e960cc3ed946ac22cc066a5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_372b98f37e960cc3ed946ac22cc066a5,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_372b98f37e960cc3ed946ac22cc066a5 == cache_frame_372b98f37e960cc3ed946ac22cc066a5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_372b98f37e960cc3ed946ac22cc066a5);
        cache_frame_372b98f37e960cc3ed946ac22cc066a5 = NULL;
    }

    assertFrameObject(frame_372b98f37e960cc3ed946ac22cc066a5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__31_DatabaseRanges(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_927d8003cea23557ef79ebbb76935e2a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_927d8003cea23557ef79ebbb76935e2a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_927d8003cea23557ef79ebbb76935e2a)) {
        Py_XDECREF(cache_frame_927d8003cea23557ef79ebbb76935e2a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_927d8003cea23557ef79ebbb76935e2a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_927d8003cea23557ef79ebbb76935e2a = MAKE_FUNCTION_FRAME(codeobj_927d8003cea23557ef79ebbb76935e2a, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_927d8003cea23557ef79ebbb76935e2a->m_type_description == NULL);
    frame_927d8003cea23557ef79ebbb76935e2a = cache_frame_927d8003cea23557ef79ebbb76935e2a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_927d8003cea23557ef79ebbb76935e2a);
    assert(Py_REFCNT(frame_927d8003cea23557ef79ebbb76935e2a) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[35];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_927d8003cea23557ef79ebbb76935e2a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_927d8003cea23557ef79ebbb76935e2a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_927d8003cea23557ef79ebbb76935e2a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_927d8003cea23557ef79ebbb76935e2a,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_927d8003cea23557ef79ebbb76935e2a == cache_frame_927d8003cea23557ef79ebbb76935e2a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_927d8003cea23557ef79ebbb76935e2a);
        cache_frame_927d8003cea23557ef79ebbb76935e2a = NULL;
    }

    assertFrameObject(frame_927d8003cea23557ef79ebbb76935e2a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__32_DatabaseSourceQuery(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_b5d9f40a015381510ba6dc71ab28efa9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_b5d9f40a015381510ba6dc71ab28efa9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b5d9f40a015381510ba6dc71ab28efa9)) {
        Py_XDECREF(cache_frame_b5d9f40a015381510ba6dc71ab28efa9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b5d9f40a015381510ba6dc71ab28efa9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b5d9f40a015381510ba6dc71ab28efa9 = MAKE_FUNCTION_FRAME(codeobj_b5d9f40a015381510ba6dc71ab28efa9, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b5d9f40a015381510ba6dc71ab28efa9->m_type_description == NULL);
    frame_b5d9f40a015381510ba6dc71ab28efa9 = cache_frame_b5d9f40a015381510ba6dc71ab28efa9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b5d9f40a015381510ba6dc71ab28efa9);
    assert(Py_REFCNT(frame_b5d9f40a015381510ba6dc71ab28efa9) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[36];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b5d9f40a015381510ba6dc71ab28efa9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b5d9f40a015381510ba6dc71ab28efa9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b5d9f40a015381510ba6dc71ab28efa9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b5d9f40a015381510ba6dc71ab28efa9,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_b5d9f40a015381510ba6dc71ab28efa9 == cache_frame_b5d9f40a015381510ba6dc71ab28efa9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b5d9f40a015381510ba6dc71ab28efa9);
        cache_frame_b5d9f40a015381510ba6dc71ab28efa9 = NULL;
    }

    assertFrameObject(frame_b5d9f40a015381510ba6dc71ab28efa9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__33_DatabaseSourceSql(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_ffa1c46be029f5474dd23b1f77ba5aa8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ffa1c46be029f5474dd23b1f77ba5aa8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ffa1c46be029f5474dd23b1f77ba5aa8)) {
        Py_XDECREF(cache_frame_ffa1c46be029f5474dd23b1f77ba5aa8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ffa1c46be029f5474dd23b1f77ba5aa8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ffa1c46be029f5474dd23b1f77ba5aa8 = MAKE_FUNCTION_FRAME(codeobj_ffa1c46be029f5474dd23b1f77ba5aa8, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ffa1c46be029f5474dd23b1f77ba5aa8->m_type_description == NULL);
    frame_ffa1c46be029f5474dd23b1f77ba5aa8 = cache_frame_ffa1c46be029f5474dd23b1f77ba5aa8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ffa1c46be029f5474dd23b1f77ba5aa8);
    assert(Py_REFCNT(frame_ffa1c46be029f5474dd23b1f77ba5aa8) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[37];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ffa1c46be029f5474dd23b1f77ba5aa8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ffa1c46be029f5474dd23b1f77ba5aa8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ffa1c46be029f5474dd23b1f77ba5aa8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ffa1c46be029f5474dd23b1f77ba5aa8,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_ffa1c46be029f5474dd23b1f77ba5aa8 == cache_frame_ffa1c46be029f5474dd23b1f77ba5aa8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ffa1c46be029f5474dd23b1f77ba5aa8);
        cache_frame_ffa1c46be029f5474dd23b1f77ba5aa8 = NULL;
    }

    assertFrameObject(frame_ffa1c46be029f5474dd23b1f77ba5aa8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__34_DatabaseSourceTable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_ad7aa7884397306cfbe10220c4e50d68;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ad7aa7884397306cfbe10220c4e50d68 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ad7aa7884397306cfbe10220c4e50d68)) {
        Py_XDECREF(cache_frame_ad7aa7884397306cfbe10220c4e50d68);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ad7aa7884397306cfbe10220c4e50d68 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ad7aa7884397306cfbe10220c4e50d68 = MAKE_FUNCTION_FRAME(codeobj_ad7aa7884397306cfbe10220c4e50d68, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ad7aa7884397306cfbe10220c4e50d68->m_type_description == NULL);
    frame_ad7aa7884397306cfbe10220c4e50d68 = cache_frame_ad7aa7884397306cfbe10220c4e50d68;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ad7aa7884397306cfbe10220c4e50d68);
    assert(Py_REFCNT(frame_ad7aa7884397306cfbe10220c4e50d68) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[38];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ad7aa7884397306cfbe10220c4e50d68, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ad7aa7884397306cfbe10220c4e50d68->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ad7aa7884397306cfbe10220c4e50d68, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ad7aa7884397306cfbe10220c4e50d68,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_ad7aa7884397306cfbe10220c4e50d68 == cache_frame_ad7aa7884397306cfbe10220c4e50d68) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ad7aa7884397306cfbe10220c4e50d68);
        cache_frame_ad7aa7884397306cfbe10220c4e50d68 = NULL;
    }

    assertFrameObject(frame_ad7aa7884397306cfbe10220c4e50d68);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__35_DdeLink(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_3236f5821420e24ef3949c5fd5b5f196;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_3236f5821420e24ef3949c5fd5b5f196 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3236f5821420e24ef3949c5fd5b5f196)) {
        Py_XDECREF(cache_frame_3236f5821420e24ef3949c5fd5b5f196);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3236f5821420e24ef3949c5fd5b5f196 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3236f5821420e24ef3949c5fd5b5f196 = MAKE_FUNCTION_FRAME(codeobj_3236f5821420e24ef3949c5fd5b5f196, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3236f5821420e24ef3949c5fd5b5f196->m_type_description == NULL);
    frame_3236f5821420e24ef3949c5fd5b5f196 = cache_frame_3236f5821420e24ef3949c5fd5b5f196;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3236f5821420e24ef3949c5fd5b5f196);
    assert(Py_REFCNT(frame_3236f5821420e24ef3949c5fd5b5f196) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[39];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3236f5821420e24ef3949c5fd5b5f196, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3236f5821420e24ef3949c5fd5b5f196->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3236f5821420e24ef3949c5fd5b5f196, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3236f5821420e24ef3949c5fd5b5f196,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_3236f5821420e24ef3949c5fd5b5f196 == cache_frame_3236f5821420e24ef3949c5fd5b5f196) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3236f5821420e24ef3949c5fd5b5f196);
        cache_frame_3236f5821420e24ef3949c5fd5b5f196 = NULL;
    }

    assertFrameObject(frame_3236f5821420e24ef3949c5fd5b5f196);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__36_DdeLinks(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_d3d256a007368559ac4e5045c7fe405d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_d3d256a007368559ac4e5045c7fe405d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d3d256a007368559ac4e5045c7fe405d)) {
        Py_XDECREF(cache_frame_d3d256a007368559ac4e5045c7fe405d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d3d256a007368559ac4e5045c7fe405d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d3d256a007368559ac4e5045c7fe405d = MAKE_FUNCTION_FRAME(codeobj_d3d256a007368559ac4e5045c7fe405d, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d3d256a007368559ac4e5045c7fe405d->m_type_description == NULL);
    frame_d3d256a007368559ac4e5045c7fe405d = cache_frame_d3d256a007368559ac4e5045c7fe405d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d3d256a007368559ac4e5045c7fe405d);
    assert(Py_REFCNT(frame_d3d256a007368559ac4e5045c7fe405d) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[40];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d3d256a007368559ac4e5045c7fe405d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d3d256a007368559ac4e5045c7fe405d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d3d256a007368559ac4e5045c7fe405d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d3d256a007368559ac4e5045c7fe405d,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_d3d256a007368559ac4e5045c7fe405d == cache_frame_d3d256a007368559ac4e5045c7fe405d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d3d256a007368559ac4e5045c7fe405d);
        cache_frame_d3d256a007368559ac4e5045c7fe405d = NULL;
    }

    assertFrameObject(frame_d3d256a007368559ac4e5045c7fe405d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__37_Deletion(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_45b35739de05a30b9bcb4589bcc301ca;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_45b35739de05a30b9bcb4589bcc301ca = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_45b35739de05a30b9bcb4589bcc301ca)) {
        Py_XDECREF(cache_frame_45b35739de05a30b9bcb4589bcc301ca);

#if _DEBUG_REFCOUNTS
        if (cache_frame_45b35739de05a30b9bcb4589bcc301ca == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_45b35739de05a30b9bcb4589bcc301ca = MAKE_FUNCTION_FRAME(codeobj_45b35739de05a30b9bcb4589bcc301ca, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_45b35739de05a30b9bcb4589bcc301ca->m_type_description == NULL);
    frame_45b35739de05a30b9bcb4589bcc301ca = cache_frame_45b35739de05a30b9bcb4589bcc301ca;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_45b35739de05a30b9bcb4589bcc301ca);
    assert(Py_REFCNT(frame_45b35739de05a30b9bcb4589bcc301ca) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[41];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_45b35739de05a30b9bcb4589bcc301ca, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_45b35739de05a30b9bcb4589bcc301ca->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_45b35739de05a30b9bcb4589bcc301ca, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_45b35739de05a30b9bcb4589bcc301ca,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_45b35739de05a30b9bcb4589bcc301ca == cache_frame_45b35739de05a30b9bcb4589bcc301ca) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_45b35739de05a30b9bcb4589bcc301ca);
        cache_frame_45b35739de05a30b9bcb4589bcc301ca = NULL;
    }

    assertFrameObject(frame_45b35739de05a30b9bcb4589bcc301ca);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__38_Deletions(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_19d699ca4a42353baa70de4790c42145;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_19d699ca4a42353baa70de4790c42145 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_19d699ca4a42353baa70de4790c42145)) {
        Py_XDECREF(cache_frame_19d699ca4a42353baa70de4790c42145);

#if _DEBUG_REFCOUNTS
        if (cache_frame_19d699ca4a42353baa70de4790c42145 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_19d699ca4a42353baa70de4790c42145 = MAKE_FUNCTION_FRAME(codeobj_19d699ca4a42353baa70de4790c42145, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_19d699ca4a42353baa70de4790c42145->m_type_description == NULL);
    frame_19d699ca4a42353baa70de4790c42145 = cache_frame_19d699ca4a42353baa70de4790c42145;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_19d699ca4a42353baa70de4790c42145);
    assert(Py_REFCNT(frame_19d699ca4a42353baa70de4790c42145) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[42];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_19d699ca4a42353baa70de4790c42145, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_19d699ca4a42353baa70de4790c42145->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_19d699ca4a42353baa70de4790c42145, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_19d699ca4a42353baa70de4790c42145,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_19d699ca4a42353baa70de4790c42145 == cache_frame_19d699ca4a42353baa70de4790c42145) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_19d699ca4a42353baa70de4790c42145);
        cache_frame_19d699ca4a42353baa70de4790c42145 = NULL;
    }

    assertFrameObject(frame_19d699ca4a42353baa70de4790c42145);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__39_Dependencies(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_ac7ce4597290b68d46cbfc5ef3c66f26;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ac7ce4597290b68d46cbfc5ef3c66f26 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ac7ce4597290b68d46cbfc5ef3c66f26)) {
        Py_XDECREF(cache_frame_ac7ce4597290b68d46cbfc5ef3c66f26);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ac7ce4597290b68d46cbfc5ef3c66f26 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ac7ce4597290b68d46cbfc5ef3c66f26 = MAKE_FUNCTION_FRAME(codeobj_ac7ce4597290b68d46cbfc5ef3c66f26, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ac7ce4597290b68d46cbfc5ef3c66f26->m_type_description == NULL);
    frame_ac7ce4597290b68d46cbfc5ef3c66f26 = cache_frame_ac7ce4597290b68d46cbfc5ef3c66f26;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ac7ce4597290b68d46cbfc5ef3c66f26);
    assert(Py_REFCNT(frame_ac7ce4597290b68d46cbfc5ef3c66f26) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[43];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ac7ce4597290b68d46cbfc5ef3c66f26, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ac7ce4597290b68d46cbfc5ef3c66f26->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ac7ce4597290b68d46cbfc5ef3c66f26, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ac7ce4597290b68d46cbfc5ef3c66f26,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_ac7ce4597290b68d46cbfc5ef3c66f26 == cache_frame_ac7ce4597290b68d46cbfc5ef3c66f26) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ac7ce4597290b68d46cbfc5ef3c66f26);
        cache_frame_ac7ce4597290b68d46cbfc5ef3c66f26 = NULL;
    }

    assertFrameObject(frame_ac7ce4597290b68d46cbfc5ef3c66f26);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__40_Dependency(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_7b0cefb90baed623cba060462163777b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7b0cefb90baed623cba060462163777b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7b0cefb90baed623cba060462163777b)) {
        Py_XDECREF(cache_frame_7b0cefb90baed623cba060462163777b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7b0cefb90baed623cba060462163777b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7b0cefb90baed623cba060462163777b = MAKE_FUNCTION_FRAME(codeobj_7b0cefb90baed623cba060462163777b, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7b0cefb90baed623cba060462163777b->m_type_description == NULL);
    frame_7b0cefb90baed623cba060462163777b = cache_frame_7b0cefb90baed623cba060462163777b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7b0cefb90baed623cba060462163777b);
    assert(Py_REFCNT(frame_7b0cefb90baed623cba060462163777b) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[44];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7b0cefb90baed623cba060462163777b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7b0cefb90baed623cba060462163777b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7b0cefb90baed623cba060462163777b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7b0cefb90baed623cba060462163777b,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_7b0cefb90baed623cba060462163777b == cache_frame_7b0cefb90baed623cba060462163777b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7b0cefb90baed623cba060462163777b);
        cache_frame_7b0cefb90baed623cba060462163777b = NULL;
    }

    assertFrameObject(frame_7b0cefb90baed623cba060462163777b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__41_Desc(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_fcaf55a4cc560419b9a745e203b6d66e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_fcaf55a4cc560419b9a745e203b6d66e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fcaf55a4cc560419b9a745e203b6d66e)) {
        Py_XDECREF(cache_frame_fcaf55a4cc560419b9a745e203b6d66e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fcaf55a4cc560419b9a745e203b6d66e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fcaf55a4cc560419b9a745e203b6d66e = MAKE_FUNCTION_FRAME(codeobj_fcaf55a4cc560419b9a745e203b6d66e, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fcaf55a4cc560419b9a745e203b6d66e->m_type_description == NULL);
    frame_fcaf55a4cc560419b9a745e203b6d66e = cache_frame_fcaf55a4cc560419b9a745e203b6d66e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fcaf55a4cc560419b9a745e203b6d66e);
    assert(Py_REFCNT(frame_fcaf55a4cc560419b9a745e203b6d66e) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[45];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fcaf55a4cc560419b9a745e203b6d66e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fcaf55a4cc560419b9a745e203b6d66e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fcaf55a4cc560419b9a745e203b6d66e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fcaf55a4cc560419b9a745e203b6d66e,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_fcaf55a4cc560419b9a745e203b6d66e == cache_frame_fcaf55a4cc560419b9a745e203b6d66e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fcaf55a4cc560419b9a745e203b6d66e);
        cache_frame_fcaf55a4cc560419b9a745e203b6d66e = NULL;
    }

    assertFrameObject(frame_fcaf55a4cc560419b9a745e203b6d66e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__42_Detective(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_7613ebf36c4269b12dd3e52054861b26;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7613ebf36c4269b12dd3e52054861b26 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7613ebf36c4269b12dd3e52054861b26)) {
        Py_XDECREF(cache_frame_7613ebf36c4269b12dd3e52054861b26);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7613ebf36c4269b12dd3e52054861b26 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7613ebf36c4269b12dd3e52054861b26 = MAKE_FUNCTION_FRAME(codeobj_7613ebf36c4269b12dd3e52054861b26, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7613ebf36c4269b12dd3e52054861b26->m_type_description == NULL);
    frame_7613ebf36c4269b12dd3e52054861b26 = cache_frame_7613ebf36c4269b12dd3e52054861b26;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7613ebf36c4269b12dd3e52054861b26);
    assert(Py_REFCNT(frame_7613ebf36c4269b12dd3e52054861b26) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[46];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7613ebf36c4269b12dd3e52054861b26, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7613ebf36c4269b12dd3e52054861b26->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7613ebf36c4269b12dd3e52054861b26, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7613ebf36c4269b12dd3e52054861b26,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_7613ebf36c4269b12dd3e52054861b26 == cache_frame_7613ebf36c4269b12dd3e52054861b26) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7613ebf36c4269b12dd3e52054861b26);
        cache_frame_7613ebf36c4269b12dd3e52054861b26 = NULL;
    }

    assertFrameObject(frame_7613ebf36c4269b12dd3e52054861b26);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__43_ErrorMacro(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_c9260fa26a21e011aa7ded85ba5e7e54;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_c9260fa26a21e011aa7ded85ba5e7e54 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c9260fa26a21e011aa7ded85ba5e7e54)) {
        Py_XDECREF(cache_frame_c9260fa26a21e011aa7ded85ba5e7e54);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c9260fa26a21e011aa7ded85ba5e7e54 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c9260fa26a21e011aa7ded85ba5e7e54 = MAKE_FUNCTION_FRAME(codeobj_c9260fa26a21e011aa7ded85ba5e7e54, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c9260fa26a21e011aa7ded85ba5e7e54->m_type_description == NULL);
    frame_c9260fa26a21e011aa7ded85ba5e7e54 = cache_frame_c9260fa26a21e011aa7ded85ba5e7e54;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c9260fa26a21e011aa7ded85ba5e7e54);
    assert(Py_REFCNT(frame_c9260fa26a21e011aa7ded85ba5e7e54) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[47];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c9260fa26a21e011aa7ded85ba5e7e54, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c9260fa26a21e011aa7ded85ba5e7e54->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c9260fa26a21e011aa7ded85ba5e7e54, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c9260fa26a21e011aa7ded85ba5e7e54,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_c9260fa26a21e011aa7ded85ba5e7e54 == cache_frame_c9260fa26a21e011aa7ded85ba5e7e54) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c9260fa26a21e011aa7ded85ba5e7e54);
        cache_frame_c9260fa26a21e011aa7ded85ba5e7e54 = NULL;
    }

    assertFrameObject(frame_c9260fa26a21e011aa7ded85ba5e7e54);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__44_ErrorMessage(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_d084c39d851d29a040451e7228671a65;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_d084c39d851d29a040451e7228671a65 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d084c39d851d29a040451e7228671a65)) {
        Py_XDECREF(cache_frame_d084c39d851d29a040451e7228671a65);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d084c39d851d29a040451e7228671a65 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d084c39d851d29a040451e7228671a65 = MAKE_FUNCTION_FRAME(codeobj_d084c39d851d29a040451e7228671a65, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d084c39d851d29a040451e7228671a65->m_type_description == NULL);
    frame_d084c39d851d29a040451e7228671a65 = cache_frame_d084c39d851d29a040451e7228671a65;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d084c39d851d29a040451e7228671a65);
    assert(Py_REFCNT(frame_d084c39d851d29a040451e7228671a65) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[48];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d084c39d851d29a040451e7228671a65, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d084c39d851d29a040451e7228671a65->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d084c39d851d29a040451e7228671a65, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d084c39d851d29a040451e7228671a65,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_d084c39d851d29a040451e7228671a65 == cache_frame_d084c39d851d29a040451e7228671a65) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d084c39d851d29a040451e7228671a65);
        cache_frame_d084c39d851d29a040451e7228671a65 = NULL;
    }

    assertFrameObject(frame_d084c39d851d29a040451e7228671a65);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__45_EvenColumns(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_b9756574c8dcd07d74a02be6a7cc567b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_b9756574c8dcd07d74a02be6a7cc567b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b9756574c8dcd07d74a02be6a7cc567b)) {
        Py_XDECREF(cache_frame_b9756574c8dcd07d74a02be6a7cc567b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b9756574c8dcd07d74a02be6a7cc567b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b9756574c8dcd07d74a02be6a7cc567b = MAKE_FUNCTION_FRAME(codeobj_b9756574c8dcd07d74a02be6a7cc567b, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b9756574c8dcd07d74a02be6a7cc567b->m_type_description == NULL);
    frame_b9756574c8dcd07d74a02be6a7cc567b = cache_frame_b9756574c8dcd07d74a02be6a7cc567b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b9756574c8dcd07d74a02be6a7cc567b);
    assert(Py_REFCNT(frame_b9756574c8dcd07d74a02be6a7cc567b) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[49];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b9756574c8dcd07d74a02be6a7cc567b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b9756574c8dcd07d74a02be6a7cc567b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b9756574c8dcd07d74a02be6a7cc567b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b9756574c8dcd07d74a02be6a7cc567b,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_b9756574c8dcd07d74a02be6a7cc567b == cache_frame_b9756574c8dcd07d74a02be6a7cc567b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b9756574c8dcd07d74a02be6a7cc567b);
        cache_frame_b9756574c8dcd07d74a02be6a7cc567b = NULL;
    }

    assertFrameObject(frame_b9756574c8dcd07d74a02be6a7cc567b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__46_EvenRows(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_1bd6be80b3e36a879d46e45a5646175d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_1bd6be80b3e36a879d46e45a5646175d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1bd6be80b3e36a879d46e45a5646175d)) {
        Py_XDECREF(cache_frame_1bd6be80b3e36a879d46e45a5646175d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1bd6be80b3e36a879d46e45a5646175d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1bd6be80b3e36a879d46e45a5646175d = MAKE_FUNCTION_FRAME(codeobj_1bd6be80b3e36a879d46e45a5646175d, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1bd6be80b3e36a879d46e45a5646175d->m_type_description == NULL);
    frame_1bd6be80b3e36a879d46e45a5646175d = cache_frame_1bd6be80b3e36a879d46e45a5646175d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1bd6be80b3e36a879d46e45a5646175d);
    assert(Py_REFCNT(frame_1bd6be80b3e36a879d46e45a5646175d) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[50];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1bd6be80b3e36a879d46e45a5646175d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1bd6be80b3e36a879d46e45a5646175d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1bd6be80b3e36a879d46e45a5646175d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1bd6be80b3e36a879d46e45a5646175d,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_1bd6be80b3e36a879d46e45a5646175d == cache_frame_1bd6be80b3e36a879d46e45a5646175d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1bd6be80b3e36a879d46e45a5646175d);
        cache_frame_1bd6be80b3e36a879d46e45a5646175d = NULL;
    }

    assertFrameObject(frame_1bd6be80b3e36a879d46e45a5646175d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__47_Filter(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_b1e9ecb3b830751595213a639bf7f3a0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_b1e9ecb3b830751595213a639bf7f3a0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b1e9ecb3b830751595213a639bf7f3a0)) {
        Py_XDECREF(cache_frame_b1e9ecb3b830751595213a639bf7f3a0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b1e9ecb3b830751595213a639bf7f3a0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b1e9ecb3b830751595213a639bf7f3a0 = MAKE_FUNCTION_FRAME(codeobj_b1e9ecb3b830751595213a639bf7f3a0, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b1e9ecb3b830751595213a639bf7f3a0->m_type_description == NULL);
    frame_b1e9ecb3b830751595213a639bf7f3a0 = cache_frame_b1e9ecb3b830751595213a639bf7f3a0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b1e9ecb3b830751595213a639bf7f3a0);
    assert(Py_REFCNT(frame_b1e9ecb3b830751595213a639bf7f3a0) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[51];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b1e9ecb3b830751595213a639bf7f3a0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b1e9ecb3b830751595213a639bf7f3a0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b1e9ecb3b830751595213a639bf7f3a0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b1e9ecb3b830751595213a639bf7f3a0,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_b1e9ecb3b830751595213a639bf7f3a0 == cache_frame_b1e9ecb3b830751595213a639bf7f3a0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b1e9ecb3b830751595213a639bf7f3a0);
        cache_frame_b1e9ecb3b830751595213a639bf7f3a0 = NULL;
    }

    assertFrameObject(frame_b1e9ecb3b830751595213a639bf7f3a0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__48_FilterAnd(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_c79b3b384b7da0549aa1cd4c7ff0969b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_c79b3b384b7da0549aa1cd4c7ff0969b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c79b3b384b7da0549aa1cd4c7ff0969b)) {
        Py_XDECREF(cache_frame_c79b3b384b7da0549aa1cd4c7ff0969b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c79b3b384b7da0549aa1cd4c7ff0969b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c79b3b384b7da0549aa1cd4c7ff0969b = MAKE_FUNCTION_FRAME(codeobj_c79b3b384b7da0549aa1cd4c7ff0969b, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c79b3b384b7da0549aa1cd4c7ff0969b->m_type_description == NULL);
    frame_c79b3b384b7da0549aa1cd4c7ff0969b = cache_frame_c79b3b384b7da0549aa1cd4c7ff0969b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c79b3b384b7da0549aa1cd4c7ff0969b);
    assert(Py_REFCNT(frame_c79b3b384b7da0549aa1cd4c7ff0969b) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[52];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c79b3b384b7da0549aa1cd4c7ff0969b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c79b3b384b7da0549aa1cd4c7ff0969b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c79b3b384b7da0549aa1cd4c7ff0969b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c79b3b384b7da0549aa1cd4c7ff0969b,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_c79b3b384b7da0549aa1cd4c7ff0969b == cache_frame_c79b3b384b7da0549aa1cd4c7ff0969b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c79b3b384b7da0549aa1cd4c7ff0969b);
        cache_frame_c79b3b384b7da0549aa1cd4c7ff0969b = NULL;
    }

    assertFrameObject(frame_c79b3b384b7da0549aa1cd4c7ff0969b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__49_FilterCondition(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_bd82c4ac27350c3e5e2d8bc63aa457f2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_bd82c4ac27350c3e5e2d8bc63aa457f2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bd82c4ac27350c3e5e2d8bc63aa457f2)) {
        Py_XDECREF(cache_frame_bd82c4ac27350c3e5e2d8bc63aa457f2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bd82c4ac27350c3e5e2d8bc63aa457f2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bd82c4ac27350c3e5e2d8bc63aa457f2 = MAKE_FUNCTION_FRAME(codeobj_bd82c4ac27350c3e5e2d8bc63aa457f2, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bd82c4ac27350c3e5e2d8bc63aa457f2->m_type_description == NULL);
    frame_bd82c4ac27350c3e5e2d8bc63aa457f2 = cache_frame_bd82c4ac27350c3e5e2d8bc63aa457f2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bd82c4ac27350c3e5e2d8bc63aa457f2);
    assert(Py_REFCNT(frame_bd82c4ac27350c3e5e2d8bc63aa457f2) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[53];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bd82c4ac27350c3e5e2d8bc63aa457f2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bd82c4ac27350c3e5e2d8bc63aa457f2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bd82c4ac27350c3e5e2d8bc63aa457f2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bd82c4ac27350c3e5e2d8bc63aa457f2,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_bd82c4ac27350c3e5e2d8bc63aa457f2 == cache_frame_bd82c4ac27350c3e5e2d8bc63aa457f2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bd82c4ac27350c3e5e2d8bc63aa457f2);
        cache_frame_bd82c4ac27350c3e5e2d8bc63aa457f2 = NULL;
    }

    assertFrameObject(frame_bd82c4ac27350c3e5e2d8bc63aa457f2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__50_FilterOr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_b2c56737bff9339c5167a72576897e20;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_b2c56737bff9339c5167a72576897e20 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b2c56737bff9339c5167a72576897e20)) {
        Py_XDECREF(cache_frame_b2c56737bff9339c5167a72576897e20);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b2c56737bff9339c5167a72576897e20 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b2c56737bff9339c5167a72576897e20 = MAKE_FUNCTION_FRAME(codeobj_b2c56737bff9339c5167a72576897e20, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b2c56737bff9339c5167a72576897e20->m_type_description == NULL);
    frame_b2c56737bff9339c5167a72576897e20 = cache_frame_b2c56737bff9339c5167a72576897e20;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b2c56737bff9339c5167a72576897e20);
    assert(Py_REFCNT(frame_b2c56737bff9339c5167a72576897e20) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[54];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b2c56737bff9339c5167a72576897e20, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b2c56737bff9339c5167a72576897e20->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b2c56737bff9339c5167a72576897e20, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b2c56737bff9339c5167a72576897e20,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_b2c56737bff9339c5167a72576897e20 == cache_frame_b2c56737bff9339c5167a72576897e20) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b2c56737bff9339c5167a72576897e20);
        cache_frame_b2c56737bff9339c5167a72576897e20 = NULL;
    }

    assertFrameObject(frame_b2c56737bff9339c5167a72576897e20);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__51_FilterSetItem(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_46e545d54fd22c3bc2e5f5af98b294a2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_46e545d54fd22c3bc2e5f5af98b294a2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_46e545d54fd22c3bc2e5f5af98b294a2)) {
        Py_XDECREF(cache_frame_46e545d54fd22c3bc2e5f5af98b294a2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_46e545d54fd22c3bc2e5f5af98b294a2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_46e545d54fd22c3bc2e5f5af98b294a2 = MAKE_FUNCTION_FRAME(codeobj_46e545d54fd22c3bc2e5f5af98b294a2, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_46e545d54fd22c3bc2e5f5af98b294a2->m_type_description == NULL);
    frame_46e545d54fd22c3bc2e5f5af98b294a2 = cache_frame_46e545d54fd22c3bc2e5f5af98b294a2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_46e545d54fd22c3bc2e5f5af98b294a2);
    assert(Py_REFCNT(frame_46e545d54fd22c3bc2e5f5af98b294a2) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[55];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_46e545d54fd22c3bc2e5f5af98b294a2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_46e545d54fd22c3bc2e5f5af98b294a2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_46e545d54fd22c3bc2e5f5af98b294a2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_46e545d54fd22c3bc2e5f5af98b294a2,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_46e545d54fd22c3bc2e5f5af98b294a2 == cache_frame_46e545d54fd22c3bc2e5f5af98b294a2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_46e545d54fd22c3bc2e5f5af98b294a2);
        cache_frame_46e545d54fd22c3bc2e5f5af98b294a2 = NULL;
    }

    assertFrameObject(frame_46e545d54fd22c3bc2e5f5af98b294a2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__52_FirstColumn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_da7b4d7e27f0d948dadd2fcd283eb3d2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_da7b4d7e27f0d948dadd2fcd283eb3d2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_da7b4d7e27f0d948dadd2fcd283eb3d2)) {
        Py_XDECREF(cache_frame_da7b4d7e27f0d948dadd2fcd283eb3d2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_da7b4d7e27f0d948dadd2fcd283eb3d2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_da7b4d7e27f0d948dadd2fcd283eb3d2 = MAKE_FUNCTION_FRAME(codeobj_da7b4d7e27f0d948dadd2fcd283eb3d2, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_da7b4d7e27f0d948dadd2fcd283eb3d2->m_type_description == NULL);
    frame_da7b4d7e27f0d948dadd2fcd283eb3d2 = cache_frame_da7b4d7e27f0d948dadd2fcd283eb3d2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_da7b4d7e27f0d948dadd2fcd283eb3d2);
    assert(Py_REFCNT(frame_da7b4d7e27f0d948dadd2fcd283eb3d2) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[56];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_da7b4d7e27f0d948dadd2fcd283eb3d2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_da7b4d7e27f0d948dadd2fcd283eb3d2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_da7b4d7e27f0d948dadd2fcd283eb3d2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_da7b4d7e27f0d948dadd2fcd283eb3d2,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_da7b4d7e27f0d948dadd2fcd283eb3d2 == cache_frame_da7b4d7e27f0d948dadd2fcd283eb3d2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_da7b4d7e27f0d948dadd2fcd283eb3d2);
        cache_frame_da7b4d7e27f0d948dadd2fcd283eb3d2 = NULL;
    }

    assertFrameObject(frame_da7b4d7e27f0d948dadd2fcd283eb3d2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__53_FirstRow(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_a55aeb3d25b17e0aef15e70b40744fc2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a55aeb3d25b17e0aef15e70b40744fc2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a55aeb3d25b17e0aef15e70b40744fc2)) {
        Py_XDECREF(cache_frame_a55aeb3d25b17e0aef15e70b40744fc2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a55aeb3d25b17e0aef15e70b40744fc2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a55aeb3d25b17e0aef15e70b40744fc2 = MAKE_FUNCTION_FRAME(codeobj_a55aeb3d25b17e0aef15e70b40744fc2, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a55aeb3d25b17e0aef15e70b40744fc2->m_type_description == NULL);
    frame_a55aeb3d25b17e0aef15e70b40744fc2 = cache_frame_a55aeb3d25b17e0aef15e70b40744fc2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a55aeb3d25b17e0aef15e70b40744fc2);
    assert(Py_REFCNT(frame_a55aeb3d25b17e0aef15e70b40744fc2) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[57];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a55aeb3d25b17e0aef15e70b40744fc2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a55aeb3d25b17e0aef15e70b40744fc2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a55aeb3d25b17e0aef15e70b40744fc2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a55aeb3d25b17e0aef15e70b40744fc2,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_a55aeb3d25b17e0aef15e70b40744fc2 == cache_frame_a55aeb3d25b17e0aef15e70b40744fc2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a55aeb3d25b17e0aef15e70b40744fc2);
        cache_frame_a55aeb3d25b17e0aef15e70b40744fc2 = NULL;
    }

    assertFrameObject(frame_a55aeb3d25b17e0aef15e70b40744fc2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__54_HelpMessage(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_ac5c609b919b16b445355d9cf9c0de37;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ac5c609b919b16b445355d9cf9c0de37 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ac5c609b919b16b445355d9cf9c0de37)) {
        Py_XDECREF(cache_frame_ac5c609b919b16b445355d9cf9c0de37);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ac5c609b919b16b445355d9cf9c0de37 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ac5c609b919b16b445355d9cf9c0de37 = MAKE_FUNCTION_FRAME(codeobj_ac5c609b919b16b445355d9cf9c0de37, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ac5c609b919b16b445355d9cf9c0de37->m_type_description == NULL);
    frame_ac5c609b919b16b445355d9cf9c0de37 = cache_frame_ac5c609b919b16b445355d9cf9c0de37;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ac5c609b919b16b445355d9cf9c0de37);
    assert(Py_REFCNT(frame_ac5c609b919b16b445355d9cf9c0de37) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[58];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ac5c609b919b16b445355d9cf9c0de37, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ac5c609b919b16b445355d9cf9c0de37->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ac5c609b919b16b445355d9cf9c0de37, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ac5c609b919b16b445355d9cf9c0de37,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_ac5c609b919b16b445355d9cf9c0de37 == cache_frame_ac5c609b919b16b445355d9cf9c0de37) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ac5c609b919b16b445355d9cf9c0de37);
        cache_frame_ac5c609b919b16b445355d9cf9c0de37 = NULL;
    }

    assertFrameObject(frame_ac5c609b919b16b445355d9cf9c0de37);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__55_HighlightedRange(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_c69ca32eee1553db91fa39ab8a110ade;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_c69ca32eee1553db91fa39ab8a110ade = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c69ca32eee1553db91fa39ab8a110ade)) {
        Py_XDECREF(cache_frame_c69ca32eee1553db91fa39ab8a110ade);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c69ca32eee1553db91fa39ab8a110ade == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c69ca32eee1553db91fa39ab8a110ade = MAKE_FUNCTION_FRAME(codeobj_c69ca32eee1553db91fa39ab8a110ade, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c69ca32eee1553db91fa39ab8a110ade->m_type_description == NULL);
    frame_c69ca32eee1553db91fa39ab8a110ade = cache_frame_c69ca32eee1553db91fa39ab8a110ade;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c69ca32eee1553db91fa39ab8a110ade);
    assert(Py_REFCNT(frame_c69ca32eee1553db91fa39ab8a110ade) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[59];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c69ca32eee1553db91fa39ab8a110ade, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c69ca32eee1553db91fa39ab8a110ade->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c69ca32eee1553db91fa39ab8a110ade, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c69ca32eee1553db91fa39ab8a110ade,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_c69ca32eee1553db91fa39ab8a110ade == cache_frame_c69ca32eee1553db91fa39ab8a110ade) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c69ca32eee1553db91fa39ab8a110ade);
        cache_frame_c69ca32eee1553db91fa39ab8a110ade = NULL;
    }

    assertFrameObject(frame_c69ca32eee1553db91fa39ab8a110ade);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__56_Insertion(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_b44c68028fbe0551f1b251be9c5cc7f5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_b44c68028fbe0551f1b251be9c5cc7f5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b44c68028fbe0551f1b251be9c5cc7f5)) {
        Py_XDECREF(cache_frame_b44c68028fbe0551f1b251be9c5cc7f5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b44c68028fbe0551f1b251be9c5cc7f5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b44c68028fbe0551f1b251be9c5cc7f5 = MAKE_FUNCTION_FRAME(codeobj_b44c68028fbe0551f1b251be9c5cc7f5, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b44c68028fbe0551f1b251be9c5cc7f5->m_type_description == NULL);
    frame_b44c68028fbe0551f1b251be9c5cc7f5 = cache_frame_b44c68028fbe0551f1b251be9c5cc7f5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b44c68028fbe0551f1b251be9c5cc7f5);
    assert(Py_REFCNT(frame_b44c68028fbe0551f1b251be9c5cc7f5) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[60];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b44c68028fbe0551f1b251be9c5cc7f5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b44c68028fbe0551f1b251be9c5cc7f5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b44c68028fbe0551f1b251be9c5cc7f5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b44c68028fbe0551f1b251be9c5cc7f5,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_b44c68028fbe0551f1b251be9c5cc7f5 == cache_frame_b44c68028fbe0551f1b251be9c5cc7f5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b44c68028fbe0551f1b251be9c5cc7f5);
        cache_frame_b44c68028fbe0551f1b251be9c5cc7f5 = NULL;
    }

    assertFrameObject(frame_b44c68028fbe0551f1b251be9c5cc7f5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__57_InsertionCutOff(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_cb7f5ef793868ddf339dde5326d3b528;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_cb7f5ef793868ddf339dde5326d3b528 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cb7f5ef793868ddf339dde5326d3b528)) {
        Py_XDECREF(cache_frame_cb7f5ef793868ddf339dde5326d3b528);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cb7f5ef793868ddf339dde5326d3b528 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cb7f5ef793868ddf339dde5326d3b528 = MAKE_FUNCTION_FRAME(codeobj_cb7f5ef793868ddf339dde5326d3b528, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cb7f5ef793868ddf339dde5326d3b528->m_type_description == NULL);
    frame_cb7f5ef793868ddf339dde5326d3b528 = cache_frame_cb7f5ef793868ddf339dde5326d3b528;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cb7f5ef793868ddf339dde5326d3b528);
    assert(Py_REFCNT(frame_cb7f5ef793868ddf339dde5326d3b528) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[61];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cb7f5ef793868ddf339dde5326d3b528, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cb7f5ef793868ddf339dde5326d3b528->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cb7f5ef793868ddf339dde5326d3b528, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cb7f5ef793868ddf339dde5326d3b528,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_cb7f5ef793868ddf339dde5326d3b528 == cache_frame_cb7f5ef793868ddf339dde5326d3b528) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cb7f5ef793868ddf339dde5326d3b528);
        cache_frame_cb7f5ef793868ddf339dde5326d3b528 = NULL;
    }

    assertFrameObject(frame_cb7f5ef793868ddf339dde5326d3b528);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__58_Iteration(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_f5dc9de45fa93dd405fcf15b214c9768;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f5dc9de45fa93dd405fcf15b214c9768 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f5dc9de45fa93dd405fcf15b214c9768)) {
        Py_XDECREF(cache_frame_f5dc9de45fa93dd405fcf15b214c9768);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f5dc9de45fa93dd405fcf15b214c9768 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f5dc9de45fa93dd405fcf15b214c9768 = MAKE_FUNCTION_FRAME(codeobj_f5dc9de45fa93dd405fcf15b214c9768, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f5dc9de45fa93dd405fcf15b214c9768->m_type_description == NULL);
    frame_f5dc9de45fa93dd405fcf15b214c9768 = cache_frame_f5dc9de45fa93dd405fcf15b214c9768;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f5dc9de45fa93dd405fcf15b214c9768);
    assert(Py_REFCNT(frame_f5dc9de45fa93dd405fcf15b214c9768) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[62];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f5dc9de45fa93dd405fcf15b214c9768, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f5dc9de45fa93dd405fcf15b214c9768->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f5dc9de45fa93dd405fcf15b214c9768, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f5dc9de45fa93dd405fcf15b214c9768,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_f5dc9de45fa93dd405fcf15b214c9768 == cache_frame_f5dc9de45fa93dd405fcf15b214c9768) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f5dc9de45fa93dd405fcf15b214c9768);
        cache_frame_f5dc9de45fa93dd405fcf15b214c9768 = NULL;
    }

    assertFrameObject(frame_f5dc9de45fa93dd405fcf15b214c9768);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__59_LabelRange(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_f6b1f8fd26f4154f2225f0b1efb6283e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f6b1f8fd26f4154f2225f0b1efb6283e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f6b1f8fd26f4154f2225f0b1efb6283e)) {
        Py_XDECREF(cache_frame_f6b1f8fd26f4154f2225f0b1efb6283e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f6b1f8fd26f4154f2225f0b1efb6283e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f6b1f8fd26f4154f2225f0b1efb6283e = MAKE_FUNCTION_FRAME(codeobj_f6b1f8fd26f4154f2225f0b1efb6283e, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f6b1f8fd26f4154f2225f0b1efb6283e->m_type_description == NULL);
    frame_f6b1f8fd26f4154f2225f0b1efb6283e = cache_frame_f6b1f8fd26f4154f2225f0b1efb6283e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f6b1f8fd26f4154f2225f0b1efb6283e);
    assert(Py_REFCNT(frame_f6b1f8fd26f4154f2225f0b1efb6283e) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[63];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f6b1f8fd26f4154f2225f0b1efb6283e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f6b1f8fd26f4154f2225f0b1efb6283e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f6b1f8fd26f4154f2225f0b1efb6283e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f6b1f8fd26f4154f2225f0b1efb6283e,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_f6b1f8fd26f4154f2225f0b1efb6283e == cache_frame_f6b1f8fd26f4154f2225f0b1efb6283e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f6b1f8fd26f4154f2225f0b1efb6283e);
        cache_frame_f6b1f8fd26f4154f2225f0b1efb6283e = NULL;
    }

    assertFrameObject(frame_f6b1f8fd26f4154f2225f0b1efb6283e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__60_LabelRanges(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_a63a1ce7cddda0badae814aaa6cbbea6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a63a1ce7cddda0badae814aaa6cbbea6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a63a1ce7cddda0badae814aaa6cbbea6)) {
        Py_XDECREF(cache_frame_a63a1ce7cddda0badae814aaa6cbbea6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a63a1ce7cddda0badae814aaa6cbbea6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a63a1ce7cddda0badae814aaa6cbbea6 = MAKE_FUNCTION_FRAME(codeobj_a63a1ce7cddda0badae814aaa6cbbea6, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a63a1ce7cddda0badae814aaa6cbbea6->m_type_description == NULL);
    frame_a63a1ce7cddda0badae814aaa6cbbea6 = cache_frame_a63a1ce7cddda0badae814aaa6cbbea6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a63a1ce7cddda0badae814aaa6cbbea6);
    assert(Py_REFCNT(frame_a63a1ce7cddda0badae814aaa6cbbea6) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[64];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a63a1ce7cddda0badae814aaa6cbbea6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a63a1ce7cddda0badae814aaa6cbbea6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a63a1ce7cddda0badae814aaa6cbbea6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a63a1ce7cddda0badae814aaa6cbbea6,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_a63a1ce7cddda0badae814aaa6cbbea6 == cache_frame_a63a1ce7cddda0badae814aaa6cbbea6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a63a1ce7cddda0badae814aaa6cbbea6);
        cache_frame_a63a1ce7cddda0badae814aaa6cbbea6 = NULL;
    }

    assertFrameObject(frame_a63a1ce7cddda0badae814aaa6cbbea6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__61_LastColumn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_80016ed03fce0c0bdd89769f29e0e514;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_80016ed03fce0c0bdd89769f29e0e514 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_80016ed03fce0c0bdd89769f29e0e514)) {
        Py_XDECREF(cache_frame_80016ed03fce0c0bdd89769f29e0e514);

#if _DEBUG_REFCOUNTS
        if (cache_frame_80016ed03fce0c0bdd89769f29e0e514 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_80016ed03fce0c0bdd89769f29e0e514 = MAKE_FUNCTION_FRAME(codeobj_80016ed03fce0c0bdd89769f29e0e514, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_80016ed03fce0c0bdd89769f29e0e514->m_type_description == NULL);
    frame_80016ed03fce0c0bdd89769f29e0e514 = cache_frame_80016ed03fce0c0bdd89769f29e0e514;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_80016ed03fce0c0bdd89769f29e0e514);
    assert(Py_REFCNT(frame_80016ed03fce0c0bdd89769f29e0e514) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[65];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_80016ed03fce0c0bdd89769f29e0e514, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_80016ed03fce0c0bdd89769f29e0e514->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_80016ed03fce0c0bdd89769f29e0e514, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_80016ed03fce0c0bdd89769f29e0e514,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_80016ed03fce0c0bdd89769f29e0e514 == cache_frame_80016ed03fce0c0bdd89769f29e0e514) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_80016ed03fce0c0bdd89769f29e0e514);
        cache_frame_80016ed03fce0c0bdd89769f29e0e514 = NULL;
    }

    assertFrameObject(frame_80016ed03fce0c0bdd89769f29e0e514);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__62_LastRow(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_861ecc31882624927eab588210bdb787;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_861ecc31882624927eab588210bdb787 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_861ecc31882624927eab588210bdb787)) {
        Py_XDECREF(cache_frame_861ecc31882624927eab588210bdb787);

#if _DEBUG_REFCOUNTS
        if (cache_frame_861ecc31882624927eab588210bdb787 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_861ecc31882624927eab588210bdb787 = MAKE_FUNCTION_FRAME(codeobj_861ecc31882624927eab588210bdb787, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_861ecc31882624927eab588210bdb787->m_type_description == NULL);
    frame_861ecc31882624927eab588210bdb787 = cache_frame_861ecc31882624927eab588210bdb787;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_861ecc31882624927eab588210bdb787);
    assert(Py_REFCNT(frame_861ecc31882624927eab588210bdb787) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[66];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_861ecc31882624927eab588210bdb787, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_861ecc31882624927eab588210bdb787->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_861ecc31882624927eab588210bdb787, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_861ecc31882624927eab588210bdb787,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_861ecc31882624927eab588210bdb787 == cache_frame_861ecc31882624927eab588210bdb787) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_861ecc31882624927eab588210bdb787);
        cache_frame_861ecc31882624927eab588210bdb787 = NULL;
    }

    assertFrameObject(frame_861ecc31882624927eab588210bdb787);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__63_Movement(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_e8a9db330b73fdc83a471ca9b7b761f9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_e8a9db330b73fdc83a471ca9b7b761f9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e8a9db330b73fdc83a471ca9b7b761f9)) {
        Py_XDECREF(cache_frame_e8a9db330b73fdc83a471ca9b7b761f9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e8a9db330b73fdc83a471ca9b7b761f9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e8a9db330b73fdc83a471ca9b7b761f9 = MAKE_FUNCTION_FRAME(codeobj_e8a9db330b73fdc83a471ca9b7b761f9, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e8a9db330b73fdc83a471ca9b7b761f9->m_type_description == NULL);
    frame_e8a9db330b73fdc83a471ca9b7b761f9 = cache_frame_e8a9db330b73fdc83a471ca9b7b761f9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e8a9db330b73fdc83a471ca9b7b761f9);
    assert(Py_REFCNT(frame_e8a9db330b73fdc83a471ca9b7b761f9) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[67];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e8a9db330b73fdc83a471ca9b7b761f9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e8a9db330b73fdc83a471ca9b7b761f9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e8a9db330b73fdc83a471ca9b7b761f9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e8a9db330b73fdc83a471ca9b7b761f9,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_e8a9db330b73fdc83a471ca9b7b761f9 == cache_frame_e8a9db330b73fdc83a471ca9b7b761f9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e8a9db330b73fdc83a471ca9b7b761f9);
        cache_frame_e8a9db330b73fdc83a471ca9b7b761f9 = NULL;
    }

    assertFrameObject(frame_e8a9db330b73fdc83a471ca9b7b761f9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__64_MovementCutOff(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_32cf5eaabbc1b8b2f5ea08191f7736ba;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_32cf5eaabbc1b8b2f5ea08191f7736ba = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_32cf5eaabbc1b8b2f5ea08191f7736ba)) {
        Py_XDECREF(cache_frame_32cf5eaabbc1b8b2f5ea08191f7736ba);

#if _DEBUG_REFCOUNTS
        if (cache_frame_32cf5eaabbc1b8b2f5ea08191f7736ba == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_32cf5eaabbc1b8b2f5ea08191f7736ba = MAKE_FUNCTION_FRAME(codeobj_32cf5eaabbc1b8b2f5ea08191f7736ba, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_32cf5eaabbc1b8b2f5ea08191f7736ba->m_type_description == NULL);
    frame_32cf5eaabbc1b8b2f5ea08191f7736ba = cache_frame_32cf5eaabbc1b8b2f5ea08191f7736ba;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_32cf5eaabbc1b8b2f5ea08191f7736ba);
    assert(Py_REFCNT(frame_32cf5eaabbc1b8b2f5ea08191f7736ba) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[68];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_32cf5eaabbc1b8b2f5ea08191f7736ba, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_32cf5eaabbc1b8b2f5ea08191f7736ba->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_32cf5eaabbc1b8b2f5ea08191f7736ba, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_32cf5eaabbc1b8b2f5ea08191f7736ba,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_32cf5eaabbc1b8b2f5ea08191f7736ba == cache_frame_32cf5eaabbc1b8b2f5ea08191f7736ba) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_32cf5eaabbc1b8b2f5ea08191f7736ba);
        cache_frame_32cf5eaabbc1b8b2f5ea08191f7736ba = NULL;
    }

    assertFrameObject(frame_32cf5eaabbc1b8b2f5ea08191f7736ba);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__65_NamedExpression(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_4dff9ab5676c1cd0ca58c793515e0812;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4dff9ab5676c1cd0ca58c793515e0812 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4dff9ab5676c1cd0ca58c793515e0812)) {
        Py_XDECREF(cache_frame_4dff9ab5676c1cd0ca58c793515e0812);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4dff9ab5676c1cd0ca58c793515e0812 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4dff9ab5676c1cd0ca58c793515e0812 = MAKE_FUNCTION_FRAME(codeobj_4dff9ab5676c1cd0ca58c793515e0812, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4dff9ab5676c1cd0ca58c793515e0812->m_type_description == NULL);
    frame_4dff9ab5676c1cd0ca58c793515e0812 = cache_frame_4dff9ab5676c1cd0ca58c793515e0812;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4dff9ab5676c1cd0ca58c793515e0812);
    assert(Py_REFCNT(frame_4dff9ab5676c1cd0ca58c793515e0812) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[69];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4dff9ab5676c1cd0ca58c793515e0812, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4dff9ab5676c1cd0ca58c793515e0812->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4dff9ab5676c1cd0ca58c793515e0812, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4dff9ab5676c1cd0ca58c793515e0812,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_4dff9ab5676c1cd0ca58c793515e0812 == cache_frame_4dff9ab5676c1cd0ca58c793515e0812) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4dff9ab5676c1cd0ca58c793515e0812);
        cache_frame_4dff9ab5676c1cd0ca58c793515e0812 = NULL;
    }

    assertFrameObject(frame_4dff9ab5676c1cd0ca58c793515e0812);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__66_NamedExpressions(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_41967ae2952a92fbd92affb0dfa2e044;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_41967ae2952a92fbd92affb0dfa2e044 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_41967ae2952a92fbd92affb0dfa2e044)) {
        Py_XDECREF(cache_frame_41967ae2952a92fbd92affb0dfa2e044);

#if _DEBUG_REFCOUNTS
        if (cache_frame_41967ae2952a92fbd92affb0dfa2e044 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_41967ae2952a92fbd92affb0dfa2e044 = MAKE_FUNCTION_FRAME(codeobj_41967ae2952a92fbd92affb0dfa2e044, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_41967ae2952a92fbd92affb0dfa2e044->m_type_description == NULL);
    frame_41967ae2952a92fbd92affb0dfa2e044 = cache_frame_41967ae2952a92fbd92affb0dfa2e044;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_41967ae2952a92fbd92affb0dfa2e044);
    assert(Py_REFCNT(frame_41967ae2952a92fbd92affb0dfa2e044) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[70];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_41967ae2952a92fbd92affb0dfa2e044, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_41967ae2952a92fbd92affb0dfa2e044->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_41967ae2952a92fbd92affb0dfa2e044, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_41967ae2952a92fbd92affb0dfa2e044,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_41967ae2952a92fbd92affb0dfa2e044 == cache_frame_41967ae2952a92fbd92affb0dfa2e044) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_41967ae2952a92fbd92affb0dfa2e044);
        cache_frame_41967ae2952a92fbd92affb0dfa2e044 = NULL;
    }

    assertFrameObject(frame_41967ae2952a92fbd92affb0dfa2e044);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__67_NamedRange(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_fd9edbeb30d4220410a402e83d6f9ee3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_fd9edbeb30d4220410a402e83d6f9ee3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fd9edbeb30d4220410a402e83d6f9ee3)) {
        Py_XDECREF(cache_frame_fd9edbeb30d4220410a402e83d6f9ee3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fd9edbeb30d4220410a402e83d6f9ee3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fd9edbeb30d4220410a402e83d6f9ee3 = MAKE_FUNCTION_FRAME(codeobj_fd9edbeb30d4220410a402e83d6f9ee3, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fd9edbeb30d4220410a402e83d6f9ee3->m_type_description == NULL);
    frame_fd9edbeb30d4220410a402e83d6f9ee3 = cache_frame_fd9edbeb30d4220410a402e83d6f9ee3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fd9edbeb30d4220410a402e83d6f9ee3);
    assert(Py_REFCNT(frame_fd9edbeb30d4220410a402e83d6f9ee3) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[71];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fd9edbeb30d4220410a402e83d6f9ee3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fd9edbeb30d4220410a402e83d6f9ee3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fd9edbeb30d4220410a402e83d6f9ee3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fd9edbeb30d4220410a402e83d6f9ee3,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_fd9edbeb30d4220410a402e83d6f9ee3 == cache_frame_fd9edbeb30d4220410a402e83d6f9ee3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fd9edbeb30d4220410a402e83d6f9ee3);
        cache_frame_fd9edbeb30d4220410a402e83d6f9ee3 = NULL;
    }

    assertFrameObject(frame_fd9edbeb30d4220410a402e83d6f9ee3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__68_NullDate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_2c1f09de378c3c29a17205215770e0e8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_2c1f09de378c3c29a17205215770e0e8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2c1f09de378c3c29a17205215770e0e8)) {
        Py_XDECREF(cache_frame_2c1f09de378c3c29a17205215770e0e8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2c1f09de378c3c29a17205215770e0e8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2c1f09de378c3c29a17205215770e0e8 = MAKE_FUNCTION_FRAME(codeobj_2c1f09de378c3c29a17205215770e0e8, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2c1f09de378c3c29a17205215770e0e8->m_type_description == NULL);
    frame_2c1f09de378c3c29a17205215770e0e8 = cache_frame_2c1f09de378c3c29a17205215770e0e8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2c1f09de378c3c29a17205215770e0e8);
    assert(Py_REFCNT(frame_2c1f09de378c3c29a17205215770e0e8) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[72];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2c1f09de378c3c29a17205215770e0e8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2c1f09de378c3c29a17205215770e0e8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2c1f09de378c3c29a17205215770e0e8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2c1f09de378c3c29a17205215770e0e8,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_2c1f09de378c3c29a17205215770e0e8 == cache_frame_2c1f09de378c3c29a17205215770e0e8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2c1f09de378c3c29a17205215770e0e8);
        cache_frame_2c1f09de378c3c29a17205215770e0e8 = NULL;
    }

    assertFrameObject(frame_2c1f09de378c3c29a17205215770e0e8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__69_OddColumns(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_4a94d86ee563b255a4b27cb39daa56d1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4a94d86ee563b255a4b27cb39daa56d1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4a94d86ee563b255a4b27cb39daa56d1)) {
        Py_XDECREF(cache_frame_4a94d86ee563b255a4b27cb39daa56d1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4a94d86ee563b255a4b27cb39daa56d1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4a94d86ee563b255a4b27cb39daa56d1 = MAKE_FUNCTION_FRAME(codeobj_4a94d86ee563b255a4b27cb39daa56d1, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4a94d86ee563b255a4b27cb39daa56d1->m_type_description == NULL);
    frame_4a94d86ee563b255a4b27cb39daa56d1 = cache_frame_4a94d86ee563b255a4b27cb39daa56d1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4a94d86ee563b255a4b27cb39daa56d1);
    assert(Py_REFCNT(frame_4a94d86ee563b255a4b27cb39daa56d1) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[73];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4a94d86ee563b255a4b27cb39daa56d1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4a94d86ee563b255a4b27cb39daa56d1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4a94d86ee563b255a4b27cb39daa56d1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4a94d86ee563b255a4b27cb39daa56d1,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_4a94d86ee563b255a4b27cb39daa56d1 == cache_frame_4a94d86ee563b255a4b27cb39daa56d1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4a94d86ee563b255a4b27cb39daa56d1);
        cache_frame_4a94d86ee563b255a4b27cb39daa56d1 = NULL;
    }

    assertFrameObject(frame_4a94d86ee563b255a4b27cb39daa56d1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__70_OddRows(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_908e590f319b7e95409aab1618312dcd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_908e590f319b7e95409aab1618312dcd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_908e590f319b7e95409aab1618312dcd)) {
        Py_XDECREF(cache_frame_908e590f319b7e95409aab1618312dcd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_908e590f319b7e95409aab1618312dcd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_908e590f319b7e95409aab1618312dcd = MAKE_FUNCTION_FRAME(codeobj_908e590f319b7e95409aab1618312dcd, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_908e590f319b7e95409aab1618312dcd->m_type_description == NULL);
    frame_908e590f319b7e95409aab1618312dcd = cache_frame_908e590f319b7e95409aab1618312dcd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_908e590f319b7e95409aab1618312dcd);
    assert(Py_REFCNT(frame_908e590f319b7e95409aab1618312dcd) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[74];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_908e590f319b7e95409aab1618312dcd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_908e590f319b7e95409aab1618312dcd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_908e590f319b7e95409aab1618312dcd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_908e590f319b7e95409aab1618312dcd,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_908e590f319b7e95409aab1618312dcd == cache_frame_908e590f319b7e95409aab1618312dcd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_908e590f319b7e95409aab1618312dcd);
        cache_frame_908e590f319b7e95409aab1618312dcd = NULL;
    }

    assertFrameObject(frame_908e590f319b7e95409aab1618312dcd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__71_Operation(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_74e32e2d0d77f84e07e8fe03da8763b6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_74e32e2d0d77f84e07e8fe03da8763b6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_74e32e2d0d77f84e07e8fe03da8763b6)) {
        Py_XDECREF(cache_frame_74e32e2d0d77f84e07e8fe03da8763b6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_74e32e2d0d77f84e07e8fe03da8763b6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_74e32e2d0d77f84e07e8fe03da8763b6 = MAKE_FUNCTION_FRAME(codeobj_74e32e2d0d77f84e07e8fe03da8763b6, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_74e32e2d0d77f84e07e8fe03da8763b6->m_type_description == NULL);
    frame_74e32e2d0d77f84e07e8fe03da8763b6 = cache_frame_74e32e2d0d77f84e07e8fe03da8763b6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_74e32e2d0d77f84e07e8fe03da8763b6);
    assert(Py_REFCNT(frame_74e32e2d0d77f84e07e8fe03da8763b6) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[75];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_74e32e2d0d77f84e07e8fe03da8763b6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_74e32e2d0d77f84e07e8fe03da8763b6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_74e32e2d0d77f84e07e8fe03da8763b6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_74e32e2d0d77f84e07e8fe03da8763b6,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_74e32e2d0d77f84e07e8fe03da8763b6 == cache_frame_74e32e2d0d77f84e07e8fe03da8763b6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_74e32e2d0d77f84e07e8fe03da8763b6);
        cache_frame_74e32e2d0d77f84e07e8fe03da8763b6 = NULL;
    }

    assertFrameObject(frame_74e32e2d0d77f84e07e8fe03da8763b6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__72_Previous(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_9aff25202be21bd1c1312ee271be8d72;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_9aff25202be21bd1c1312ee271be8d72 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9aff25202be21bd1c1312ee271be8d72)) {
        Py_XDECREF(cache_frame_9aff25202be21bd1c1312ee271be8d72);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9aff25202be21bd1c1312ee271be8d72 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9aff25202be21bd1c1312ee271be8d72 = MAKE_FUNCTION_FRAME(codeobj_9aff25202be21bd1c1312ee271be8d72, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9aff25202be21bd1c1312ee271be8d72->m_type_description == NULL);
    frame_9aff25202be21bd1c1312ee271be8d72 = cache_frame_9aff25202be21bd1c1312ee271be8d72;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9aff25202be21bd1c1312ee271be8d72);
    assert(Py_REFCNT(frame_9aff25202be21bd1c1312ee271be8d72) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[76];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9aff25202be21bd1c1312ee271be8d72, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9aff25202be21bd1c1312ee271be8d72->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9aff25202be21bd1c1312ee271be8d72, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9aff25202be21bd1c1312ee271be8d72,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_9aff25202be21bd1c1312ee271be8d72 == cache_frame_9aff25202be21bd1c1312ee271be8d72) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9aff25202be21bd1c1312ee271be8d72);
        cache_frame_9aff25202be21bd1c1312ee271be8d72 = NULL;
    }

    assertFrameObject(frame_9aff25202be21bd1c1312ee271be8d72);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__73_Scenario(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_1c172e9584a4a00a972ac150eea9469f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_1c172e9584a4a00a972ac150eea9469f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1c172e9584a4a00a972ac150eea9469f)) {
        Py_XDECREF(cache_frame_1c172e9584a4a00a972ac150eea9469f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1c172e9584a4a00a972ac150eea9469f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1c172e9584a4a00a972ac150eea9469f = MAKE_FUNCTION_FRAME(codeobj_1c172e9584a4a00a972ac150eea9469f, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1c172e9584a4a00a972ac150eea9469f->m_type_description == NULL);
    frame_1c172e9584a4a00a972ac150eea9469f = cache_frame_1c172e9584a4a00a972ac150eea9469f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1c172e9584a4a00a972ac150eea9469f);
    assert(Py_REFCNT(frame_1c172e9584a4a00a972ac150eea9469f) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[77];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1c172e9584a4a00a972ac150eea9469f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1c172e9584a4a00a972ac150eea9469f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c172e9584a4a00a972ac150eea9469f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1c172e9584a4a00a972ac150eea9469f,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_1c172e9584a4a00a972ac150eea9469f == cache_frame_1c172e9584a4a00a972ac150eea9469f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1c172e9584a4a00a972ac150eea9469f);
        cache_frame_1c172e9584a4a00a972ac150eea9469f = NULL;
    }

    assertFrameObject(frame_1c172e9584a4a00a972ac150eea9469f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__74_Shapes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_ff1fe1e1007543b7052ff849c04cd464;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ff1fe1e1007543b7052ff849c04cd464 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ff1fe1e1007543b7052ff849c04cd464)) {
        Py_XDECREF(cache_frame_ff1fe1e1007543b7052ff849c04cd464);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ff1fe1e1007543b7052ff849c04cd464 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ff1fe1e1007543b7052ff849c04cd464 = MAKE_FUNCTION_FRAME(codeobj_ff1fe1e1007543b7052ff849c04cd464, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ff1fe1e1007543b7052ff849c04cd464->m_type_description == NULL);
    frame_ff1fe1e1007543b7052ff849c04cd464 = cache_frame_ff1fe1e1007543b7052ff849c04cd464;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ff1fe1e1007543b7052ff849c04cd464);
    assert(Py_REFCNT(frame_ff1fe1e1007543b7052ff849c04cd464) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[78];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ff1fe1e1007543b7052ff849c04cd464, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ff1fe1e1007543b7052ff849c04cd464->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ff1fe1e1007543b7052ff849c04cd464, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ff1fe1e1007543b7052ff849c04cd464,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_ff1fe1e1007543b7052ff849c04cd464 == cache_frame_ff1fe1e1007543b7052ff849c04cd464) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ff1fe1e1007543b7052ff849c04cd464);
        cache_frame_ff1fe1e1007543b7052ff849c04cd464 = NULL;
    }

    assertFrameObject(frame_ff1fe1e1007543b7052ff849c04cd464);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__75_Sort(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_0c27583d1a8c6b041b39443acb8678fe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_0c27583d1a8c6b041b39443acb8678fe = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0c27583d1a8c6b041b39443acb8678fe)) {
        Py_XDECREF(cache_frame_0c27583d1a8c6b041b39443acb8678fe);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0c27583d1a8c6b041b39443acb8678fe == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0c27583d1a8c6b041b39443acb8678fe = MAKE_FUNCTION_FRAME(codeobj_0c27583d1a8c6b041b39443acb8678fe, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0c27583d1a8c6b041b39443acb8678fe->m_type_description == NULL);
    frame_0c27583d1a8c6b041b39443acb8678fe = cache_frame_0c27583d1a8c6b041b39443acb8678fe;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0c27583d1a8c6b041b39443acb8678fe);
    assert(Py_REFCNT(frame_0c27583d1a8c6b041b39443acb8678fe) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[79];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0c27583d1a8c6b041b39443acb8678fe, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0c27583d1a8c6b041b39443acb8678fe->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0c27583d1a8c6b041b39443acb8678fe, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0c27583d1a8c6b041b39443acb8678fe,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_0c27583d1a8c6b041b39443acb8678fe == cache_frame_0c27583d1a8c6b041b39443acb8678fe) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0c27583d1a8c6b041b39443acb8678fe);
        cache_frame_0c27583d1a8c6b041b39443acb8678fe = NULL;
    }

    assertFrameObject(frame_0c27583d1a8c6b041b39443acb8678fe);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__76_SortBy(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_e8c9dab504d6ab63ad0f225443e95fb7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_e8c9dab504d6ab63ad0f225443e95fb7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e8c9dab504d6ab63ad0f225443e95fb7)) {
        Py_XDECREF(cache_frame_e8c9dab504d6ab63ad0f225443e95fb7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e8c9dab504d6ab63ad0f225443e95fb7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e8c9dab504d6ab63ad0f225443e95fb7 = MAKE_FUNCTION_FRAME(codeobj_e8c9dab504d6ab63ad0f225443e95fb7, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e8c9dab504d6ab63ad0f225443e95fb7->m_type_description == NULL);
    frame_e8c9dab504d6ab63ad0f225443e95fb7 = cache_frame_e8c9dab504d6ab63ad0f225443e95fb7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e8c9dab504d6ab63ad0f225443e95fb7);
    assert(Py_REFCNT(frame_e8c9dab504d6ab63ad0f225443e95fb7) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[80];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e8c9dab504d6ab63ad0f225443e95fb7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e8c9dab504d6ab63ad0f225443e95fb7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e8c9dab504d6ab63ad0f225443e95fb7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e8c9dab504d6ab63ad0f225443e95fb7,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_e8c9dab504d6ab63ad0f225443e95fb7 == cache_frame_e8c9dab504d6ab63ad0f225443e95fb7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e8c9dab504d6ab63ad0f225443e95fb7);
        cache_frame_e8c9dab504d6ab63ad0f225443e95fb7 = NULL;
    }

    assertFrameObject(frame_e8c9dab504d6ab63ad0f225443e95fb7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__77_SortGroups(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_ef5e36d17392a253616998aca0e14a3d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ef5e36d17392a253616998aca0e14a3d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ef5e36d17392a253616998aca0e14a3d)) {
        Py_XDECREF(cache_frame_ef5e36d17392a253616998aca0e14a3d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ef5e36d17392a253616998aca0e14a3d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ef5e36d17392a253616998aca0e14a3d = MAKE_FUNCTION_FRAME(codeobj_ef5e36d17392a253616998aca0e14a3d, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ef5e36d17392a253616998aca0e14a3d->m_type_description == NULL);
    frame_ef5e36d17392a253616998aca0e14a3d = cache_frame_ef5e36d17392a253616998aca0e14a3d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ef5e36d17392a253616998aca0e14a3d);
    assert(Py_REFCNT(frame_ef5e36d17392a253616998aca0e14a3d) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[81];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ef5e36d17392a253616998aca0e14a3d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ef5e36d17392a253616998aca0e14a3d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ef5e36d17392a253616998aca0e14a3d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ef5e36d17392a253616998aca0e14a3d,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_ef5e36d17392a253616998aca0e14a3d == cache_frame_ef5e36d17392a253616998aca0e14a3d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ef5e36d17392a253616998aca0e14a3d);
        cache_frame_ef5e36d17392a253616998aca0e14a3d = NULL;
    }

    assertFrameObject(frame_ef5e36d17392a253616998aca0e14a3d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__78_SourceCellRange(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_367a9bd7123ee03a04e4a643ff82fee8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_367a9bd7123ee03a04e4a643ff82fee8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_367a9bd7123ee03a04e4a643ff82fee8)) {
        Py_XDECREF(cache_frame_367a9bd7123ee03a04e4a643ff82fee8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_367a9bd7123ee03a04e4a643ff82fee8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_367a9bd7123ee03a04e4a643ff82fee8 = MAKE_FUNCTION_FRAME(codeobj_367a9bd7123ee03a04e4a643ff82fee8, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_367a9bd7123ee03a04e4a643ff82fee8->m_type_description == NULL);
    frame_367a9bd7123ee03a04e4a643ff82fee8 = cache_frame_367a9bd7123ee03a04e4a643ff82fee8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_367a9bd7123ee03a04e4a643ff82fee8);
    assert(Py_REFCNT(frame_367a9bd7123ee03a04e4a643ff82fee8) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[82];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_367a9bd7123ee03a04e4a643ff82fee8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_367a9bd7123ee03a04e4a643ff82fee8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_367a9bd7123ee03a04e4a643ff82fee8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_367a9bd7123ee03a04e4a643ff82fee8,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_367a9bd7123ee03a04e4a643ff82fee8 == cache_frame_367a9bd7123ee03a04e4a643ff82fee8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_367a9bd7123ee03a04e4a643ff82fee8);
        cache_frame_367a9bd7123ee03a04e4a643ff82fee8 = NULL;
    }

    assertFrameObject(frame_367a9bd7123ee03a04e4a643ff82fee8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__79_SourceRangeAddress(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_cdd27b5060b3d7810a2f403211561844;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_cdd27b5060b3d7810a2f403211561844 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cdd27b5060b3d7810a2f403211561844)) {
        Py_XDECREF(cache_frame_cdd27b5060b3d7810a2f403211561844);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cdd27b5060b3d7810a2f403211561844 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cdd27b5060b3d7810a2f403211561844 = MAKE_FUNCTION_FRAME(codeobj_cdd27b5060b3d7810a2f403211561844, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cdd27b5060b3d7810a2f403211561844->m_type_description == NULL);
    frame_cdd27b5060b3d7810a2f403211561844 = cache_frame_cdd27b5060b3d7810a2f403211561844;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cdd27b5060b3d7810a2f403211561844);
    assert(Py_REFCNT(frame_cdd27b5060b3d7810a2f403211561844) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[83];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cdd27b5060b3d7810a2f403211561844, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cdd27b5060b3d7810a2f403211561844->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cdd27b5060b3d7810a2f403211561844, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cdd27b5060b3d7810a2f403211561844,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_cdd27b5060b3d7810a2f403211561844 == cache_frame_cdd27b5060b3d7810a2f403211561844) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cdd27b5060b3d7810a2f403211561844);
        cache_frame_cdd27b5060b3d7810a2f403211561844 = NULL;
    }

    assertFrameObject(frame_cdd27b5060b3d7810a2f403211561844);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__80_SourceService(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_d7fcc1f8b018bc396e61c979ba2eea9c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_d7fcc1f8b018bc396e61c979ba2eea9c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d7fcc1f8b018bc396e61c979ba2eea9c)) {
        Py_XDECREF(cache_frame_d7fcc1f8b018bc396e61c979ba2eea9c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d7fcc1f8b018bc396e61c979ba2eea9c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d7fcc1f8b018bc396e61c979ba2eea9c = MAKE_FUNCTION_FRAME(codeobj_d7fcc1f8b018bc396e61c979ba2eea9c, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d7fcc1f8b018bc396e61c979ba2eea9c->m_type_description == NULL);
    frame_d7fcc1f8b018bc396e61c979ba2eea9c = cache_frame_d7fcc1f8b018bc396e61c979ba2eea9c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d7fcc1f8b018bc396e61c979ba2eea9c);
    assert(Py_REFCNT(frame_d7fcc1f8b018bc396e61c979ba2eea9c) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[84];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d7fcc1f8b018bc396e61c979ba2eea9c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d7fcc1f8b018bc396e61c979ba2eea9c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d7fcc1f8b018bc396e61c979ba2eea9c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d7fcc1f8b018bc396e61c979ba2eea9c,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_d7fcc1f8b018bc396e61c979ba2eea9c == cache_frame_d7fcc1f8b018bc396e61c979ba2eea9c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d7fcc1f8b018bc396e61c979ba2eea9c);
        cache_frame_d7fcc1f8b018bc396e61c979ba2eea9c = NULL;
    }

    assertFrameObject(frame_d7fcc1f8b018bc396e61c979ba2eea9c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__81_SubtotalField(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_c8d6c8114e694867c0eb1663459aa615;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_c8d6c8114e694867c0eb1663459aa615 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c8d6c8114e694867c0eb1663459aa615)) {
        Py_XDECREF(cache_frame_c8d6c8114e694867c0eb1663459aa615);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c8d6c8114e694867c0eb1663459aa615 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c8d6c8114e694867c0eb1663459aa615 = MAKE_FUNCTION_FRAME(codeobj_c8d6c8114e694867c0eb1663459aa615, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c8d6c8114e694867c0eb1663459aa615->m_type_description == NULL);
    frame_c8d6c8114e694867c0eb1663459aa615 = cache_frame_c8d6c8114e694867c0eb1663459aa615;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c8d6c8114e694867c0eb1663459aa615);
    assert(Py_REFCNT(frame_c8d6c8114e694867c0eb1663459aa615) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[85];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c8d6c8114e694867c0eb1663459aa615, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c8d6c8114e694867c0eb1663459aa615->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c8d6c8114e694867c0eb1663459aa615, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c8d6c8114e694867c0eb1663459aa615,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_c8d6c8114e694867c0eb1663459aa615 == cache_frame_c8d6c8114e694867c0eb1663459aa615) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c8d6c8114e694867c0eb1663459aa615);
        cache_frame_c8d6c8114e694867c0eb1663459aa615 = NULL;
    }

    assertFrameObject(frame_c8d6c8114e694867c0eb1663459aa615);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__82_SubtotalRule(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_fa970a9bb0a84327774007d085d0efce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_fa970a9bb0a84327774007d085d0efce = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fa970a9bb0a84327774007d085d0efce)) {
        Py_XDECREF(cache_frame_fa970a9bb0a84327774007d085d0efce);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fa970a9bb0a84327774007d085d0efce == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fa970a9bb0a84327774007d085d0efce = MAKE_FUNCTION_FRAME(codeobj_fa970a9bb0a84327774007d085d0efce, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fa970a9bb0a84327774007d085d0efce->m_type_description == NULL);
    frame_fa970a9bb0a84327774007d085d0efce = cache_frame_fa970a9bb0a84327774007d085d0efce;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fa970a9bb0a84327774007d085d0efce);
    assert(Py_REFCNT(frame_fa970a9bb0a84327774007d085d0efce) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[86];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fa970a9bb0a84327774007d085d0efce, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fa970a9bb0a84327774007d085d0efce->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fa970a9bb0a84327774007d085d0efce, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fa970a9bb0a84327774007d085d0efce,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_fa970a9bb0a84327774007d085d0efce == cache_frame_fa970a9bb0a84327774007d085d0efce) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fa970a9bb0a84327774007d085d0efce);
        cache_frame_fa970a9bb0a84327774007d085d0efce = NULL;
    }

    assertFrameObject(frame_fa970a9bb0a84327774007d085d0efce);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__83_SubtotalRules(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_d027ae5b96951774d75511e10fdf4d2d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_d027ae5b96951774d75511e10fdf4d2d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d027ae5b96951774d75511e10fdf4d2d)) {
        Py_XDECREF(cache_frame_d027ae5b96951774d75511e10fdf4d2d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d027ae5b96951774d75511e10fdf4d2d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d027ae5b96951774d75511e10fdf4d2d = MAKE_FUNCTION_FRAME(codeobj_d027ae5b96951774d75511e10fdf4d2d, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d027ae5b96951774d75511e10fdf4d2d->m_type_description == NULL);
    frame_d027ae5b96951774d75511e10fdf4d2d = cache_frame_d027ae5b96951774d75511e10fdf4d2d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d027ae5b96951774d75511e10fdf4d2d);
    assert(Py_REFCNT(frame_d027ae5b96951774d75511e10fdf4d2d) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[87];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d027ae5b96951774d75511e10fdf4d2d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d027ae5b96951774d75511e10fdf4d2d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d027ae5b96951774d75511e10fdf4d2d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d027ae5b96951774d75511e10fdf4d2d,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_d027ae5b96951774d75511e10fdf4d2d == cache_frame_d027ae5b96951774d75511e10fdf4d2d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d027ae5b96951774d75511e10fdf4d2d);
        cache_frame_d027ae5b96951774d75511e10fdf4d2d = NULL;
    }

    assertFrameObject(frame_d027ae5b96951774d75511e10fdf4d2d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__84_Table(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_974e80ef487c2668beaddb8992a20720;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_974e80ef487c2668beaddb8992a20720 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_974e80ef487c2668beaddb8992a20720)) {
        Py_XDECREF(cache_frame_974e80ef487c2668beaddb8992a20720);

#if _DEBUG_REFCOUNTS
        if (cache_frame_974e80ef487c2668beaddb8992a20720 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_974e80ef487c2668beaddb8992a20720 = MAKE_FUNCTION_FRAME(codeobj_974e80ef487c2668beaddb8992a20720, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_974e80ef487c2668beaddb8992a20720->m_type_description == NULL);
    frame_974e80ef487c2668beaddb8992a20720 = cache_frame_974e80ef487c2668beaddb8992a20720;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_974e80ef487c2668beaddb8992a20720);
    assert(Py_REFCNT(frame_974e80ef487c2668beaddb8992a20720) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[88];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_974e80ef487c2668beaddb8992a20720, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_974e80ef487c2668beaddb8992a20720->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_974e80ef487c2668beaddb8992a20720, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_974e80ef487c2668beaddb8992a20720,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_974e80ef487c2668beaddb8992a20720 == cache_frame_974e80ef487c2668beaddb8992a20720) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_974e80ef487c2668beaddb8992a20720);
        cache_frame_974e80ef487c2668beaddb8992a20720 = NULL;
    }

    assertFrameObject(frame_974e80ef487c2668beaddb8992a20720);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__85_TableCell(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_5af3048db94a6caf523ecf61c110ef5f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_5af3048db94a6caf523ecf61c110ef5f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5af3048db94a6caf523ecf61c110ef5f)) {
        Py_XDECREF(cache_frame_5af3048db94a6caf523ecf61c110ef5f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5af3048db94a6caf523ecf61c110ef5f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5af3048db94a6caf523ecf61c110ef5f = MAKE_FUNCTION_FRAME(codeobj_5af3048db94a6caf523ecf61c110ef5f, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5af3048db94a6caf523ecf61c110ef5f->m_type_description == NULL);
    frame_5af3048db94a6caf523ecf61c110ef5f = cache_frame_5af3048db94a6caf523ecf61c110ef5f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5af3048db94a6caf523ecf61c110ef5f);
    assert(Py_REFCNT(frame_5af3048db94a6caf523ecf61c110ef5f) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[89];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5af3048db94a6caf523ecf61c110ef5f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5af3048db94a6caf523ecf61c110ef5f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5af3048db94a6caf523ecf61c110ef5f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5af3048db94a6caf523ecf61c110ef5f,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_5af3048db94a6caf523ecf61c110ef5f == cache_frame_5af3048db94a6caf523ecf61c110ef5f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5af3048db94a6caf523ecf61c110ef5f);
        cache_frame_5af3048db94a6caf523ecf61c110ef5f = NULL;
    }

    assertFrameObject(frame_5af3048db94a6caf523ecf61c110ef5f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__86_TableColumn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_6eddad22fc264dc96f9426b96e6d9006;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_6eddad22fc264dc96f9426b96e6d9006 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6eddad22fc264dc96f9426b96e6d9006)) {
        Py_XDECREF(cache_frame_6eddad22fc264dc96f9426b96e6d9006);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6eddad22fc264dc96f9426b96e6d9006 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6eddad22fc264dc96f9426b96e6d9006 = MAKE_FUNCTION_FRAME(codeobj_6eddad22fc264dc96f9426b96e6d9006, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6eddad22fc264dc96f9426b96e6d9006->m_type_description == NULL);
    frame_6eddad22fc264dc96f9426b96e6d9006 = cache_frame_6eddad22fc264dc96f9426b96e6d9006;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6eddad22fc264dc96f9426b96e6d9006);
    assert(Py_REFCNT(frame_6eddad22fc264dc96f9426b96e6d9006) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[90];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6eddad22fc264dc96f9426b96e6d9006, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6eddad22fc264dc96f9426b96e6d9006->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6eddad22fc264dc96f9426b96e6d9006, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6eddad22fc264dc96f9426b96e6d9006,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_6eddad22fc264dc96f9426b96e6d9006 == cache_frame_6eddad22fc264dc96f9426b96e6d9006) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6eddad22fc264dc96f9426b96e6d9006);
        cache_frame_6eddad22fc264dc96f9426b96e6d9006 = NULL;
    }

    assertFrameObject(frame_6eddad22fc264dc96f9426b96e6d9006);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__87_TableColumnGroup(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_9d75df27a9bba0175cc907fe2ebb8d2d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_9d75df27a9bba0175cc907fe2ebb8d2d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9d75df27a9bba0175cc907fe2ebb8d2d)) {
        Py_XDECREF(cache_frame_9d75df27a9bba0175cc907fe2ebb8d2d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9d75df27a9bba0175cc907fe2ebb8d2d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9d75df27a9bba0175cc907fe2ebb8d2d = MAKE_FUNCTION_FRAME(codeobj_9d75df27a9bba0175cc907fe2ebb8d2d, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9d75df27a9bba0175cc907fe2ebb8d2d->m_type_description == NULL);
    frame_9d75df27a9bba0175cc907fe2ebb8d2d = cache_frame_9d75df27a9bba0175cc907fe2ebb8d2d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9d75df27a9bba0175cc907fe2ebb8d2d);
    assert(Py_REFCNT(frame_9d75df27a9bba0175cc907fe2ebb8d2d) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[91];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9d75df27a9bba0175cc907fe2ebb8d2d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9d75df27a9bba0175cc907fe2ebb8d2d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9d75df27a9bba0175cc907fe2ebb8d2d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9d75df27a9bba0175cc907fe2ebb8d2d,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_9d75df27a9bba0175cc907fe2ebb8d2d == cache_frame_9d75df27a9bba0175cc907fe2ebb8d2d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9d75df27a9bba0175cc907fe2ebb8d2d);
        cache_frame_9d75df27a9bba0175cc907fe2ebb8d2d = NULL;
    }

    assertFrameObject(frame_9d75df27a9bba0175cc907fe2ebb8d2d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__88_TableColumns(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_809a8a375cddba1dbde14f1c966b5bba;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_809a8a375cddba1dbde14f1c966b5bba = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_809a8a375cddba1dbde14f1c966b5bba)) {
        Py_XDECREF(cache_frame_809a8a375cddba1dbde14f1c966b5bba);

#if _DEBUG_REFCOUNTS
        if (cache_frame_809a8a375cddba1dbde14f1c966b5bba == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_809a8a375cddba1dbde14f1c966b5bba = MAKE_FUNCTION_FRAME(codeobj_809a8a375cddba1dbde14f1c966b5bba, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_809a8a375cddba1dbde14f1c966b5bba->m_type_description == NULL);
    frame_809a8a375cddba1dbde14f1c966b5bba = cache_frame_809a8a375cddba1dbde14f1c966b5bba;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_809a8a375cddba1dbde14f1c966b5bba);
    assert(Py_REFCNT(frame_809a8a375cddba1dbde14f1c966b5bba) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[92];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_809a8a375cddba1dbde14f1c966b5bba, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_809a8a375cddba1dbde14f1c966b5bba->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_809a8a375cddba1dbde14f1c966b5bba, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_809a8a375cddba1dbde14f1c966b5bba,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_809a8a375cddba1dbde14f1c966b5bba == cache_frame_809a8a375cddba1dbde14f1c966b5bba) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_809a8a375cddba1dbde14f1c966b5bba);
        cache_frame_809a8a375cddba1dbde14f1c966b5bba = NULL;
    }

    assertFrameObject(frame_809a8a375cddba1dbde14f1c966b5bba);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__89_TableHeaderColumns(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_2c8a986a4c83d47225ca2f289b0a79c4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_2c8a986a4c83d47225ca2f289b0a79c4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2c8a986a4c83d47225ca2f289b0a79c4)) {
        Py_XDECREF(cache_frame_2c8a986a4c83d47225ca2f289b0a79c4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2c8a986a4c83d47225ca2f289b0a79c4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2c8a986a4c83d47225ca2f289b0a79c4 = MAKE_FUNCTION_FRAME(codeobj_2c8a986a4c83d47225ca2f289b0a79c4, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2c8a986a4c83d47225ca2f289b0a79c4->m_type_description == NULL);
    frame_2c8a986a4c83d47225ca2f289b0a79c4 = cache_frame_2c8a986a4c83d47225ca2f289b0a79c4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2c8a986a4c83d47225ca2f289b0a79c4);
    assert(Py_REFCNT(frame_2c8a986a4c83d47225ca2f289b0a79c4) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[93];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2c8a986a4c83d47225ca2f289b0a79c4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2c8a986a4c83d47225ca2f289b0a79c4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2c8a986a4c83d47225ca2f289b0a79c4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2c8a986a4c83d47225ca2f289b0a79c4,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_2c8a986a4c83d47225ca2f289b0a79c4 == cache_frame_2c8a986a4c83d47225ca2f289b0a79c4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2c8a986a4c83d47225ca2f289b0a79c4);
        cache_frame_2c8a986a4c83d47225ca2f289b0a79c4 = NULL;
    }

    assertFrameObject(frame_2c8a986a4c83d47225ca2f289b0a79c4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__90_TableHeaderRows(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_7c4438b537b1d73d6abedcffc8c5ec52;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7c4438b537b1d73d6abedcffc8c5ec52 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7c4438b537b1d73d6abedcffc8c5ec52)) {
        Py_XDECREF(cache_frame_7c4438b537b1d73d6abedcffc8c5ec52);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7c4438b537b1d73d6abedcffc8c5ec52 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7c4438b537b1d73d6abedcffc8c5ec52 = MAKE_FUNCTION_FRAME(codeobj_7c4438b537b1d73d6abedcffc8c5ec52, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7c4438b537b1d73d6abedcffc8c5ec52->m_type_description == NULL);
    frame_7c4438b537b1d73d6abedcffc8c5ec52 = cache_frame_7c4438b537b1d73d6abedcffc8c5ec52;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7c4438b537b1d73d6abedcffc8c5ec52);
    assert(Py_REFCNT(frame_7c4438b537b1d73d6abedcffc8c5ec52) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[94];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7c4438b537b1d73d6abedcffc8c5ec52, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7c4438b537b1d73d6abedcffc8c5ec52->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7c4438b537b1d73d6abedcffc8c5ec52, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7c4438b537b1d73d6abedcffc8c5ec52,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_7c4438b537b1d73d6abedcffc8c5ec52 == cache_frame_7c4438b537b1d73d6abedcffc8c5ec52) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7c4438b537b1d73d6abedcffc8c5ec52);
        cache_frame_7c4438b537b1d73d6abedcffc8c5ec52 = NULL;
    }

    assertFrameObject(frame_7c4438b537b1d73d6abedcffc8c5ec52);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__91_TableRow(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_c0072e7c9f46fc9426b57e6a352e6ecd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_c0072e7c9f46fc9426b57e6a352e6ecd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c0072e7c9f46fc9426b57e6a352e6ecd)) {
        Py_XDECREF(cache_frame_c0072e7c9f46fc9426b57e6a352e6ecd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c0072e7c9f46fc9426b57e6a352e6ecd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c0072e7c9f46fc9426b57e6a352e6ecd = MAKE_FUNCTION_FRAME(codeobj_c0072e7c9f46fc9426b57e6a352e6ecd, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c0072e7c9f46fc9426b57e6a352e6ecd->m_type_description == NULL);
    frame_c0072e7c9f46fc9426b57e6a352e6ecd = cache_frame_c0072e7c9f46fc9426b57e6a352e6ecd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c0072e7c9f46fc9426b57e6a352e6ecd);
    assert(Py_REFCNT(frame_c0072e7c9f46fc9426b57e6a352e6ecd) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[95];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c0072e7c9f46fc9426b57e6a352e6ecd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c0072e7c9f46fc9426b57e6a352e6ecd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c0072e7c9f46fc9426b57e6a352e6ecd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c0072e7c9f46fc9426b57e6a352e6ecd,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_c0072e7c9f46fc9426b57e6a352e6ecd == cache_frame_c0072e7c9f46fc9426b57e6a352e6ecd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c0072e7c9f46fc9426b57e6a352e6ecd);
        cache_frame_c0072e7c9f46fc9426b57e6a352e6ecd = NULL;
    }

    assertFrameObject(frame_c0072e7c9f46fc9426b57e6a352e6ecd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__92_TableRowGroup(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_a7608cc6989ab57ea5a33125ad687230;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a7608cc6989ab57ea5a33125ad687230 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a7608cc6989ab57ea5a33125ad687230)) {
        Py_XDECREF(cache_frame_a7608cc6989ab57ea5a33125ad687230);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a7608cc6989ab57ea5a33125ad687230 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a7608cc6989ab57ea5a33125ad687230 = MAKE_FUNCTION_FRAME(codeobj_a7608cc6989ab57ea5a33125ad687230, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a7608cc6989ab57ea5a33125ad687230->m_type_description == NULL);
    frame_a7608cc6989ab57ea5a33125ad687230 = cache_frame_a7608cc6989ab57ea5a33125ad687230;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a7608cc6989ab57ea5a33125ad687230);
    assert(Py_REFCNT(frame_a7608cc6989ab57ea5a33125ad687230) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[96];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a7608cc6989ab57ea5a33125ad687230, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a7608cc6989ab57ea5a33125ad687230->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a7608cc6989ab57ea5a33125ad687230, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a7608cc6989ab57ea5a33125ad687230,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_a7608cc6989ab57ea5a33125ad687230 == cache_frame_a7608cc6989ab57ea5a33125ad687230) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a7608cc6989ab57ea5a33125ad687230);
        cache_frame_a7608cc6989ab57ea5a33125ad687230 = NULL;
    }

    assertFrameObject(frame_a7608cc6989ab57ea5a33125ad687230);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__93_TableRows(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_90b449830cce2b02f408b4a6b861db96;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_90b449830cce2b02f408b4a6b861db96 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_90b449830cce2b02f408b4a6b861db96)) {
        Py_XDECREF(cache_frame_90b449830cce2b02f408b4a6b861db96);

#if _DEBUG_REFCOUNTS
        if (cache_frame_90b449830cce2b02f408b4a6b861db96 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_90b449830cce2b02f408b4a6b861db96 = MAKE_FUNCTION_FRAME(codeobj_90b449830cce2b02f408b4a6b861db96, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_90b449830cce2b02f408b4a6b861db96->m_type_description == NULL);
    frame_90b449830cce2b02f408b4a6b861db96 = cache_frame_90b449830cce2b02f408b4a6b861db96;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_90b449830cce2b02f408b4a6b861db96);
    assert(Py_REFCNT(frame_90b449830cce2b02f408b4a6b861db96) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[97];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_90b449830cce2b02f408b4a6b861db96, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_90b449830cce2b02f408b4a6b861db96->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_90b449830cce2b02f408b4a6b861db96, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_90b449830cce2b02f408b4a6b861db96,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_90b449830cce2b02f408b4a6b861db96 == cache_frame_90b449830cce2b02f408b4a6b861db96) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_90b449830cce2b02f408b4a6b861db96);
        cache_frame_90b449830cce2b02f408b4a6b861db96 = NULL;
    }

    assertFrameObject(frame_90b449830cce2b02f408b4a6b861db96);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__94_TableSource(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_FrameObject *frame_fc8d998e53ba8eb5c655817c62792f1b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_fc8d998e53ba8eb5c655817c62792f1b = NULL;

    // Actual function body.
    {
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(par_args);
        tmp_dict_arg_value_1 = par_args;
        tmp_key_value_1 = mod_consts[9];
        tmp_default_value_1 = mod_consts[10];
        tmp_capi_result_1 = DICT_SETDEFAULT3(tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
        assert(!(tmp_capi_result_1 == NULL));
        Py_DECREF(tmp_capi_result_1);
    }
    if (isFrameUnusable(cache_frame_fc8d998e53ba8eb5c655817c62792f1b)) {
        Py_XDECREF(cache_frame_fc8d998e53ba8eb5c655817c62792f1b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fc8d998e53ba8eb5c655817c62792f1b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fc8d998e53ba8eb5c655817c62792f1b = MAKE_FUNCTION_FRAME(codeobj_fc8d998e53ba8eb5c655817c62792f1b, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fc8d998e53ba8eb5c655817c62792f1b->m_type_description == NULL);
    frame_fc8d998e53ba8eb5c655817c62792f1b = cache_frame_fc8d998e53ba8eb5c655817c62792f1b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fc8d998e53ba8eb5c655817c62792f1b);
    assert(Py_REFCNT(frame_fc8d998e53ba8eb5c655817c62792f1b) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[98];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fc8d998e53ba8eb5c655817c62792f1b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fc8d998e53ba8eb5c655817c62792f1b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fc8d998e53ba8eb5c655817c62792f1b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fc8d998e53ba8eb5c655817c62792f1b,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_fc8d998e53ba8eb5c655817c62792f1b == cache_frame_fc8d998e53ba8eb5c655817c62792f1b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fc8d998e53ba8eb5c655817c62792f1b);
        cache_frame_fc8d998e53ba8eb5c655817c62792f1b = NULL;
    }

    assertFrameObject(frame_fc8d998e53ba8eb5c655817c62792f1b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__95_TableTemplate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_7adc24dc3ad3a99ceaf8bd596dd1836a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7adc24dc3ad3a99ceaf8bd596dd1836a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7adc24dc3ad3a99ceaf8bd596dd1836a)) {
        Py_XDECREF(cache_frame_7adc24dc3ad3a99ceaf8bd596dd1836a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7adc24dc3ad3a99ceaf8bd596dd1836a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7adc24dc3ad3a99ceaf8bd596dd1836a = MAKE_FUNCTION_FRAME(codeobj_7adc24dc3ad3a99ceaf8bd596dd1836a, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7adc24dc3ad3a99ceaf8bd596dd1836a->m_type_description == NULL);
    frame_7adc24dc3ad3a99ceaf8bd596dd1836a = cache_frame_7adc24dc3ad3a99ceaf8bd596dd1836a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7adc24dc3ad3a99ceaf8bd596dd1836a);
    assert(Py_REFCNT(frame_7adc24dc3ad3a99ceaf8bd596dd1836a) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[99];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7adc24dc3ad3a99ceaf8bd596dd1836a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7adc24dc3ad3a99ceaf8bd596dd1836a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7adc24dc3ad3a99ceaf8bd596dd1836a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7adc24dc3ad3a99ceaf8bd596dd1836a,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_7adc24dc3ad3a99ceaf8bd596dd1836a == cache_frame_7adc24dc3ad3a99ceaf8bd596dd1836a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7adc24dc3ad3a99ceaf8bd596dd1836a);
        cache_frame_7adc24dc3ad3a99ceaf8bd596dd1836a = NULL;
    }

    assertFrameObject(frame_7adc24dc3ad3a99ceaf8bd596dd1836a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__96_TargetRangeAddress(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_2c48003fd1ba86cf703eaa6360ef428f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_2c48003fd1ba86cf703eaa6360ef428f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2c48003fd1ba86cf703eaa6360ef428f)) {
        Py_XDECREF(cache_frame_2c48003fd1ba86cf703eaa6360ef428f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2c48003fd1ba86cf703eaa6360ef428f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2c48003fd1ba86cf703eaa6360ef428f = MAKE_FUNCTION_FRAME(codeobj_2c48003fd1ba86cf703eaa6360ef428f, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2c48003fd1ba86cf703eaa6360ef428f->m_type_description == NULL);
    frame_2c48003fd1ba86cf703eaa6360ef428f = cache_frame_2c48003fd1ba86cf703eaa6360ef428f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2c48003fd1ba86cf703eaa6360ef428f);
    assert(Py_REFCNT(frame_2c48003fd1ba86cf703eaa6360ef428f) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[100];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2c48003fd1ba86cf703eaa6360ef428f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2c48003fd1ba86cf703eaa6360ef428f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2c48003fd1ba86cf703eaa6360ef428f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2c48003fd1ba86cf703eaa6360ef428f,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_2c48003fd1ba86cf703eaa6360ef428f == cache_frame_2c48003fd1ba86cf703eaa6360ef428f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2c48003fd1ba86cf703eaa6360ef428f);
        cache_frame_2c48003fd1ba86cf703eaa6360ef428f = NULL;
    }

    assertFrameObject(frame_2c48003fd1ba86cf703eaa6360ef428f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__97_Title(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_33d8b88f1f6fe05113d8accddc117ff4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_33d8b88f1f6fe05113d8accddc117ff4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_33d8b88f1f6fe05113d8accddc117ff4)) {
        Py_XDECREF(cache_frame_33d8b88f1f6fe05113d8accddc117ff4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_33d8b88f1f6fe05113d8accddc117ff4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_33d8b88f1f6fe05113d8accddc117ff4 = MAKE_FUNCTION_FRAME(codeobj_33d8b88f1f6fe05113d8accddc117ff4, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_33d8b88f1f6fe05113d8accddc117ff4->m_type_description == NULL);
    frame_33d8b88f1f6fe05113d8accddc117ff4 = cache_frame_33d8b88f1f6fe05113d8accddc117ff4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_33d8b88f1f6fe05113d8accddc117ff4);
    assert(Py_REFCNT(frame_33d8b88f1f6fe05113d8accddc117ff4) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[101];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_33d8b88f1f6fe05113d8accddc117ff4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_33d8b88f1f6fe05113d8accddc117ff4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_33d8b88f1f6fe05113d8accddc117ff4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_33d8b88f1f6fe05113d8accddc117ff4,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_33d8b88f1f6fe05113d8accddc117ff4 == cache_frame_33d8b88f1f6fe05113d8accddc117ff4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_33d8b88f1f6fe05113d8accddc117ff4);
        cache_frame_33d8b88f1f6fe05113d8accddc117ff4 = NULL;
    }

    assertFrameObject(frame_33d8b88f1f6fe05113d8accddc117ff4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_odf$table$$$function__98_TrackedChanges(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    struct Nuitka_FrameObject *frame_205a65826cb32bb28150c4c6c4a67427;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_205a65826cb32bb28150c4c6c4a67427 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_205a65826cb32bb28150c4c6c4a67427)) {
        Py_XDECREF(cache_frame_205a65826cb32bb28150c4c6c4a67427);

#if _DEBUG_REFCOUNTS
        if (cache_frame_205a65826cb32bb28150c4c6c4a67427 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_205a65826cb32bb28150c4c6c4a67427 = MAKE_FUNCTION_FRAME(codeobj_205a65826cb32bb28150c4c6c4a67427, module_odf$table, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_205a65826cb32bb28150c4c6c4a67427->m_type_description == NULL);
    frame_205a65826cb32bb28150c4c6c4a67427 = cache_frame_205a65826cb32bb28150c4c6c4a67427;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_205a65826cb32bb28150c4c6c4a67427);
    assert(Py_REFCNT(frame_205a65826cb32bb28150c4c6c4a67427) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[1];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[102];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_205a65826cb32bb28150c4c6c4a67427, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_205a65826cb32bb28150c4c6c4a67427->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_205a65826cb32bb28150c4c6c4a67427, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_205a65826cb32bb28150c4c6c4a67427,
        type_description_1,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_205a65826cb32bb28150c4c6c4a67427 == cache_frame_205a65826cb32bb28150c4c6c4a67427) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_205a65826cb32bb28150c4c6c4a67427);
        cache_frame_205a65826cb32bb28150c4c6c4a67427 = NULL;
    }

    assertFrameObject(frame_205a65826cb32bb28150c4c6c4a67427);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__10_Consolidation() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__10_Consolidation,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_967a10a0f767df7e2aea6c74785af0d7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__11_ContentValidation() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__11_ContentValidation,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_81406e7c13a968a88a0c8977395e2b83,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__12_ContentValidations() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__12_ContentValidations,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b2db5770d0cde3b7beb6c9b2a9c74c3f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__13_CoveredTableCell() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__13_CoveredTableCell,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2f22c41665261253103d0ca17c0a31fb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__14_CutOffs() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__14_CutOffs,
        mod_consts[127],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_43319f39840e38aecdf7f8656adc71bd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__15_DataPilotDisplayInfo() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__15_DataPilotDisplayInfo,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_deb6997a0074603c4286e9662d533e5d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__16_DataPilotField() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__16_DataPilotField,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3cd0565d5663e3153f45cdbcbf00d5ad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__17_DataPilotFieldReference() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__17_DataPilotFieldReference,
        mod_consts[130],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f89e99cca53237792641b2bc87bb910e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__18_DataPilotGroup() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__18_DataPilotGroup,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cc9651072f998dd71fb97e8b065bc16b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__19_DataPilotGroupMember() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__19_DataPilotGroupMember,
        mod_consts[132],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5d848efbbb714b272fa1d8ed5557762f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__1_Background() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__1_Background,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0a13855a869410c66e1823be2b8aab42,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__20_DataPilotGroups() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__20_DataPilotGroups,
        mod_consts[133],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8d5163d64b2575067bfdc87a94a53165,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__21_DataPilotLayoutInfo() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__21_DataPilotLayoutInfo,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cf3d16170a64e1a98ae547ce88949108,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__22_DataPilotLevel() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__22_DataPilotLevel,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_aade796fc94cd90a3d2bc357af2e042a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__23_DataPilotMember() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__23_DataPilotMember,
        mod_consts[136],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c930c311d1e61fa3fe7548ff2e197a35,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__24_DataPilotMembers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__24_DataPilotMembers,
        mod_consts[137],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dfbc235f23006b9d83204c22cb529c16,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__25_DataPilotSortInfo() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__25_DataPilotSortInfo,
        mod_consts[138],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_394835631fa965eebe85ec798a58b2c4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__26_DataPilotSubtotal() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__26_DataPilotSubtotal,
        mod_consts[139],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b9d1fb9b33ef0cda4c49c580129cba48,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__27_DataPilotSubtotals() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__27_DataPilotSubtotals,
        mod_consts[140],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a416e4ab2d8b6b63d581c95f5758906a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__28_DataPilotTable() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__28_DataPilotTable,
        mod_consts[141],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cee2cf5d563e52b014db2bd3484c10c8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__29_DataPilotTables() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__29_DataPilotTables,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_68abd0679288ffe5f8d56964b1ac6b28,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__2_Body() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__2_Body,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dc2733823c4291abc7aa27ca454b1bc0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__30_DatabaseRange() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__30_DatabaseRange,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_372b98f37e960cc3ed946ac22cc066a5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__31_DatabaseRanges() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__31_DatabaseRanges,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_927d8003cea23557ef79ebbb76935e2a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__32_DatabaseSourceQuery() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__32_DatabaseSourceQuery,
        mod_consts[145],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b5d9f40a015381510ba6dc71ab28efa9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__33_DatabaseSourceSql() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__33_DatabaseSourceSql,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ffa1c46be029f5474dd23b1f77ba5aa8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__34_DatabaseSourceTable() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__34_DatabaseSourceTable,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ad7aa7884397306cfbe10220c4e50d68,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__35_DdeLink() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__35_DdeLink,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3236f5821420e24ef3949c5fd5b5f196,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__36_DdeLinks() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__36_DdeLinks,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d3d256a007368559ac4e5045c7fe405d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__37_Deletion() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__37_Deletion,
        mod_consts[150],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_45b35739de05a30b9bcb4589bcc301ca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__38_Deletions() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__38_Deletions,
        mod_consts[151],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_19d699ca4a42353baa70de4790c42145,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__39_Dependencies() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__39_Dependencies,
        mod_consts[152],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ac7ce4597290b68d46cbfc5ef3c66f26,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__3_CalculationSettings() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__3_CalculationSettings,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_84d08bcdcd000189527dc108dc085492,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__40_Dependency() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__40_Dependency,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7b0cefb90baed623cba060462163777b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__41_Desc() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__41_Desc,
        mod_consts[154],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fcaf55a4cc560419b9a745e203b6d66e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__42_Detective() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__42_Detective,
        mod_consts[155],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7613ebf36c4269b12dd3e52054861b26,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__43_ErrorMacro() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__43_ErrorMacro,
        mod_consts[156],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c9260fa26a21e011aa7ded85ba5e7e54,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__44_ErrorMessage() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__44_ErrorMessage,
        mod_consts[157],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d084c39d851d29a040451e7228671a65,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__45_EvenColumns() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__45_EvenColumns,
        mod_consts[158],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b9756574c8dcd07d74a02be6a7cc567b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__46_EvenRows() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__46_EvenRows,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1bd6be80b3e36a879d46e45a5646175d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__47_Filter() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__47_Filter,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b1e9ecb3b830751595213a639bf7f3a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__48_FilterAnd() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__48_FilterAnd,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c79b3b384b7da0549aa1cd4c7ff0969b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__49_FilterCondition() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__49_FilterCondition,
        mod_consts[162],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bd82c4ac27350c3e5e2d8bc63aa457f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__4_CellAddress() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__4_CellAddress,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_15b7ce62b35c5db3ea72c2c5f2fc15b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__50_FilterOr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__50_FilterOr,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b2c56737bff9339c5167a72576897e20,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__51_FilterSetItem() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__51_FilterSetItem,
        mod_consts[164],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_46e545d54fd22c3bc2e5f5af98b294a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__52_FirstColumn() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__52_FirstColumn,
        mod_consts[165],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_da7b4d7e27f0d948dadd2fcd283eb3d2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__53_FirstRow() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__53_FirstRow,
        mod_consts[166],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a55aeb3d25b17e0aef15e70b40744fc2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__54_HelpMessage() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__54_HelpMessage,
        mod_consts[167],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ac5c609b919b16b445355d9cf9c0de37,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__55_HighlightedRange() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__55_HighlightedRange,
        mod_consts[168],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c69ca32eee1553db91fa39ab8a110ade,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__56_Insertion() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__56_Insertion,
        mod_consts[169],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b44c68028fbe0551f1b251be9c5cc7f5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__57_InsertionCutOff() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__57_InsertionCutOff,
        mod_consts[170],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cb7f5ef793868ddf339dde5326d3b528,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__58_Iteration() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__58_Iteration,
        mod_consts[171],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f5dc9de45fa93dd405fcf15b214c9768,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__59_LabelRange() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__59_LabelRange,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f6b1f8fd26f4154f2225f0b1efb6283e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__5_CellContentChange() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__5_CellContentChange,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_57618dd9564960d6a1ff80b5a3be49ce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__60_LabelRanges() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__60_LabelRanges,
        mod_consts[173],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a63a1ce7cddda0badae814aaa6cbbea6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__61_LastColumn() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__61_LastColumn,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_80016ed03fce0c0bdd89769f29e0e514,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__62_LastRow() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__62_LastRow,
        mod_consts[175],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_861ecc31882624927eab588210bdb787,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__63_Movement() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__63_Movement,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e8a9db330b73fdc83a471ca9b7b761f9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__64_MovementCutOff() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__64_MovementCutOff,
        mod_consts[177],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_32cf5eaabbc1b8b2f5ea08191f7736ba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__65_NamedExpression() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__65_NamedExpression,
        mod_consts[178],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4dff9ab5676c1cd0ca58c793515e0812,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__66_NamedExpressions() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__66_NamedExpressions,
        mod_consts[179],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_41967ae2952a92fbd92affb0dfa2e044,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__67_NamedRange() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__67_NamedRange,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fd9edbeb30d4220410a402e83d6f9ee3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__68_NullDate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__68_NullDate,
        mod_consts[181],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2c1f09de378c3c29a17205215770e0e8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__69_OddColumns() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__69_OddColumns,
        mod_consts[182],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4a94d86ee563b255a4b27cb39daa56d1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__6_CellContentDeletion() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__6_CellContentDeletion,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_760300474c58b1365b5c76dd48c2a2b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__70_OddRows() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__70_OddRows,
        mod_consts[183],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_908e590f319b7e95409aab1618312dcd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__71_Operation() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__71_Operation,
        mod_consts[184],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_74e32e2d0d77f84e07e8fe03da8763b6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__72_Previous() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__72_Previous,
        mod_consts[185],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9aff25202be21bd1c1312ee271be8d72,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__73_Scenario() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__73_Scenario,
        mod_consts[186],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1c172e9584a4a00a972ac150eea9469f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__74_Shapes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__74_Shapes,
        mod_consts[187],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ff1fe1e1007543b7052ff849c04cd464,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__75_Sort() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__75_Sort,
        mod_consts[188],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0c27583d1a8c6b041b39443acb8678fe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__76_SortBy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__76_SortBy,
        mod_consts[189],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e8c9dab504d6ab63ad0f225443e95fb7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__77_SortGroups() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__77_SortGroups,
        mod_consts[190],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ef5e36d17392a253616998aca0e14a3d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__78_SourceCellRange() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__78_SourceCellRange,
        mod_consts[191],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_367a9bd7123ee03a04e4a643ff82fee8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__79_SourceRangeAddress() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__79_SourceRangeAddress,
        mod_consts[192],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cdd27b5060b3d7810a2f403211561844,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__7_CellRangeSource() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__7_CellRangeSource,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d1fce01fa715e0d15ac80c88bcc2f183,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__80_SourceService() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__80_SourceService,
        mod_consts[193],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d7fcc1f8b018bc396e61c979ba2eea9c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__81_SubtotalField() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__81_SubtotalField,
        mod_consts[194],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c8d6c8114e694867c0eb1663459aa615,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__82_SubtotalRule() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__82_SubtotalRule,
        mod_consts[195],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fa970a9bb0a84327774007d085d0efce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__83_SubtotalRules() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__83_SubtotalRules,
        mod_consts[196],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d027ae5b96951774d75511e10fdf4d2d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__84_Table() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__84_Table,
        mod_consts[197],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_974e80ef487c2668beaddb8992a20720,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__85_TableCell() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__85_TableCell,
        mod_consts[198],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5af3048db94a6caf523ecf61c110ef5f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__86_TableColumn() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__86_TableColumn,
        mod_consts[199],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6eddad22fc264dc96f9426b96e6d9006,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__87_TableColumnGroup() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__87_TableColumnGroup,
        mod_consts[200],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9d75df27a9bba0175cc907fe2ebb8d2d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__88_TableColumns() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__88_TableColumns,
        mod_consts[201],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_809a8a375cddba1dbde14f1c966b5bba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__89_TableHeaderColumns() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__89_TableHeaderColumns,
        mod_consts[202],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2c8a986a4c83d47225ca2f289b0a79c4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__8_ChangeDeletion() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__8_ChangeDeletion,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5c023f84b1156953d896d72c31ffa1cc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__90_TableHeaderRows() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__90_TableHeaderRows,
        mod_consts[203],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7c4438b537b1d73d6abedcffc8c5ec52,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__91_TableRow() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__91_TableRow,
        mod_consts[204],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c0072e7c9f46fc9426b57e6a352e6ecd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__92_TableRowGroup() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__92_TableRowGroup,
        mod_consts[205],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a7608cc6989ab57ea5a33125ad687230,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__93_TableRows() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__93_TableRows,
        mod_consts[206],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_90b449830cce2b02f408b4a6b861db96,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__94_TableSource() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__94_TableSource,
        mod_consts[207],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fc8d998e53ba8eb5c655817c62792f1b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__95_TableTemplate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__95_TableTemplate,
        mod_consts[208],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7adc24dc3ad3a99ceaf8bd596dd1836a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__96_TargetRangeAddress() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__96_TargetRangeAddress,
        mod_consts[209],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2c48003fd1ba86cf703eaa6360ef428f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__97_Title() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__97_Title,
        mod_consts[210],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_33d8b88f1f6fe05113d8accddc117ff4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__98_TrackedChanges() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__98_TrackedChanges,
        mod_consts[211],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_205a65826cb32bb28150c4c6c4a67427,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_odf$table$$$function__9_ChangeTrackTableCell() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_odf$table$$$function__9_ChangeTrackTableCell,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_28fffbb02f561f86395495f89bffa3a7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_odf$table,
        NULL,
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

function_impl_code functable_odf$table[] = {
    impl_odf$table$$$function__1_Background,
    impl_odf$table$$$function__2_Body,
    impl_odf$table$$$function__3_CalculationSettings,
    impl_odf$table$$$function__4_CellAddress,
    impl_odf$table$$$function__5_CellContentChange,
    impl_odf$table$$$function__6_CellContentDeletion,
    impl_odf$table$$$function__7_CellRangeSource,
    impl_odf$table$$$function__8_ChangeDeletion,
    impl_odf$table$$$function__9_ChangeTrackTableCell,
    impl_odf$table$$$function__10_Consolidation,
    impl_odf$table$$$function__11_ContentValidation,
    impl_odf$table$$$function__12_ContentValidations,
    impl_odf$table$$$function__13_CoveredTableCell,
    impl_odf$table$$$function__14_CutOffs,
    impl_odf$table$$$function__15_DataPilotDisplayInfo,
    impl_odf$table$$$function__16_DataPilotField,
    impl_odf$table$$$function__17_DataPilotFieldReference,
    impl_odf$table$$$function__18_DataPilotGroup,
    impl_odf$table$$$function__19_DataPilotGroupMember,
    impl_odf$table$$$function__20_DataPilotGroups,
    impl_odf$table$$$function__21_DataPilotLayoutInfo,
    impl_odf$table$$$function__22_DataPilotLevel,
    impl_odf$table$$$function__23_DataPilotMember,
    impl_odf$table$$$function__24_DataPilotMembers,
    impl_odf$table$$$function__25_DataPilotSortInfo,
    impl_odf$table$$$function__26_DataPilotSubtotal,
    impl_odf$table$$$function__27_DataPilotSubtotals,
    impl_odf$table$$$function__28_DataPilotTable,
    impl_odf$table$$$function__29_DataPilotTables,
    impl_odf$table$$$function__30_DatabaseRange,
    impl_odf$table$$$function__31_DatabaseRanges,
    impl_odf$table$$$function__32_DatabaseSourceQuery,
    impl_odf$table$$$function__33_DatabaseSourceSql,
    impl_odf$table$$$function__34_DatabaseSourceTable,
    impl_odf$table$$$function__35_DdeLink,
    impl_odf$table$$$function__36_DdeLinks,
    impl_odf$table$$$function__37_Deletion,
    impl_odf$table$$$function__38_Deletions,
    impl_odf$table$$$function__39_Dependencies,
    impl_odf$table$$$function__40_Dependency,
    impl_odf$table$$$function__41_Desc,
    impl_odf$table$$$function__42_Detective,
    impl_odf$table$$$function__43_ErrorMacro,
    impl_odf$table$$$function__44_ErrorMessage,
    impl_odf$table$$$function__45_EvenColumns,
    impl_odf$table$$$function__46_EvenRows,
    impl_odf$table$$$function__47_Filter,
    impl_odf$table$$$function__48_FilterAnd,
    impl_odf$table$$$function__49_FilterCondition,
    impl_odf$table$$$function__50_FilterOr,
    impl_odf$table$$$function__51_FilterSetItem,
    impl_odf$table$$$function__52_FirstColumn,
    impl_odf$table$$$function__53_FirstRow,
    impl_odf$table$$$function__54_HelpMessage,
    impl_odf$table$$$function__55_HighlightedRange,
    impl_odf$table$$$function__56_Insertion,
    impl_odf$table$$$function__57_InsertionCutOff,
    impl_odf$table$$$function__58_Iteration,
    impl_odf$table$$$function__59_LabelRange,
    impl_odf$table$$$function__60_LabelRanges,
    impl_odf$table$$$function__61_LastColumn,
    impl_odf$table$$$function__62_LastRow,
    impl_odf$table$$$function__63_Movement,
    impl_odf$table$$$function__64_MovementCutOff,
    impl_odf$table$$$function__65_NamedExpression,
    impl_odf$table$$$function__66_NamedExpressions,
    impl_odf$table$$$function__67_NamedRange,
    impl_odf$table$$$function__68_NullDate,
    impl_odf$table$$$function__69_OddColumns,
    impl_odf$table$$$function__70_OddRows,
    impl_odf$table$$$function__71_Operation,
    impl_odf$table$$$function__72_Previous,
    impl_odf$table$$$function__73_Scenario,
    impl_odf$table$$$function__74_Shapes,
    impl_odf$table$$$function__75_Sort,
    impl_odf$table$$$function__76_SortBy,
    impl_odf$table$$$function__77_SortGroups,
    impl_odf$table$$$function__78_SourceCellRange,
    impl_odf$table$$$function__79_SourceRangeAddress,
    impl_odf$table$$$function__80_SourceService,
    impl_odf$table$$$function__81_SubtotalField,
    impl_odf$table$$$function__82_SubtotalRule,
    impl_odf$table$$$function__83_SubtotalRules,
    impl_odf$table$$$function__84_Table,
    impl_odf$table$$$function__85_TableCell,
    impl_odf$table$$$function__86_TableColumn,
    impl_odf$table$$$function__87_TableColumnGroup,
    impl_odf$table$$$function__88_TableColumns,
    impl_odf$table$$$function__89_TableHeaderColumns,
    impl_odf$table$$$function__90_TableHeaderRows,
    impl_odf$table$$$function__91_TableRow,
    impl_odf$table$$$function__92_TableRowGroup,
    impl_odf$table$$$function__93_TableRows,
    impl_odf$table$$$function__94_TableSource,
    impl_odf$table$$$function__95_TableTemplate,
    impl_odf$table$$$function__96_TargetRangeAddress,
    impl_odf$table$$$function__97_Title,
    impl_odf$table$$$function__98_TrackedChanges,
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

    function_impl_code *current = functable_odf$table;
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

    if (offset > sizeof(functable_odf$table) || offset < 0) {
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
        functable_odf$table[offset],
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
        module_odf$table,
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
PyObject *modulecode_odf$table(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("odf.table");

    // Store the module for future use.
    module_odf$table = module;

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
        PRINT_STRING("odf.table: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("odf.table: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("odf.table: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initodf$table\n");

    moduledict_odf$table = MODULE_DICT(module_odf$table);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_odf$table,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_odf$table,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[215]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_odf$table,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_odf$table,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_odf$table,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_odf$table);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_odf$table, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_odf$table, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_odf$table, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_odf$table);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_05ac0b7f831b73fdf9e1b6a68f143e84;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_2);
    }
    frame_05ac0b7f831b73fdf9e1b6a68f143e84 = MAKE_MODULE_FRAME(codeobj_05ac0b7f831b73fdf9e1b6a68f143e84, module_odf$table);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_05ac0b7f831b73fdf9e1b6a68f143e84);
    assert(Py_REFCNT(frame_05ac0b7f831b73fdf9e1b6a68f143e84) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[106], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[107], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[109];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_odf$table;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[110];
        tmp_level_value_1 = mod_consts[111];
        frame_05ac0b7f831b73fdf9e1b6a68f143e84->m_frame.f_lineno = 21;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_odf$table,
                mod_consts[2],
                mod_consts[111]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[2]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[112];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_odf$table;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[113];
        tmp_level_value_2 = mod_consts[111];
        frame_05ac0b7f831b73fdf9e1b6a68f143e84->m_frame.f_lineno = 22;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_odf$table,
                mod_consts[0],
                mod_consts[111]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_05ac0b7f831b73fdf9e1b6a68f143e84, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_05ac0b7f831b73fdf9e1b6a68f143e84->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_05ac0b7f831b73fdf9e1b6a68f143e84, exception_lineno);
    }



    assertFrameObject(frame_05ac0b7f831b73fdf9e1b6a68f143e84);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_6;


        tmp_assign_source_6 = MAKE_FUNCTION_odf$table$$$function__1_Background();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_odf$table$$$function__2_Body();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_odf$table$$$function__3_CalculationSettings();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_odf$table$$$function__4_CellAddress();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_odf$table$$$function__5_CellContentChange();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_odf$table$$$function__6_CellContentDeletion();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_odf$table$$$function__7_CellRangeSource();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_odf$table$$$function__8_ChangeDeletion();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_odf$table$$$function__9_ChangeTrackTableCell();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_odf$table$$$function__10_Consolidation();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_odf$table$$$function__11_ContentValidation();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_odf$table$$$function__12_ContentValidations();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_odf$table$$$function__13_CoveredTableCell();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_odf$table$$$function__14_CutOffs();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_odf$table$$$function__15_DataPilotDisplayInfo();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_odf$table$$$function__16_DataPilotField();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_odf$table$$$function__17_DataPilotFieldReference();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_odf$table$$$function__18_DataPilotGroup();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_odf$table$$$function__19_DataPilotGroupMember();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_odf$table$$$function__20_DataPilotGroups();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;


        tmp_assign_source_26 = MAKE_FUNCTION_odf$table$$$function__21_DataPilotLayoutInfo();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_odf$table$$$function__22_DataPilotLevel();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;


        tmp_assign_source_28 = MAKE_FUNCTION_odf$table$$$function__23_DataPilotMember();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_odf$table$$$function__24_DataPilotMembers();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;


        tmp_assign_source_30 = MAKE_FUNCTION_odf$table$$$function__25_DataPilotSortInfo();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;


        tmp_assign_source_31 = MAKE_FUNCTION_odf$table$$$function__26_DataPilotSubtotal();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;


        tmp_assign_source_32 = MAKE_FUNCTION_odf$table$$$function__27_DataPilotSubtotals();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;


        tmp_assign_source_33 = MAKE_FUNCTION_odf$table$$$function__28_DataPilotTable();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;


        tmp_assign_source_34 = MAKE_FUNCTION_odf$table$$$function__29_DataPilotTables();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;


        tmp_assign_source_35 = MAKE_FUNCTION_odf$table$$$function__30_DatabaseRange();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;


        tmp_assign_source_36 = MAKE_FUNCTION_odf$table$$$function__31_DatabaseRanges();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;


        tmp_assign_source_37 = MAKE_FUNCTION_odf$table$$$function__32_DatabaseSourceQuery();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;


        tmp_assign_source_38 = MAKE_FUNCTION_odf$table$$$function__33_DatabaseSourceSql();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;


        tmp_assign_source_39 = MAKE_FUNCTION_odf$table$$$function__34_DatabaseSourceTable();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;


        tmp_assign_source_40 = MAKE_FUNCTION_odf$table$$$function__35_DdeLink();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;


        tmp_assign_source_41 = MAKE_FUNCTION_odf$table$$$function__36_DdeLinks();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;


        tmp_assign_source_42 = MAKE_FUNCTION_odf$table$$$function__37_Deletion();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;


        tmp_assign_source_43 = MAKE_FUNCTION_odf$table$$$function__38_Deletions();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;


        tmp_assign_source_44 = MAKE_FUNCTION_odf$table$$$function__39_Dependencies();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;


        tmp_assign_source_45 = MAKE_FUNCTION_odf$table$$$function__40_Dependency();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;


        tmp_assign_source_46 = MAKE_FUNCTION_odf$table$$$function__41_Desc();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;


        tmp_assign_source_47 = MAKE_FUNCTION_odf$table$$$function__42_Detective();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;


        tmp_assign_source_48 = MAKE_FUNCTION_odf$table$$$function__43_ErrorMacro();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;


        tmp_assign_source_49 = MAKE_FUNCTION_odf$table$$$function__44_ErrorMessage();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;


        tmp_assign_source_50 = MAKE_FUNCTION_odf$table$$$function__45_EvenColumns();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;


        tmp_assign_source_51 = MAKE_FUNCTION_odf$table$$$function__46_EvenRows();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;


        tmp_assign_source_52 = MAKE_FUNCTION_odf$table$$$function__47_Filter();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;


        tmp_assign_source_53 = MAKE_FUNCTION_odf$table$$$function__48_FilterAnd();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;


        tmp_assign_source_54 = MAKE_FUNCTION_odf$table$$$function__49_FilterCondition();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;


        tmp_assign_source_55 = MAKE_FUNCTION_odf$table$$$function__50_FilterOr();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;


        tmp_assign_source_56 = MAKE_FUNCTION_odf$table$$$function__51_FilterSetItem();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;


        tmp_assign_source_57 = MAKE_FUNCTION_odf$table$$$function__52_FirstColumn();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;


        tmp_assign_source_58 = MAKE_FUNCTION_odf$table$$$function__53_FirstRow();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;


        tmp_assign_source_59 = MAKE_FUNCTION_odf$table$$$function__54_HelpMessage();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;


        tmp_assign_source_60 = MAKE_FUNCTION_odf$table$$$function__55_HighlightedRange();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;


        tmp_assign_source_61 = MAKE_FUNCTION_odf$table$$$function__56_Insertion();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;


        tmp_assign_source_62 = MAKE_FUNCTION_odf$table$$$function__57_InsertionCutOff();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;


        tmp_assign_source_63 = MAKE_FUNCTION_odf$table$$$function__58_Iteration();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;


        tmp_assign_source_64 = MAKE_FUNCTION_odf$table$$$function__59_LabelRange();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;


        tmp_assign_source_65 = MAKE_FUNCTION_odf$table$$$function__60_LabelRanges();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;


        tmp_assign_source_66 = MAKE_FUNCTION_odf$table$$$function__61_LastColumn();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;


        tmp_assign_source_67 = MAKE_FUNCTION_odf$table$$$function__62_LastRow();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;


        tmp_assign_source_68 = MAKE_FUNCTION_odf$table$$$function__63_Movement();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;


        tmp_assign_source_69 = MAKE_FUNCTION_odf$table$$$function__64_MovementCutOff();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;


        tmp_assign_source_70 = MAKE_FUNCTION_odf$table$$$function__65_NamedExpression();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;


        tmp_assign_source_71 = MAKE_FUNCTION_odf$table$$$function__66_NamedExpressions();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;


        tmp_assign_source_72 = MAKE_FUNCTION_odf$table$$$function__67_NamedRange();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;


        tmp_assign_source_73 = MAKE_FUNCTION_odf$table$$$function__68_NullDate();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;


        tmp_assign_source_74 = MAKE_FUNCTION_odf$table$$$function__69_OddColumns();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;


        tmp_assign_source_75 = MAKE_FUNCTION_odf$table$$$function__70_OddRows();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;


        tmp_assign_source_76 = MAKE_FUNCTION_odf$table$$$function__71_Operation();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;


        tmp_assign_source_77 = MAKE_FUNCTION_odf$table$$$function__72_Previous();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;


        tmp_assign_source_78 = MAKE_FUNCTION_odf$table$$$function__73_Scenario();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;


        tmp_assign_source_79 = MAKE_FUNCTION_odf$table$$$function__74_Shapes();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;


        tmp_assign_source_80 = MAKE_FUNCTION_odf$table$$$function__75_Sort();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;


        tmp_assign_source_81 = MAKE_FUNCTION_odf$table$$$function__76_SortBy();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;


        tmp_assign_source_82 = MAKE_FUNCTION_odf$table$$$function__77_SortGroups();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;


        tmp_assign_source_83 = MAKE_FUNCTION_odf$table$$$function__78_SourceCellRange();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;


        tmp_assign_source_84 = MAKE_FUNCTION_odf$table$$$function__79_SourceRangeAddress();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;


        tmp_assign_source_85 = MAKE_FUNCTION_odf$table$$$function__80_SourceService();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;


        tmp_assign_source_86 = MAKE_FUNCTION_odf$table$$$function__81_SubtotalField();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;


        tmp_assign_source_87 = MAKE_FUNCTION_odf$table$$$function__82_SubtotalRule();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;


        tmp_assign_source_88 = MAKE_FUNCTION_odf$table$$$function__83_SubtotalRules();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;


        tmp_assign_source_89 = MAKE_FUNCTION_odf$table$$$function__84_Table();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;


        tmp_assign_source_90 = MAKE_FUNCTION_odf$table$$$function__85_TableCell();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;


        tmp_assign_source_91 = MAKE_FUNCTION_odf$table$$$function__86_TableColumn();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;


        tmp_assign_source_92 = MAKE_FUNCTION_odf$table$$$function__87_TableColumnGroup();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;


        tmp_assign_source_93 = MAKE_FUNCTION_odf$table$$$function__88_TableColumns();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;


        tmp_assign_source_94 = MAKE_FUNCTION_odf$table$$$function__89_TableHeaderColumns();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;


        tmp_assign_source_95 = MAKE_FUNCTION_odf$table$$$function__90_TableHeaderRows();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;


        tmp_assign_source_96 = MAKE_FUNCTION_odf$table$$$function__91_TableRow();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;


        tmp_assign_source_97 = MAKE_FUNCTION_odf$table$$$function__92_TableRowGroup();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;


        tmp_assign_source_98 = MAKE_FUNCTION_odf$table$$$function__93_TableRows();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;


        tmp_assign_source_99 = MAKE_FUNCTION_odf$table$$$function__94_TableSource();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;


        tmp_assign_source_100 = MAKE_FUNCTION_odf$table$$$function__95_TableTemplate();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;


        tmp_assign_source_101 = MAKE_FUNCTION_odf$table$$$function__96_TargetRangeAddress();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;


        tmp_assign_source_102 = MAKE_FUNCTION_odf$table$$$function__97_Title();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;


        tmp_assign_source_103 = MAKE_FUNCTION_odf$table$$$function__98_TrackedChanges();

        UPDATE_STRING_DICT1(moduledict_odf$table, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_103);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("odf.table", false);

    Py_INCREF(module_odf$table);
    return module_odf$table;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_odf$table, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("odf$table", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
