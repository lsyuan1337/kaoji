/* Generated code for Python module 'pyasn1.type.namedtype'
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

/* The "module_pyasn1$type$namedtype" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyasn1$type$namedtype;
PyDictObject *moduledict_pyasn1$type$namedtype;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[233];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[233];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("pyasn1.type.namedtype"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 233; i++) {
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
void checkModuleConstants_pyasn1$type$namedtype(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 233; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_06a84ea46c91455d3a793b9e51190aca;
static PyCodeObject *codeobj_089962095cd8001f862b69fd9ecaf1de;
static PyCodeObject *codeobj_e1414d7d0460d6b0ba47a52030c8f232;
static PyCodeObject *codeobj_82185ce1ba898c388462850bc4e16620;
static PyCodeObject *codeobj_2357c83dc265a685831732437ea246a0;
static PyCodeObject *codeobj_ade23aef30955d641872ea2bfa6816a6;
static PyCodeObject *codeobj_763d6811da80a9ffe4a2b8ba18c54267;
static PyCodeObject *codeobj_0459823c0d8480ebfbf11343a9155ad0;
static PyCodeObject *codeobj_419cd5fe9b3ace161ce47f43b18cf0a6;
static PyCodeObject *codeobj_d06fbe19331cf7415478cff39740ae86;
static PyCodeObject *codeobj_19761855b597f57ff421beb50e7f215c;
static PyCodeObject *codeobj_51e02c6a647d37f0e91f9add41001786;
static PyCodeObject *codeobj_7ea728e7e08cdf982abdfa38d885a1e7;
static PyCodeObject *codeobj_013ce4f85c7584baa3f8e8f91b42e0ed;
static PyCodeObject *codeobj_93f15f01abd5ddd9362d5ffaacfbf981;
static PyCodeObject *codeobj_cfdbe985614f91a51972e7f7a23e0f2b;
static PyCodeObject *codeobj_30a06911180ae55d999935968a0fbb76;
static PyCodeObject *codeobj_dd94a0fb54921357b008e9f8411cec9c;
static PyCodeObject *codeobj_a8293e6efd24d45a91280766824410f1;
static PyCodeObject *codeobj_a10c6e1be655de9ed878dedc19c526b7;
static PyCodeObject *codeobj_a24abcb1312d70f91b9847051780f96a;
static PyCodeObject *codeobj_bf837c22e77623081ba7bff2fe83d530;
static PyCodeObject *codeobj_0bb25354872bfd79d25ed623493770e2;
static PyCodeObject *codeobj_50dd0a5882689c76622bb4905f0a88d5;
static PyCodeObject *codeobj_aa412076b1c059856954b405deb73d6c;
static PyCodeObject *codeobj_add576f711ca9f9533a2480d68d4261a;
static PyCodeObject *codeobj_87212189380004474daa5f32b1e0c398;
static PyCodeObject *codeobj_2785a121642f72549556d8b0dc95d2c2;
static PyCodeObject *codeobj_7dab750e893285c13851edbf2c893024;
static PyCodeObject *codeobj_2381992cc58e74175b84ea0941451c7a;
static PyCodeObject *codeobj_b60066cd69b0300a803b225d094e098f;
static PyCodeObject *codeobj_9fbbbeaf6ec156a8e09d6310faf9aa3f;
static PyCodeObject *codeobj_be389c871afe3c5be0f56acd80dfef1c;
static PyCodeObject *codeobj_97365c95b248b03c52e3c5b5f31c3918;
static PyCodeObject *codeobj_f55a3267b0ba8e55e5355ea510aeff82;
static PyCodeObject *codeobj_108d6c6013a02c74b239aebab59f5345;
static PyCodeObject *codeobj_97167dd8f395a5873487c79620e5d4ac;
static PyCodeObject *codeobj_c5ca1781e458b9e96dcc7103de065b6b;
static PyCodeObject *codeobj_a2f4b4197fe9f0bc66224eb80c1dc101;
static PyCodeObject *codeobj_72b306606ec03a91a759a79ffce61af9;
static PyCodeObject *codeobj_ba6fd75e8c4d4f8c815a759de1a2d809;
static PyCodeObject *codeobj_97d1a73d95bc89ff064164533c081549;
static PyCodeObject *codeobj_ba00fdd6b140471353422acff97265d9;
static PyCodeObject *codeobj_f8c5a29d6543697fac6430f6daf7a9af;
static PyCodeObject *codeobj_218d7ebf572469e9162db6797914e9d1;
static PyCodeObject *codeobj_0a4b5770c66ae5eb34c09a8d80a56277;
static PyCodeObject *codeobj_0fcad4ac2cec5d5ac6ffa36b8c48169a;
static PyCodeObject *codeobj_c6abf211cc2531e1943ccb1e08fbf06a;
static PyCodeObject *codeobj_f905d9ac8cedfc6701bd3a9ed13378d5;
static PyCodeObject *codeobj_611ad05a6447b4b8f6a957777631ff46;
static PyCodeObject *codeobj_24d6f72ba99be6900d363db6c202960e;
static PyCodeObject *codeobj_bf40de51e8f568b7863f8fead447b13e;
static PyCodeObject *codeobj_5b79f21f23e90ba1deddc1a8850b93ad;
static PyCodeObject *codeobj_4cad0b2d707a933840d8d857e812be6d;
static PyCodeObject *codeobj_fc2b702d3399662299189d4efc299c9e;
static PyCodeObject *codeobj_b27975c57fb0af354be3b7263b6acd4c;
static PyCodeObject *codeobj_1c3e2096c74092c92f474d33e01e327b;
static PyCodeObject *codeobj_55c0a5cceccbb93404fe0a8924873109;
static PyCodeObject *codeobj_d0e78d232eb7280e415d89369d0b3e53;
static PyCodeObject *codeobj_831dc6e26bea4ca7a07473e9364567ef;
static PyCodeObject *codeobj_03fcf92e22d067017790d5d6dd8115bf;
static PyCodeObject *codeobj_ba0ff25ed01f022e3131def2c168734f;
static PyCodeObject *codeobj_e440b78159a3d7c94889edb39cacdb58;
static PyCodeObject *codeobj_cc3f2d14a03f2235e306e19c27e4a1ae;
static PyCodeObject *codeobj_48e11a757b9f8cb48234ec6c2fe26c1d;
static PyCodeObject *codeobj_a60274d3bf058205f57411cbd18344c1;
static PyCodeObject *codeobj_002f96e01fcd796742512790146bb468;
static PyCodeObject *codeobj_b918df8b311ef3e3088b22391cb19f33;
static PyCodeObject *codeobj_448e9358029bb83c02d7ecee9bd6e6e5;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[207]); CHECK_OBJECT(module_filename_obj);
    codeobj_06a84ea46c91455d3a793b9e51190aca = MAKE_CODE_OBJECT(module_filename_obj, 212, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[42], mod_consts[42], mod_consts[208], NULL, 1, 0, 0);
    codeobj_089962095cd8001f862b69fd9ecaf1de = MAKE_CODE_OBJECT(module_filename_obj, 20, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[100], mod_consts[100], mod_consts[209], NULL, 1, 0, 0);
    codeobj_e1414d7d0460d6b0ba47a52030c8f232 = MAKE_CODE_OBJECT(module_filename_obj, 169, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[210], mod_consts[210], mod_consts[211], NULL, 1, 0, 0);
    codeobj_82185ce1ba898c388462850bc4e16620 = MAKE_CODE_OBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[210], mod_consts[210], mod_consts[212], NULL, 1, 0, 0);
    codeobj_2357c83dc265a685831732437ea246a0 = MAKE_CODE_OBJECT(module_filename_obj, 165, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[210], mod_consts[210], mod_consts[212], NULL, 1, 0, 0);
    codeobj_ade23aef30955d641872ea2bfa6816a6 = MAKE_CODE_OBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[210], mod_consts[210], mod_consts[212], NULL, 1, 0, 0);
    codeobj_763d6811da80a9ffe4a2b8ba18c54267 = MAKE_CODE_OBJECT(module_filename_obj, 172, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[210], mod_consts[210], mod_consts[212], NULL, 1, 0, 0);
    codeobj_0459823c0d8480ebfbf11343a9155ad0 = MAKE_CODE_OBJECT(module_filename_obj, 173, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[210], mod_consts[210], mod_consts[212], NULL, 1, 0, 0);
    codeobj_419cd5fe9b3ace161ce47f43b18cf0a6 = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[210], mod_consts[210], mod_consts[209], NULL, 1, 0, 0);
    codeobj_d06fbe19331cf7415478cff39740ae86 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[213], mod_consts[213], NULL, NULL, 0, 0, 0);
    codeobj_19761855b597f57ff421beb50e7f215c = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_NOFREE, mod_consts[143], mod_consts[143], mod_consts[214], NULL, 0, 0, 0);
    codeobj_51e02c6a647d37f0e91f9add41001786 = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_NOFREE, mod_consts[103], mod_consts[103], mod_consts[214], NULL, 0, 0, 0);
    codeobj_7ea728e7e08cdf982abdfa38d885a1e7 = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_NOFREE, mod_consts[48], mod_consts[48], mod_consts[214], NULL, 0, 0, 0);
    codeobj_013ce4f85c7584baa3f8e8f91b42e0ed = MAKE_CODE_OBJECT(module_filename_obj, 105, CO_NOFREE, mod_consts[142], mod_consts[142], mod_consts[214], NULL, 0, 0, 0);
    codeobj_93f15f01abd5ddd9362d5ffaacfbf981 = MAKE_CODE_OBJECT(module_filename_obj, 238, CO_NOFREE, mod_consts[49], mod_consts[49], mod_consts[214], NULL, 0, 0, 0);
    codeobj_cfdbe985614f91a51972e7f7a23e0f2b = MAKE_CODE_OBJECT(module_filename_obj, 218, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[158], mod_consts[158], mod_consts[215], NULL, 1, 0, 0);
    codeobj_30a06911180ae55d999935968a0fbb76 = MAKE_CODE_OBJECT(module_filename_obj, 269, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[178], mod_consts[178], mod_consts[216], NULL, 1, 0, 0);
    codeobj_dd94a0fb54921357b008e9f8411cec9c = MAKE_CODE_OBJECT(module_filename_obj, 441, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[191], mod_consts[191], mod_consts[217], NULL, 1, 0, 0);
    codeobj_a8293e6efd24d45a91280766824410f1 = MAKE_CODE_OBJECT(module_filename_obj, 260, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[176], mod_consts[176], mod_consts[218], NULL, 1, 0, 0);
    codeobj_a10c6e1be655de9ed878dedc19c526b7 = MAKE_CODE_OBJECT(module_filename_obj, 472, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[194], mod_consts[194], mod_consts[219], NULL, 2, 0, 0);
    codeobj_a24abcb1312d70f91b9847051780f96a = MAKE_CODE_OBJECT(module_filename_obj, 245, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[174], mod_consts[174], mod_consts[220], NULL, 1, 0, 0);
    codeobj_bf837c22e77623081ba7bff2fe83d530 = MAKE_CODE_OBJECT(module_filename_obj, 208, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[155], mod_consts[155], mod_consts[221], NULL, 2, 0, 0);
    codeobj_0bb25354872bfd79d25ed623493770e2 = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[116], mod_consts[116], mod_consts[222], NULL, 2, 0, 0);
    codeobj_50dd0a5882689c76622bb4905f0a88d5 = MAKE_CODE_OBJECT(module_filename_obj, 180, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[116], mod_consts[116], mod_consts[222], NULL, 2, 0, 0);
    codeobj_aa412076b1c059856954b405deb73d6c = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[126], mod_consts[126], mod_consts[222], NULL, 2, 0, 0);
    codeobj_add576f711ca9f9533a2480d68d4261a = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[126], mod_consts[126], mod_consts[222], NULL, 2, 0, 0);
    codeobj_87212189380004474daa5f32b1e0c398 = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[104], mod_consts[104], mod_consts[223], NULL, 2, 0, 0);
    codeobj_2785a121642f72549556d8b0dc95d2c2 = MAKE_CODE_OBJECT(module_filename_obj, 201, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[104], mod_consts[104], mod_consts[223], NULL, 2, 0, 0);
    codeobj_7dab750e893285c13851edbf2c893024 = MAKE_CODE_OBJECT(module_filename_obj, 242, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[104], mod_consts[104], mod_consts[224], NULL, 2, 0, 0);
    codeobj_2381992cc58e74175b84ea0941451c7a = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[124], mod_consts[124], mod_consts[222], NULL, 2, 0, 0);
    codeobj_b60066cd69b0300a803b225d094e098f = MAKE_CODE_OBJECT(module_filename_obj, 192, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[124], mod_consts[124], mod_consts[222], NULL, 2, 0, 0);
    codeobj_9fbbbeaf6ec156a8e09d6310faf9aa3f = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[128], mod_consts[128], mod_consts[215], NULL, 1, 0, 0);
    codeobj_be389c871afe3c5be0f56acd80dfef1c = MAKE_CODE_OBJECT(module_filename_obj, 198, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[128], mod_consts[128], mod_consts[215], NULL, 1, 0, 0);
    codeobj_97365c95b248b03c52e3c5b5f31c3918 = MAKE_CODE_OBJECT(module_filename_obj, 239, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[112], mod_consts[112], mod_consts[225], NULL, 2, 0, 0);
    codeobj_f55a3267b0ba8e55e5355ea510aeff82 = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[112], mod_consts[112], mod_consts[226], NULL, 4, 0, 0);
    codeobj_108d6c6013a02c74b239aebab59f5345 = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[112], mod_consts[112], mod_consts[227], NULL, 1, 0, 0);
    codeobj_97167dd8f395a5873487c79620e5d4ac = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[131], mod_consts[131], mod_consts[215], NULL, 1, 0, 0);
    codeobj_c5ca1781e458b9e96dcc7103de065b6b = MAKE_CODE_OBJECT(module_filename_obj, 211, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[131], mod_consts[131], mod_consts[215], NULL, 1, 0, 0);
    codeobj_a2f4b4197fe9f0bc66224eb80c1dc101 = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[122], mod_consts[122], mod_consts[222], NULL, 2, 0, 0);
    codeobj_72b306606ec03a91a759a79ffce61af9 = MAKE_CODE_OBJECT(module_filename_obj, 189, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[122], mod_consts[122], mod_consts[222], NULL, 2, 0, 0);
    codeobj_ba6fd75e8c4d4f8c815a759de1a2d809 = MAKE_CODE_OBJECT(module_filename_obj, 221, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[160], mod_consts[160], mod_consts[215], NULL, 1, 0, 0);
    codeobj_97d1a73d95bc89ff064164533c081549 = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[120], mod_consts[120], mod_consts[222], NULL, 2, 0, 0);
    codeobj_ba00fdd6b140471353422acff97265d9 = MAKE_CODE_OBJECT(module_filename_obj, 186, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[120], mod_consts[120], mod_consts[222], NULL, 2, 0, 0);
    codeobj_f8c5a29d6543697fac6430f6daf7a9af = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[118], mod_consts[118], mod_consts[222], NULL, 2, 0, 0);
    codeobj_218d7ebf572469e9162db6797914e9d1 = MAKE_CODE_OBJECT(module_filename_obj, 183, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[118], mod_consts[118], mod_consts[222], NULL, 2, 0, 0);
    codeobj_0a4b5770c66ae5eb34c09a8d80a56277 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[114], mod_consts[114], mod_consts[228], NULL, 1, 0, 0);
    codeobj_0fcad4ac2cec5d5ac6ffa36b8c48169a = MAKE_CODE_OBJECT(module_filename_obj, 175, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[114], mod_consts[114], mod_consts[228], NULL, 1, 0, 0);
    codeobj_c6abf211cc2531e1943ccb1e08fbf06a = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[215], NULL, 1, 0, 0);
    codeobj_f905d9ac8cedfc6701bd3a9ed13378d5 = MAKE_CODE_OBJECT(module_filename_obj, 235, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[168], mod_consts[168], mod_consts[215], NULL, 1, 0, 0);
    codeobj_611ad05a6447b4b8f6a957777631ff46 = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[137], mod_consts[137], mod_consts[215], NULL, 1, 0, 0);
    codeobj_24d6f72ba99be6900d363db6c202960e = MAKE_CODE_OBJECT(module_filename_obj, 331, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[183], mod_consts[183], mod_consts[223], NULL, 2, 0, 0);
    codeobj_bf40de51e8f568b7863f8fead447b13e = MAKE_CODE_OBJECT(module_filename_obj, 355, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[185], mod_consts[185], mod_consts[229], NULL, 2, 0, 0);
    codeobj_5b79f21f23e90ba1deddc1a8850b93ad = MAKE_CODE_OBJECT(module_filename_obj, 307, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[69], mod_consts[69], mod_consts[230], NULL, 2, 0, 0);
    codeobj_4cad0b2d707a933840d8d857e812be6d = MAKE_CODE_OBJECT(module_filename_obj, 408, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[189], mod_consts[189], mod_consts[231], NULL, 3, 0, 0);
    codeobj_fc2b702d3399662299189d4efc299c9e = MAKE_CODE_OBJECT(module_filename_obj, 379, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[187], mod_consts[187], mod_consts[223], NULL, 2, 0, 0);
    codeobj_b27975c57fb0af354be3b7263b6acd4c = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[139], mod_consts[139], mod_consts[215], NULL, 1, 0, 0);
    codeobj_1c3e2096c74092c92f474d33e01e327b = MAKE_CODE_OBJECT(module_filename_obj, 283, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[180], mod_consts[180], mod_consts[223], NULL, 2, 0, 0);
    codeobj_55c0a5cceccbb93404fe0a8924873109 = MAKE_CODE_OBJECT(module_filename_obj, 551, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[201], mod_consts[201], mod_consts[215], NULL, 1, 0, 0);
    codeobj_d0e78d232eb7280e415d89369d0b3e53 = MAKE_CODE_OBJECT(module_filename_obj, 547, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[199], mod_consts[199], mod_consts[215], NULL, 1, 0, 0);
    codeobj_831dc6e26bea4ca7a07473e9364567ef = MAKE_CODE_OBJECT(module_filename_obj, 232, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[166], mod_consts[166], mod_consts[215], NULL, 1, 0, 0);
    codeobj_03fcf92e22d067017790d5d6dd8115bf = MAKE_CODE_OBJECT(module_filename_obj, 229, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[164], mod_consts[164], mod_consts[215], NULL, 1, 0, 0);
    codeobj_ba0ff25ed01f022e3131def2c168734f = MAKE_CODE_OBJECT(module_filename_obj, 457, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[71], mod_consts[71], mod_consts[215], NULL, 1, 0, 0);
    codeobj_e440b78159a3d7c94889edb39cacdb58 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[215], NULL, 1, 0, 0);
    codeobj_cc3f2d14a03f2235e306e19c27e4a1ae = MAKE_CODE_OBJECT(module_filename_obj, 555, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[203], mod_consts[203], mod_consts[215], NULL, 1, 0, 0);
    codeobj_48e11a757b9f8cb48234ec6c2fe26c1d = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[215], NULL, 1, 0, 0);
    codeobj_a60274d3bf058205f57411cbd18344c1 = MAKE_CODE_OBJECT(module_filename_obj, 559, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[205], mod_consts[205], mod_consts[215], NULL, 1, 0, 0);
    codeobj_002f96e01fcd796742512790146bb468 = MAKE_CODE_OBJECT(module_filename_obj, 493, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[47], mod_consts[47], mod_consts[215], NULL, 1, 0, 0);
    codeobj_b918df8b311ef3e3088b22391cb19f33 = MAKE_CODE_OBJECT(module_filename_obj, 517, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[197], mod_consts[197], mod_consts[215], NULL, 1, 0, 0);
    codeobj_448e9358029bb83c02d7ecee9bd6e6e5 = MAKE_CODE_OBJECT(module_filename_obj, 226, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[162], mod_consts[162], mod_consts[215], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_pyasn1$type$namedtype$$$function__29___iter__$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_star_list(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__5_complex_call_helper_star_list_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__10___hash__();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__11___getitem__();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__12___iter__();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__13_name();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__14_asn1Object();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__15_openType();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__16_getName();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__17_getType();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__18___init__();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__19___repr__();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__20___eq__();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__21___ne__();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__22___lt__();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__23___le__();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__24___gt__();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__25___ge__();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__26___hash__();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__27___getitem__();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__28___contains__();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__29___iter__();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__2___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__31___bool__();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__32___len__();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__33_values();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__34_keys();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__35_items();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__36_clone();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__37___init__();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__38___getitem__();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__39___computeTagToPosMap();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__3___repr__();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__40___computeNameToPosMap();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__41___computeAmbiguousTypes();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__42_getTypeByPosition();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__43_getPositionByType();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__44_getNameByPosition();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__45_getPositionByName();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__46_getTagMapNearPosition();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__47_getPositionNearType();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__48___computeMinTagSet();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__49_minTagSet();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__4___eq__();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__50___computeTagMaps();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__51_tagMap();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__52_tagMapUnique();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__53_hasOptionalOrDefault();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__54_hasOpenTypes();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__55_namedTypes();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__56_requiredComponents();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__5___ne__();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__6___lt__();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__7___le__();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__8___gt__();


static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__9___ge__();


// The module function definitions.
static PyObject *impl_pyasn1$type$namedtype$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_089962095cd8001f862b69fd9ecaf1de;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_089962095cd8001f862b69fd9ecaf1de = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_089962095cd8001f862b69fd9ecaf1de)) {
        Py_XDECREF(cache_frame_089962095cd8001f862b69fd9ecaf1de);

#if _DEBUG_REFCOUNTS
        if (cache_frame_089962095cd8001f862b69fd9ecaf1de == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_089962095cd8001f862b69fd9ecaf1de = MAKE_FUNCTION_FRAME(codeobj_089962095cd8001f862b69fd9ecaf1de, module_pyasn1$type$namedtype, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_089962095cd8001f862b69fd9ecaf1de->m_type_description == NULL);
    frame_089962095cd8001f862b69fd9ecaf1de = cache_frame_089962095cd8001f862b69fd9ecaf1de;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_089962095cd8001f862b69fd9ecaf1de);
    assert(Py_REFCNT(frame_089962095cd8001f862b69fd9ecaf1de) == 2);

    // Framed code:
    {
        PyObject *tmp_value_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = (PyObject *)&PyFilter_Type;
        tmp_args_element_value_1 = (PyObject *)&PyBool_Type;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        frame_089962095cd8001f862b69fd9ecaf1de->m_frame.f_lineno = 20;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_value_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_value_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
        Py_DECREF(tmp_value_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_089962095cd8001f862b69fd9ecaf1de, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_089962095cd8001f862b69fd9ecaf1de->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_089962095cd8001f862b69fd9ecaf1de, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_089962095cd8001f862b69fd9ecaf1de,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_089962095cd8001f862b69fd9ecaf1de == cache_frame_089962095cd8001f862b69fd9ecaf1de) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_089962095cd8001f862b69fd9ecaf1de);
        cache_frame_089962095cd8001f862b69fd9ecaf1de = NULL;
    }

    assertFrameObject(frame_089962095cd8001f862b69fd9ecaf1de);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$namedtype$$$function__2___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_asn1Object = python_pars[2];
    PyObject *par_openType = python_pars[3];
    struct Nuitka_FrameObject *frame_f55a3267b0ba8e55e5355ea510aeff82;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f55a3267b0ba8e55e5355ea510aeff82 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f55a3267b0ba8e55e5355ea510aeff82)) {
        Py_XDECREF(cache_frame_f55a3267b0ba8e55e5355ea510aeff82);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f55a3267b0ba8e55e5355ea510aeff82 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f55a3267b0ba8e55e5355ea510aeff82 = MAKE_FUNCTION_FRAME(codeobj_f55a3267b0ba8e55e5355ea510aeff82, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f55a3267b0ba8e55e5355ea510aeff82->m_type_description == NULL);
    frame_f55a3267b0ba8e55e5355ea510aeff82 = cache_frame_f55a3267b0ba8e55e5355ea510aeff82;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f55a3267b0ba8e55e5355ea510aeff82);
    assert(Py_REFCNT(frame_f55a3267b0ba8e55e5355ea510aeff82) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_name);
        tmp_assattr_value_1 = par_name;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_asn1Object);
        tmp_assattr_value_2 = par_asn1Object;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_name);
        tmp_tuple_element_1 = par_name;
        tmp_assattr_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assattr_value_3, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_asn1Object);
        tmp_tuple_element_1 = par_asn1Object;
        PyTuple_SET_ITEM0(tmp_assattr_value_3, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[2], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_openType);
        tmp_assattr_value_4 = par_openType;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[3], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f55a3267b0ba8e55e5355ea510aeff82, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f55a3267b0ba8e55e5355ea510aeff82->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f55a3267b0ba8e55e5355ea510aeff82, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f55a3267b0ba8e55e5355ea510aeff82,
        type_description_1,
        par_self,
        par_name,
        par_asn1Object,
        par_openType
    );


    // Release cached frame if used for exception.
    if (frame_f55a3267b0ba8e55e5355ea510aeff82 == cache_frame_f55a3267b0ba8e55e5355ea510aeff82) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f55a3267b0ba8e55e5355ea510aeff82);
        cache_frame_f55a3267b0ba8e55e5355ea510aeff82 = NULL;
    }

    assertFrameObject(frame_f55a3267b0ba8e55e5355ea510aeff82);

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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_asn1Object);
    Py_DECREF(par_asn1Object);
    CHECK_OBJECT(par_openType);
    Py_DECREF(par_openType);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_asn1Object);
    Py_DECREF(par_asn1Object);
    CHECK_OBJECT(par_openType);
    Py_DECREF(par_openType);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$namedtype$$$function__3___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_representation = NULL;
    struct Nuitka_FrameObject *frame_0a4b5770c66ae5eb34c09a8d80a56277;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0a4b5770c66ae5eb34c09a8d80a56277 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0a4b5770c66ae5eb34c09a8d80a56277)) {
        Py_XDECREF(cache_frame_0a4b5770c66ae5eb34c09a8d80a56277);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0a4b5770c66ae5eb34c09a8d80a56277 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0a4b5770c66ae5eb34c09a8d80a56277 = MAKE_FUNCTION_FRAME(codeobj_0a4b5770c66ae5eb34c09a8d80a56277, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0a4b5770c66ae5eb34c09a8d80a56277->m_type_description == NULL);
    frame_0a4b5770c66ae5eb34c09a8d80a56277 = cache_frame_0a4b5770c66ae5eb34c09a8d80a56277;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0a4b5770c66ae5eb34c09a8d80a56277);
    assert(Py_REFCNT(frame_0a4b5770c66ae5eb34c09a8d80a56277) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_mod_expr_left_1 = mod_consts[4];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[6]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_representation == NULL);
        var_representation = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[7]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 51;
            type_description_1 = "oo";
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
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_representation);
        tmp_iadd_expr_left_1 = var_representation;
        tmp_mod_expr_left_2 = mod_consts[8];
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_mod_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[7]);
        if (tmp_mod_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_iadd_expr_right_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_UNICODE_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        var_representation = tmp_assign_source_2;

    }
    branch_no_1:;
    {
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        tmp_mod_expr_left_3 = mod_consts[9];
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_6);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[10]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_representation);
        tmp_tuple_element_2 = var_representation;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_3, 1, tmp_tuple_element_2);
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_0a4b5770c66ae5eb34c09a8d80a56277, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0a4b5770c66ae5eb34c09a8d80a56277->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0a4b5770c66ae5eb34c09a8d80a56277, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0a4b5770c66ae5eb34c09a8d80a56277,
        type_description_1,
        par_self,
        var_representation
    );


    // Release cached frame if used for exception.
    if (frame_0a4b5770c66ae5eb34c09a8d80a56277 == cache_frame_0a4b5770c66ae5eb34c09a8d80a56277) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0a4b5770c66ae5eb34c09a8d80a56277);
        cache_frame_0a4b5770c66ae5eb34c09a8d80a56277 = NULL;
    }

    assertFrameObject(frame_0a4b5770c66ae5eb34c09a8d80a56277);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_representation);
    Py_DECREF(var_representation);
    var_representation = NULL;
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

    Py_XDECREF(var_representation);
    var_representation = NULL;
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


static PyObject *impl_pyasn1$type$namedtype$$$function__4___eq__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_0bb25354872bfd79d25ed623493770e2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0bb25354872bfd79d25ed623493770e2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0bb25354872bfd79d25ed623493770e2)) {
        Py_XDECREF(cache_frame_0bb25354872bfd79d25ed623493770e2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0bb25354872bfd79d25ed623493770e2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0bb25354872bfd79d25ed623493770e2 = MAKE_FUNCTION_FRAME(codeobj_0bb25354872bfd79d25ed623493770e2, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0bb25354872bfd79d25ed623493770e2->m_type_description == NULL);
    frame_0bb25354872bfd79d25ed623493770e2 = cache_frame_0bb25354872bfd79d25ed623493770e2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0bb25354872bfd79d25ed623493770e2);
    assert(Py_REFCNT(frame_0bb25354872bfd79d25ed623493770e2) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_cmp_expr_right_1 = par_other;
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_0bb25354872bfd79d25ed623493770e2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0bb25354872bfd79d25ed623493770e2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0bb25354872bfd79d25ed623493770e2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0bb25354872bfd79d25ed623493770e2,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_0bb25354872bfd79d25ed623493770e2 == cache_frame_0bb25354872bfd79d25ed623493770e2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0bb25354872bfd79d25ed623493770e2);
        cache_frame_0bb25354872bfd79d25ed623493770e2 = NULL;
    }

    assertFrameObject(frame_0bb25354872bfd79d25ed623493770e2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$namedtype$$$function__5___ne__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_f8c5a29d6543697fac6430f6daf7a9af;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f8c5a29d6543697fac6430f6daf7a9af = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f8c5a29d6543697fac6430f6daf7a9af)) {
        Py_XDECREF(cache_frame_f8c5a29d6543697fac6430f6daf7a9af);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f8c5a29d6543697fac6430f6daf7a9af == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f8c5a29d6543697fac6430f6daf7a9af = MAKE_FUNCTION_FRAME(codeobj_f8c5a29d6543697fac6430f6daf7a9af, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f8c5a29d6543697fac6430f6daf7a9af->m_type_description == NULL);
    frame_f8c5a29d6543697fac6430f6daf7a9af = cache_frame_f8c5a29d6543697fac6430f6daf7a9af;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f8c5a29d6543697fac6430f6daf7a9af);
    assert(Py_REFCNT(frame_f8c5a29d6543697fac6430f6daf7a9af) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_cmp_expr_right_1 = par_other;
        tmp_return_value = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_f8c5a29d6543697fac6430f6daf7a9af, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f8c5a29d6543697fac6430f6daf7a9af->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f8c5a29d6543697fac6430f6daf7a9af, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f8c5a29d6543697fac6430f6daf7a9af,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_f8c5a29d6543697fac6430f6daf7a9af == cache_frame_f8c5a29d6543697fac6430f6daf7a9af) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f8c5a29d6543697fac6430f6daf7a9af);
        cache_frame_f8c5a29d6543697fac6430f6daf7a9af = NULL;
    }

    assertFrameObject(frame_f8c5a29d6543697fac6430f6daf7a9af);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$namedtype$$$function__6___lt__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_97d1a73d95bc89ff064164533c081549;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_97d1a73d95bc89ff064164533c081549 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_97d1a73d95bc89ff064164533c081549)) {
        Py_XDECREF(cache_frame_97d1a73d95bc89ff064164533c081549);

#if _DEBUG_REFCOUNTS
        if (cache_frame_97d1a73d95bc89ff064164533c081549 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_97d1a73d95bc89ff064164533c081549 = MAKE_FUNCTION_FRAME(codeobj_97d1a73d95bc89ff064164533c081549, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_97d1a73d95bc89ff064164533c081549->m_type_description == NULL);
    frame_97d1a73d95bc89ff064164533c081549 = cache_frame_97d1a73d95bc89ff064164533c081549;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_97d1a73d95bc89ff064164533c081549);
    assert(Py_REFCNT(frame_97d1a73d95bc89ff064164533c081549) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_cmp_expr_right_1 = par_other;
        tmp_return_value = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_97d1a73d95bc89ff064164533c081549, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_97d1a73d95bc89ff064164533c081549->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_97d1a73d95bc89ff064164533c081549, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_97d1a73d95bc89ff064164533c081549,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_97d1a73d95bc89ff064164533c081549 == cache_frame_97d1a73d95bc89ff064164533c081549) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_97d1a73d95bc89ff064164533c081549);
        cache_frame_97d1a73d95bc89ff064164533c081549 = NULL;
    }

    assertFrameObject(frame_97d1a73d95bc89ff064164533c081549);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$namedtype$$$function__7___le__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_a2f4b4197fe9f0bc66224eb80c1dc101;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a2f4b4197fe9f0bc66224eb80c1dc101 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a2f4b4197fe9f0bc66224eb80c1dc101)) {
        Py_XDECREF(cache_frame_a2f4b4197fe9f0bc66224eb80c1dc101);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a2f4b4197fe9f0bc66224eb80c1dc101 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a2f4b4197fe9f0bc66224eb80c1dc101 = MAKE_FUNCTION_FRAME(codeobj_a2f4b4197fe9f0bc66224eb80c1dc101, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a2f4b4197fe9f0bc66224eb80c1dc101->m_type_description == NULL);
    frame_a2f4b4197fe9f0bc66224eb80c1dc101 = cache_frame_a2f4b4197fe9f0bc66224eb80c1dc101;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a2f4b4197fe9f0bc66224eb80c1dc101);
    assert(Py_REFCNT(frame_a2f4b4197fe9f0bc66224eb80c1dc101) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_cmp_expr_right_1 = par_other;
        tmp_return_value = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_a2f4b4197fe9f0bc66224eb80c1dc101, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a2f4b4197fe9f0bc66224eb80c1dc101->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a2f4b4197fe9f0bc66224eb80c1dc101, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a2f4b4197fe9f0bc66224eb80c1dc101,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_a2f4b4197fe9f0bc66224eb80c1dc101 == cache_frame_a2f4b4197fe9f0bc66224eb80c1dc101) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a2f4b4197fe9f0bc66224eb80c1dc101);
        cache_frame_a2f4b4197fe9f0bc66224eb80c1dc101 = NULL;
    }

    assertFrameObject(frame_a2f4b4197fe9f0bc66224eb80c1dc101);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$namedtype$$$function__8___gt__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_2381992cc58e74175b84ea0941451c7a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2381992cc58e74175b84ea0941451c7a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2381992cc58e74175b84ea0941451c7a)) {
        Py_XDECREF(cache_frame_2381992cc58e74175b84ea0941451c7a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2381992cc58e74175b84ea0941451c7a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2381992cc58e74175b84ea0941451c7a = MAKE_FUNCTION_FRAME(codeobj_2381992cc58e74175b84ea0941451c7a, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2381992cc58e74175b84ea0941451c7a->m_type_description == NULL);
    frame_2381992cc58e74175b84ea0941451c7a = cache_frame_2381992cc58e74175b84ea0941451c7a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2381992cc58e74175b84ea0941451c7a);
    assert(Py_REFCNT(frame_2381992cc58e74175b84ea0941451c7a) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_cmp_expr_right_1 = par_other;
        tmp_return_value = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_2381992cc58e74175b84ea0941451c7a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2381992cc58e74175b84ea0941451c7a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2381992cc58e74175b84ea0941451c7a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2381992cc58e74175b84ea0941451c7a,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_2381992cc58e74175b84ea0941451c7a == cache_frame_2381992cc58e74175b84ea0941451c7a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2381992cc58e74175b84ea0941451c7a);
        cache_frame_2381992cc58e74175b84ea0941451c7a = NULL;
    }

    assertFrameObject(frame_2381992cc58e74175b84ea0941451c7a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$namedtype$$$function__9___ge__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_aa412076b1c059856954b405deb73d6c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_aa412076b1c059856954b405deb73d6c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_aa412076b1c059856954b405deb73d6c)) {
        Py_XDECREF(cache_frame_aa412076b1c059856954b405deb73d6c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aa412076b1c059856954b405deb73d6c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aa412076b1c059856954b405deb73d6c = MAKE_FUNCTION_FRAME(codeobj_aa412076b1c059856954b405deb73d6c, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_aa412076b1c059856954b405deb73d6c->m_type_description == NULL);
    frame_aa412076b1c059856954b405deb73d6c = cache_frame_aa412076b1c059856954b405deb73d6c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_aa412076b1c059856954b405deb73d6c);
    assert(Py_REFCNT(frame_aa412076b1c059856954b405deb73d6c) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_cmp_expr_right_1 = par_other;
        tmp_return_value = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_aa412076b1c059856954b405deb73d6c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aa412076b1c059856954b405deb73d6c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aa412076b1c059856954b405deb73d6c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aa412076b1c059856954b405deb73d6c,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_aa412076b1c059856954b405deb73d6c == cache_frame_aa412076b1c059856954b405deb73d6c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_aa412076b1c059856954b405deb73d6c);
        cache_frame_aa412076b1c059856954b405deb73d6c = NULL;
    }

    assertFrameObject(frame_aa412076b1c059856954b405deb73d6c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$namedtype$$$function__10___hash__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9fbbbeaf6ec156a8e09d6310faf9aa3f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9fbbbeaf6ec156a8e09d6310faf9aa3f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9fbbbeaf6ec156a8e09d6310faf9aa3f)) {
        Py_XDECREF(cache_frame_9fbbbeaf6ec156a8e09d6310faf9aa3f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9fbbbeaf6ec156a8e09d6310faf9aa3f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9fbbbeaf6ec156a8e09d6310faf9aa3f = MAKE_FUNCTION_FRAME(codeobj_9fbbbeaf6ec156a8e09d6310faf9aa3f, module_pyasn1$type$namedtype, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9fbbbeaf6ec156a8e09d6310faf9aa3f->m_type_description == NULL);
    frame_9fbbbeaf6ec156a8e09d6310faf9aa3f = cache_frame_9fbbbeaf6ec156a8e09d6310faf9aa3f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9fbbbeaf6ec156a8e09d6310faf9aa3f);
    assert(Py_REFCNT(frame_9fbbbeaf6ec156a8e09d6310faf9aa3f) == 2);

    // Framed code:
    {
        PyObject *tmp_hash_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_hash_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_hash_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BUILTIN_HASH(tmp_hash_arg_1);
        Py_DECREF(tmp_hash_arg_1);
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
        exception_tb = MAKE_TRACEBACK(frame_9fbbbeaf6ec156a8e09d6310faf9aa3f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9fbbbeaf6ec156a8e09d6310faf9aa3f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9fbbbeaf6ec156a8e09d6310faf9aa3f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9fbbbeaf6ec156a8e09d6310faf9aa3f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9fbbbeaf6ec156a8e09d6310faf9aa3f == cache_frame_9fbbbeaf6ec156a8e09d6310faf9aa3f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9fbbbeaf6ec156a8e09d6310faf9aa3f);
        cache_frame_9fbbbeaf6ec156a8e09d6310faf9aa3f = NULL;
    }

    assertFrameObject(frame_9fbbbeaf6ec156a8e09d6310faf9aa3f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_pyasn1$type$namedtype$$$function__11___getitem__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_idx = python_pars[1];
    struct Nuitka_FrameObject *frame_87212189380004474daa5f32b1e0c398;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_87212189380004474daa5f32b1e0c398 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_87212189380004474daa5f32b1e0c398)) {
        Py_XDECREF(cache_frame_87212189380004474daa5f32b1e0c398);

#if _DEBUG_REFCOUNTS
        if (cache_frame_87212189380004474daa5f32b1e0c398 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_87212189380004474daa5f32b1e0c398 = MAKE_FUNCTION_FRAME(codeobj_87212189380004474daa5f32b1e0c398, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_87212189380004474daa5f32b1e0c398->m_type_description == NULL);
    frame_87212189380004474daa5f32b1e0c398 = cache_frame_87212189380004474daa5f32b1e0c398;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_87212189380004474daa5f32b1e0c398);
    assert(Py_REFCNT(frame_87212189380004474daa5f32b1e0c398) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_idx);
        tmp_subscript_value_1 = par_idx;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_87212189380004474daa5f32b1e0c398, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_87212189380004474daa5f32b1e0c398->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_87212189380004474daa5f32b1e0c398, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_87212189380004474daa5f32b1e0c398,
        type_description_1,
        par_self,
        par_idx
    );


    // Release cached frame if used for exception.
    if (frame_87212189380004474daa5f32b1e0c398 == cache_frame_87212189380004474daa5f32b1e0c398) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_87212189380004474daa5f32b1e0c398);
        cache_frame_87212189380004474daa5f32b1e0c398 = NULL;
    }

    assertFrameObject(frame_87212189380004474daa5f32b1e0c398);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_idx);
    Py_DECREF(par_idx);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_idx);
    Py_DECREF(par_idx);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$namedtype$$$function__12___iter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_97167dd8f395a5873487c79620e5d4ac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_97167dd8f395a5873487c79620e5d4ac = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_97167dd8f395a5873487c79620e5d4ac)) {
        Py_XDECREF(cache_frame_97167dd8f395a5873487c79620e5d4ac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_97167dd8f395a5873487c79620e5d4ac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_97167dd8f395a5873487c79620e5d4ac = MAKE_FUNCTION_FRAME(codeobj_97167dd8f395a5873487c79620e5d4ac, module_pyasn1$type$namedtype, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_97167dd8f395a5873487c79620e5d4ac->m_type_description == NULL);
    frame_97167dd8f395a5873487c79620e5d4ac = cache_frame_97167dd8f395a5873487c79620e5d4ac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_97167dd8f395a5873487c79620e5d4ac);
    assert(Py_REFCNT(frame_97167dd8f395a5873487c79620e5d4ac) == 2);

    // Framed code:
    {
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
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
        exception_tb = MAKE_TRACEBACK(frame_97167dd8f395a5873487c79620e5d4ac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_97167dd8f395a5873487c79620e5d4ac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_97167dd8f395a5873487c79620e5d4ac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_97167dd8f395a5873487c79620e5d4ac,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_97167dd8f395a5873487c79620e5d4ac == cache_frame_97167dd8f395a5873487c79620e5d4ac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_97167dd8f395a5873487c79620e5d4ac);
        cache_frame_97167dd8f395a5873487c79620e5d4ac = NULL;
    }

    assertFrameObject(frame_97167dd8f395a5873487c79620e5d4ac);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_pyasn1$type$namedtype$$$function__13_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e440b78159a3d7c94889edb39cacdb58;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e440b78159a3d7c94889edb39cacdb58 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e440b78159a3d7c94889edb39cacdb58)) {
        Py_XDECREF(cache_frame_e440b78159a3d7c94889edb39cacdb58);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e440b78159a3d7c94889edb39cacdb58 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e440b78159a3d7c94889edb39cacdb58 = MAKE_FUNCTION_FRAME(codeobj_e440b78159a3d7c94889edb39cacdb58, module_pyasn1$type$namedtype, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e440b78159a3d7c94889edb39cacdb58->m_type_description == NULL);
    frame_e440b78159a3d7c94889edb39cacdb58 = cache_frame_e440b78159a3d7c94889edb39cacdb58;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e440b78159a3d7c94889edb39cacdb58);
    assert(Py_REFCNT(frame_e440b78159a3d7c94889edb39cacdb58) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
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
        exception_tb = MAKE_TRACEBACK(frame_e440b78159a3d7c94889edb39cacdb58, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e440b78159a3d7c94889edb39cacdb58->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e440b78159a3d7c94889edb39cacdb58, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e440b78159a3d7c94889edb39cacdb58,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e440b78159a3d7c94889edb39cacdb58 == cache_frame_e440b78159a3d7c94889edb39cacdb58) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e440b78159a3d7c94889edb39cacdb58);
        cache_frame_e440b78159a3d7c94889edb39cacdb58 = NULL;
    }

    assertFrameObject(frame_e440b78159a3d7c94889edb39cacdb58);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_pyasn1$type$namedtype$$$function__14_asn1Object(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c6abf211cc2531e1943ccb1e08fbf06a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c6abf211cc2531e1943ccb1e08fbf06a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c6abf211cc2531e1943ccb1e08fbf06a)) {
        Py_XDECREF(cache_frame_c6abf211cc2531e1943ccb1e08fbf06a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c6abf211cc2531e1943ccb1e08fbf06a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c6abf211cc2531e1943ccb1e08fbf06a = MAKE_FUNCTION_FRAME(codeobj_c6abf211cc2531e1943ccb1e08fbf06a, module_pyasn1$type$namedtype, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c6abf211cc2531e1943ccb1e08fbf06a->m_type_description == NULL);
    frame_c6abf211cc2531e1943ccb1e08fbf06a = cache_frame_c6abf211cc2531e1943ccb1e08fbf06a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c6abf211cc2531e1943ccb1e08fbf06a);
    assert(Py_REFCNT(frame_c6abf211cc2531e1943ccb1e08fbf06a) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
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
        exception_tb = MAKE_TRACEBACK(frame_c6abf211cc2531e1943ccb1e08fbf06a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c6abf211cc2531e1943ccb1e08fbf06a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c6abf211cc2531e1943ccb1e08fbf06a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c6abf211cc2531e1943ccb1e08fbf06a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c6abf211cc2531e1943ccb1e08fbf06a == cache_frame_c6abf211cc2531e1943ccb1e08fbf06a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c6abf211cc2531e1943ccb1e08fbf06a);
        cache_frame_c6abf211cc2531e1943ccb1e08fbf06a = NULL;
    }

    assertFrameObject(frame_c6abf211cc2531e1943ccb1e08fbf06a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_pyasn1$type$namedtype$$$function__15_openType(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_48e11a757b9f8cb48234ec6c2fe26c1d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_48e11a757b9f8cb48234ec6c2fe26c1d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_48e11a757b9f8cb48234ec6c2fe26c1d)) {
        Py_XDECREF(cache_frame_48e11a757b9f8cb48234ec6c2fe26c1d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_48e11a757b9f8cb48234ec6c2fe26c1d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_48e11a757b9f8cb48234ec6c2fe26c1d = MAKE_FUNCTION_FRAME(codeobj_48e11a757b9f8cb48234ec6c2fe26c1d, module_pyasn1$type$namedtype, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_48e11a757b9f8cb48234ec6c2fe26c1d->m_type_description == NULL);
    frame_48e11a757b9f8cb48234ec6c2fe26c1d = cache_frame_48e11a757b9f8cb48234ec6c2fe26c1d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_48e11a757b9f8cb48234ec6c2fe26c1d);
    assert(Py_REFCNT(frame_48e11a757b9f8cb48234ec6c2fe26c1d) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
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
        exception_tb = MAKE_TRACEBACK(frame_48e11a757b9f8cb48234ec6c2fe26c1d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_48e11a757b9f8cb48234ec6c2fe26c1d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_48e11a757b9f8cb48234ec6c2fe26c1d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_48e11a757b9f8cb48234ec6c2fe26c1d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_48e11a757b9f8cb48234ec6c2fe26c1d == cache_frame_48e11a757b9f8cb48234ec6c2fe26c1d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_48e11a757b9f8cb48234ec6c2fe26c1d);
        cache_frame_48e11a757b9f8cb48234ec6c2fe26c1d = NULL;
    }

    assertFrameObject(frame_48e11a757b9f8cb48234ec6c2fe26c1d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_pyasn1$type$namedtype$$$function__16_getName(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_611ad05a6447b4b8f6a957777631ff46;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_611ad05a6447b4b8f6a957777631ff46 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_611ad05a6447b4b8f6a957777631ff46)) {
        Py_XDECREF(cache_frame_611ad05a6447b4b8f6a957777631ff46);

#if _DEBUG_REFCOUNTS
        if (cache_frame_611ad05a6447b4b8f6a957777631ff46 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_611ad05a6447b4b8f6a957777631ff46 = MAKE_FUNCTION_FRAME(codeobj_611ad05a6447b4b8f6a957777631ff46, module_pyasn1$type$namedtype, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_611ad05a6447b4b8f6a957777631ff46->m_type_description == NULL);
    frame_611ad05a6447b4b8f6a957777631ff46 = cache_frame_611ad05a6447b4b8f6a957777631ff46;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_611ad05a6447b4b8f6a957777631ff46);
    assert(Py_REFCNT(frame_611ad05a6447b4b8f6a957777631ff46) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
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
        exception_tb = MAKE_TRACEBACK(frame_611ad05a6447b4b8f6a957777631ff46, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_611ad05a6447b4b8f6a957777631ff46->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_611ad05a6447b4b8f6a957777631ff46, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_611ad05a6447b4b8f6a957777631ff46,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_611ad05a6447b4b8f6a957777631ff46 == cache_frame_611ad05a6447b4b8f6a957777631ff46) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_611ad05a6447b4b8f6a957777631ff46);
        cache_frame_611ad05a6447b4b8f6a957777631ff46 = NULL;
    }

    assertFrameObject(frame_611ad05a6447b4b8f6a957777631ff46);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_pyasn1$type$namedtype$$$function__17_getType(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b27975c57fb0af354be3b7263b6acd4c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b27975c57fb0af354be3b7263b6acd4c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b27975c57fb0af354be3b7263b6acd4c)) {
        Py_XDECREF(cache_frame_b27975c57fb0af354be3b7263b6acd4c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b27975c57fb0af354be3b7263b6acd4c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b27975c57fb0af354be3b7263b6acd4c = MAKE_FUNCTION_FRAME(codeobj_b27975c57fb0af354be3b7263b6acd4c, module_pyasn1$type$namedtype, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b27975c57fb0af354be3b7263b6acd4c->m_type_description == NULL);
    frame_b27975c57fb0af354be3b7263b6acd4c = cache_frame_b27975c57fb0af354be3b7263b6acd4c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b27975c57fb0af354be3b7263b6acd4c);
    assert(Py_REFCNT(frame_b27975c57fb0af354be3b7263b6acd4c) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
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
        exception_tb = MAKE_TRACEBACK(frame_b27975c57fb0af354be3b7263b6acd4c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b27975c57fb0af354be3b7263b6acd4c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b27975c57fb0af354be3b7263b6acd4c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b27975c57fb0af354be3b7263b6acd4c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b27975c57fb0af354be3b7263b6acd4c == cache_frame_b27975c57fb0af354be3b7263b6acd4c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b27975c57fb0af354be3b7263b6acd4c);
        cache_frame_b27975c57fb0af354be3b7263b6acd4c = NULL;
    }

    assertFrameObject(frame_b27975c57fb0af354be3b7263b6acd4c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_pyasn1$type$namedtype$$$function__18___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_namedTypes = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *outline_0_var_namedType = NULL;
    PyObject *outline_1_var_namedType = NULL;
    PyObject *outline_2_var_idx = NULL;
    PyObject *outline_2_var_nt = NULL;
    PyObject *outline_3_var_namedType = NULL;
    PyObject *outline_4_var_namedType = NULL;
    PyObject *outline_5_var_namedType = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_listcomp_3__$0 = NULL;
    PyObject *tmp_listcomp_3__contraction = NULL;
    PyObject *tmp_listcomp_3__iter_value_0 = NULL;
    PyObject *tmp_listcomp_4__$0 = NULL;
    PyObject *tmp_listcomp_4__contraction = NULL;
    PyObject *tmp_listcomp_4__iter_value_0 = NULL;
    PyObject *tmp_listcomp_5__$0 = NULL;
    PyObject *tmp_listcomp_5__contraction = NULL;
    PyObject *tmp_listcomp_5__iter_value_0 = NULL;
    PyObject *tmp_listcomp_6__$0 = NULL;
    PyObject *tmp_listcomp_6__contraction = NULL;
    PyObject *tmp_listcomp_6__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_108d6c6013a02c74b239aebab59f5345;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    struct Nuitka_FrameObject *frame_82185ce1ba898c388462850bc4e16620_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_82185ce1ba898c388462850bc4e16620_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_2357c83dc265a685831732437ea246a0_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_2357c83dc265a685831732437ea246a0_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_FrameObject *frame_e1414d7d0460d6b0ba47a52030c8f232_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_e1414d7d0460d6b0ba47a52030c8f232_4 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    struct Nuitka_FrameObject *frame_ade23aef30955d641872ea2bfa6816a6_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    static struct Nuitka_FrameObject *cache_frame_ade23aef30955d641872ea2bfa6816a6_5 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    struct Nuitka_FrameObject *frame_763d6811da80a9ffe4a2b8ba18c54267_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    static struct Nuitka_FrameObject *cache_frame_763d6811da80a9ffe4a2b8ba18c54267_6 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    struct Nuitka_FrameObject *frame_0459823c0d8480ebfbf11343a9155ad0_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    static struct Nuitka_FrameObject *cache_frame_0459823c0d8480ebfbf11343a9155ad0_7 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    static struct Nuitka_FrameObject *cache_frame_108d6c6013a02c74b239aebab59f5345 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_108d6c6013a02c74b239aebab59f5345)) {
        Py_XDECREF(cache_frame_108d6c6013a02c74b239aebab59f5345);

#if _DEBUG_REFCOUNTS
        if (cache_frame_108d6c6013a02c74b239aebab59f5345 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_108d6c6013a02c74b239aebab59f5345 = MAKE_FUNCTION_FRAME(codeobj_108d6c6013a02c74b239aebab59f5345, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_108d6c6013a02c74b239aebab59f5345->m_type_description == NULL);
    frame_108d6c6013a02c74b239aebab59f5345 = cache_frame_108d6c6013a02c74b239aebab59f5345;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_108d6c6013a02c74b239aebab59f5345);
    assert(Py_REFCNT(frame_108d6c6013a02c74b239aebab59f5345) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_namedTypes);
        tmp_assattr_value_1 = par_namedTypes;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[11], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_2 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[12], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_108d6c6013a02c74b239aebab59f5345->m_frame.f_lineno = 157;
        tmp_assattr_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[13]);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[14], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_108d6c6013a02c74b239aebab59f5345->m_frame.f_lineno = 158;
        tmp_assattr_value_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[15]);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[16], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_108d6c6013a02c74b239aebab59f5345->m_frame.f_lineno = 159;
        tmp_assattr_value_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[17]);
        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[18], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_assattr_target_6;
        tmp_key_value_1 = mod_consts[19];
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_1 = par_kwargs;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_and_left_value_1 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        frame_108d6c6013a02c74b239aebab59f5345->m_frame.f_lineno = 160;
        tmp_and_right_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[20]);
        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF(tmp_and_left_value_1);
        tmp_or_left_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 160;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = MAKE_DICT_EMPTY();
        tmp_assattr_value_6 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assattr_value_6 = tmp_or_left_value_1;
        or_end_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[21], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[22]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_108d6c6013a02c74b239aebab59f5345->m_frame.f_lineno = 161;
        tmp_assattr_value_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[23], 0), mod_consts[24]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assattr_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[25], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[22]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_108d6c6013a02c74b239aebab59f5345->m_frame.f_lineno = 162;
        tmp_assattr_value_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[26], 0), mod_consts[24]);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assattr_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[27], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_9;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_4;
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[11]);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_1 = "ooo";
                goto try_except_handler_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_1 = "ooo";
                goto try_except_handler_1;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_2;
        }
        if (isFrameUnusable(cache_frame_82185ce1ba898c388462850bc4e16620_2)) {
            Py_XDECREF(cache_frame_82185ce1ba898c388462850bc4e16620_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_82185ce1ba898c388462850bc4e16620_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_82185ce1ba898c388462850bc4e16620_2 = MAKE_FUNCTION_FRAME(codeobj_82185ce1ba898c388462850bc4e16620, module_pyasn1$type$namedtype, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_82185ce1ba898c388462850bc4e16620_2->m_type_description == NULL);
        frame_82185ce1ba898c388462850bc4e16620_2 = cache_frame_82185ce1ba898c388462850bc4e16620_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_82185ce1ba898c388462850bc4e16620_2);
        assert(Py_REFCNT(frame_82185ce1ba898c388462850bc4e16620_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_3 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 163;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_namedType;
                outline_0_var_namedType = tmp_assign_source_4;
                Py_INCREF(outline_0_var_namedType);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_1;
            int tmp_or_left_truth_2;
            nuitka_bool tmp_or_left_value_2;
            nuitka_bool tmp_or_right_value_2;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_attribute_value_1;
            int tmp_truth_name_1;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_attribute_value_2;
            int tmp_truth_name_2;
            CHECK_OBJECT(outline_0_var_namedType);
            tmp_expression_value_5 = outline_0_var_namedType;
            tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[29]);
            if (tmp_attribute_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
            if (tmp_truth_name_1 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_attribute_value_1);

                exception_lineno = 164;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
            tmp_or_left_value_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            Py_DECREF(tmp_attribute_value_1);
            tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
            if (tmp_or_left_truth_2 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
            if (tmp_or_left_truth_2 == 1) {
                goto or_left_2;
            } else {
                goto or_right_2;
            }
            or_right_2:;
            CHECK_OBJECT(outline_0_var_namedType);
            tmp_expression_value_6 = outline_0_var_namedType;
            tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[30]);
            if (tmp_attribute_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
            if (tmp_truth_name_2 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_attribute_value_2);

                exception_lineno = 164;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
            tmp_or_right_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            Py_DECREF(tmp_attribute_value_2);
            tmp_condition_result_1 = tmp_or_right_value_2;
            goto or_end_2;
            or_left_2:;
            tmp_condition_result_1 = tmp_or_left_value_2;
            or_end_2:;
            if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
                goto branch_yes_1;
            } else {
                goto branch_no_1;
            }
        }
        branch_yes_1:;
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_append_value_1 = Py_True;
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
        }
        branch_no_1:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_1);
        goto try_return_handler_2;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_1;
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
        frame_return_exit_1:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_82185ce1ba898c388462850bc4e16620_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_82185ce1ba898c388462850bc4e16620_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_82185ce1ba898c388462850bc4e16620_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_82185ce1ba898c388462850bc4e16620_2,
            type_description_2,
            outline_0_var_namedType
        );


        // Release cached frame if used for exception.
        if (frame_82185ce1ba898c388462850bc4e16620_2 == cache_frame_82185ce1ba898c388462850bc4e16620_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_82185ce1ba898c388462850bc4e16620_2);
            cache_frame_82185ce1ba898c388462850bc4e16620_2 = NULL;
        }

        assertFrameObject(frame_82185ce1ba898c388462850bc4e16620_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooo";
        goto try_except_handler_1;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        Py_XDECREF(outline_0_var_namedType);
        outline_0_var_namedType = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_1:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_namedType);
        outline_0_var_namedType = NULL;
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
        exception_lineno = 163;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_108d6c6013a02c74b239aebab59f5345->m_frame.f_lineno = 163;
        tmp_assattr_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assattr_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[31], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_assattr_target_10;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_expression_value_7;
            CHECK_OBJECT(par_self);
            tmp_expression_value_7 = par_self;
            tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[11]);
            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_6;
        }
        if (isFrameUnusable(cache_frame_2357c83dc265a685831732437ea246a0_3)) {
            Py_XDECREF(cache_frame_2357c83dc265a685831732437ea246a0_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_2357c83dc265a685831732437ea246a0_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_2357c83dc265a685831732437ea246a0_3 = MAKE_FUNCTION_FRAME(codeobj_2357c83dc265a685831732437ea246a0, module_pyasn1$type$namedtype, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_2357c83dc265a685831732437ea246a0_3->m_type_description == NULL);
        frame_2357c83dc265a685831732437ea246a0_3 = cache_frame_2357c83dc265a685831732437ea246a0_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_2357c83dc265a685831732437ea246a0_3);
        assert(Py_REFCNT(frame_2357c83dc265a685831732437ea246a0_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_7 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 165;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_7;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_8 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_namedType;
                outline_1_var_namedType = tmp_assign_source_8;
                Py_INCREF(outline_1_var_namedType);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_attribute_value_3;
            int tmp_truth_name_3;
            CHECK_OBJECT(outline_1_var_namedType);
            tmp_expression_value_8 = outline_1_var_namedType;
            tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[7]);
            if (tmp_attribute_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
            if (tmp_truth_name_3 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_attribute_value_3);

                exception_lineno = 166;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            tmp_condition_result_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            Py_DECREF(tmp_attribute_value_3);
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
        }
        branch_yes_2:;
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            tmp_append_value_2 = Py_True;
            tmp_result = LIST_APPEND0(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
        }
        branch_no_2:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_args_element_value_2 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_args_element_value_2);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto frame_return_exit_2;
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

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_3;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_3;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2357c83dc265a685831732437ea246a0_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2357c83dc265a685831732437ea246a0_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2357c83dc265a685831732437ea246a0_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2357c83dc265a685831732437ea246a0_3,
            type_description_2,
            outline_1_var_namedType
        );


        // Release cached frame if used for exception.
        if (frame_2357c83dc265a685831732437ea246a0_3 == cache_frame_2357c83dc265a685831732437ea246a0_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_2357c83dc265a685831732437ea246a0_3);
            cache_frame_2357c83dc265a685831732437ea246a0_3 = NULL;
        }

        assertFrameObject(frame_2357c83dc265a685831732437ea246a0_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ooo";
        goto try_except_handler_3;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF(outline_1_var_namedType);
        outline_1_var_namedType = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_namedType);
        outline_1_var_namedType = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 165;
        goto frame_exception_exit_1;
        outline_result_2:;
        frame_108d6c6013a02c74b239aebab59f5345->m_frame.f_lineno = 165;
        tmp_assattr_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assattr_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[32], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_frozenset_arg_1;
        PyObject *tmp_assattr_target_11;
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_expression_value_9;
            tmp_called_value_5 = (PyObject *)&PyEnum_Type;
            CHECK_OBJECT(par_self);
            tmp_expression_value_9 = par_self;
            tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[11]);
            if (tmp_args_element_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;
                type_description_1 = "ooo";
                goto try_except_handler_5;
            }
            frame_108d6c6013a02c74b239aebab59f5345->m_frame.f_lineno = 169;
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_iter_arg_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;
                type_description_1 = "ooo";
                goto try_except_handler_5;
            }
            tmp_assign_source_9 = MAKE_ITERATOR(tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            if (tmp_assign_source_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;
                type_description_1 = "ooo";
                goto try_except_handler_5;
            }
            assert(tmp_listcomp_3__$0 == NULL);
            tmp_listcomp_3__$0 = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_3__contraction == NULL);
            tmp_listcomp_3__contraction = tmp_assign_source_10;
        }
        if (isFrameUnusable(cache_frame_e1414d7d0460d6b0ba47a52030c8f232_4)) {
            Py_XDECREF(cache_frame_e1414d7d0460d6b0ba47a52030c8f232_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_e1414d7d0460d6b0ba47a52030c8f232_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_e1414d7d0460d6b0ba47a52030c8f232_4 = MAKE_FUNCTION_FRAME(codeobj_e1414d7d0460d6b0ba47a52030c8f232, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_e1414d7d0460d6b0ba47a52030c8f232_4->m_type_description == NULL);
        frame_e1414d7d0460d6b0ba47a52030c8f232_4 = cache_frame_e1414d7d0460d6b0ba47a52030c8f232_4;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_e1414d7d0460d6b0ba47a52030c8f232_4);
        assert(Py_REFCNT(frame_e1414d7d0460d6b0ba47a52030c8f232_4) == 2);

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT(tmp_listcomp_3__$0);
            tmp_next_source_3 = tmp_listcomp_3__$0;
            tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_11 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 169;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_listcomp_3__iter_value_0;
                tmp_listcomp_3__iter_value_0 = tmp_assign_source_11;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
            tmp_iter_arg_4 = tmp_listcomp_3__iter_value_0;
            tmp_assign_source_12 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
            if (tmp_assign_source_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_12;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
            if (tmp_assign_source_13 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 169;
                goto try_except_handler_8;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_13;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
            if (tmp_assign_source_14 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 169;
                goto try_except_handler_8;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_14;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_listcomp$tuple_unpack_1__source_iter;
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

                        type_description_2 = "oo";
                        exception_lineno = 169;
                        goto try_except_handler_8;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[33];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 169;
                goto try_except_handler_8;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_7;
        // End of try:
        try_end_1:;
        goto try_end_2;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_6;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_15 = tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_2_var_idx;
                outline_2_var_idx = tmp_assign_source_15;
                Py_INCREF(outline_2_var_idx);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_16 = tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_2_var_nt;
                outline_2_var_nt = tmp_assign_source_16;
                Py_INCREF(outline_2_var_nt);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        {
            bool tmp_condition_result_3;
            int tmp_and_left_truth_2;
            bool tmp_and_left_value_2;
            bool tmp_and_right_value_2;
            PyObject *tmp_operand_value_1;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_operand_value_2;
            PyObject *tmp_expression_value_11;
            CHECK_OBJECT(outline_2_var_nt);
            tmp_expression_value_10 = outline_2_var_nt;
            tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[30]);
            if (tmp_operand_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;
                type_description_2 = "oo";
                goto try_except_handler_6;
            }
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
            Py_DECREF(tmp_operand_value_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;
                type_description_2 = "oo";
                goto try_except_handler_6;
            }
            tmp_and_left_value_2 = (tmp_res == 0) ? true : false;
            tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
            if (tmp_and_left_truth_2 == 1) {
                goto and_right_2;
            } else {
                goto and_left_2;
            }
            and_right_2:;
            CHECK_OBJECT(outline_2_var_nt);
            tmp_expression_value_11 = outline_2_var_nt;
            tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[29]);
            if (tmp_operand_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;
                type_description_2 = "oo";
                goto try_except_handler_6;
            }
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
            Py_DECREF(tmp_operand_value_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;
                type_description_2 = "oo";
                goto try_except_handler_6;
            }
            tmp_and_right_value_2 = (tmp_res == 0) ? true : false;
            tmp_condition_result_3 = tmp_and_right_value_2;
            goto and_end_2;
            and_left_2:;
            tmp_condition_result_3 = tmp_and_left_value_2;
            and_end_2:;
            if (tmp_condition_result_3 != false) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            CHECK_OBJECT(tmp_listcomp_3__contraction);
            tmp_append_list_3 = tmp_listcomp_3__contraction;
            CHECK_OBJECT(outline_2_var_idx);
            tmp_append_value_3 = outline_2_var_idx;
            tmp_result = LIST_APPEND0(tmp_append_list_3, tmp_append_value_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;
                type_description_2 = "oo";
                goto try_except_handler_6;
            }
        }
        branch_no_3:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_2 = "oo";
            goto try_except_handler_6;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        tmp_frozenset_arg_1 = tmp_listcomp_3__contraction;
        Py_INCREF(tmp_frozenset_arg_1);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        goto frame_return_exit_3;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto frame_exception_exit_4;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_return_exit_3:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_5;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e1414d7d0460d6b0ba47a52030c8f232_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e1414d7d0460d6b0ba47a52030c8f232_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e1414d7d0460d6b0ba47a52030c8f232_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e1414d7d0460d6b0ba47a52030c8f232_4,
            type_description_2,
            outline_2_var_idx,
            outline_2_var_nt
        );


        // Release cached frame if used for exception.
        if (frame_e1414d7d0460d6b0ba47a52030c8f232_4 == cache_frame_e1414d7d0460d6b0ba47a52030c8f232_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_e1414d7d0460d6b0ba47a52030c8f232_4);
            cache_frame_e1414d7d0460d6b0ba47a52030c8f232_4 = NULL;
        }

        assertFrameObject(frame_e1414d7d0460d6b0ba47a52030c8f232_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;
        type_description_1 = "ooo";
        goto try_except_handler_5;
        skip_nested_handling_3:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_XDECREF(outline_2_var_idx);
        outline_2_var_idx = NULL;
        Py_XDECREF(outline_2_var_nt);
        outline_2_var_nt = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_2_var_idx);
        outline_2_var_idx = NULL;
        Py_XDECREF(outline_2_var_nt);
        outline_2_var_nt = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 169;
        goto frame_exception_exit_1;
        outline_result_3:;
        tmp_assattr_value_11 = PyFrozenSet_New(tmp_frozenset_arg_1);
        Py_DECREF(tmp_frozenset_arg_1);
        if (tmp_assattr_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[34], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_frozenset_arg_2;
        PyObject *tmp_assattr_target_12;
        // Tried code:
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_iter_arg_5;
            PyObject *tmp_expression_value_12;
            CHECK_OBJECT(par_self);
            tmp_expression_value_12 = par_self;
            tmp_iter_arg_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[11]);
            if (tmp_iter_arg_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_1 = "ooo";
                goto try_except_handler_9;
            }
            tmp_assign_source_17 = MAKE_ITERATOR(tmp_iter_arg_5);
            Py_DECREF(tmp_iter_arg_5);
            if (tmp_assign_source_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_1 = "ooo";
                goto try_except_handler_9;
            }
            assert(tmp_listcomp_4__$0 == NULL);
            tmp_listcomp_4__$0 = tmp_assign_source_17;
        }
        {
            PyObject *tmp_assign_source_18;
            tmp_assign_source_18 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_4__contraction == NULL);
            tmp_listcomp_4__contraction = tmp_assign_source_18;
        }
        if (isFrameUnusable(cache_frame_ade23aef30955d641872ea2bfa6816a6_5)) {
            Py_XDECREF(cache_frame_ade23aef30955d641872ea2bfa6816a6_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_ade23aef30955d641872ea2bfa6816a6_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_ade23aef30955d641872ea2bfa6816a6_5 = MAKE_FUNCTION_FRAME(codeobj_ade23aef30955d641872ea2bfa6816a6, module_pyasn1$type$namedtype, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_ade23aef30955d641872ea2bfa6816a6_5->m_type_description == NULL);
        frame_ade23aef30955d641872ea2bfa6816a6_5 = cache_frame_ade23aef30955d641872ea2bfa6816a6_5;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ade23aef30955d641872ea2bfa6816a6_5);
        assert(Py_REFCNT(frame_ade23aef30955d641872ea2bfa6816a6_5) == 2);

        // Framed code:
        // Tried code:
        loop_start_4:;
        {
            PyObject *tmp_next_source_4;
            PyObject *tmp_assign_source_19;
            CHECK_OBJECT(tmp_listcomp_4__$0);
            tmp_next_source_4 = tmp_listcomp_4__$0;
            tmp_assign_source_19 = ITERATOR_NEXT(tmp_next_source_4);
            if (tmp_assign_source_19 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_4;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 171;
                    goto try_except_handler_10;
                }
            }

            {
                PyObject *old = tmp_listcomp_4__iter_value_0;
                tmp_listcomp_4__iter_value_0 = tmp_assign_source_19;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_20;
            CHECK_OBJECT(tmp_listcomp_4__iter_value_0);
            tmp_assign_source_20 = tmp_listcomp_4__iter_value_0;
            {
                PyObject *old = outline_3_var_namedType;
                outline_3_var_namedType = tmp_assign_source_20;
                Py_INCREF(outline_3_var_namedType);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_4;
            PyObject *tmp_append_value_4;
            PyObject *tmp_expression_value_13;
            CHECK_OBJECT(tmp_listcomp_4__contraction);
            tmp_append_list_4 = tmp_listcomp_4__contraction;
            CHECK_OBJECT(outline_3_var_namedType);
            tmp_expression_value_13 = outline_3_var_namedType;
            tmp_append_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[5]);
            if (tmp_append_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_4, tmp_append_value_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_2 = "o";
            goto try_except_handler_10;
        }
        goto loop_start_4;
        loop_end_4:;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        tmp_frozenset_arg_2 = tmp_listcomp_4__contraction;
        Py_INCREF(tmp_frozenset_arg_2);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(tmp_listcomp_4__$0);
        Py_DECREF(tmp_listcomp_4__$0);
        tmp_listcomp_4__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        Py_DECREF(tmp_listcomp_4__contraction);
        tmp_listcomp_4__contraction = NULL;
        Py_XDECREF(tmp_listcomp_4__iter_value_0);
        tmp_listcomp_4__iter_value_0 = NULL;
        goto frame_return_exit_4;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_4__$0);
        Py_DECREF(tmp_listcomp_4__$0);
        tmp_listcomp_4__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        Py_DECREF(tmp_listcomp_4__contraction);
        tmp_listcomp_4__contraction = NULL;
        Py_XDECREF(tmp_listcomp_4__iter_value_0);
        tmp_listcomp_4__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto frame_exception_exit_5;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_return_exit_4:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_9;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ade23aef30955d641872ea2bfa6816a6_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ade23aef30955d641872ea2bfa6816a6_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ade23aef30955d641872ea2bfa6816a6_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ade23aef30955d641872ea2bfa6816a6_5,
            type_description_2,
            outline_3_var_namedType
        );


        // Release cached frame if used for exception.
        if (frame_ade23aef30955d641872ea2bfa6816a6_5 == cache_frame_ade23aef30955d641872ea2bfa6816a6_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_ade23aef30955d641872ea2bfa6816a6_5);
            cache_frame_ade23aef30955d641872ea2bfa6816a6_5 = NULL;
        }

        assertFrameObject(frame_ade23aef30955d641872ea2bfa6816a6_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;
        type_description_1 = "ooo";
        goto try_except_handler_9;
        skip_nested_handling_4:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_XDECREF(outline_3_var_namedType);
        outline_3_var_namedType = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_3_var_namedType);
        outline_3_var_namedType = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 171;
        goto frame_exception_exit_1;
        outline_result_4:;
        tmp_assattr_value_12 = PyFrozenSet_New(tmp_frozenset_arg_2);
        Py_DECREF(tmp_frozenset_arg_2);
        if (tmp_assattr_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[35], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_tuple_arg_1;
        PyObject *tmp_assattr_target_13;
        // Tried code:
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_iter_arg_6;
            PyObject *tmp_expression_value_14;
            CHECK_OBJECT(par_self);
            tmp_expression_value_14 = par_self;
            tmp_iter_arg_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[11]);
            if (tmp_iter_arg_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_1 = "ooo";
                goto try_except_handler_11;
            }
            tmp_assign_source_21 = MAKE_ITERATOR(tmp_iter_arg_6);
            Py_DECREF(tmp_iter_arg_6);
            if (tmp_assign_source_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_1 = "ooo";
                goto try_except_handler_11;
            }
            assert(tmp_listcomp_5__$0 == NULL);
            tmp_listcomp_5__$0 = tmp_assign_source_21;
        }
        {
            PyObject *tmp_assign_source_22;
            tmp_assign_source_22 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_5__contraction == NULL);
            tmp_listcomp_5__contraction = tmp_assign_source_22;
        }
        if (isFrameUnusable(cache_frame_763d6811da80a9ffe4a2b8ba18c54267_6)) {
            Py_XDECREF(cache_frame_763d6811da80a9ffe4a2b8ba18c54267_6);

#if _DEBUG_REFCOUNTS
            if (cache_frame_763d6811da80a9ffe4a2b8ba18c54267_6 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_763d6811da80a9ffe4a2b8ba18c54267_6 = MAKE_FUNCTION_FRAME(codeobj_763d6811da80a9ffe4a2b8ba18c54267, module_pyasn1$type$namedtype, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_763d6811da80a9ffe4a2b8ba18c54267_6->m_type_description == NULL);
        frame_763d6811da80a9ffe4a2b8ba18c54267_6 = cache_frame_763d6811da80a9ffe4a2b8ba18c54267_6;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_763d6811da80a9ffe4a2b8ba18c54267_6);
        assert(Py_REFCNT(frame_763d6811da80a9ffe4a2b8ba18c54267_6) == 2);

        // Framed code:
        // Tried code:
        loop_start_5:;
        {
            PyObject *tmp_next_source_5;
            PyObject *tmp_assign_source_23;
            CHECK_OBJECT(tmp_listcomp_5__$0);
            tmp_next_source_5 = tmp_listcomp_5__$0;
            tmp_assign_source_23 = ITERATOR_NEXT(tmp_next_source_5);
            if (tmp_assign_source_23 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_5;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 172;
                    goto try_except_handler_12;
                }
            }

            {
                PyObject *old = tmp_listcomp_5__iter_value_0;
                tmp_listcomp_5__iter_value_0 = tmp_assign_source_23;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_24;
            CHECK_OBJECT(tmp_listcomp_5__iter_value_0);
            tmp_assign_source_24 = tmp_listcomp_5__iter_value_0;
            {
                PyObject *old = outline_4_var_namedType;
                outline_4_var_namedType = tmp_assign_source_24;
                Py_INCREF(outline_4_var_namedType);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_5;
            PyObject *tmp_append_value_5;
            PyObject *tmp_expression_value_15;
            CHECK_OBJECT(tmp_listcomp_5__contraction);
            tmp_append_list_5 = tmp_listcomp_5__contraction;
            CHECK_OBJECT(outline_4_var_namedType);
            tmp_expression_value_15 = outline_4_var_namedType;
            tmp_append_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[6]);
            if (tmp_append_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_5, tmp_append_value_5);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_2 = "o";
            goto try_except_handler_12;
        }
        goto loop_start_5;
        loop_end_5:;
        CHECK_OBJECT(tmp_listcomp_5__contraction);
        tmp_tuple_arg_1 = tmp_listcomp_5__contraction;
        Py_INCREF(tmp_tuple_arg_1);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(tmp_listcomp_5__$0);
        Py_DECREF(tmp_listcomp_5__$0);
        tmp_listcomp_5__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_5__contraction);
        Py_DECREF(tmp_listcomp_5__contraction);
        tmp_listcomp_5__contraction = NULL;
        Py_XDECREF(tmp_listcomp_5__iter_value_0);
        tmp_listcomp_5__iter_value_0 = NULL;
        goto frame_return_exit_5;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_5__$0);
        Py_DECREF(tmp_listcomp_5__$0);
        tmp_listcomp_5__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_5__contraction);
        Py_DECREF(tmp_listcomp_5__contraction);
        tmp_listcomp_5__contraction = NULL;
        Py_XDECREF(tmp_listcomp_5__iter_value_0);
        tmp_listcomp_5__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto frame_exception_exit_6;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_return_exit_5:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_11;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_763d6811da80a9ffe4a2b8ba18c54267_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_763d6811da80a9ffe4a2b8ba18c54267_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_763d6811da80a9ffe4a2b8ba18c54267_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_763d6811da80a9ffe4a2b8ba18c54267_6,
            type_description_2,
            outline_4_var_namedType
        );


        // Release cached frame if used for exception.
        if (frame_763d6811da80a9ffe4a2b8ba18c54267_6 == cache_frame_763d6811da80a9ffe4a2b8ba18c54267_6) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_763d6811da80a9ffe4a2b8ba18c54267_6);
            cache_frame_763d6811da80a9ffe4a2b8ba18c54267_6 = NULL;
        }

        assertFrameObject(frame_763d6811da80a9ffe4a2b8ba18c54267_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;
        type_description_1 = "ooo";
        goto try_except_handler_11;
        skip_nested_handling_5:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_XDECREF(outline_4_var_namedType);
        outline_4_var_namedType = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_4_var_namedType);
        outline_4_var_namedType = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 172;
        goto frame_exception_exit_1;
        outline_result_5:;
        tmp_assattr_value_13 = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_assattr_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[36], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_tuple_arg_2;
        PyObject *tmp_assattr_target_14;
        // Tried code:
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_iter_arg_7;
            PyObject *tmp_expression_value_16;
            CHECK_OBJECT(par_self);
            tmp_expression_value_16 = par_self;
            tmp_iter_arg_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[11]);
            if (tmp_iter_arg_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_1 = "ooo";
                goto try_except_handler_13;
            }
            tmp_assign_source_25 = MAKE_ITERATOR(tmp_iter_arg_7);
            Py_DECREF(tmp_iter_arg_7);
            if (tmp_assign_source_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_1 = "ooo";
                goto try_except_handler_13;
            }
            assert(tmp_listcomp_6__$0 == NULL);
            tmp_listcomp_6__$0 = tmp_assign_source_25;
        }
        {
            PyObject *tmp_assign_source_26;
            tmp_assign_source_26 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_6__contraction == NULL);
            tmp_listcomp_6__contraction = tmp_assign_source_26;
        }
        if (isFrameUnusable(cache_frame_0459823c0d8480ebfbf11343a9155ad0_7)) {
            Py_XDECREF(cache_frame_0459823c0d8480ebfbf11343a9155ad0_7);

#if _DEBUG_REFCOUNTS
            if (cache_frame_0459823c0d8480ebfbf11343a9155ad0_7 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_0459823c0d8480ebfbf11343a9155ad0_7 = MAKE_FUNCTION_FRAME(codeobj_0459823c0d8480ebfbf11343a9155ad0, module_pyasn1$type$namedtype, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_0459823c0d8480ebfbf11343a9155ad0_7->m_type_description == NULL);
        frame_0459823c0d8480ebfbf11343a9155ad0_7 = cache_frame_0459823c0d8480ebfbf11343a9155ad0_7;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_0459823c0d8480ebfbf11343a9155ad0_7);
        assert(Py_REFCNT(frame_0459823c0d8480ebfbf11343a9155ad0_7) == 2);

        // Framed code:
        // Tried code:
        loop_start_6:;
        {
            PyObject *tmp_next_source_6;
            PyObject *tmp_assign_source_27;
            CHECK_OBJECT(tmp_listcomp_6__$0);
            tmp_next_source_6 = tmp_listcomp_6__$0;
            tmp_assign_source_27 = ITERATOR_NEXT(tmp_next_source_6);
            if (tmp_assign_source_27 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_6;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 173;
                    goto try_except_handler_14;
                }
            }

            {
                PyObject *old = tmp_listcomp_6__iter_value_0;
                tmp_listcomp_6__iter_value_0 = tmp_assign_source_27;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_28;
            CHECK_OBJECT(tmp_listcomp_6__iter_value_0);
            tmp_assign_source_28 = tmp_listcomp_6__iter_value_0;
            {
                PyObject *old = outline_5_var_namedType;
                outline_5_var_namedType = tmp_assign_source_28;
                Py_INCREF(outline_5_var_namedType);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_6;
            PyObject *tmp_append_value_6;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_expression_value_17;
            CHECK_OBJECT(tmp_listcomp_6__contraction);
            tmp_append_list_6 = tmp_listcomp_6__contraction;
            CHECK_OBJECT(outline_5_var_namedType);
            tmp_expression_value_17 = outline_5_var_namedType;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[5]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            tmp_append_value_6 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_18;
                PyTuple_SET_ITEM(tmp_append_value_6, 0, tmp_tuple_element_1);
                CHECK_OBJECT(outline_5_var_namedType);
                tmp_expression_value_18 = outline_5_var_namedType;
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[6]);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 173;
                    type_description_2 = "o";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_append_value_6, 1, tmp_tuple_element_1);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_append_value_6);
            goto try_except_handler_14;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_result = LIST_APPEND1(tmp_append_list_6, tmp_append_value_6);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_2 = "o";
            goto try_except_handler_14;
        }
        goto loop_start_6;
        loop_end_6:;
        CHECK_OBJECT(tmp_listcomp_6__contraction);
        tmp_tuple_arg_2 = tmp_listcomp_6__contraction;
        Py_INCREF(tmp_tuple_arg_2);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(tmp_listcomp_6__$0);
        Py_DECREF(tmp_listcomp_6__$0);
        tmp_listcomp_6__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_6__contraction);
        Py_DECREF(tmp_listcomp_6__contraction);
        tmp_listcomp_6__contraction = NULL;
        Py_XDECREF(tmp_listcomp_6__iter_value_0);
        tmp_listcomp_6__iter_value_0 = NULL;
        goto frame_return_exit_6;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_6__$0);
        Py_DECREF(tmp_listcomp_6__$0);
        tmp_listcomp_6__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_6__contraction);
        Py_DECREF(tmp_listcomp_6__contraction);
        tmp_listcomp_6__contraction = NULL;
        Py_XDECREF(tmp_listcomp_6__iter_value_0);
        tmp_listcomp_6__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto frame_exception_exit_7;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;
        frame_return_exit_6:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_13;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0459823c0d8480ebfbf11343a9155ad0_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0459823c0d8480ebfbf11343a9155ad0_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0459823c0d8480ebfbf11343a9155ad0_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0459823c0d8480ebfbf11343a9155ad0_7,
            type_description_2,
            outline_5_var_namedType
        );


        // Release cached frame if used for exception.
        if (frame_0459823c0d8480ebfbf11343a9155ad0_7 == cache_frame_0459823c0d8480ebfbf11343a9155ad0_7) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_0459823c0d8480ebfbf11343a9155ad0_7);
            cache_frame_0459823c0d8480ebfbf11343a9155ad0_7 = NULL;
        }

        assertFrameObject(frame_0459823c0d8480ebfbf11343a9155ad0_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;
        type_description_1 = "ooo";
        goto try_except_handler_13;
        skip_nested_handling_6:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_XDECREF(outline_5_var_namedType);
        outline_5_var_namedType = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_5_var_namedType);
        outline_5_var_namedType = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 173;
        goto frame_exception_exit_1;
        outline_result_6:;
        tmp_assattr_value_14 = PySequence_Tuple(tmp_tuple_arg_2);
        Py_DECREF(tmp_tuple_arg_2);
        if (tmp_assattr_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[37], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_7;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_108d6c6013a02c74b239aebab59f5345, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_108d6c6013a02c74b239aebab59f5345->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_108d6c6013a02c74b239aebab59f5345, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_108d6c6013a02c74b239aebab59f5345,
        type_description_1,
        par_self,
        par_namedTypes,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_108d6c6013a02c74b239aebab59f5345 == cache_frame_108d6c6013a02c74b239aebab59f5345) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_108d6c6013a02c74b239aebab59f5345);
        cache_frame_108d6c6013a02c74b239aebab59f5345 = NULL;
    }

    assertFrameObject(frame_108d6c6013a02c74b239aebab59f5345);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_7:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_namedTypes);
    Py_DECREF(par_namedTypes);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_namedTypes);
    Py_DECREF(par_namedTypes);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$namedtype$$$function__19___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_representation = NULL;
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_0fcad4ac2cec5d5ac6ffa36b8c48169a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_419cd5fe9b3ace161ce47f43b18cf0a6_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_419cd5fe9b3ace161ce47f43b18cf0a6_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0fcad4ac2cec5d5ac6ffa36b8c48169a = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0fcad4ac2cec5d5ac6ffa36b8c48169a)) {
        Py_XDECREF(cache_frame_0fcad4ac2cec5d5ac6ffa36b8c48169a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0fcad4ac2cec5d5ac6ffa36b8c48169a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0fcad4ac2cec5d5ac6ffa36b8c48169a = MAKE_FUNCTION_FRAME(codeobj_0fcad4ac2cec5d5ac6ffa36b8c48169a, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0fcad4ac2cec5d5ac6ffa36b8c48169a->m_type_description == NULL);
    frame_0fcad4ac2cec5d5ac6ffa36b8c48169a = cache_frame_0fcad4ac2cec5d5ac6ffa36b8c48169a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0fcad4ac2cec5d5ac6ffa36b8c48169a);
    assert(Py_REFCNT(frame_0fcad4ac2cec5d5ac6ffa36b8c48169a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_str_arg_value_1 = mod_consts[38];
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_1;
            CHECK_OBJECT(par_self);
            tmp_expression_value_1 = par_self;
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_3;
        }
        if (isFrameUnusable(cache_frame_419cd5fe9b3ace161ce47f43b18cf0a6_2)) {
            Py_XDECREF(cache_frame_419cd5fe9b3ace161ce47f43b18cf0a6_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_419cd5fe9b3ace161ce47f43b18cf0a6_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_419cd5fe9b3ace161ce47f43b18cf0a6_2 = MAKE_FUNCTION_FRAME(codeobj_419cd5fe9b3ace161ce47f43b18cf0a6, module_pyasn1$type$namedtype, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_419cd5fe9b3ace161ce47f43b18cf0a6_2->m_type_description == NULL);
        frame_419cd5fe9b3ace161ce47f43b18cf0a6_2 = cache_frame_419cd5fe9b3ace161ce47f43b18cf0a6_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_419cd5fe9b3ace161ce47f43b18cf0a6_2);
        assert(Py_REFCNT(frame_419cd5fe9b3ace161ce47f43b18cf0a6_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_4 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 176;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_x;
                outline_0_var_x = tmp_assign_source_5;
                Py_INCREF(outline_0_var_x);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_mod_expr_left_1;
            PyObject *tmp_mod_expr_right_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_mod_expr_left_1 = mod_consts[39];
            CHECK_OBJECT(outline_0_var_x);
            tmp_mod_expr_right_1 = outline_0_var_x;
            tmp_append_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_iterable_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_iterable_value_1);
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
            exception_tb = MAKE_TRACEBACK(frame_419cd5fe9b3ace161ce47f43b18cf0a6_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_419cd5fe9b3ace161ce47f43b18cf0a6_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_419cd5fe9b3ace161ce47f43b18cf0a6_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_419cd5fe9b3ace161ce47f43b18cf0a6_2,
            type_description_2,
            outline_0_var_x
        );


        // Release cached frame if used for exception.
        if (frame_419cd5fe9b3ace161ce47f43b18cf0a6_2 == cache_frame_419cd5fe9b3ace161ce47f43b18cf0a6_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_419cd5fe9b3ace161ce47f43b18cf0a6_2);
            cache_frame_419cd5fe9b3ace161ce47f43b18cf0a6_2 = NULL;
        }

        assertFrameObject(frame_419cd5fe9b3ace161ce47f43b18cf0a6_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
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

        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
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
        exception_lineno = 176;
        goto frame_exception_exit_1;
        outline_result_1:;
        tmp_assign_source_1 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_representation == NULL);
        var_representation = tmp_assign_source_1;
    }
    {
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        tmp_mod_expr_left_2 = mod_consts[40];
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[10]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_representation);
        tmp_tuple_element_1 = var_representation;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 1, tmp_tuple_element_1);
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0fcad4ac2cec5d5ac6ffa36b8c48169a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0fcad4ac2cec5d5ac6ffa36b8c48169a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0fcad4ac2cec5d5ac6ffa36b8c48169a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0fcad4ac2cec5d5ac6ffa36b8c48169a,
        type_description_1,
        par_self,
        var_representation
    );


    // Release cached frame if used for exception.
    if (frame_0fcad4ac2cec5d5ac6ffa36b8c48169a == cache_frame_0fcad4ac2cec5d5ac6ffa36b8c48169a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0fcad4ac2cec5d5ac6ffa36b8c48169a);
        cache_frame_0fcad4ac2cec5d5ac6ffa36b8c48169a = NULL;
    }

    assertFrameObject(frame_0fcad4ac2cec5d5ac6ffa36b8c48169a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_representation);
    Py_DECREF(var_representation);
    var_representation = NULL;
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

    Py_XDECREF(var_representation);
    var_representation = NULL;
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


static PyObject *impl_pyasn1$type$namedtype$$$function__20___eq__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_50dd0a5882689c76622bb4905f0a88d5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_50dd0a5882689c76622bb4905f0a88d5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_50dd0a5882689c76622bb4905f0a88d5)) {
        Py_XDECREF(cache_frame_50dd0a5882689c76622bb4905f0a88d5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_50dd0a5882689c76622bb4905f0a88d5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_50dd0a5882689c76622bb4905f0a88d5 = MAKE_FUNCTION_FRAME(codeobj_50dd0a5882689c76622bb4905f0a88d5, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_50dd0a5882689c76622bb4905f0a88d5->m_type_description == NULL);
    frame_50dd0a5882689c76622bb4905f0a88d5 = cache_frame_50dd0a5882689c76622bb4905f0a88d5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_50dd0a5882689c76622bb4905f0a88d5);
    assert(Py_REFCNT(frame_50dd0a5882689c76622bb4905f0a88d5) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_cmp_expr_right_1 = par_other;
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_50dd0a5882689c76622bb4905f0a88d5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_50dd0a5882689c76622bb4905f0a88d5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_50dd0a5882689c76622bb4905f0a88d5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_50dd0a5882689c76622bb4905f0a88d5,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_50dd0a5882689c76622bb4905f0a88d5 == cache_frame_50dd0a5882689c76622bb4905f0a88d5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_50dd0a5882689c76622bb4905f0a88d5);
        cache_frame_50dd0a5882689c76622bb4905f0a88d5 = NULL;
    }

    assertFrameObject(frame_50dd0a5882689c76622bb4905f0a88d5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$namedtype$$$function__21___ne__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_218d7ebf572469e9162db6797914e9d1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_218d7ebf572469e9162db6797914e9d1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_218d7ebf572469e9162db6797914e9d1)) {
        Py_XDECREF(cache_frame_218d7ebf572469e9162db6797914e9d1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_218d7ebf572469e9162db6797914e9d1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_218d7ebf572469e9162db6797914e9d1 = MAKE_FUNCTION_FRAME(codeobj_218d7ebf572469e9162db6797914e9d1, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_218d7ebf572469e9162db6797914e9d1->m_type_description == NULL);
    frame_218d7ebf572469e9162db6797914e9d1 = cache_frame_218d7ebf572469e9162db6797914e9d1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_218d7ebf572469e9162db6797914e9d1);
    assert(Py_REFCNT(frame_218d7ebf572469e9162db6797914e9d1) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_cmp_expr_right_1 = par_other;
        tmp_return_value = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_218d7ebf572469e9162db6797914e9d1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_218d7ebf572469e9162db6797914e9d1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_218d7ebf572469e9162db6797914e9d1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_218d7ebf572469e9162db6797914e9d1,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_218d7ebf572469e9162db6797914e9d1 == cache_frame_218d7ebf572469e9162db6797914e9d1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_218d7ebf572469e9162db6797914e9d1);
        cache_frame_218d7ebf572469e9162db6797914e9d1 = NULL;
    }

    assertFrameObject(frame_218d7ebf572469e9162db6797914e9d1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$namedtype$$$function__22___lt__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_ba00fdd6b140471353422acff97265d9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ba00fdd6b140471353422acff97265d9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ba00fdd6b140471353422acff97265d9)) {
        Py_XDECREF(cache_frame_ba00fdd6b140471353422acff97265d9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ba00fdd6b140471353422acff97265d9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ba00fdd6b140471353422acff97265d9 = MAKE_FUNCTION_FRAME(codeobj_ba00fdd6b140471353422acff97265d9, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ba00fdd6b140471353422acff97265d9->m_type_description == NULL);
    frame_ba00fdd6b140471353422acff97265d9 = cache_frame_ba00fdd6b140471353422acff97265d9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ba00fdd6b140471353422acff97265d9);
    assert(Py_REFCNT(frame_ba00fdd6b140471353422acff97265d9) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_cmp_expr_right_1 = par_other;
        tmp_return_value = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_ba00fdd6b140471353422acff97265d9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ba00fdd6b140471353422acff97265d9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ba00fdd6b140471353422acff97265d9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ba00fdd6b140471353422acff97265d9,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_ba00fdd6b140471353422acff97265d9 == cache_frame_ba00fdd6b140471353422acff97265d9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ba00fdd6b140471353422acff97265d9);
        cache_frame_ba00fdd6b140471353422acff97265d9 = NULL;
    }

    assertFrameObject(frame_ba00fdd6b140471353422acff97265d9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$namedtype$$$function__23___le__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_72b306606ec03a91a759a79ffce61af9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_72b306606ec03a91a759a79ffce61af9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_72b306606ec03a91a759a79ffce61af9)) {
        Py_XDECREF(cache_frame_72b306606ec03a91a759a79ffce61af9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_72b306606ec03a91a759a79ffce61af9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_72b306606ec03a91a759a79ffce61af9 = MAKE_FUNCTION_FRAME(codeobj_72b306606ec03a91a759a79ffce61af9, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_72b306606ec03a91a759a79ffce61af9->m_type_description == NULL);
    frame_72b306606ec03a91a759a79ffce61af9 = cache_frame_72b306606ec03a91a759a79ffce61af9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_72b306606ec03a91a759a79ffce61af9);
    assert(Py_REFCNT(frame_72b306606ec03a91a759a79ffce61af9) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_cmp_expr_right_1 = par_other;
        tmp_return_value = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_72b306606ec03a91a759a79ffce61af9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_72b306606ec03a91a759a79ffce61af9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_72b306606ec03a91a759a79ffce61af9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_72b306606ec03a91a759a79ffce61af9,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_72b306606ec03a91a759a79ffce61af9 == cache_frame_72b306606ec03a91a759a79ffce61af9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_72b306606ec03a91a759a79ffce61af9);
        cache_frame_72b306606ec03a91a759a79ffce61af9 = NULL;
    }

    assertFrameObject(frame_72b306606ec03a91a759a79ffce61af9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$namedtype$$$function__24___gt__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_b60066cd69b0300a803b225d094e098f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b60066cd69b0300a803b225d094e098f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b60066cd69b0300a803b225d094e098f)) {
        Py_XDECREF(cache_frame_b60066cd69b0300a803b225d094e098f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b60066cd69b0300a803b225d094e098f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b60066cd69b0300a803b225d094e098f = MAKE_FUNCTION_FRAME(codeobj_b60066cd69b0300a803b225d094e098f, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b60066cd69b0300a803b225d094e098f->m_type_description == NULL);
    frame_b60066cd69b0300a803b225d094e098f = cache_frame_b60066cd69b0300a803b225d094e098f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b60066cd69b0300a803b225d094e098f);
    assert(Py_REFCNT(frame_b60066cd69b0300a803b225d094e098f) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_cmp_expr_right_1 = par_other;
        tmp_return_value = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_b60066cd69b0300a803b225d094e098f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b60066cd69b0300a803b225d094e098f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b60066cd69b0300a803b225d094e098f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b60066cd69b0300a803b225d094e098f,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_b60066cd69b0300a803b225d094e098f == cache_frame_b60066cd69b0300a803b225d094e098f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b60066cd69b0300a803b225d094e098f);
        cache_frame_b60066cd69b0300a803b225d094e098f = NULL;
    }

    assertFrameObject(frame_b60066cd69b0300a803b225d094e098f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$namedtype$$$function__25___ge__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_add576f711ca9f9533a2480d68d4261a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_add576f711ca9f9533a2480d68d4261a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_add576f711ca9f9533a2480d68d4261a)) {
        Py_XDECREF(cache_frame_add576f711ca9f9533a2480d68d4261a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_add576f711ca9f9533a2480d68d4261a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_add576f711ca9f9533a2480d68d4261a = MAKE_FUNCTION_FRAME(codeobj_add576f711ca9f9533a2480d68d4261a, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_add576f711ca9f9533a2480d68d4261a->m_type_description == NULL);
    frame_add576f711ca9f9533a2480d68d4261a = cache_frame_add576f711ca9f9533a2480d68d4261a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_add576f711ca9f9533a2480d68d4261a);
    assert(Py_REFCNT(frame_add576f711ca9f9533a2480d68d4261a) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_cmp_expr_right_1 = par_other;
        tmp_return_value = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_add576f711ca9f9533a2480d68d4261a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_add576f711ca9f9533a2480d68d4261a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_add576f711ca9f9533a2480d68d4261a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_add576f711ca9f9533a2480d68d4261a,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_add576f711ca9f9533a2480d68d4261a == cache_frame_add576f711ca9f9533a2480d68d4261a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_add576f711ca9f9533a2480d68d4261a);
        cache_frame_add576f711ca9f9533a2480d68d4261a = NULL;
    }

    assertFrameObject(frame_add576f711ca9f9533a2480d68d4261a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$namedtype$$$function__26___hash__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_be389c871afe3c5be0f56acd80dfef1c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_be389c871afe3c5be0f56acd80dfef1c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_be389c871afe3c5be0f56acd80dfef1c)) {
        Py_XDECREF(cache_frame_be389c871afe3c5be0f56acd80dfef1c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_be389c871afe3c5be0f56acd80dfef1c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_be389c871afe3c5be0f56acd80dfef1c = MAKE_FUNCTION_FRAME(codeobj_be389c871afe3c5be0f56acd80dfef1c, module_pyasn1$type$namedtype, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_be389c871afe3c5be0f56acd80dfef1c->m_type_description == NULL);
    frame_be389c871afe3c5be0f56acd80dfef1c = cache_frame_be389c871afe3c5be0f56acd80dfef1c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_be389c871afe3c5be0f56acd80dfef1c);
    assert(Py_REFCNT(frame_be389c871afe3c5be0f56acd80dfef1c) == 2);

    // Framed code:
    {
        PyObject *tmp_hash_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_hash_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_hash_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BUILTIN_HASH(tmp_hash_arg_1);
        Py_DECREF(tmp_hash_arg_1);
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
        exception_tb = MAKE_TRACEBACK(frame_be389c871afe3c5be0f56acd80dfef1c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_be389c871afe3c5be0f56acd80dfef1c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_be389c871afe3c5be0f56acd80dfef1c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_be389c871afe3c5be0f56acd80dfef1c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_be389c871afe3c5be0f56acd80dfef1c == cache_frame_be389c871afe3c5be0f56acd80dfef1c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_be389c871afe3c5be0f56acd80dfef1c);
        cache_frame_be389c871afe3c5be0f56acd80dfef1c = NULL;
    }

    assertFrameObject(frame_be389c871afe3c5be0f56acd80dfef1c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_pyasn1$type$namedtype$$$function__27___getitem__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_idx = python_pars[1];
    struct Nuitka_FrameObject *frame_2785a121642f72549556d8b0dc95d2c2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_2785a121642f72549556d8b0dc95d2c2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2785a121642f72549556d8b0dc95d2c2)) {
        Py_XDECREF(cache_frame_2785a121642f72549556d8b0dc95d2c2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2785a121642f72549556d8b0dc95d2c2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2785a121642f72549556d8b0dc95d2c2 = MAKE_FUNCTION_FRAME(codeobj_2785a121642f72549556d8b0dc95d2c2, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2785a121642f72549556d8b0dc95d2c2->m_type_description == NULL);
    frame_2785a121642f72549556d8b0dc95d2c2 = cache_frame_2785a121642f72549556d8b0dc95d2c2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2785a121642f72549556d8b0dc95d2c2);
    assert(Py_REFCNT(frame_2785a121642f72549556d8b0dc95d2c2) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[11]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_idx);
        tmp_subscript_value_1 = par_idx;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_2785a121642f72549556d8b0dc95d2c2, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_2785a121642f72549556d8b0dc95d2c2, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[11]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[16]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_3);

            exception_lineno = 206;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_idx);
        tmp_subscript_value_3 = par_idx;
        tmp_subscript_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_subscript_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_3);

            exception_lineno = 206;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_3);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        goto try_return_handler_2;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 202;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2785a121642f72549556d8b0dc95d2c2->m_frame) frame_2785a121642f72549556d8b0dc95d2c2->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_2;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2785a121642f72549556d8b0dc95d2c2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2785a121642f72549556d8b0dc95d2c2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2785a121642f72549556d8b0dc95d2c2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2785a121642f72549556d8b0dc95d2c2,
        type_description_1,
        par_self,
        par_idx
    );


    // Release cached frame if used for exception.
    if (frame_2785a121642f72549556d8b0dc95d2c2 == cache_frame_2785a121642f72549556d8b0dc95d2c2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2785a121642f72549556d8b0dc95d2c2);
        cache_frame_2785a121642f72549556d8b0dc95d2c2 = NULL;
    }

    assertFrameObject(frame_2785a121642f72549556d8b0dc95d2c2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_idx);
    Py_DECREF(par_idx);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_idx);
    Py_DECREF(par_idx);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$namedtype$$$function__28___contains__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    struct Nuitka_FrameObject *frame_bf837c22e77623081ba7bff2fe83d530;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_bf837c22e77623081ba7bff2fe83d530 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bf837c22e77623081ba7bff2fe83d530)) {
        Py_XDECREF(cache_frame_bf837c22e77623081ba7bff2fe83d530);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bf837c22e77623081ba7bff2fe83d530 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bf837c22e77623081ba7bff2fe83d530 = MAKE_FUNCTION_FRAME(codeobj_bf837c22e77623081ba7bff2fe83d530, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bf837c22e77623081ba7bff2fe83d530->m_type_description == NULL);
    frame_bf837c22e77623081ba7bff2fe83d530 = cache_frame_bf837c22e77623081ba7bff2fe83d530;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bf837c22e77623081ba7bff2fe83d530);
    assert(Py_REFCNT(frame_bf837c22e77623081ba7bff2fe83d530) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_key);
        tmp_cmp_expr_left_1 = par_key;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_bf837c22e77623081ba7bff2fe83d530, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bf837c22e77623081ba7bff2fe83d530->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bf837c22e77623081ba7bff2fe83d530, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bf837c22e77623081ba7bff2fe83d530,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame if used for exception.
    if (frame_bf837c22e77623081ba7bff2fe83d530 == cache_frame_bf837c22e77623081ba7bff2fe83d530) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bf837c22e77623081ba7bff2fe83d530);
        cache_frame_bf837c22e77623081ba7bff2fe83d530 = NULL;
    }

    assertFrameObject(frame_bf837c22e77623081ba7bff2fe83d530);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$namedtype$$$function__29___iter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_c5ca1781e458b9e96dcc7103de065b6b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c5ca1781e458b9e96dcc7103de065b6b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c5ca1781e458b9e96dcc7103de065b6b)) {
        Py_XDECREF(cache_frame_c5ca1781e458b9e96dcc7103de065b6b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c5ca1781e458b9e96dcc7103de065b6b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c5ca1781e458b9e96dcc7103de065b6b = MAKE_FUNCTION_FRAME(codeobj_c5ca1781e458b9e96dcc7103de065b6b, module_pyasn1$type$namedtype, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c5ca1781e458b9e96dcc7103de065b6b->m_type_description == NULL);
    frame_c5ca1781e458b9e96dcc7103de065b6b = cache_frame_c5ca1781e458b9e96dcc7103de065b6b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c5ca1781e458b9e96dcc7103de065b6b);
    assert(Py_REFCNT(frame_c5ca1781e458b9e96dcc7103de065b6b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(tmp_genexpr_1__$0 == NULL);
        tmp_genexpr_1__$0 = tmp_assign_source_1;
    }
    // Tried code:
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

        tmp_return_value = MAKE_GENERATOR_pyasn1$type$namedtype$$$function__29___iter__$$$genexpr__1_genexpr(tmp_closure_1);

        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(tmp_genexpr_1__$0);
    Py_DECREF(tmp_genexpr_1__$0);
    tmp_genexpr_1__$0 = NULL;
    goto outline_result_1;
    // End of try:
    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;
    outline_result_1:;
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c5ca1781e458b9e96dcc7103de065b6b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c5ca1781e458b9e96dcc7103de065b6b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c5ca1781e458b9e96dcc7103de065b6b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c5ca1781e458b9e96dcc7103de065b6b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c5ca1781e458b9e96dcc7103de065b6b == cache_frame_c5ca1781e458b9e96dcc7103de065b6b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c5ca1781e458b9e96dcc7103de065b6b);
        cache_frame_c5ca1781e458b9e96dcc7103de065b6b = NULL;
    }

    assertFrameObject(frame_c5ca1781e458b9e96dcc7103de065b6b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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



struct pyasn1$type$namedtype$$$function__29___iter__$$$genexpr__1_genexpr_locals {
    PyObject *var_x;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *pyasn1$type$namedtype$$$function__29___iter__$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct pyasn1$type$namedtype$$$function__29___iter__$$$genexpr__1_genexpr_locals *generator_heap = (struct pyasn1$type$namedtype$$$function__29___iter__$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_x = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_06a84ea46c91455d3a793b9e51190aca, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 212;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_x;
            generator_heap->var_x = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_x);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_x);
        tmp_expression_value_2 = generator_heap->var_x;
        tmp_subscript_value_1 = mod_consts[41];
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 212;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 212;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 212;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_x
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_pyasn1$type$namedtype$$$function__29___iter__$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        pyasn1$type$namedtype$$$function__29___iter__$$$genexpr__1_genexpr_context,
        module_pyasn1$type$namedtype,
        mod_consts[42],
#if PYTHON_VERSION >= 0x350
        mod_consts[43],
#endif
        codeobj_06a84ea46c91455d3a793b9e51190aca,
        closure,
        1,
        sizeof(struct pyasn1$type$namedtype$$$function__29___iter__$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_pyasn1$type$namedtype$$$function__31___bool__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_cfdbe985614f91a51972e7f7a23e0f2b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cfdbe985614f91a51972e7f7a23e0f2b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cfdbe985614f91a51972e7f7a23e0f2b)) {
        Py_XDECREF(cache_frame_cfdbe985614f91a51972e7f7a23e0f2b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cfdbe985614f91a51972e7f7a23e0f2b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cfdbe985614f91a51972e7f7a23e0f2b = MAKE_FUNCTION_FRAME(codeobj_cfdbe985614f91a51972e7f7a23e0f2b, module_pyasn1$type$namedtype, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cfdbe985614f91a51972e7f7a23e0f2b->m_type_description == NULL);
    frame_cfdbe985614f91a51972e7f7a23e0f2b = cache_frame_cfdbe985614f91a51972e7f7a23e0f2b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cfdbe985614f91a51972e7f7a23e0f2b);
    assert(Py_REFCNT(frame_cfdbe985614f91a51972e7f7a23e0f2b) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[41];
        tmp_return_value = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
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
        exception_tb = MAKE_TRACEBACK(frame_cfdbe985614f91a51972e7f7a23e0f2b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cfdbe985614f91a51972e7f7a23e0f2b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cfdbe985614f91a51972e7f7a23e0f2b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cfdbe985614f91a51972e7f7a23e0f2b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_cfdbe985614f91a51972e7f7a23e0f2b == cache_frame_cfdbe985614f91a51972e7f7a23e0f2b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cfdbe985614f91a51972e7f7a23e0f2b);
        cache_frame_cfdbe985614f91a51972e7f7a23e0f2b = NULL;
    }

    assertFrameObject(frame_cfdbe985614f91a51972e7f7a23e0f2b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_pyasn1$type$namedtype$$$function__32___len__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ba6fd75e8c4d4f8c815a759de1a2d809;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ba6fd75e8c4d4f8c815a759de1a2d809 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ba6fd75e8c4d4f8c815a759de1a2d809)) {
        Py_XDECREF(cache_frame_ba6fd75e8c4d4f8c815a759de1a2d809);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ba6fd75e8c4d4f8c815a759de1a2d809 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ba6fd75e8c4d4f8c815a759de1a2d809 = MAKE_FUNCTION_FRAME(codeobj_ba6fd75e8c4d4f8c815a759de1a2d809, module_pyasn1$type$namedtype, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ba6fd75e8c4d4f8c815a759de1a2d809->m_type_description == NULL);
    frame_ba6fd75e8c4d4f8c815a759de1a2d809 = cache_frame_ba6fd75e8c4d4f8c815a759de1a2d809;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ba6fd75e8c4d4f8c815a759de1a2d809);
    assert(Py_REFCNT(frame_ba6fd75e8c4d4f8c815a759de1a2d809) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
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
        exception_tb = MAKE_TRACEBACK(frame_ba6fd75e8c4d4f8c815a759de1a2d809, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ba6fd75e8c4d4f8c815a759de1a2d809->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ba6fd75e8c4d4f8c815a759de1a2d809, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ba6fd75e8c4d4f8c815a759de1a2d809,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ba6fd75e8c4d4f8c815a759de1a2d809 == cache_frame_ba6fd75e8c4d4f8c815a759de1a2d809) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ba6fd75e8c4d4f8c815a759de1a2d809);
        cache_frame_ba6fd75e8c4d4f8c815a759de1a2d809 = NULL;
    }

    assertFrameObject(frame_ba6fd75e8c4d4f8c815a759de1a2d809);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_pyasn1$type$namedtype$$$function__33_values(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_448e9358029bb83c02d7ecee9bd6e6e5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_448e9358029bb83c02d7ecee9bd6e6e5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_448e9358029bb83c02d7ecee9bd6e6e5)) {
        Py_XDECREF(cache_frame_448e9358029bb83c02d7ecee9bd6e6e5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_448e9358029bb83c02d7ecee9bd6e6e5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_448e9358029bb83c02d7ecee9bd6e6e5 = MAKE_FUNCTION_FRAME(codeobj_448e9358029bb83c02d7ecee9bd6e6e5, module_pyasn1$type$namedtype, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_448e9358029bb83c02d7ecee9bd6e6e5->m_type_description == NULL);
    frame_448e9358029bb83c02d7ecee9bd6e6e5 = cache_frame_448e9358029bb83c02d7ecee9bd6e6e5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_448e9358029bb83c02d7ecee9bd6e6e5);
    assert(Py_REFCNT(frame_448e9358029bb83c02d7ecee9bd6e6e5) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[36]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
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
        exception_tb = MAKE_TRACEBACK(frame_448e9358029bb83c02d7ecee9bd6e6e5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_448e9358029bb83c02d7ecee9bd6e6e5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_448e9358029bb83c02d7ecee9bd6e6e5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_448e9358029bb83c02d7ecee9bd6e6e5,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_448e9358029bb83c02d7ecee9bd6e6e5 == cache_frame_448e9358029bb83c02d7ecee9bd6e6e5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_448e9358029bb83c02d7ecee9bd6e6e5);
        cache_frame_448e9358029bb83c02d7ecee9bd6e6e5 = NULL;
    }

    assertFrameObject(frame_448e9358029bb83c02d7ecee9bd6e6e5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_pyasn1$type$namedtype$$$function__34_keys(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_03fcf92e22d067017790d5d6dd8115bf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_03fcf92e22d067017790d5d6dd8115bf = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_03fcf92e22d067017790d5d6dd8115bf)) {
        Py_XDECREF(cache_frame_03fcf92e22d067017790d5d6dd8115bf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_03fcf92e22d067017790d5d6dd8115bf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_03fcf92e22d067017790d5d6dd8115bf = MAKE_FUNCTION_FRAME(codeobj_03fcf92e22d067017790d5d6dd8115bf, module_pyasn1$type$namedtype, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_03fcf92e22d067017790d5d6dd8115bf->m_type_description == NULL);
    frame_03fcf92e22d067017790d5d6dd8115bf = cache_frame_03fcf92e22d067017790d5d6dd8115bf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_03fcf92e22d067017790d5d6dd8115bf);
    assert(Py_REFCNT(frame_03fcf92e22d067017790d5d6dd8115bf) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[35]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
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
        exception_tb = MAKE_TRACEBACK(frame_03fcf92e22d067017790d5d6dd8115bf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_03fcf92e22d067017790d5d6dd8115bf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_03fcf92e22d067017790d5d6dd8115bf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_03fcf92e22d067017790d5d6dd8115bf,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_03fcf92e22d067017790d5d6dd8115bf == cache_frame_03fcf92e22d067017790d5d6dd8115bf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_03fcf92e22d067017790d5d6dd8115bf);
        cache_frame_03fcf92e22d067017790d5d6dd8115bf = NULL;
    }

    assertFrameObject(frame_03fcf92e22d067017790d5d6dd8115bf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_pyasn1$type$namedtype$$$function__35_items(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_831dc6e26bea4ca7a07473e9364567ef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_831dc6e26bea4ca7a07473e9364567ef = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_831dc6e26bea4ca7a07473e9364567ef)) {
        Py_XDECREF(cache_frame_831dc6e26bea4ca7a07473e9364567ef);

#if _DEBUG_REFCOUNTS
        if (cache_frame_831dc6e26bea4ca7a07473e9364567ef == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_831dc6e26bea4ca7a07473e9364567ef = MAKE_FUNCTION_FRAME(codeobj_831dc6e26bea4ca7a07473e9364567ef, module_pyasn1$type$namedtype, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_831dc6e26bea4ca7a07473e9364567ef->m_type_description == NULL);
    frame_831dc6e26bea4ca7a07473e9364567ef = cache_frame_831dc6e26bea4ca7a07473e9364567ef;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_831dc6e26bea4ca7a07473e9364567ef);
    assert(Py_REFCNT(frame_831dc6e26bea4ca7a07473e9364567ef) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[37]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
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
        exception_tb = MAKE_TRACEBACK(frame_831dc6e26bea4ca7a07473e9364567ef, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_831dc6e26bea4ca7a07473e9364567ef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_831dc6e26bea4ca7a07473e9364567ef, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_831dc6e26bea4ca7a07473e9364567ef,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_831dc6e26bea4ca7a07473e9364567ef == cache_frame_831dc6e26bea4ca7a07473e9364567ef) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_831dc6e26bea4ca7a07473e9364567ef);
        cache_frame_831dc6e26bea4ca7a07473e9364567ef = NULL;
    }

    assertFrameObject(frame_831dc6e26bea4ca7a07473e9364567ef);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_pyasn1$type$namedtype$$$function__36_clone(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f905d9ac8cedfc6701bd3a9ed13378d5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f905d9ac8cedfc6701bd3a9ed13378d5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f905d9ac8cedfc6701bd3a9ed13378d5)) {
        Py_XDECREF(cache_frame_f905d9ac8cedfc6701bd3a9ed13378d5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f905d9ac8cedfc6701bd3a9ed13378d5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f905d9ac8cedfc6701bd3a9ed13378d5 = MAKE_FUNCTION_FRAME(codeobj_f905d9ac8cedfc6701bd3a9ed13378d5, module_pyasn1$type$namedtype, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f905d9ac8cedfc6701bd3a9ed13378d5->m_type_description == NULL);
    frame_f905d9ac8cedfc6701bd3a9ed13378d5 = cache_frame_f905d9ac8cedfc6701bd3a9ed13378d5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f905d9ac8cedfc6701bd3a9ed13378d5);
    assert(Py_REFCNT(frame_f905d9ac8cedfc6701bd3a9ed13378d5) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_dircall_arg2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[11]);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 236;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
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
        exception_tb = MAKE_TRACEBACK(frame_f905d9ac8cedfc6701bd3a9ed13378d5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f905d9ac8cedfc6701bd3a9ed13378d5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f905d9ac8cedfc6701bd3a9ed13378d5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f905d9ac8cedfc6701bd3a9ed13378d5,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f905d9ac8cedfc6701bd3a9ed13378d5 == cache_frame_f905d9ac8cedfc6701bd3a9ed13378d5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f905d9ac8cedfc6701bd3a9ed13378d5);
        cache_frame_f905d9ac8cedfc6701bd3a9ed13378d5 = NULL;
    }

    assertFrameObject(frame_f905d9ac8cedfc6701bd3a9ed13378d5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_pyasn1$type$namedtype$$$function__37___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_errorMsg = python_pars[1];
    struct Nuitka_FrameObject *frame_97365c95b248b03c52e3c5b5f31c3918;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_97365c95b248b03c52e3c5b5f31c3918 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_97365c95b248b03c52e3c5b5f31c3918)) {
        Py_XDECREF(cache_frame_97365c95b248b03c52e3c5b5f31c3918);

#if _DEBUG_REFCOUNTS
        if (cache_frame_97365c95b248b03c52e3c5b5f31c3918 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_97365c95b248b03c52e3c5b5f31c3918 = MAKE_FUNCTION_FRAME(codeobj_97365c95b248b03c52e3c5b5f31c3918, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_97365c95b248b03c52e3c5b5f31c3918->m_type_description == NULL);
    frame_97365c95b248b03c52e3c5b5f31c3918 = cache_frame_97365c95b248b03c52e3c5b5f31c3918;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_97365c95b248b03c52e3c5b5f31c3918);
    assert(Py_REFCNT(frame_97365c95b248b03c52e3c5b5f31c3918) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_errorMsg);
        tmp_assattr_value_1 = par_errorMsg;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[44], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_97365c95b248b03c52e3c5b5f31c3918, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_97365c95b248b03c52e3c5b5f31c3918->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_97365c95b248b03c52e3c5b5f31c3918, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_97365c95b248b03c52e3c5b5f31c3918,
        type_description_1,
        par_self,
        par_errorMsg
    );


    // Release cached frame if used for exception.
    if (frame_97365c95b248b03c52e3c5b5f31c3918 == cache_frame_97365c95b248b03c52e3c5b5f31c3918) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_97365c95b248b03c52e3c5b5f31c3918);
        cache_frame_97365c95b248b03c52e3c5b5f31c3918 = NULL;
    }

    assertFrameObject(frame_97365c95b248b03c52e3c5b5f31c3918);

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
    CHECK_OBJECT(par_errorMsg);
    Py_DECREF(par_errorMsg);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_errorMsg);
    Py_DECREF(par_errorMsg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$namedtype$$$function__38___getitem__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_item = python_pars[1];
    struct Nuitka_FrameObject *frame_7dab750e893285c13851edbf2c893024;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7dab750e893285c13851edbf2c893024 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7dab750e893285c13851edbf2c893024)) {
        Py_XDECREF(cache_frame_7dab750e893285c13851edbf2c893024);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7dab750e893285c13851edbf2c893024 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7dab750e893285c13851edbf2c893024 = MAKE_FUNCTION_FRAME(codeobj_7dab750e893285c13851edbf2c893024, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7dab750e893285c13851edbf2c893024->m_type_description == NULL);
    frame_7dab750e893285c13851edbf2c893024 = cache_frame_7dab750e893285c13851edbf2c893024;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7dab750e893285c13851edbf2c893024);
    assert(Py_REFCNT(frame_7dab750e893285c13851edbf2c893024) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[46]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[44]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 243;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_7dab750e893285c13851edbf2c893024->m_frame.f_lineno = 243;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 243;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7dab750e893285c13851edbf2c893024, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7dab750e893285c13851edbf2c893024->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7dab750e893285c13851edbf2c893024, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7dab750e893285c13851edbf2c893024,
        type_description_1,
        par_self,
        par_item
    );


    // Release cached frame if used for exception.
    if (frame_7dab750e893285c13851edbf2c893024 == cache_frame_7dab750e893285c13851edbf2c893024) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7dab750e893285c13851edbf2c893024);
        cache_frame_7dab750e893285c13851edbf2c893024 = NULL;
    }

    assertFrameObject(frame_7dab750e893285c13851edbf2c893024);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_pyasn1$type$namedtype$$$function__39___computeTagToPosMap(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_tagToPosMap = NULL;
    PyObject *var_idx = NULL;
    PyObject *var_namedType = NULL;
    PyObject *var_tagMap = NULL;
    PyObject *var__tagSet = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_a24abcb1312d70f91b9847051780f96a;
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
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_a24abcb1312d70f91b9847051780f96a = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_DICT_EMPTY();
        assert(var_tagToPosMap == NULL);
        var_tagToPosMap = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_a24abcb1312d70f91b9847051780f96a)) {
        Py_XDECREF(cache_frame_a24abcb1312d70f91b9847051780f96a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a24abcb1312d70f91b9847051780f96a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a24abcb1312d70f91b9847051780f96a = MAKE_FUNCTION_FRAME(codeobj_a24abcb1312d70f91b9847051780f96a, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a24abcb1312d70f91b9847051780f96a->m_type_description == NULL);
    frame_a24abcb1312d70f91b9847051780f96a = cache_frame_a24abcb1312d70f91b9847051780f96a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a24abcb1312d70f91b9847051780f96a);
    assert(Py_REFCNT(frame_a24abcb1312d70f91b9847051780f96a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_a24abcb1312d70f91b9847051780f96a->m_frame.f_lineno = 247;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooo";
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
                type_description_1 = "oooooo";
                exception_lineno = 247;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 247;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 247;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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

                    type_description_1 = "oooooo";
                    exception_lineno = 247;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[33];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooo";
            exception_lineno = 247;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_idx;
            var_idx = tmp_assign_source_7;
            Py_INCREF(var_idx);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_namedType;
            var_namedType = tmp_assign_source_8;
            Py_INCREF(var_namedType);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_namedType);
        tmp_expression_value_3 = var_namedType;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[6]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[47]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_tagMap;
            var_tagMap = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_tagMap);
        tmp_isinstance_inst_1 = var_tagMap;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[49]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(var_tagMap);
    tmp_return_value = var_tagMap;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_tagMap);
        tmp_operand_value_1 = var_tagMap;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    goto loop_start_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_tagMap);
        tmp_expression_value_5 = var_tagMap;
        tmp_iter_arg_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[50]);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_10 = MAKE_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_11 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                exception_lineno = 253;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_12 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var__tagSet;
            var__tagSet = tmp_assign_source_12;
            Py_INCREF(var__tagSet);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var__tagSet);
        tmp_cmp_expr_left_1 = var__tagSet;
        if (var_tagToPosMap == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 254;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }

        tmp_cmp_expr_right_1 = var_tagToPosMap;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[49]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        tmp_mod_expr_left_1 = mod_consts[52];
        CHECK_OBJECT(var__tagSet);
        tmp_tuple_element_1 = var__tagSet;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_namedType);
        tmp_tuple_element_1 = var_namedType;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        tmp_args_element_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 255;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        frame_a24abcb1312d70f91b9847051780f96a->m_frame.f_lineno = 255;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        goto try_return_handler_5;
    }
    branch_no_3:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (var_idx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 256;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }

        tmp_ass_subvalue_1 = var_idx;
        if (var_tagToPosMap == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 256;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }

        tmp_ass_subscribed_1 = var_tagToPosMap;
        CHECK_OBJECT(var__tagSet);
        tmp_ass_subscript_1 = var__tagSet;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 253;
        type_description_1 = "oooooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_5:;
    CHECK_OBJECT(tmp_for_loop_2__iter_value);
    Py_DECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    goto try_return_handler_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 247;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
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
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_tagToPosMap == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 258;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_tagToPosMap;
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
        exception_tb = MAKE_TRACEBACK(frame_a24abcb1312d70f91b9847051780f96a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a24abcb1312d70f91b9847051780f96a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a24abcb1312d70f91b9847051780f96a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a24abcb1312d70f91b9847051780f96a,
        type_description_1,
        par_self,
        var_tagToPosMap,
        var_idx,
        var_namedType,
        var_tagMap,
        var__tagSet
    );


    // Release cached frame if used for exception.
    if (frame_a24abcb1312d70f91b9847051780f96a == cache_frame_a24abcb1312d70f91b9847051780f96a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a24abcb1312d70f91b9847051780f96a);
        cache_frame_a24abcb1312d70f91b9847051780f96a = NULL;
    }

    assertFrameObject(frame_a24abcb1312d70f91b9847051780f96a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_tagToPosMap);
    var_tagToPosMap = NULL;
    Py_XDECREF(var_idx);
    var_idx = NULL;
    Py_XDECREF(var_namedType);
    var_namedType = NULL;
    Py_XDECREF(var_tagMap);
    var_tagMap = NULL;
    Py_XDECREF(var__tagSet);
    var__tagSet = NULL;
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

    Py_XDECREF(var_tagToPosMap);
    var_tagToPosMap = NULL;
    Py_XDECREF(var_idx);
    var_idx = NULL;
    Py_XDECREF(var_namedType);
    var_namedType = NULL;
    Py_XDECREF(var_tagMap);
    var_tagMap = NULL;
    Py_XDECREF(var__tagSet);
    var__tagSet = NULL;
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


static PyObject *impl_pyasn1$type$namedtype$$$function__40___computeNameToPosMap(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_nameToPosMap = NULL;
    PyObject *var_idx = NULL;
    PyObject *var_namedType = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_a8293e6efd24d45a91280766824410f1;
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
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_a8293e6efd24d45a91280766824410f1 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_DICT_EMPTY();
        assert(var_nameToPosMap == NULL);
        var_nameToPosMap = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_a8293e6efd24d45a91280766824410f1)) {
        Py_XDECREF(cache_frame_a8293e6efd24d45a91280766824410f1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a8293e6efd24d45a91280766824410f1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a8293e6efd24d45a91280766824410f1 = MAKE_FUNCTION_FRAME(codeobj_a8293e6efd24d45a91280766824410f1, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a8293e6efd24d45a91280766824410f1->m_type_description == NULL);
    frame_a8293e6efd24d45a91280766824410f1 = cache_frame_a8293e6efd24d45a91280766824410f1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a8293e6efd24d45a91280766824410f1);
    assert(Py_REFCNT(frame_a8293e6efd24d45a91280766824410f1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_a8293e6efd24d45a91280766824410f1->m_frame.f_lineno = 262;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
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
                exception_lineno = 262;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 262;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 262;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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

                    type_description_1 = "oooo";
                    exception_lineno = 262;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[33];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooo";
            exception_lineno = 262;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_idx;
            var_idx = tmp_assign_source_7;
            Py_INCREF(var_idx);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_namedType;
            var_namedType = tmp_assign_source_8;
            Py_INCREF(var_namedType);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_namedType);
        tmp_expression_value_2 = var_namedType;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (var_nameToPosMap == NULL) {
            Py_DECREF(tmp_cmp_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 263;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_right_1 = var_nameToPosMap;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[49]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_mod_expr_left_1 = mod_consts[55];
        CHECK_OBJECT(var_namedType);
        tmp_expression_value_4 = var_namedType;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[5]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 264;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_namedType);
        tmp_tuple_element_1 = var_namedType;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        tmp_args_element_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 264;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_a8293e6efd24d45a91280766824410f1->m_frame.f_lineno = 264;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        goto try_return_handler_2;
    }
    branch_no_1:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_idx);
        tmp_ass_subvalue_1 = var_idx;
        if (var_nameToPosMap == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 265;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = var_nameToPosMap;
        CHECK_OBJECT(var_namedType);
        tmp_expression_value_5 = var_namedType;
        tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[5]);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 262;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
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
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_nameToPosMap == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 267;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_nameToPosMap;
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
        exception_tb = MAKE_TRACEBACK(frame_a8293e6efd24d45a91280766824410f1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a8293e6efd24d45a91280766824410f1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a8293e6efd24d45a91280766824410f1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a8293e6efd24d45a91280766824410f1,
        type_description_1,
        par_self,
        var_nameToPosMap,
        var_idx,
        var_namedType
    );


    // Release cached frame if used for exception.
    if (frame_a8293e6efd24d45a91280766824410f1 == cache_frame_a8293e6efd24d45a91280766824410f1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a8293e6efd24d45a91280766824410f1);
        cache_frame_a8293e6efd24d45a91280766824410f1 = NULL;
    }

    assertFrameObject(frame_a8293e6efd24d45a91280766824410f1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_nameToPosMap);
    var_nameToPosMap = NULL;
    Py_XDECREF(var_idx);
    var_idx = NULL;
    Py_XDECREF(var_namedType);
    var_namedType = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_nameToPosMap);
    var_nameToPosMap = NULL;
    Py_XDECREF(var_idx);
    var_idx = NULL;
    Py_XDECREF(var_namedType);
    var_namedType = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

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


static PyObject *impl_pyasn1$type$namedtype$$$function__41___computeAmbiguousTypes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_ambiguousTypes = NULL;
    PyObject *var_partialAmbiguousTypes = NULL;
    PyObject *var_idx = NULL;
    PyObject *var_namedType = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_30a06911180ae55d999935968a0fbb76;
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
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_30a06911180ae55d999935968a0fbb76 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_DICT_EMPTY();
        assert(var_ambiguousTypes == NULL);
        var_ambiguousTypes = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[56];
        assert(var_partialAmbiguousTypes == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_partialAmbiguousTypes = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_30a06911180ae55d999935968a0fbb76)) {
        Py_XDECREF(cache_frame_30a06911180ae55d999935968a0fbb76);

#if _DEBUG_REFCOUNTS
        if (cache_frame_30a06911180ae55d999935968a0fbb76 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_30a06911180ae55d999935968a0fbb76 = MAKE_FUNCTION_FRAME(codeobj_30a06911180ae55d999935968a0fbb76, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_30a06911180ae55d999935968a0fbb76->m_type_description == NULL);
    frame_30a06911180ae55d999935968a0fbb76 = cache_frame_30a06911180ae55d999935968a0fbb76;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_30a06911180ae55d999935968a0fbb76);
    assert(Py_REFCNT(frame_30a06911180ae55d999935968a0fbb76) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_tuple_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = (PyObject *)&PyReversed_Type;
        tmp_called_value_2 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_30a06911180ae55d999935968a0fbb76->m_frame.f_lineno = 272;
        tmp_tuple_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_30a06911180ae55d999935968a0fbb76->m_frame.f_lineno = 272;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooo";
                exception_lineno = 272;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
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


            type_description_1 = "ooooo";
            exception_lineno = 272;
            goto try_except_handler_4;
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


            type_description_1 = "ooooo";
            exception_lineno = 272;
            goto try_except_handler_4;
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

                    type_description_1 = "ooooo";
                    exception_lineno = 272;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[33];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 272;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
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
            PyObject *old = var_idx;
            var_idx = tmp_assign_source_8;
            Py_INCREF(var_idx);
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
            PyObject *old = var_namedType;
            var_namedType = tmp_assign_source_9;
            Py_INCREF(var_namedType);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_namedType);
        tmp_expression_value_2 = var_namedType;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[30]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 273;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_namedType);
        tmp_expression_value_3 = var_namedType;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[29]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 273;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_or_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_namedType);
        tmp_tuple_element_1 = var_namedType;
        tmp_add_expr_left_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_add_expr_left_1, 0, tmp_tuple_element_1);
        if (var_partialAmbiguousTypes == NULL) {
            Py_DECREF(tmp_add_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 274;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_add_expr_right_1 = var_partialAmbiguousTypes;
        tmp_assign_source_10 = BINARY_OPERATION_ADD_OBJECT_TUPLE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_partialAmbiguousTypes;
            var_partialAmbiguousTypes = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_namedType);
        tmp_tuple_element_2 = var_namedType;
        tmp_assign_source_11 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_11, 0, tmp_tuple_element_2);
        {
            PyObject *old = var_partialAmbiguousTypes;
            var_partialAmbiguousTypes = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    branch_end_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_partialAmbiguousTypes);
        tmp_len_arg_1 = var_partialAmbiguousTypes;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_cmp_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 277;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_4 = par_self;
        tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[11]);
        if (tmp_len_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 277;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = BUILTIN_LEN(tmp_len_arg_2);
        Py_DECREF(tmp_len_arg_2);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 277;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_CBOOL_LONG_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 278;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subvalue_1 = par_self;
        if (var_ambiguousTypes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 278;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = var_ambiguousTypes;
        CHECK_OBJECT(var_idx);
        tmp_ass_subscript_1 = var_idx;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_partialAmbiguousTypes);
        tmp_dircall_arg2_1 = var_partialAmbiguousTypes;
        tmp_dircall_arg3_1 = DICT_COPY(mod_consts[60]);
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_ass_subvalue_2 = impl___main__$$$function__5_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        if (var_ambiguousTypes == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 280;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_2 = var_ambiguousTypes;
        CHECK_OBJECT(var_idx);
        tmp_ass_subscript_2 = var_idx;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
    }
    branch_end_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 272;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_ambiguousTypes == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 281;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_ambiguousTypes;
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
        exception_tb = MAKE_TRACEBACK(frame_30a06911180ae55d999935968a0fbb76, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_30a06911180ae55d999935968a0fbb76->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_30a06911180ae55d999935968a0fbb76, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_30a06911180ae55d999935968a0fbb76,
        type_description_1,
        par_self,
        var_ambiguousTypes,
        var_partialAmbiguousTypes,
        var_idx,
        var_namedType
    );


    // Release cached frame if used for exception.
    if (frame_30a06911180ae55d999935968a0fbb76 == cache_frame_30a06911180ae55d999935968a0fbb76) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_30a06911180ae55d999935968a0fbb76);
        cache_frame_30a06911180ae55d999935968a0fbb76 = NULL;
    }

    assertFrameObject(frame_30a06911180ae55d999935968a0fbb76);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_ambiguousTypes);
    var_ambiguousTypes = NULL;
    Py_XDECREF(var_partialAmbiguousTypes);
    var_partialAmbiguousTypes = NULL;
    Py_XDECREF(var_idx);
    var_idx = NULL;
    Py_XDECREF(var_namedType);
    var_namedType = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_ambiguousTypes);
    var_ambiguousTypes = NULL;
    Py_XDECREF(var_partialAmbiguousTypes);
    var_partialAmbiguousTypes = NULL;
    Py_XDECREF(var_idx);
    var_idx = NULL;
    Py_XDECREF(var_namedType);
    var_namedType = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

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


static PyObject *impl_pyasn1$type$namedtype$$$function__42_getTypeByPosition(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_idx = python_pars[1];
    struct Nuitka_FrameObject *frame_1c3e2096c74092c92f474d33e01e327b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_1c3e2096c74092c92f474d33e01e327b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1c3e2096c74092c92f474d33e01e327b)) {
        Py_XDECREF(cache_frame_1c3e2096c74092c92f474d33e01e327b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1c3e2096c74092c92f474d33e01e327b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1c3e2096c74092c92f474d33e01e327b = MAKE_FUNCTION_FRAME(codeobj_1c3e2096c74092c92f474d33e01e327b, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1c3e2096c74092c92f474d33e01e327b->m_type_description == NULL);
    frame_1c3e2096c74092c92f474d33e01e327b = cache_frame_1c3e2096c74092c92f474d33e01e327b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1c3e2096c74092c92f474d33e01e327b);
    assert(Py_REFCNT(frame_1c3e2096c74092c92f474d33e01e327b) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[11]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_idx);
        tmp_subscript_value_1 = par_idx;
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_1c3e2096c74092c92f474d33e01e327b, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_1c3e2096c74092c92f474d33e01e327b, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_IndexError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_1c3e2096c74092c92f474d33e01e327b->m_frame.f_lineno = 305;
        tmp_raise_type_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[46],
            PyTuple_GET_ITEM(mod_consts[61], 0)
        );

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 305;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 301;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1c3e2096c74092c92f474d33e01e327b->m_frame) frame_1c3e2096c74092c92f474d33e01e327b->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_2;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1c3e2096c74092c92f474d33e01e327b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1c3e2096c74092c92f474d33e01e327b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c3e2096c74092c92f474d33e01e327b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1c3e2096c74092c92f474d33e01e327b,
        type_description_1,
        par_self,
        par_idx
    );


    // Release cached frame if used for exception.
    if (frame_1c3e2096c74092c92f474d33e01e327b == cache_frame_1c3e2096c74092c92f474d33e01e327b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1c3e2096c74092c92f474d33e01e327b);
        cache_frame_1c3e2096c74092c92f474d33e01e327b = NULL;
    }

    assertFrameObject(frame_1c3e2096c74092c92f474d33e01e327b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_idx);
    Py_DECREF(par_idx);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_idx);
    Py_DECREF(par_idx);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$namedtype$$$function__43_getPositionByType(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_tagSet = python_pars[1];
    struct Nuitka_FrameObject *frame_5b79f21f23e90ba1deddc1a8850b93ad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_5b79f21f23e90ba1deddc1a8850b93ad = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5b79f21f23e90ba1deddc1a8850b93ad)) {
        Py_XDECREF(cache_frame_5b79f21f23e90ba1deddc1a8850b93ad);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5b79f21f23e90ba1deddc1a8850b93ad == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5b79f21f23e90ba1deddc1a8850b93ad = MAKE_FUNCTION_FRAME(codeobj_5b79f21f23e90ba1deddc1a8850b93ad, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5b79f21f23e90ba1deddc1a8850b93ad->m_type_description == NULL);
    frame_5b79f21f23e90ba1deddc1a8850b93ad = cache_frame_5b79f21f23e90ba1deddc1a8850b93ad;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5b79f21f23e90ba1deddc1a8850b93ad);
    assert(Py_REFCNT(frame_5b79f21f23e90ba1deddc1a8850b93ad) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[18]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_tagSet);
        tmp_subscript_value_1 = par_tagSet;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_5b79f21f23e90ba1deddc1a8850b93ad, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_5b79f21f23e90ba1deddc1a8850b93ad, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[46]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_mod_expr_left_1 = mod_consts[63];
        CHECK_OBJECT(par_tagSet);
        tmp_tuple_element_1 = par_tagSet;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 329;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_5b79f21f23e90ba1deddc1a8850b93ad->m_frame.f_lineno = 329;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 329;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 325;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5b79f21f23e90ba1deddc1a8850b93ad->m_frame) frame_5b79f21f23e90ba1deddc1a8850b93ad->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_2;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5b79f21f23e90ba1deddc1a8850b93ad, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5b79f21f23e90ba1deddc1a8850b93ad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5b79f21f23e90ba1deddc1a8850b93ad, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5b79f21f23e90ba1deddc1a8850b93ad,
        type_description_1,
        par_self,
        par_tagSet
    );


    // Release cached frame if used for exception.
    if (frame_5b79f21f23e90ba1deddc1a8850b93ad == cache_frame_5b79f21f23e90ba1deddc1a8850b93ad) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5b79f21f23e90ba1deddc1a8850b93ad);
        cache_frame_5b79f21f23e90ba1deddc1a8850b93ad = NULL;
    }

    assertFrameObject(frame_5b79f21f23e90ba1deddc1a8850b93ad);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_tagSet);
    Py_DECREF(par_tagSet);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_tagSet);
    Py_DECREF(par_tagSet);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$namedtype$$$function__44_getNameByPosition(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_idx = python_pars[1];
    struct Nuitka_FrameObject *frame_24d6f72ba99be6900d363db6c202960e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_24d6f72ba99be6900d363db6c202960e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_24d6f72ba99be6900d363db6c202960e)) {
        Py_XDECREF(cache_frame_24d6f72ba99be6900d363db6c202960e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_24d6f72ba99be6900d363db6c202960e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_24d6f72ba99be6900d363db6c202960e = MAKE_FUNCTION_FRAME(codeobj_24d6f72ba99be6900d363db6c202960e, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_24d6f72ba99be6900d363db6c202960e->m_type_description == NULL);
    frame_24d6f72ba99be6900d363db6c202960e = cache_frame_24d6f72ba99be6900d363db6c202960e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_24d6f72ba99be6900d363db6c202960e);
    assert(Py_REFCNT(frame_24d6f72ba99be6900d363db6c202960e) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[11]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_idx);
        tmp_subscript_value_1 = par_idx;
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_24d6f72ba99be6900d363db6c202960e, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_24d6f72ba99be6900d363db6c202960e, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_IndexError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_24d6f72ba99be6900d363db6c202960e->m_frame.f_lineno = 353;
        tmp_raise_type_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[46],
            PyTuple_GET_ITEM(mod_consts[61], 0)
        );

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 353;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 349;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_24d6f72ba99be6900d363db6c202960e->m_frame) frame_24d6f72ba99be6900d363db6c202960e->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_2;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_24d6f72ba99be6900d363db6c202960e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_24d6f72ba99be6900d363db6c202960e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_24d6f72ba99be6900d363db6c202960e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_24d6f72ba99be6900d363db6c202960e,
        type_description_1,
        par_self,
        par_idx
    );


    // Release cached frame if used for exception.
    if (frame_24d6f72ba99be6900d363db6c202960e == cache_frame_24d6f72ba99be6900d363db6c202960e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_24d6f72ba99be6900d363db6c202960e);
        cache_frame_24d6f72ba99be6900d363db6c202960e = NULL;
    }

    assertFrameObject(frame_24d6f72ba99be6900d363db6c202960e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_idx);
    Py_DECREF(par_idx);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_idx);
    Py_DECREF(par_idx);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$namedtype$$$function__45_getPositionByName(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_bf40de51e8f568b7863f8fead447b13e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_bf40de51e8f568b7863f8fead447b13e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bf40de51e8f568b7863f8fead447b13e)) {
        Py_XDECREF(cache_frame_bf40de51e8f568b7863f8fead447b13e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bf40de51e8f568b7863f8fead447b13e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bf40de51e8f568b7863f8fead447b13e = MAKE_FUNCTION_FRAME(codeobj_bf40de51e8f568b7863f8fead447b13e, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bf40de51e8f568b7863f8fead447b13e->m_type_description == NULL);
    frame_bf40de51e8f568b7863f8fead447b13e = cache_frame_bf40de51e8f568b7863f8fead447b13e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bf40de51e8f568b7863f8fead447b13e);
    assert(Py_REFCNT(frame_bf40de51e8f568b7863f8fead447b13e) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[16]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_name);
        tmp_subscript_value_1 = par_name;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_bf40de51e8f568b7863f8fead447b13e, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_bf40de51e8f568b7863f8fead447b13e, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[46]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_mod_expr_left_1 = mod_consts[66];
        CHECK_OBJECT(par_name);
        tmp_tuple_element_1 = par_name;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 377;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_bf40de51e8f568b7863f8fead447b13e->m_frame.f_lineno = 377;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 377;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 373;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_bf40de51e8f568b7863f8fead447b13e->m_frame) frame_bf40de51e8f568b7863f8fead447b13e->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_2;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bf40de51e8f568b7863f8fead447b13e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bf40de51e8f568b7863f8fead447b13e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bf40de51e8f568b7863f8fead447b13e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bf40de51e8f568b7863f8fead447b13e,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_bf40de51e8f568b7863f8fead447b13e == cache_frame_bf40de51e8f568b7863f8fead447b13e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bf40de51e8f568b7863f8fead447b13e);
        cache_frame_bf40de51e8f568b7863f8fead447b13e = NULL;
    }

    assertFrameObject(frame_bf40de51e8f568b7863f8fead447b13e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$namedtype$$$function__46_getTagMapNearPosition(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_idx = python_pars[1];
    struct Nuitka_FrameObject *frame_fc2b702d3399662299189d4efc299c9e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_fc2b702d3399662299189d4efc299c9e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fc2b702d3399662299189d4efc299c9e)) {
        Py_XDECREF(cache_frame_fc2b702d3399662299189d4efc299c9e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fc2b702d3399662299189d4efc299c9e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fc2b702d3399662299189d4efc299c9e = MAKE_FUNCTION_FRAME(codeobj_fc2b702d3399662299189d4efc299c9e, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fc2b702d3399662299189d4efc299c9e->m_type_description == NULL);
    frame_fc2b702d3399662299189d4efc299c9e = cache_frame_fc2b702d3399662299189d4efc299c9e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fc2b702d3399662299189d4efc299c9e);
    assert(Py_REFCNT(frame_fc2b702d3399662299189d4efc299c9e) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[21]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_idx);
        tmp_subscript_value_1 = par_idx;
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[47]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_fc2b702d3399662299189d4efc299c9e, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_fc2b702d3399662299189d4efc299c9e, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_fc2b702d3399662299189d4efc299c9e->m_frame.f_lineno = 406;
        tmp_raise_type_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[46],
            PyTuple_GET_ITEM(mod_consts[61], 0)
        );

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 406;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 402;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_fc2b702d3399662299189d4efc299c9e->m_frame) frame_fc2b702d3399662299189d4efc299c9e->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_2;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fc2b702d3399662299189d4efc299c9e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fc2b702d3399662299189d4efc299c9e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fc2b702d3399662299189d4efc299c9e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fc2b702d3399662299189d4efc299c9e,
        type_description_1,
        par_self,
        par_idx
    );


    // Release cached frame if used for exception.
    if (frame_fc2b702d3399662299189d4efc299c9e == cache_frame_fc2b702d3399662299189d4efc299c9e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fc2b702d3399662299189d4efc299c9e);
        cache_frame_fc2b702d3399662299189d4efc299c9e = NULL;
    }

    assertFrameObject(frame_fc2b702d3399662299189d4efc299c9e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_idx);
    Py_DECREF(par_idx);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_idx);
    Py_DECREF(par_idx);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$namedtype$$$function__47_getPositionNearType(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_tagSet = python_pars[1];
    PyObject *par_idx = python_pars[2];
    struct Nuitka_FrameObject *frame_4cad0b2d707a933840d8d857e812be6d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_4cad0b2d707a933840d8d857e812be6d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4cad0b2d707a933840d8d857e812be6d)) {
        Py_XDECREF(cache_frame_4cad0b2d707a933840d8d857e812be6d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4cad0b2d707a933840d8d857e812be6d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4cad0b2d707a933840d8d857e812be6d = MAKE_FUNCTION_FRAME(codeobj_4cad0b2d707a933840d8d857e812be6d, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4cad0b2d707a933840d8d857e812be6d->m_type_description == NULL);
    frame_4cad0b2d707a933840d8d857e812be6d = cache_frame_4cad0b2d707a933840d8d857e812be6d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4cad0b2d707a933840d8d857e812be6d);
    assert(Py_REFCNT(frame_4cad0b2d707a933840d8d857e812be6d) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_idx);
        tmp_add_expr_left_1 = par_idx;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[21]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ooo";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_idx);
        tmp_subscript_value_1 = par_idx;
        tmp_called_instance_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ooo";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_tagSet);
        tmp_args_element_value_1 = par_tagSet;
        frame_4cad0b2d707a933840d8d857e812be6d->m_frame.f_lineno = 436;
        tmp_add_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[69], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ooo";
            goto try_except_handler_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ooo";
            goto try_except_handler_1;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_4cad0b2d707a933840d8d857e812be6d, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_4cad0b2d707a933840d8d857e812be6d, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_4cad0b2d707a933840d8d857e812be6d->m_frame.f_lineno = 439;
        tmp_raise_type_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[46],
            PyTuple_GET_ITEM(mod_consts[61], 0)
        );

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 439;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 435;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_4cad0b2d707a933840d8d857e812be6d->m_frame) frame_4cad0b2d707a933840d8d857e812be6d->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_2;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4cad0b2d707a933840d8d857e812be6d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4cad0b2d707a933840d8d857e812be6d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4cad0b2d707a933840d8d857e812be6d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4cad0b2d707a933840d8d857e812be6d,
        type_description_1,
        par_self,
        par_tagSet,
        par_idx
    );


    // Release cached frame if used for exception.
    if (frame_4cad0b2d707a933840d8d857e812be6d == cache_frame_4cad0b2d707a933840d8d857e812be6d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4cad0b2d707a933840d8d857e812be6d);
        cache_frame_4cad0b2d707a933840d8d857e812be6d = NULL;
    }

    assertFrameObject(frame_4cad0b2d707a933840d8d857e812be6d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_tagSet);
    Py_DECREF(par_tagSet);
    CHECK_OBJECT(par_idx);
    Py_DECREF(par_idx);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_tagSet);
    Py_DECREF(par_tagSet);
    CHECK_OBJECT(par_idx);
    Py_DECREF(par_idx);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$namedtype$$$function__48___computeMinTagSet(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_minTagSet = NULL;
    PyObject *var_namedType = NULL;
    PyObject *var_asn1Object = NULL;
    PyObject *var_tagSet = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_dd94a0fb54921357b008e9f8411cec9c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_dd94a0fb54921357b008e9f8411cec9c = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert(var_minTagSet == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_minTagSet = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_dd94a0fb54921357b008e9f8411cec9c)) {
        Py_XDECREF(cache_frame_dd94a0fb54921357b008e9f8411cec9c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dd94a0fb54921357b008e9f8411cec9c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dd94a0fb54921357b008e9f8411cec9c = MAKE_FUNCTION_FRAME(codeobj_dd94a0fb54921357b008e9f8411cec9c, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dd94a0fb54921357b008e9f8411cec9c->m_type_description == NULL);
    frame_dd94a0fb54921357b008e9f8411cec9c = cache_frame_dd94a0fb54921357b008e9f8411cec9c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dd94a0fb54921357b008e9f8411cec9c);
    assert(Py_REFCNT(frame_dd94a0fb54921357b008e9f8411cec9c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooooo";
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
                type_description_1 = "ooooo";
                exception_lineno = 443;
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
            PyObject *old = var_namedType;
            var_namedType = tmp_assign_source_4;
            Py_INCREF(var_namedType);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_namedType);
        tmp_expression_value_2 = var_namedType;
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[6]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_asn1Object;
            var_asn1Object = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_asn1Object);
        tmp_expression_value_3 = var_asn1Object;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[71]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_tagSet;
            var_tagSet = tmp_assign_source_6;
            Py_XDECREF(old);
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_dd94a0fb54921357b008e9f8411cec9c, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_dd94a0fb54921357b008e9f8411cec9c, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_asn1Object);
        tmp_expression_value_4 = var_asn1Object;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[72]);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_tagSet;
            var_tagSet = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 446;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_dd94a0fb54921357b008e9f8411cec9c->m_frame) frame_dd94a0fb54921357b008e9f8411cec9c->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_4;
    branch_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        if (var_minTagSet == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 452;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_2 = var_minTagSet;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_tagSet);
        tmp_cmp_expr_left_3 = var_tagSet;
        if (var_minTagSet == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 452;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_right_3 = var_minTagSet;
        tmp_or_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(var_tagSet);
        tmp_assign_source_8 = var_tagSet;
        {
            PyObject *old = var_minTagSet;
            var_minTagSet = tmp_assign_source_8;
            Py_INCREF(var_minTagSet);
            Py_XDECREF(old);
        }

    }
    branch_no_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 443;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_called_instance_1;
        if (var_minTagSet == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 455;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_or_left_value_2 = var_minTagSet;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_dd94a0fb54921357b008e9f8411cec9c->m_frame.f_lineno = 455;
        tmp_or_right_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[74]);
        if (tmp_or_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        Py_INCREF(tmp_or_left_value_2);
        tmp_return_value = tmp_or_left_value_2;
        or_end_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_dd94a0fb54921357b008e9f8411cec9c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dd94a0fb54921357b008e9f8411cec9c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dd94a0fb54921357b008e9f8411cec9c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dd94a0fb54921357b008e9f8411cec9c,
        type_description_1,
        par_self,
        var_minTagSet,
        var_namedType,
        var_asn1Object,
        var_tagSet
    );


    // Release cached frame if used for exception.
    if (frame_dd94a0fb54921357b008e9f8411cec9c == cache_frame_dd94a0fb54921357b008e9f8411cec9c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dd94a0fb54921357b008e9f8411cec9c);
        cache_frame_dd94a0fb54921357b008e9f8411cec9c = NULL;
    }

    assertFrameObject(frame_dd94a0fb54921357b008e9f8411cec9c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_minTagSet);
    var_minTagSet = NULL;
    Py_XDECREF(var_namedType);
    var_namedType = NULL;
    Py_XDECREF(var_asn1Object);
    var_asn1Object = NULL;
    Py_XDECREF(var_tagSet);
    var_tagSet = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_minTagSet);
    var_minTagSet = NULL;
    Py_XDECREF(var_namedType);
    var_namedType = NULL;
    Py_XDECREF(var_asn1Object);
    var_asn1Object = NULL;
    Py_XDECREF(var_tagSet);
    var_tagSet = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

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


static PyObject *impl_pyasn1$type$namedtype$$$function__49_minTagSet(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ba0ff25ed01f022e3131def2c168734f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ba0ff25ed01f022e3131def2c168734f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ba0ff25ed01f022e3131def2c168734f)) {
        Py_XDECREF(cache_frame_ba0ff25ed01f022e3131def2c168734f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ba0ff25ed01f022e3131def2c168734f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ba0ff25ed01f022e3131def2c168734f = MAKE_FUNCTION_FRAME(codeobj_ba0ff25ed01f022e3131def2c168734f, module_pyasn1$type$namedtype, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ba0ff25ed01f022e3131def2c168734f->m_type_description == NULL);
    frame_ba0ff25ed01f022e3131def2c168734f = cache_frame_ba0ff25ed01f022e3131def2c168734f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ba0ff25ed01f022e3131def2c168734f);
    assert(Py_REFCNT(frame_ba0ff25ed01f022e3131def2c168734f) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
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
        exception_tb = MAKE_TRACEBACK(frame_ba0ff25ed01f022e3131def2c168734f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ba0ff25ed01f022e3131def2c168734f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ba0ff25ed01f022e3131def2c168734f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ba0ff25ed01f022e3131def2c168734f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ba0ff25ed01f022e3131def2c168734f == cache_frame_ba0ff25ed01f022e3131def2c168734f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ba0ff25ed01f022e3131def2c168734f);
        cache_frame_ba0ff25ed01f022e3131def2c168734f = NULL;
    }

    assertFrameObject(frame_ba0ff25ed01f022e3131def2c168734f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_pyasn1$type$namedtype$$$function__50___computeTagMaps(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_unique = python_pars[1];
    PyObject *var_presentTypes = NULL;
    PyObject *var_skipTypes = NULL;
    PyObject *var_defaultType = NULL;
    PyObject *var_namedType = NULL;
    PyObject *var_tagMap = NULL;
    PyObject *var_tagSet = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_a10c6e1be655de9ed878dedc19c526b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_a10c6e1be655de9ed878dedc19c526b7 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_DICT_EMPTY();
        assert(var_presentTypes == NULL);
        var_presentTypes = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_DICT_EMPTY();
        assert(var_skipTypes == NULL);
        var_skipTypes = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        assert(var_defaultType == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_defaultType = tmp_assign_source_3;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_a10c6e1be655de9ed878dedc19c526b7)) {
        Py_XDECREF(cache_frame_a10c6e1be655de9ed878dedc19c526b7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a10c6e1be655de9ed878dedc19c526b7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a10c6e1be655de9ed878dedc19c526b7 = MAKE_FUNCTION_FRAME(codeobj_a10c6e1be655de9ed878dedc19c526b7, module_pyasn1$type$namedtype, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a10c6e1be655de9ed878dedc19c526b7->m_type_description == NULL);
    frame_a10c6e1be655de9ed878dedc19c526b7 = cache_frame_a10c6e1be655de9ed878dedc19c526b7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a10c6e1be655de9ed878dedc19c526b7);
    assert(Py_REFCNT(frame_a10c6e1be655de9ed878dedc19c526b7) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                exception_lineno = 476;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_6 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_namedType;
            var_namedType = tmp_assign_source_6;
            Py_INCREF(var_namedType);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_namedType);
        tmp_expression_value_3 = var_namedType;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[6]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[47]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_tagMap;
            var_tagMap = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_tagMap);
        tmp_isinstance_inst_1 = var_tagMap;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[49]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(var_tagMap);
    tmp_return_value = var_tagMap;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(var_tagMap);
        tmp_iter_arg_2 = var_tagMap;
        tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_9 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                exception_lineno = 480;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_10 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_tagSet;
            var_tagSet = tmp_assign_source_10;
            Py_INCREF(var_tagSet);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_unique);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_unique);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_tagSet);
        tmp_cmp_expr_left_1 = var_tagSet;
        if (var_presentTypes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 481;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_cmp_expr_right_1 = var_presentTypes;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_and_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[49]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_mod_expr_left_1 = mod_consts[76];
        CHECK_OBJECT(var_tagSet);
        tmp_tuple_element_1 = var_tagSet;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        if (var_namedType == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 482;
            type_description_1 = "oooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_namedType;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_tuple_element_1 = par_self;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 482;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        frame_a10c6e1be655de9ed878dedc19c526b7->m_frame.f_lineno = 482;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        goto try_return_handler_3;
    }
    branch_no_2:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (var_namedType == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 483;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_6 = var_namedType;
        tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[6]);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        if (var_presentTypes == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 483;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_ass_subscribed_1 = var_presentTypes;
        CHECK_OBJECT(var_tagSet);
        tmp_ass_subscript_1 = var_tagSet;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 480;
        type_description_1 = "oooooooo";
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
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_8;
        if (var_skipTypes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 484;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_7 = var_skipTypes;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[79]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_tagMap);
        tmp_expression_value_8 = var_tagMap;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[78]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 484;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        frame_a10c6e1be655de9ed878dedc19c526b7->m_frame.f_lineno = 484;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (var_defaultType == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 486;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_2 = var_defaultType;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(var_tagMap);
        tmp_expression_value_9 = var_tagMap;
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[80]);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_defaultType;
            var_defaultType = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(var_tagMap);
        tmp_expression_value_10 = var_tagMap;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[80]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_2;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[49]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_mod_expr_left_2 = mod_consts[81];
        CHECK_OBJECT(par_self);
        tmp_tuple_element_2 = par_self;
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
        tmp_args_element_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 489;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        frame_a10c6e1be655de9ed878dedc19c526b7->m_frame.f_lineno = 489;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        goto try_return_handler_2;
    }
    branch_no_4:;
    branch_end_3:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 476;
        type_description_1 = "oooooooo";
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
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[83]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_presentTypes == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 491;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = var_presentTypes;
        if (var_skipTypes == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 491;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = var_skipTypes;
        if (var_defaultType == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 491;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = var_defaultType;
        frame_a10c6e1be655de9ed878dedc19c526b7->m_frame.f_lineno = 491;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "oooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_a10c6e1be655de9ed878dedc19c526b7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a10c6e1be655de9ed878dedc19c526b7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a10c6e1be655de9ed878dedc19c526b7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a10c6e1be655de9ed878dedc19c526b7,
        type_description_1,
        par_self,
        par_unique,
        var_presentTypes,
        var_skipTypes,
        var_defaultType,
        var_namedType,
        var_tagMap,
        var_tagSet
    );


    // Release cached frame if used for exception.
    if (frame_a10c6e1be655de9ed878dedc19c526b7 == cache_frame_a10c6e1be655de9ed878dedc19c526b7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a10c6e1be655de9ed878dedc19c526b7);
        cache_frame_a10c6e1be655de9ed878dedc19c526b7 = NULL;
    }

    assertFrameObject(frame_a10c6e1be655de9ed878dedc19c526b7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_presentTypes);
    var_presentTypes = NULL;
    Py_XDECREF(var_skipTypes);
    var_skipTypes = NULL;
    Py_XDECREF(var_defaultType);
    var_defaultType = NULL;
    Py_XDECREF(var_namedType);
    var_namedType = NULL;
    Py_XDECREF(var_tagMap);
    var_tagMap = NULL;
    Py_XDECREF(var_tagSet);
    var_tagSet = NULL;
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

    Py_XDECREF(var_presentTypes);
    var_presentTypes = NULL;
    Py_XDECREF(var_skipTypes);
    var_skipTypes = NULL;
    Py_XDECREF(var_defaultType);
    var_defaultType = NULL;
    Py_XDECREF(var_namedType);
    var_namedType = NULL;
    Py_XDECREF(var_tagMap);
    var_tagMap = NULL;
    Py_XDECREF(var_tagSet);
    var_tagSet = NULL;
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
    CHECK_OBJECT(par_unique);
    Py_DECREF(par_unique);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_unique);
    Py_DECREF(par_unique);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$namedtype$$$function__51_tagMap(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_002f96e01fcd796742512790146bb468;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_002f96e01fcd796742512790146bb468 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_002f96e01fcd796742512790146bb468)) {
        Py_XDECREF(cache_frame_002f96e01fcd796742512790146bb468);

#if _DEBUG_REFCOUNTS
        if (cache_frame_002f96e01fcd796742512790146bb468 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_002f96e01fcd796742512790146bb468 = MAKE_FUNCTION_FRAME(codeobj_002f96e01fcd796742512790146bb468, module_pyasn1$type$namedtype, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_002f96e01fcd796742512790146bb468->m_type_description == NULL);
    frame_002f96e01fcd796742512790146bb468 = cache_frame_002f96e01fcd796742512790146bb468;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_002f96e01fcd796742512790146bb468);
    assert(Py_REFCNT(frame_002f96e01fcd796742512790146bb468) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[27]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
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
        exception_tb = MAKE_TRACEBACK(frame_002f96e01fcd796742512790146bb468, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_002f96e01fcd796742512790146bb468->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_002f96e01fcd796742512790146bb468, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_002f96e01fcd796742512790146bb468,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_002f96e01fcd796742512790146bb468 == cache_frame_002f96e01fcd796742512790146bb468) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_002f96e01fcd796742512790146bb468);
        cache_frame_002f96e01fcd796742512790146bb468 = NULL;
    }

    assertFrameObject(frame_002f96e01fcd796742512790146bb468);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_pyasn1$type$namedtype$$$function__52_tagMapUnique(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b918df8b311ef3e3088b22391cb19f33;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b918df8b311ef3e3088b22391cb19f33 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b918df8b311ef3e3088b22391cb19f33)) {
        Py_XDECREF(cache_frame_b918df8b311ef3e3088b22391cb19f33);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b918df8b311ef3e3088b22391cb19f33 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b918df8b311ef3e3088b22391cb19f33 = MAKE_FUNCTION_FRAME(codeobj_b918df8b311ef3e3088b22391cb19f33, module_pyasn1$type$namedtype, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b918df8b311ef3e3088b22391cb19f33->m_type_description == NULL);
    frame_b918df8b311ef3e3088b22391cb19f33 = cache_frame_b918df8b311ef3e3088b22391cb19f33;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b918df8b311ef3e3088b22391cb19f33);
    assert(Py_REFCNT(frame_b918df8b311ef3e3088b22391cb19f33) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
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
        exception_tb = MAKE_TRACEBACK(frame_b918df8b311ef3e3088b22391cb19f33, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b918df8b311ef3e3088b22391cb19f33->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b918df8b311ef3e3088b22391cb19f33, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b918df8b311ef3e3088b22391cb19f33,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b918df8b311ef3e3088b22391cb19f33 == cache_frame_b918df8b311ef3e3088b22391cb19f33) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b918df8b311ef3e3088b22391cb19f33);
        cache_frame_b918df8b311ef3e3088b22391cb19f33 = NULL;
    }

    assertFrameObject(frame_b918df8b311ef3e3088b22391cb19f33);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_pyasn1$type$namedtype$$$function__53_hasOptionalOrDefault(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d0e78d232eb7280e415d89369d0b3e53;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d0e78d232eb7280e415d89369d0b3e53 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d0e78d232eb7280e415d89369d0b3e53)) {
        Py_XDECREF(cache_frame_d0e78d232eb7280e415d89369d0b3e53);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d0e78d232eb7280e415d89369d0b3e53 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d0e78d232eb7280e415d89369d0b3e53 = MAKE_FUNCTION_FRAME(codeobj_d0e78d232eb7280e415d89369d0b3e53, module_pyasn1$type$namedtype, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d0e78d232eb7280e415d89369d0b3e53->m_type_description == NULL);
    frame_d0e78d232eb7280e415d89369d0b3e53 = cache_frame_d0e78d232eb7280e415d89369d0b3e53;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d0e78d232eb7280e415d89369d0b3e53);
    assert(Py_REFCNT(frame_d0e78d232eb7280e415d89369d0b3e53) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[31]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
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
        exception_tb = MAKE_TRACEBACK(frame_d0e78d232eb7280e415d89369d0b3e53, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d0e78d232eb7280e415d89369d0b3e53->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d0e78d232eb7280e415d89369d0b3e53, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d0e78d232eb7280e415d89369d0b3e53,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d0e78d232eb7280e415d89369d0b3e53 == cache_frame_d0e78d232eb7280e415d89369d0b3e53) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d0e78d232eb7280e415d89369d0b3e53);
        cache_frame_d0e78d232eb7280e415d89369d0b3e53 = NULL;
    }

    assertFrameObject(frame_d0e78d232eb7280e415d89369d0b3e53);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_pyasn1$type$namedtype$$$function__54_hasOpenTypes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_55c0a5cceccbb93404fe0a8924873109;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_55c0a5cceccbb93404fe0a8924873109 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_55c0a5cceccbb93404fe0a8924873109)) {
        Py_XDECREF(cache_frame_55c0a5cceccbb93404fe0a8924873109);

#if _DEBUG_REFCOUNTS
        if (cache_frame_55c0a5cceccbb93404fe0a8924873109 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_55c0a5cceccbb93404fe0a8924873109 = MAKE_FUNCTION_FRAME(codeobj_55c0a5cceccbb93404fe0a8924873109, module_pyasn1$type$namedtype, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_55c0a5cceccbb93404fe0a8924873109->m_type_description == NULL);
    frame_55c0a5cceccbb93404fe0a8924873109 = cache_frame_55c0a5cceccbb93404fe0a8924873109;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_55c0a5cceccbb93404fe0a8924873109);
    assert(Py_REFCNT(frame_55c0a5cceccbb93404fe0a8924873109) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[32]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
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
        exception_tb = MAKE_TRACEBACK(frame_55c0a5cceccbb93404fe0a8924873109, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_55c0a5cceccbb93404fe0a8924873109->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_55c0a5cceccbb93404fe0a8924873109, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_55c0a5cceccbb93404fe0a8924873109,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_55c0a5cceccbb93404fe0a8924873109 == cache_frame_55c0a5cceccbb93404fe0a8924873109) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_55c0a5cceccbb93404fe0a8924873109);
        cache_frame_55c0a5cceccbb93404fe0a8924873109 = NULL;
    }

    assertFrameObject(frame_55c0a5cceccbb93404fe0a8924873109);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_pyasn1$type$namedtype$$$function__55_namedTypes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_cc3f2d14a03f2235e306e19c27e4a1ae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cc3f2d14a03f2235e306e19c27e4a1ae = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cc3f2d14a03f2235e306e19c27e4a1ae)) {
        Py_XDECREF(cache_frame_cc3f2d14a03f2235e306e19c27e4a1ae);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cc3f2d14a03f2235e306e19c27e4a1ae == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cc3f2d14a03f2235e306e19c27e4a1ae = MAKE_FUNCTION_FRAME(codeobj_cc3f2d14a03f2235e306e19c27e4a1ae, module_pyasn1$type$namedtype, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cc3f2d14a03f2235e306e19c27e4a1ae->m_type_description == NULL);
    frame_cc3f2d14a03f2235e306e19c27e4a1ae = cache_frame_cc3f2d14a03f2235e306e19c27e4a1ae;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cc3f2d14a03f2235e306e19c27e4a1ae);
    assert(Py_REFCNT(frame_cc3f2d14a03f2235e306e19c27e4a1ae) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_tuple_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_tuple_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
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
        exception_tb = MAKE_TRACEBACK(frame_cc3f2d14a03f2235e306e19c27e4a1ae, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cc3f2d14a03f2235e306e19c27e4a1ae->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cc3f2d14a03f2235e306e19c27e4a1ae, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cc3f2d14a03f2235e306e19c27e4a1ae,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_cc3f2d14a03f2235e306e19c27e4a1ae == cache_frame_cc3f2d14a03f2235e306e19c27e4a1ae) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cc3f2d14a03f2235e306e19c27e4a1ae);
        cache_frame_cc3f2d14a03f2235e306e19c27e4a1ae = NULL;
    }

    assertFrameObject(frame_cc3f2d14a03f2235e306e19c27e4a1ae);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_pyasn1$type$namedtype$$$function__56_requiredComponents(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a60274d3bf058205f57411cbd18344c1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a60274d3bf058205f57411cbd18344c1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a60274d3bf058205f57411cbd18344c1)) {
        Py_XDECREF(cache_frame_a60274d3bf058205f57411cbd18344c1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a60274d3bf058205f57411cbd18344c1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a60274d3bf058205f57411cbd18344c1 = MAKE_FUNCTION_FRAME(codeobj_a60274d3bf058205f57411cbd18344c1, module_pyasn1$type$namedtype, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a60274d3bf058205f57411cbd18344c1->m_type_description == NULL);
    frame_a60274d3bf058205f57411cbd18344c1 = cache_frame_a60274d3bf058205f57411cbd18344c1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a60274d3bf058205f57411cbd18344c1);
    assert(Py_REFCNT(frame_a60274d3bf058205f57411cbd18344c1) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[34]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;
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
        exception_tb = MAKE_TRACEBACK(frame_a60274d3bf058205f57411cbd18344c1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a60274d3bf058205f57411cbd18344c1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a60274d3bf058205f57411cbd18344c1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a60274d3bf058205f57411cbd18344c1,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a60274d3bf058205f57411cbd18344c1 == cache_frame_a60274d3bf058205f57411cbd18344c1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a60274d3bf058205f57411cbd18344c1);
        cache_frame_a60274d3bf058205f57411cbd18344c1 = NULL;
    }

    assertFrameObject(frame_a60274d3bf058205f57411cbd18344c1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__10___hash__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__10___hash__,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        mod_consts[129],
#endif
        codeobj_9fbbbeaf6ec156a8e09d6310faf9aa3f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__11___getitem__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__11___getitem__,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        mod_consts[130],
#endif
        codeobj_87212189380004474daa5f32b1e0c398,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__12___iter__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__12___iter__,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        mod_consts[132],
#endif
        codeobj_97167dd8f395a5873487c79620e5d4ac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__13_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__13_name,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[134],
#endif
        codeobj_e440b78159a3d7c94889edb39cacdb58,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__14_asn1Object() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__14_asn1Object,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[135],
#endif
        codeobj_c6abf211cc2531e1943ccb1e08fbf06a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__15_openType() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__15_openType,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[136],
#endif
        codeobj_48e11a757b9f8cb48234ec6c2fe26c1d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__16_getName() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__16_getName,
        mod_consts[137],
#if PYTHON_VERSION >= 0x300
        mod_consts[138],
#endif
        codeobj_611ad05a6447b4b8f6a957777631ff46,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__17_getType() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__17_getType,
        mod_consts[139],
#if PYTHON_VERSION >= 0x300
        mod_consts[140],
#endif
        codeobj_b27975c57fb0af354be3b7263b6acd4c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__18___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__18___init__,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        mod_consts[145],
#endif
        codeobj_108d6c6013a02c74b239aebab59f5345,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__19___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__19___repr__,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        mod_consts[146],
#endif
        codeobj_0fcad4ac2cec5d5ac6ffa36b8c48169a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__1_lambda,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_089962095cd8001f862b69fd9ecaf1de,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__20___eq__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__20___eq__,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        mod_consts[147],
#endif
        codeobj_50dd0a5882689c76622bb4905f0a88d5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__21___ne__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__21___ne__,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_218d7ebf572469e9162db6797914e9d1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__22___lt__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__22___lt__,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        mod_consts[149],
#endif
        codeobj_ba00fdd6b140471353422acff97265d9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__23___le__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__23___le__,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        mod_consts[150],
#endif
        codeobj_72b306606ec03a91a759a79ffce61af9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__24___gt__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__24___gt__,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        mod_consts[151],
#endif
        codeobj_b60066cd69b0300a803b225d094e098f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__25___ge__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__25___ge__,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        mod_consts[152],
#endif
        codeobj_add576f711ca9f9533a2480d68d4261a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__26___hash__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__26___hash__,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        mod_consts[153],
#endif
        codeobj_be389c871afe3c5be0f56acd80dfef1c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__27___getitem__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__27___getitem__,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        mod_consts[154],
#endif
        codeobj_2785a121642f72549556d8b0dc95d2c2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__28___contains__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__28___contains__,
        mod_consts[155],
#if PYTHON_VERSION >= 0x300
        mod_consts[156],
#endif
        codeobj_bf837c22e77623081ba7bff2fe83d530,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__29___iter__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__29___iter__,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        mod_consts[157],
#endif
        codeobj_c5ca1781e458b9e96dcc7103de065b6b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__2___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__2___init__,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        mod_consts[113],
#endif
        codeobj_f55a3267b0ba8e55e5355ea510aeff82,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__31___bool__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__31___bool__,
        mod_consts[158],
#if PYTHON_VERSION >= 0x300
        mod_consts[159],
#endif
        codeobj_cfdbe985614f91a51972e7f7a23e0f2b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__32___len__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__32___len__,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        mod_consts[161],
#endif
        codeobj_ba6fd75e8c4d4f8c815a759de1a2d809,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__33_values() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__33_values,
        mod_consts[162],
#if PYTHON_VERSION >= 0x300
        mod_consts[163],
#endif
        codeobj_448e9358029bb83c02d7ecee9bd6e6e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__34_keys() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__34_keys,
        mod_consts[164],
#if PYTHON_VERSION >= 0x300
        mod_consts[165],
#endif
        codeobj_03fcf92e22d067017790d5d6dd8115bf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__35_items() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__35_items,
        mod_consts[166],
#if PYTHON_VERSION >= 0x300
        mod_consts[167],
#endif
        codeobj_831dc6e26bea4ca7a07473e9364567ef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__36_clone() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__36_clone,
        mod_consts[168],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_f905d9ac8cedfc6701bd3a9ed13378d5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__37___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__37___init__,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        mod_consts[172],
#endif
        codeobj_97365c95b248b03c52e3c5b5f31c3918,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__38___getitem__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__38___getitem__,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_7dab750e893285c13851edbf2c893024,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__39___computeTagToPosMap() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__39___computeTagToPosMap,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        mod_consts[175],
#endif
        codeobj_a24abcb1312d70f91b9847051780f96a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__3___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__3___repr__,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        mod_consts[115],
#endif
        codeobj_0a4b5770c66ae5eb34c09a8d80a56277,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__40___computeNameToPosMap() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__40___computeNameToPosMap,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_a8293e6efd24d45a91280766824410f1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__41___computeAmbiguousTypes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__41___computeAmbiguousTypes,
        mod_consts[178],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_30a06911180ae55d999935968a0fbb76,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__42_getTypeByPosition() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__42_getTypeByPosition,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        mod_consts[181],
#endif
        codeobj_1c3e2096c74092c92f474d33e01e327b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        mod_consts[62],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__43_getPositionByType() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__43_getPositionByType,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        mod_consts[182],
#endif
        codeobj_5b79f21f23e90ba1deddc1a8850b93ad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        mod_consts[64],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__44_getNameByPosition() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__44_getNameByPosition,
        mod_consts[183],
#if PYTHON_VERSION >= 0x300
        mod_consts[184],
#endif
        codeobj_24d6f72ba99be6900d363db6c202960e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        mod_consts[65],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__45_getPositionByName() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__45_getPositionByName,
        mod_consts[185],
#if PYTHON_VERSION >= 0x300
        mod_consts[186],
#endif
        codeobj_bf40de51e8f568b7863f8fead447b13e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        mod_consts[67],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__46_getTagMapNearPosition() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__46_getTagMapNearPosition,
        mod_consts[187],
#if PYTHON_VERSION >= 0x300
        mod_consts[188],
#endif
        codeobj_fc2b702d3399662299189d4efc299c9e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        mod_consts[68],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__47_getPositionNearType() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__47_getPositionNearType,
        mod_consts[189],
#if PYTHON_VERSION >= 0x300
        mod_consts[190],
#endif
        codeobj_4cad0b2d707a933840d8d857e812be6d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        mod_consts[70],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__48___computeMinTagSet() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__48___computeMinTagSet,
        mod_consts[191],
#if PYTHON_VERSION >= 0x300
        mod_consts[192],
#endif
        codeobj_dd94a0fb54921357b008e9f8411cec9c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__49_minTagSet() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__49_minTagSet,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        mod_consts[193],
#endif
        codeobj_ba0ff25ed01f022e3131def2c168734f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        mod_consts[75],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__4___eq__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__4___eq__,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        mod_consts[117],
#endif
        codeobj_0bb25354872bfd79d25ed623493770e2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__50___computeTagMaps() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__50___computeTagMaps,
        mod_consts[194],
#if PYTHON_VERSION >= 0x300
        mod_consts[195],
#endif
        codeobj_a10c6e1be655de9ed878dedc19c526b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__51_tagMap() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__51_tagMap,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        mod_consts[196],
#endif
        codeobj_002f96e01fcd796742512790146bb468,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        mod_consts[84],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__52_tagMapUnique() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__52_tagMapUnique,
        mod_consts[197],
#if PYTHON_VERSION >= 0x300
        mod_consts[198],
#endif
        codeobj_b918df8b311ef3e3088b22391cb19f33,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        mod_consts[85],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__53_hasOptionalOrDefault() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__53_hasOptionalOrDefault,
        mod_consts[199],
#if PYTHON_VERSION >= 0x300
        mod_consts[200],
#endif
        codeobj_d0e78d232eb7280e415d89369d0b3e53,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__54_hasOpenTypes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__54_hasOpenTypes,
        mod_consts[201],
#if PYTHON_VERSION >= 0x300
        mod_consts[202],
#endif
        codeobj_55c0a5cceccbb93404fe0a8924873109,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__55_namedTypes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__55_namedTypes,
        mod_consts[203],
#if PYTHON_VERSION >= 0x300
        mod_consts[204],
#endif
        codeobj_cc3f2d14a03f2235e306e19c27e4a1ae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__56_requiredComponents() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__56_requiredComponents,
        mod_consts[205],
#if PYTHON_VERSION >= 0x300
        mod_consts[206],
#endif
        codeobj_a60274d3bf058205f57411cbd18344c1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__5___ne__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__5___ne__,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        mod_consts[119],
#endif
        codeobj_f8c5a29d6543697fac6430f6daf7a9af,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__6___lt__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__6___lt__,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_97d1a73d95bc89ff064164533c081549,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__7___le__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__7___le__,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        mod_consts[123],
#endif
        codeobj_a2f4b4197fe9f0bc66224eb80c1dc101,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__8___gt__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__8___gt__,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        mod_consts[125],
#endif
        codeobj_2381992cc58e74175b84ea0941451c7a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$namedtype$$$function__9___ge__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$namedtype$$$function__9___ge__,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        mod_consts[127],
#endif
        codeobj_aa412076b1c059856954b405deb73d6c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$namedtype,
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

function_impl_code functable_pyasn1$type$namedtype[] = {
    impl_pyasn1$type$namedtype$$$function__1_lambda,
    impl_pyasn1$type$namedtype$$$function__2___init__,
    impl_pyasn1$type$namedtype$$$function__3___repr__,
    impl_pyasn1$type$namedtype$$$function__4___eq__,
    impl_pyasn1$type$namedtype$$$function__5___ne__,
    impl_pyasn1$type$namedtype$$$function__6___lt__,
    impl_pyasn1$type$namedtype$$$function__7___le__,
    impl_pyasn1$type$namedtype$$$function__8___gt__,
    impl_pyasn1$type$namedtype$$$function__9___ge__,
    impl_pyasn1$type$namedtype$$$function__10___hash__,
    impl_pyasn1$type$namedtype$$$function__11___getitem__,
    impl_pyasn1$type$namedtype$$$function__12___iter__,
    impl_pyasn1$type$namedtype$$$function__13_name,
    impl_pyasn1$type$namedtype$$$function__14_asn1Object,
    impl_pyasn1$type$namedtype$$$function__15_openType,
    impl_pyasn1$type$namedtype$$$function__16_getName,
    impl_pyasn1$type$namedtype$$$function__17_getType,
    impl_pyasn1$type$namedtype$$$function__18___init__,
    impl_pyasn1$type$namedtype$$$function__19___repr__,
    impl_pyasn1$type$namedtype$$$function__20___eq__,
    impl_pyasn1$type$namedtype$$$function__21___ne__,
    impl_pyasn1$type$namedtype$$$function__22___lt__,
    impl_pyasn1$type$namedtype$$$function__23___le__,
    impl_pyasn1$type$namedtype$$$function__24___gt__,
    impl_pyasn1$type$namedtype$$$function__25___ge__,
    impl_pyasn1$type$namedtype$$$function__26___hash__,
    impl_pyasn1$type$namedtype$$$function__27___getitem__,
    impl_pyasn1$type$namedtype$$$function__28___contains__,
    impl_pyasn1$type$namedtype$$$function__29___iter__,
    impl_pyasn1$type$namedtype$$$function__31___bool__,
    impl_pyasn1$type$namedtype$$$function__32___len__,
    impl_pyasn1$type$namedtype$$$function__33_values,
    impl_pyasn1$type$namedtype$$$function__34_keys,
    impl_pyasn1$type$namedtype$$$function__35_items,
    impl_pyasn1$type$namedtype$$$function__36_clone,
    impl_pyasn1$type$namedtype$$$function__37___init__,
    impl_pyasn1$type$namedtype$$$function__38___getitem__,
    impl_pyasn1$type$namedtype$$$function__39___computeTagToPosMap,
    impl_pyasn1$type$namedtype$$$function__40___computeNameToPosMap,
    impl_pyasn1$type$namedtype$$$function__41___computeAmbiguousTypes,
    impl_pyasn1$type$namedtype$$$function__42_getTypeByPosition,
    impl_pyasn1$type$namedtype$$$function__43_getPositionByType,
    impl_pyasn1$type$namedtype$$$function__44_getNameByPosition,
    impl_pyasn1$type$namedtype$$$function__45_getPositionByName,
    impl_pyasn1$type$namedtype$$$function__46_getTagMapNearPosition,
    impl_pyasn1$type$namedtype$$$function__47_getPositionNearType,
    impl_pyasn1$type$namedtype$$$function__48___computeMinTagSet,
    impl_pyasn1$type$namedtype$$$function__49_minTagSet,
    impl_pyasn1$type$namedtype$$$function__50___computeTagMaps,
    impl_pyasn1$type$namedtype$$$function__51_tagMap,
    impl_pyasn1$type$namedtype$$$function__52_tagMapUnique,
    impl_pyasn1$type$namedtype$$$function__53_hasOptionalOrDefault,
    impl_pyasn1$type$namedtype$$$function__54_hasOpenTypes,
    impl_pyasn1$type$namedtype$$$function__55_namedTypes,
    impl_pyasn1$type$namedtype$$$function__56_requiredComponents,
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

    function_impl_code *current = functable_pyasn1$type$namedtype;
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

    if (offset > sizeof(functable_pyasn1$type$namedtype) || offset < 0) {
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
        functable_pyasn1$type$namedtype[offset],
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
        module_pyasn1$type$namedtype,
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
PyObject *modulecode_pyasn1$type$namedtype(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyasn1.type.namedtype");

    // Store the module for future use.
    module_pyasn1$type$namedtype = module;

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
        PRINT_STRING("pyasn1.type.namedtype: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pyasn1.type.namedtype: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pyasn1.type.namedtype: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyasn1$type$namedtype\n");

    moduledict_pyasn1$type$namedtype = MODULE_DICT(module_pyasn1$type$namedtype);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyasn1$type$namedtype,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyasn1$type$namedtype,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[232]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyasn1$type$namedtype,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$type$namedtype,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$type$namedtype,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyasn1$type$namedtype);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_pyasn1$type$namedtype);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *tmp_NamedTypes$class_creation_1__bases = NULL;
    PyObject *tmp_NamedTypes$class_creation_1__bases_orig = NULL;
    PyObject *tmp_NamedTypes$class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_NamedTypes$class_creation_1__metaclass = NULL;
    PyObject *tmp_NamedTypes$class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    struct Nuitka_FrameObject *frame_d06fbe19331cf7415478cff39740ae86;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *locals_pyasn1$type$namedtype$$$class__1_NamedType_23 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_51e02c6a647d37f0e91f9add41001786_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_pyasn1$type$namedtype$$$class__2_OptionalNamedType_105 = NULL;
    struct Nuitka_FrameObject *frame_013ce4f85c7584baa3f8e8f91b42e0ed_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *locals_pyasn1$type$namedtype$$$class__3_DefaultedNamedType_111 = NULL;
    struct Nuitka_FrameObject *frame_19761855b597f57ff421beb50e7f215c_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117 = NULL;
    struct Nuitka_FrameObject *frame_7ea728e7e08cdf982abdfa38d885a1e7_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *locals_pyasn1$type$namedtype$$$class__5_PostponedError_238 = NULL;
    struct Nuitka_FrameObject *frame_93f15f01abd5ddd9362d5ffaacfbf981_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_2);
    }
    frame_d06fbe19331cf7415478cff39740ae86 = MAKE_MODULE_FRAME(codeobj_d06fbe19331cf7415478cff39740ae86, module_pyasn1$type$namedtype);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d06fbe19331cf7415478cff39740ae86);
    assert(Py_REFCNT(frame_d06fbe19331cf7415478cff39740ae86) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[89], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[90], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[93];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyasn1$type$namedtype;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[94];
        tmp_level_value_1 = mod_consts[41];
        frame_d06fbe19331cf7415478cff39740ae86->m_frame.f_lineno = 9;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pyasn1$type$namedtype,
                mod_consts[45],
                mod_consts[41]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[45]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[95];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pyasn1$type$namedtype;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[96];
        tmp_level_value_2 = mod_consts[41];
        frame_d06fbe19331cf7415478cff39740ae86->m_frame.f_lineno = 10;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_pyasn1$type$namedtype,
                mod_consts[73],
                mod_consts[41]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[73]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[95];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pyasn1$type$namedtype;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[97];
        tmp_level_value_3 = mod_consts[41];
        frame_d06fbe19331cf7415478cff39740ae86->m_frame.f_lineno = 11;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_pyasn1$type$namedtype,
                mod_consts[82],
                mod_consts[41]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[82]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_LIST4(mod_consts[98]);
        UPDATE_STRING_DICT1(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_8);
    }
    // Tried code:
    {
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_mvar_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
    }
    goto try_end_1;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_d06fbe19331cf7415478cff39740ae86, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_d06fbe19331cf7415478cff39740ae86, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_NameError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__1_lambda();

        UPDATE_STRING_DICT1(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_9);
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 16;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d06fbe19331cf7415478cff39740ae86->m_frame) frame_d06fbe19331cf7415478cff39740ae86->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_2;
    branch_end_1:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[101];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_10 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_3;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[41];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_3;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_12 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_12;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[102]);
        tmp_condition_result_3 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[102]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_3;
        }
        tmp_tuple_element_1 = mod_consts[103];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_d06fbe19331cf7415478cff39740ae86->m_frame.f_lineno = 23;
        tmp_assign_source_13 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_13;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[104]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_3;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[105];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[10];
        tmp_getattr_default_1 = mod_consts[106];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_3;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[10]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 23;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_3;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_14;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_15;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pyasn1$type$namedtype$$$class__1_NamedType_23 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[107];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__1_NamedType_23, mod_consts[108], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[109];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__1_NamedType_23, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[103];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__1_NamedType_23, mod_consts[110], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_5;
        }
        frame_51e02c6a647d37f0e91f9add41001786_2 = MAKE_CLASS_FRAME(codeobj_51e02c6a647d37f0e91f9add41001786, module_pyasn1$type$namedtype, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_51e02c6a647d37f0e91f9add41001786_2);
        assert(Py_REFCNT(frame_51e02c6a647d37f0e91f9add41001786_2) == 2);

        // Framed code:
        tmp_dictset_value = Py_False;
        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__1_NamedType_23, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = Py_False;
        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__1_NamedType_23, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[111];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__2___init__(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__1_NamedType_23, mod_consts[112], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__3___repr__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__1_NamedType_23, mod_consts[114], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__4___eq__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__1_NamedType_23, mod_consts[116], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__5___ne__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__1_NamedType_23, mod_consts[118], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__6___lt__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__1_NamedType_23, mod_consts[120], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__7___le__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__1_NamedType_23, mod_consts[122], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__8___gt__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__1_NamedType_23, mod_consts[124], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__9___ge__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__1_NamedType_23, mod_consts[126], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__10___hash__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__1_NamedType_23, mod_consts[128], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__11___getitem__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__1_NamedType_23, mod_consts[104], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__12___iter__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__1_NamedType_23, mod_consts[131], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            tmp_res = MAPPING_HAS_ITEM(locals_pyasn1$type$namedtype$$$class__1_NamedType_23, mod_consts[133]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_5 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_value_2 = PyObject_GetItem(locals_pyasn1$type$namedtype$$$class__1_NamedType_23, mod_consts[133]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__13_name();

            frame_51e02c6a647d37f0e91f9add41001786_2->m_frame.f_lineno = 84;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_value_3 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_2 = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__13_name();

            frame_51e02c6a647d37f0e91f9add41001786_2->m_frame.f_lineno = 84;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__1_NamedType_23, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_4;
            tmp_res = MAPPING_HAS_ITEM(locals_pyasn1$type$namedtype$$$class__1_NamedType_23, mod_consts[133]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_6 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_value_4 = PyObject_GetItem(locals_pyasn1$type$namedtype$$$class__1_NamedType_23, mod_consts[133]);

            if (unlikely(tmp_called_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_3 = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__14_asn1Object();

            frame_51e02c6a647d37f0e91f9add41001786_2->m_frame.f_lineno = 88;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_value_5 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_4 = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__14_asn1Object();

            frame_51e02c6a647d37f0e91f9add41001786_2->m_frame.f_lineno = 88;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__1_NamedType_23, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_6;
            tmp_res = MAPPING_HAS_ITEM(locals_pyasn1$type$namedtype$$$class__1_NamedType_23, mod_consts[133]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_7 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_value_6 = PyObject_GetItem(locals_pyasn1$type$namedtype$$$class__1_NamedType_23, mod_consts[133]);

            if (unlikely(tmp_called_value_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_5 = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__15_openType();

            frame_51e02c6a647d37f0e91f9add41001786_2->m_frame.f_lineno = 92;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_7 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_6 = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__15_openType();

            frame_51e02c6a647d37f0e91f9add41001786_2->m_frame.f_lineno = 92;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__1_NamedType_23, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__16_getName();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__1_NamedType_23, mod_consts[137], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__17_getType();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__1_NamedType_23, mod_consts[139], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_51e02c6a647d37f0e91f9add41001786_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_51e02c6a647d37f0e91f9add41001786_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_51e02c6a647d37f0e91f9add41001786_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_51e02c6a647d37f0e91f9add41001786_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_51e02c6a647d37f0e91f9add41001786_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_1__bases;
            tmp_cmp_expr_right_2 = mod_consts[101];
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto try_except_handler_5;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        tmp_dictset_value = mod_consts[101];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__1_NamedType_23, mod_consts[141], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_5;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_8 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[103];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_pyasn1$type$namedtype$$$class__1_NamedType_23;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_d06fbe19331cf7415478cff39740ae86->m_frame.f_lineno = 23;
            tmp_assign_source_16 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_16;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_15 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_15);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_pyasn1$type$namedtype$$$class__1_NamedType_23);
        locals_pyasn1$type$namedtype$$$class__1_NamedType_23 = NULL;
        goto try_return_handler_4;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyasn1$type$namedtype$$$class__1_NamedType_23);
        locals_pyasn1$type$namedtype$$$class__1_NamedType_23 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 23;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_15);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_tuple_element_4;
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_6;
        }
        tmp_assign_source_17 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_17, 0, tmp_tuple_element_4);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_18 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_6;
        }
        tmp_condition_result_9 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_6 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[41];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_6;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_6;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_20 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_20;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_7 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[102]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[102]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_6;
        }
        tmp_tuple_element_5 = mod_consts[142];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_5 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_d06fbe19331cf7415478cff39740ae86->m_frame.f_lineno = 105;
        tmp_assign_source_21 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_21;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_9 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[104]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_6;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[105];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[10];
        tmp_getattr_default_2 = mod_consts[106];
        tmp_tuple_element_6 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_6;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[10]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 105;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_22;
    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_23;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pyasn1$type$namedtype$$$class__2_OptionalNamedType_105 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[107];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__2_OptionalNamedType_105, mod_consts[108], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[142];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__2_OptionalNamedType_105, mod_consts[110], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_8;
        }
        frame_013ce4f85c7584baa3f8e8f91b42e0ed_3 = MAKE_CLASS_FRAME(codeobj_013ce4f85c7584baa3f8e8f91b42e0ed, module_pyasn1$type$namedtype, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_013ce4f85c7584baa3f8e8f91b42e0ed_3);
        assert(Py_REFCNT(frame_013ce4f85c7584baa3f8e8f91b42e0ed_3) == 2);

        // Framed code:
        {
            PyObject *tmp_expression_value_11;
            tmp_expression_value_11 = PyObject_GetItem(locals_pyasn1$type$namedtype$$$class__2_OptionalNamedType_105, mod_consts[103]);

            if (tmp_expression_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[103]);

                    if (unlikely(tmp_expression_value_11 == NULL)) {
                        tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                    }

                    if (tmp_expression_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 106;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_11);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[86]);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__2_OptionalNamedType_105, mod_consts[86], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = Py_True;
        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__2_OptionalNamedType_105, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_013ce4f85c7584baa3f8e8f91b42e0ed_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_013ce4f85c7584baa3f8e8f91b42e0ed_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_013ce4f85c7584baa3f8e8f91b42e0ed_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_013ce4f85c7584baa3f8e8f91b42e0ed_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_013ce4f85c7584baa3f8e8f91b42e0ed_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_8;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto try_except_handler_8;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__2_OptionalNamedType_105, mod_consts[141], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_8;
        }
        branch_no_7:;
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_10 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_7 = mod_consts[142];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_pyasn1$type$namedtype$$$class__2_OptionalNamedType_105;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_d06fbe19331cf7415478cff39740ae86->m_frame.f_lineno = 105;
            tmp_assign_source_24 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto try_except_handler_8;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_24;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_23 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_23);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_pyasn1$type$namedtype$$$class__2_OptionalNamedType_105);
        locals_pyasn1$type$namedtype$$$class__2_OptionalNamedType_105 = NULL;
        goto try_return_handler_7;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyasn1$type$namedtype$$$class__2_OptionalNamedType_105);
        locals_pyasn1$type$namedtype$$$class__2_OptionalNamedType_105 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 105;
        goto try_except_handler_6;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_23);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_tuple_element_8;
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_9;
        }
        tmp_assign_source_25 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_25, 0, tmp_tuple_element_8);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_26 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_9;
        }
        tmp_condition_result_13 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_12 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[41];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_12, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_9;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_9;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_28 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_28;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_13 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_13, mod_consts[102]);
        tmp_condition_result_14 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_14 = tmp_class_creation_3__metaclass;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[102]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_9;
        }
        tmp_tuple_element_9 = mod_consts[143];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_9 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_d06fbe19331cf7415478cff39740ae86->m_frame.f_lineno = 111;
        tmp_assign_source_29 = CALL_FUNCTION(tmp_called_value_11, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_29;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_15 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_15, mod_consts[104]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_9;
        }
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[105];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[10];
        tmp_getattr_default_3 = mod_consts[106];
        tmp_tuple_element_10 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_9;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_16;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_16 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_16 == NULL));
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[10]);
            Py_DECREF(tmp_expression_value_16);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_9;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 111;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_9;
    }
    branch_no_9:;
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_30;
    }
    branch_end_8:;
    {
        PyObject *tmp_assign_source_31;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_pyasn1$type$namedtype$$$class__3_DefaultedNamedType_111 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[107];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__3_DefaultedNamedType_111, mod_consts[108], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[143];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__3_DefaultedNamedType_111, mod_consts[110], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_11;
        }
        frame_19761855b597f57ff421beb50e7f215c_4 = MAKE_CLASS_FRAME(codeobj_19761855b597f57ff421beb50e7f215c, module_pyasn1$type$namedtype, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_19761855b597f57ff421beb50e7f215c_4);
        assert(Py_REFCNT(frame_19761855b597f57ff421beb50e7f215c_4) == 2);

        // Framed code:
        {
            PyObject *tmp_expression_value_17;
            tmp_expression_value_17 = PyObject_GetItem(locals_pyasn1$type$namedtype$$$class__3_DefaultedNamedType_111, mod_consts[103]);

            if (tmp_expression_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[103]);

                    if (unlikely(tmp_expression_value_17 == NULL)) {
                        tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                    }

                    if (tmp_expression_value_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 112;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_17);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[86]);
            Py_DECREF(tmp_expression_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__3_DefaultedNamedType_111, mod_consts[86], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        tmp_dictset_value = Py_True;
        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__3_DefaultedNamedType_111, mod_consts[29], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_19761855b597f57ff421beb50e7f215c_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_19761855b597f57ff421beb50e7f215c_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_19761855b597f57ff421beb50e7f215c_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_19761855b597f57ff421beb50e7f215c_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_19761855b597f57ff421beb50e7f215c_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_11;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto try_except_handler_11;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_10;
            } else {
                goto branch_no_10;
            }
        }
        branch_yes_10:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__3_DefaultedNamedType_111, mod_consts[141], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_11;
        }
        branch_no_10:;
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_12 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_11 = mod_consts[143];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_11 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = locals_pyasn1$type$namedtype$$$class__3_DefaultedNamedType_111;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_d06fbe19331cf7415478cff39740ae86->m_frame.f_lineno = 111;
            tmp_assign_source_32 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto try_except_handler_11;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_32;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_31 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_31);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_pyasn1$type$namedtype$$$class__3_DefaultedNamedType_111);
        locals_pyasn1$type$namedtype$$$class__3_DefaultedNamedType_111 = NULL;
        goto try_return_handler_10;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyasn1$type$namedtype$$$class__3_DefaultedNamedType_111);
        locals_pyasn1$type$namedtype$$$class__3_DefaultedNamedType_111 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 111;
        goto try_except_handler_9;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_31);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_dircall_arg1_4;
        tmp_dircall_arg1_4 = mod_consts[101];
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_33 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_12;
        }
        tmp_condition_result_17 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_18 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[41];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_18, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_12;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_12;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_35 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_35;
    }
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_19 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_19, mod_consts[102]);
        tmp_condition_result_18 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_20 = tmp_class_creation_4__metaclass;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[102]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_12;
        }
        tmp_tuple_element_12 = mod_consts[48];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_12 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_d06fbe19331cf7415478cff39740ae86->m_frame.f_lineno = 117;
        tmp_assign_source_36 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_36;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_21 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_21, mod_consts[104]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_12;
        }
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[105];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_4 = mod_consts[10];
        tmp_getattr_default_4 = mod_consts[106];
        tmp_tuple_element_13 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_12;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_22;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_22 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_22 == NULL));
            tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[10]);
            Py_DECREF(tmp_expression_value_22);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_12;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_12;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 117;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_12;
    }
    branch_no_12:;
    goto branch_end_11;
    branch_no_11:;
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_37;
    }
    branch_end_11:;
    {
        PyObject *tmp_assign_source_38;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[107];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[108], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_14;
        }
        tmp_dictset_value = mod_consts[144];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_14;
        }
        tmp_dictset_value = mod_consts[48];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[110], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_14;
        }
        frame_7ea728e7e08cdf982abdfa38d885a1e7_5 = MAKE_CLASS_FRAME(codeobj_7ea728e7e08cdf982abdfa38d885a1e7, module_pyasn1$type$namedtype, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_7ea728e7e08cdf982abdfa38d885a1e7_5);
        assert(Py_REFCNT(frame_7ea728e7e08cdf982abdfa38d885a1e7_5) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__18___init__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[112], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__19___repr__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[114], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__20___eq__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[116], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__21___ne__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[118], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__22___lt__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[120], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__23___le__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[122], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__24___gt__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[124], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__25___ge__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[126], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__26___hash__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[128], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__27___getitem__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[104], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__28___contains__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[155], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__29___iter__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[131], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__31___bool__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[158], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__32___len__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[160], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__33_values();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[162], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__34_keys();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[164], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__35_items();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[166], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__36_clone();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[168], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_tuple_element_14;
            tmp_tuple_element_14 = PyObject_GetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[170]);

            if (tmp_tuple_element_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_14 = (PyObject *)&PyBaseObject_Type;
                    Py_INCREF(tmp_tuple_element_14);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_assign_source_39 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_39, 0, tmp_tuple_element_14);
            assert(tmp_NamedTypes$class_creation_1__bases_orig == NULL);
            tmp_NamedTypes$class_creation_1__bases_orig = tmp_assign_source_39;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_dircall_arg1_5;
            CHECK_OBJECT(tmp_NamedTypes$class_creation_1__bases_orig);
            tmp_dircall_arg1_5 = tmp_NamedTypes$class_creation_1__bases_orig;
            Py_INCREF(tmp_dircall_arg1_5);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
                tmp_assign_source_40 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "o";
                goto try_except_handler_15;
            }
            assert(tmp_NamedTypes$class_creation_1__bases == NULL);
            tmp_NamedTypes$class_creation_1__bases = tmp_assign_source_40;
        }
        {
            PyObject *tmp_assign_source_41;
            tmp_assign_source_41 = MAKE_DICT_EMPTY();
            assert(tmp_NamedTypes$class_creation_1__class_decl_dict == NULL);
            tmp_NamedTypes$class_creation_1__class_decl_dict = tmp_assign_source_41;
        }
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_metaclass_value_5;
            nuitka_bool tmp_condition_result_20;
            int tmp_truth_name_5;
            PyObject *tmp_type_arg_9;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_bases_value_5;
            CHECK_OBJECT(tmp_NamedTypes$class_creation_1__bases);
            tmp_truth_name_5 = CHECK_IF_TRUE(tmp_NamedTypes$class_creation_1__bases);
            if (tmp_truth_name_5 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "o";
                goto try_except_handler_15;
            }
            tmp_condition_result_20 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            CHECK_OBJECT(tmp_NamedTypes$class_creation_1__bases);
            tmp_expression_value_23 = tmp_NamedTypes$class_creation_1__bases;
            tmp_subscript_value_5 = mod_consts[41];
            tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_23, tmp_subscript_value_5, 0);
            if (tmp_type_arg_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "o";
                goto try_except_handler_15;
            }
            tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
            Py_DECREF(tmp_type_arg_9);
            if (tmp_metaclass_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "o";
                goto try_except_handler_15;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_5);
            condexpr_end_8:;
            CHECK_OBJECT(tmp_NamedTypes$class_creation_1__bases);
            tmp_bases_value_5 = tmp_NamedTypes$class_creation_1__bases;
            tmp_assign_source_42 = SELECT_METACLASS(tmp_metaclass_value_5, tmp_bases_value_5);
            Py_DECREF(tmp_metaclass_value_5);
            if (tmp_assign_source_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "o";
                goto try_except_handler_15;
            }
            assert(tmp_NamedTypes$class_creation_1__metaclass == NULL);
            tmp_NamedTypes$class_creation_1__metaclass = tmp_assign_source_42;
        }
        {
            nuitka_bool tmp_condition_result_21;
            PyObject *tmp_expression_value_24;
            CHECK_OBJECT(tmp_NamedTypes$class_creation_1__metaclass);
            tmp_expression_value_24 = tmp_NamedTypes$class_creation_1__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_24, mod_consts[102]);
            tmp_condition_result_21 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
                goto branch_yes_13;
            } else {
                goto branch_no_13;
            }
        }
        branch_yes_13:;
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_called_value_14;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_NamedTypes$class_creation_1__metaclass);
            tmp_expression_value_25 = tmp_NamedTypes$class_creation_1__metaclass;
            tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[102]);
            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "o";
                goto try_except_handler_15;
            }
            tmp_tuple_element_15 = mod_consts[49];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_NamedTypes$class_creation_1__bases);
            tmp_tuple_element_15 = tmp_NamedTypes$class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_NamedTypes$class_creation_1__class_decl_dict);
            tmp_kwargs_value_8 = tmp_NamedTypes$class_creation_1__class_decl_dict;
            frame_7ea728e7e08cdf982abdfa38d885a1e7_5->m_frame.f_lineno = 238;
            tmp_assign_source_43 = CALL_FUNCTION(tmp_called_value_14, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "o";
                goto try_except_handler_15;
            }
            assert(tmp_NamedTypes$class_creation_1__prepared == NULL);
            tmp_NamedTypes$class_creation_1__prepared = tmp_assign_source_43;
        }
        {
            bool tmp_condition_result_22;
            PyObject *tmp_operand_value_5;
            PyObject *tmp_expression_value_26;
            CHECK_OBJECT(tmp_NamedTypes$class_creation_1__prepared);
            tmp_expression_value_26 = tmp_NamedTypes$class_creation_1__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_26, mod_consts[104]);
            tmp_operand_value_5 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "o";
                goto try_except_handler_15;
            }
            tmp_condition_result_22 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_22 != false) {
                goto branch_yes_14;
            } else {
                goto branch_no_14;
            }
        }
        branch_yes_14:;
        {
            PyObject *tmp_raise_type_5;
            PyObject *tmp_raise_value_5;
            PyObject *tmp_mod_expr_left_5;
            PyObject *tmp_mod_expr_right_5;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_getattr_target_5;
            PyObject *tmp_getattr_attr_5;
            PyObject *tmp_getattr_default_5;
            tmp_raise_type_5 = PyExc_TypeError;
            tmp_mod_expr_left_5 = mod_consts[105];
            CHECK_OBJECT(tmp_NamedTypes$class_creation_1__metaclass);
            tmp_getattr_target_5 = tmp_NamedTypes$class_creation_1__metaclass;
            tmp_getattr_attr_5 = mod_consts[10];
            tmp_getattr_default_5 = mod_consts[106];
            tmp_tuple_element_16 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "o";
                goto try_except_handler_15;
            }
            tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_27;
                PyObject *tmp_type_arg_10;
                PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_16);
                CHECK_OBJECT(tmp_NamedTypes$class_creation_1__prepared);
                tmp_type_arg_10 = tmp_NamedTypes$class_creation_1__prepared;
                tmp_expression_value_27 = BUILTIN_TYPE1(tmp_type_arg_10);
                assert(!(tmp_expression_value_27 == NULL));
                tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[10]);
                Py_DECREF(tmp_expression_value_27);
                if (tmp_tuple_element_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 238;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_16);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_mod_expr_right_5);
            goto try_except_handler_15;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
            Py_DECREF(tmp_mod_expr_right_5);
            if (tmp_raise_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "o";
                goto try_except_handler_15;
            }
            exception_type = tmp_raise_type_5;
            Py_INCREF(tmp_raise_type_5);
            exception_value = tmp_raise_value_5;
            exception_lineno = 238;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_15;
        }
        branch_no_14:;
        goto branch_end_13;
        branch_no_13:;
        {
            PyObject *tmp_assign_source_44;
            tmp_assign_source_44 = MAKE_DICT_EMPTY();
            assert(tmp_NamedTypes$class_creation_1__prepared == NULL);
            tmp_NamedTypes$class_creation_1__prepared = tmp_assign_source_44;
        }
        branch_end_13:;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_NamedTypes$class_creation_1__prepared);
            tmp_set_locals_5 = tmp_NamedTypes$class_creation_1__prepared;
            locals_pyasn1$type$namedtype$$$class__5_PostponedError_238 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[107];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__5_PostponedError_238, mod_consts[108], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_2 = "o";
            goto try_except_handler_17;
        }
        tmp_dictset_value = mod_consts[171];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__5_PostponedError_238, mod_consts[110], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_2 = "o";
            goto try_except_handler_17;
        }
        frame_93f15f01abd5ddd9362d5ffaacfbf981_6 = MAKE_CLASS_FRAME(codeobj_93f15f01abd5ddd9362d5ffaacfbf981, module_pyasn1$type$namedtype, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_93f15f01abd5ddd9362d5ffaacfbf981_6);
        assert(Py_REFCNT(frame_93f15f01abd5ddd9362d5ffaacfbf981_6) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__37___init__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__5_PostponedError_238, mod_consts[112], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_3 = "o";
            goto frame_exception_exit_6;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__38___getitem__();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__5_PostponedError_238, mod_consts[104], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_3 = "o";
            goto frame_exception_exit_6;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_93f15f01abd5ddd9362d5ffaacfbf981_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_93f15f01abd5ddd9362d5ffaacfbf981_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_93f15f01abd5ddd9362d5ffaacfbf981_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_93f15f01abd5ddd9362d5ffaacfbf981_6,
            type_description_3,
            outline_4_var___class__
        );



        assertFrameObject(frame_93f15f01abd5ddd9362d5ffaacfbf981_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_5:;
        type_description_2 = "o";
        goto try_except_handler_17;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_23;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_NamedTypes$class_creation_1__bases);
            tmp_cmp_expr_left_5 = tmp_NamedTypes$class_creation_1__bases;
            CHECK_OBJECT(tmp_NamedTypes$class_creation_1__bases_orig);
            tmp_cmp_expr_right_5 = tmp_NamedTypes$class_creation_1__bases_orig;
            tmp_condition_result_23 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_23 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        CHECK_OBJECT(tmp_NamedTypes$class_creation_1__bases_orig);
        tmp_dictset_value = tmp_NamedTypes$class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__5_PostponedError_238, mod_consts[141], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_2 = "o";
            goto try_except_handler_17;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_value_9;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_kwargs_value_9;
            CHECK_OBJECT(tmp_NamedTypes$class_creation_1__metaclass);
            tmp_called_value_15 = tmp_NamedTypes$class_creation_1__metaclass;
            tmp_tuple_element_17 = mod_consts[49];
            tmp_args_value_9 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_NamedTypes$class_creation_1__bases);
            tmp_tuple_element_17 = tmp_NamedTypes$class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_17);
            tmp_tuple_element_17 = locals_pyasn1$type$namedtype$$$class__5_PostponedError_238;
            PyTuple_SET_ITEM0(tmp_args_value_9, 2, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_NamedTypes$class_creation_1__class_decl_dict);
            tmp_kwargs_value_9 = tmp_NamedTypes$class_creation_1__class_decl_dict;
            frame_7ea728e7e08cdf982abdfa38d885a1e7_5->m_frame.f_lineno = 238;
            tmp_assign_source_45 = CALL_FUNCTION(tmp_called_value_15, tmp_args_value_9, tmp_kwargs_value_9);
            Py_DECREF(tmp_args_value_9);
            if (tmp_assign_source_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_45;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_dictset_value = outline_4_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_17;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        Py_DECREF(locals_pyasn1$type$namedtype$$$class__5_PostponedError_238);
        locals_pyasn1$type$namedtype$$$class__5_PostponedError_238 = NULL;
        goto try_return_handler_16;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyasn1$type$namedtype$$$class__5_PostponedError_238);
        locals_pyasn1$type$namedtype$$$class__5_PostponedError_238 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 238;
        goto try_except_handler_15;
        outline_result_5:;
        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[49], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_2 = "o";
            goto try_except_handler_15;
        }
        goto try_end_6;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_NamedTypes$class_creation_1__bases_orig);
        Py_DECREF(tmp_NamedTypes$class_creation_1__bases_orig);
        tmp_NamedTypes$class_creation_1__bases_orig = NULL;
        Py_XDECREF(tmp_NamedTypes$class_creation_1__bases);
        tmp_NamedTypes$class_creation_1__bases = NULL;
        Py_XDECREF(tmp_NamedTypes$class_creation_1__class_decl_dict);
        tmp_NamedTypes$class_creation_1__class_decl_dict = NULL;
        Py_XDECREF(tmp_NamedTypes$class_creation_1__metaclass);
        tmp_NamedTypes$class_creation_1__metaclass = NULL;
        Py_XDECREF(tmp_NamedTypes$class_creation_1__prepared);
        tmp_NamedTypes$class_creation_1__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto frame_exception_exit_5;
        // End of try:
        try_end_6:;
        CHECK_OBJECT(tmp_NamedTypes$class_creation_1__bases_orig);
        Py_DECREF(tmp_NamedTypes$class_creation_1__bases_orig);
        tmp_NamedTypes$class_creation_1__bases_orig = NULL;
        CHECK_OBJECT(tmp_NamedTypes$class_creation_1__bases);
        Py_DECREF(tmp_NamedTypes$class_creation_1__bases);
        tmp_NamedTypes$class_creation_1__bases = NULL;
        CHECK_OBJECT(tmp_NamedTypes$class_creation_1__class_decl_dict);
        Py_DECREF(tmp_NamedTypes$class_creation_1__class_decl_dict);
        tmp_NamedTypes$class_creation_1__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_NamedTypes$class_creation_1__metaclass);
        Py_DECREF(tmp_NamedTypes$class_creation_1__metaclass);
        tmp_NamedTypes$class_creation_1__metaclass = NULL;
        CHECK_OBJECT(tmp_NamedTypes$class_creation_1__prepared);
        Py_DECREF(tmp_NamedTypes$class_creation_1__prepared);
        tmp_NamedTypes$class_creation_1__prepared = NULL;


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__39___computeTagToPosMap();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[17], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__40___computeNameToPosMap();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[15], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__41___computeAmbiguousTypes();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[20], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__42_getTypeByPosition();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[180], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__43_getPositionByType();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[69], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__44_getNameByPosition();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[183], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__45_getPositionByName();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[185], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__46_getTagMapNearPosition();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[187], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__47_getPositionNearType();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[189], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__48___computeMinTagSet();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[13], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_8;
            tmp_res = MAPPING_HAS_ITEM(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[133]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 457;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_condition_result_24 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_9;
            } else {
                goto condexpr_false_9;
            }
            condexpr_true_9:;
            tmp_called_value_16 = PyObject_GetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[133]);

            if (unlikely(tmp_called_value_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 457;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 457;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }


            tmp_args_element_value_7 = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__49_minTagSet();

            frame_7ea728e7e08cdf982abdfa38d885a1e7_5->m_frame.f_lineno = 457;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 457;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            goto condexpr_end_9;
            condexpr_false_9:;
            tmp_called_value_17 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_8 = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__49_minTagSet();

            frame_7ea728e7e08cdf982abdfa38d885a1e7_5->m_frame.f_lineno = 457;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 457;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            condexpr_end_9:;
            tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[71], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 457;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__50___computeTagMaps();

        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[22], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        {
            nuitka_bool tmp_condition_result_25;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_10;
            tmp_res = MAPPING_HAS_ITEM(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[133]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 493;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_condition_result_25 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_10;
            } else {
                goto condexpr_false_10;
            }
            condexpr_true_10:;
            tmp_called_value_18 = PyObject_GetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[133]);

            if (unlikely(tmp_called_value_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 493;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_called_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 493;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }


            tmp_args_element_value_9 = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__51_tagMap();

            frame_7ea728e7e08cdf982abdfa38d885a1e7_5->m_frame.f_lineno = 493;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 493;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_called_value_19 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_10 = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__51_tagMap();

            frame_7ea728e7e08cdf982abdfa38d885a1e7_5->m_frame.f_lineno = 493;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 493;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            condexpr_end_10:;
            tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 493;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            nuitka_bool tmp_condition_result_26;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_12;
            tmp_res = MAPPING_HAS_ITEM(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[133]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 517;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_condition_result_26 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_11;
            } else {
                goto condexpr_false_11;
            }
            condexpr_true_11:;
            tmp_called_value_20 = PyObject_GetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[133]);

            if (unlikely(tmp_called_value_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 517;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_called_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 517;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }


            tmp_args_element_value_11 = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__52_tagMapUnique();

            frame_7ea728e7e08cdf982abdfa38d885a1e7_5->m_frame.f_lineno = 517;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_11);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 517;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_called_value_21 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_12 = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__52_tagMapUnique();

            frame_7ea728e7e08cdf982abdfa38d885a1e7_5->m_frame.f_lineno = 517;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 517;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            condexpr_end_11:;
            tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[197], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 517;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            nuitka_bool tmp_condition_result_27;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_14;
            tmp_res = MAPPING_HAS_ITEM(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[133]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_condition_result_27 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_12;
            } else {
                goto condexpr_false_12;
            }
            condexpr_true_12:;
            tmp_called_value_22 = PyObject_GetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[133]);

            if (unlikely(tmp_called_value_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 547;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }


            tmp_args_element_value_13 = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__53_hasOptionalOrDefault();

            frame_7ea728e7e08cdf982abdfa38d885a1e7_5->m_frame.f_lineno = 547;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            goto condexpr_end_12;
            condexpr_false_12:;
            tmp_called_value_23 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_14 = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__53_hasOptionalOrDefault();

            frame_7ea728e7e08cdf982abdfa38d885a1e7_5->m_frame.f_lineno = 547;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            condexpr_end_12:;
            tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[199], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            nuitka_bool tmp_condition_result_28;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_element_value_16;
            tmp_res = MAPPING_HAS_ITEM(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[133]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_condition_result_28 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_13;
            } else {
                goto condexpr_false_13;
            }
            condexpr_true_13:;
            tmp_called_value_24 = PyObject_GetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[133]);

            if (unlikely(tmp_called_value_24 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 551;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_called_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }


            tmp_args_element_value_15 = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__54_hasOpenTypes();

            frame_7ea728e7e08cdf982abdfa38d885a1e7_5->m_frame.f_lineno = 551;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            goto condexpr_end_13;
            condexpr_false_13:;
            tmp_called_value_25 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_16 = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__54_hasOpenTypes();

            frame_7ea728e7e08cdf982abdfa38d885a1e7_5->m_frame.f_lineno = 551;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            condexpr_end_13:;
            tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[201], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            nuitka_bool tmp_condition_result_29;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_element_value_18;
            tmp_res = MAPPING_HAS_ITEM(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[133]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_condition_result_29 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_14;
            } else {
                goto condexpr_false_14;
            }
            condexpr_true_14:;
            tmp_called_value_26 = PyObject_GetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[133]);

            if (unlikely(tmp_called_value_26 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 555;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_called_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }


            tmp_args_element_value_17 = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__55_namedTypes();

            frame_7ea728e7e08cdf982abdfa38d885a1e7_5->m_frame.f_lineno = 555;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_17);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            goto condexpr_end_14;
            condexpr_false_14:;
            tmp_called_value_27 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_18 = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__55_namedTypes();

            frame_7ea728e7e08cdf982abdfa38d885a1e7_5->m_frame.f_lineno = 555;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            condexpr_end_14:;
            tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[203], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            nuitka_bool tmp_condition_result_30;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_element_value_20;
            tmp_res = MAPPING_HAS_ITEM(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[133]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_condition_result_30 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_15;
            } else {
                goto condexpr_false_15;
            }
            condexpr_true_15:;
            tmp_called_value_28 = PyObject_GetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[133]);

            if (unlikely(tmp_called_value_28 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 559;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_called_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }


            tmp_args_element_value_19 = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__56_requiredComponents();

            frame_7ea728e7e08cdf982abdfa38d885a1e7_5->m_frame.f_lineno = 559;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_19);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            goto condexpr_end_15;
            condexpr_false_15:;
            tmp_called_value_29 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_20 = MAKE_FUNCTION_pyasn1$type$namedtype$$$function__56_requiredComponents();

            frame_7ea728e7e08cdf982abdfa38d885a1e7_5->m_frame.f_lineno = 559;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            condexpr_end_15:;
            tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[205], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7ea728e7e08cdf982abdfa38d885a1e7_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7ea728e7e08cdf982abdfa38d885a1e7_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7ea728e7e08cdf982abdfa38d885a1e7_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7ea728e7e08cdf982abdfa38d885a1e7_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_7ea728e7e08cdf982abdfa38d885a1e7_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_4:;

        goto try_except_handler_14;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_31;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_4__bases;
            tmp_cmp_expr_right_6 = mod_consts[101];
            tmp_condition_result_31 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_31 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto try_except_handler_14;
            }
            if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
                goto branch_yes_16;
            } else {
                goto branch_no_16;
            }
        }
        branch_yes_16:;
        tmp_dictset_value = mod_consts[101];
        tmp_res = PyObject_SetItem(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117, mod_consts[141], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_14;
        }
        branch_no_16:;
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_30 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_18 = mod_consts[48];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_18 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_4__class_decl_dict;
            frame_d06fbe19331cf7415478cff39740ae86->m_frame.f_lineno = 117;
            tmp_assign_source_46 = CALL_FUNCTION(tmp_called_value_30, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto try_except_handler_14;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_46;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_38 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_38);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        Py_DECREF(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117);
        locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117 = NULL;
        goto try_return_handler_13;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117);
        locals_pyasn1$type$namedtype$$$class__4_NamedTypes_117 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto try_except_handler_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 117;
        goto try_except_handler_12;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_38);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_6;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d06fbe19331cf7415478cff39740ae86, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d06fbe19331cf7415478cff39740ae86->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d06fbe19331cf7415478cff39740ae86, exception_lineno);
    }



    assertFrameObject(frame_d06fbe19331cf7415478cff39740ae86);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_6:;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyasn1.type.namedtype", false);

    Py_INCREF(module_pyasn1$type$namedtype);
    return module_pyasn1$type$namedtype;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$namedtype, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("pyasn1$type$namedtype", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
