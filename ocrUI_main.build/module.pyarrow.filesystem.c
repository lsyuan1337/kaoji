/* Generated code for Python module 'pyarrow.filesystem'
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

/* The "module_pyarrow$filesystem" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyarrow$filesystem;
PyDictObject *moduledict_pyarrow$filesystem;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[237];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[237];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("pyarrow.filesystem"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 237; i++) {
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
void checkModuleConstants_pyarrow$filesystem(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 237; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_4406a7e782bd112fa513f8e34fd5a157;
static PyCodeObject *codeobj_d1ccf487c8f98e1cbc6de16b689bbf72;
static PyCodeObject *codeobj_901a22f5724cb31f758a4314c50f37d3;
static PyCodeObject *codeobj_7bee16186d65b02db50581a0f2503cd0;
static PyCodeObject *codeobj_d4ec06e4d07191483fb122867fd305e9;
static PyCodeObject *codeobj_be78addffee29d0b3f4e06082445f2e9;
static PyCodeObject *codeobj_35c032802b0296b7bcd5b3b991bdfe59;
static PyCodeObject *codeobj_33af982ede7fc6280ab86d08ba460169;
static PyCodeObject *codeobj_a23cc791937381618ec7f26a61f03fa9;
static PyCodeObject *codeobj_4a05af87862755c4b44ff700d68e60ee;
static PyCodeObject *codeobj_640ee17012522cb53be2608f661e8155;
static PyCodeObject *codeobj_67d1dd131493422a901f4b859b019f01;
static PyCodeObject *codeobj_874e8fd93ad757a72d1f1f962ed5008a;
static PyCodeObject *codeobj_d476241b9970f0870d7fdb65a073a658;
static PyCodeObject *codeobj_76f8f7635ca730313c4116f4b2fc1951;
static PyCodeObject *codeobj_f91b308547db8e8d3bd3ec827692f3f8;
static PyCodeObject *codeobj_bbcd0f099e8836266b6f509e54d667ab;
static PyCodeObject *codeobj_44adb9ae1cc91144e3e0d27ff1564e13;
static PyCodeObject *codeobj_e83479ae842abb5987f05d61dbfeb89d;
static PyCodeObject *codeobj_c5660fa95f21b00d359fd3799f497d7d;
static PyCodeObject *codeobj_85971a8d1a015bbf94e08c8dd28d2019;
static PyCodeObject *codeobj_36bd1b68ca475641b870bff96136df09;
static PyCodeObject *codeobj_5956dc43cfe9826196f2cf6ba86625c4;
static PyCodeObject *codeobj_05c5a1d48bf547a952c73f401b9a08ae;
static PyCodeObject *codeobj_b721d3bede8b20267fec912f6930a283;
static PyCodeObject *codeobj_0df0d51f6f94de4a3e9a14610679ffde;
static PyCodeObject *codeobj_83073f412eabf5d48e67aa6cd50c5d7d;
static PyCodeObject *codeobj_45fe04c005444488bca35a3f8f55d241;
static PyCodeObject *codeobj_16459607660e99b9d014a78a1363f425;
static PyCodeObject *codeobj_e0c1de067114a58779ae8c82c215a25a;
static PyCodeObject *codeobj_7e6599633bc6e7f730db7daf5896ba5c;
static PyCodeObject *codeobj_fd5f6572f427b5146952ce1768b96d1a;
static PyCodeObject *codeobj_94058a196af52a03458e7617f21d039e;
static PyCodeObject *codeobj_a29f455eb169921a314e2e0e66e18e3a;
static PyCodeObject *codeobj_5d0f54fe5ce789125e2d0d215a1ddafb;
static PyCodeObject *codeobj_b09a8b548d1bd1a648852a3b96134ff5;
static PyCodeObject *codeobj_e62e694acd1e8c50266e180a584119fc;
static PyCodeObject *codeobj_f7055b796f41e29d79adb186c48ed8d2;
static PyCodeObject *codeobj_a306fa4298d809f2c7b2925f6f548be1;
static PyCodeObject *codeobj_0d8db8a7e14658aff4c77c16dc4a0a83;
static PyCodeObject *codeobj_7655e9ab10b9fb34014c6087aedc8d5c;
static PyCodeObject *codeobj_c1dc99ad0eeca9e2720507c8d3aeb79c;
static PyCodeObject *codeobj_8fc27b0f8851ddf09690cec72a7efc8c;
static PyCodeObject *codeobj_545559ee84dcbe006f4a64535c84c0e7;
static PyCodeObject *codeobj_7f241669e91b02a8512ee99f8d2e8cb4;
static PyCodeObject *codeobj_8d5cdf57ffc3d40a081ac6177b20f276;
static PyCodeObject *codeobj_0b10c62f75abf1482bedd9ea7fb3c54c;
static PyCodeObject *codeobj_d0ac4960cb5feed7ca8c9ceae2a7787d;
static PyCodeObject *codeobj_1a16ef79151d81ef9fcf0e7a0a28628a;
static PyCodeObject *codeobj_170ed234e59be6961f01a01c5437bc46;
static PyCodeObject *codeobj_7b364ab455877cbb6d9ca3b0b9b3a0da;
static PyCodeObject *codeobj_c0286ef63e67bb22c6a30d7332e2f388;
static PyCodeObject *codeobj_697af669e42691ce5ee119c873a0e53b;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[211]); CHECK_OBJECT(module_filename_obj);
    codeobj_4406a7e782bd112fa513f8e34fd5a157 = MAKE_CODE_OBJECT(module_filename_obj, 266, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[61], mod_consts[61], mod_consts[212], NULL, 1, 0, 0);
    codeobj_d1ccf487c8f98e1cbc6de16b689bbf72 = MAKE_CODE_OBJECT(module_filename_obj, 425, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[213], mod_consts[213], mod_consts[214], NULL, 1, 0, 0);
    codeobj_901a22f5724cb31f758a4314c50f37d3 = MAKE_CODE_OBJECT(module_filename_obj, 427, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[213], mod_consts[213], mod_consts[215], NULL, 1, 0, 0);
    codeobj_7bee16186d65b02db50581a0f2503cd0 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[216], mod_consts[216], NULL, NULL, 0, 0, 0);
    codeobj_d4ec06e4d07191483fb122867fd305e9 = MAKE_CODE_OBJECT(module_filename_obj, 315, CO_NOFREE, mod_consts[193], mod_consts[193], mod_consts[217], NULL, 0, 0, 0);
    codeobj_be78addffee29d0b3f4e06082445f2e9 = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_NOFREE, mod_consts[98], mod_consts[98], mod_consts[217], NULL, 0, 0, 0);
    codeobj_35c032802b0296b7bcd5b3b991bdfe59 = MAKE_CODE_OBJECT(module_filename_obj, 242, CO_NOFREE, mod_consts[56], mod_consts[56], mod_consts[217], NULL, 0, 0, 0);
    codeobj_33af982ede7fc6280ab86d08ba460169 = MAKE_CODE_OBJECT(module_filename_obj, 381, CO_NOFREE, mod_consts[206], mod_consts[206], mod_consts[217], NULL, 0, 0, 0);
    codeobj_a23cc791937381618ec7f26a61f03fa9 = MAKE_CODE_OBJECT(module_filename_obj, 246, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[51], mod_consts[51], mod_consts[218], mod_consts[217], 1, 0, 0);
    codeobj_4a05af87862755c4b44ff700d68e60ee = MAKE_CODE_OBJECT(module_filename_obj, 320, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[51], mod_consts[51], mod_consts[219], NULL, 2, 0, 0);
    codeobj_640ee17012522cb53be2608f661e8155 = MAKE_CODE_OBJECT(module_filename_obj, 443, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[106], mod_consts[106], mod_consts[220], NULL, 1, 0, 0);
    codeobj_67d1dd131493422a901f4b859b019f01 = MAKE_CODE_OBJECT(module_filename_obj, 250, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[57], mod_consts[57], mod_consts[221], NULL, 1, 0, 0);
    codeobj_874e8fd93ad757a72d1f1f962ed5008a = MAKE_CODE_OBJECT(module_filename_obj, 191, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[162], mod_consts[162], mod_consts[222], NULL, 1, 0, 0);
    codeobj_d476241b9970f0870d7fdb65a073a658 = MAKE_CODE_OBJECT(module_filename_obj, 286, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[162], mod_consts[162], mod_consts[222], NULL, 1, 0, 0);
    codeobj_76f8f7635ca730313c4116f4b2fc1951 = MAKE_CODE_OBJECT(module_filename_obj, 335, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[162], mod_consts[162], mod_consts[222], NULL, 1, 0, 0);
    codeobj_f91b308547db8e8d3bd3ec827692f3f8 = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[18], mod_consts[18], mod_consts[223], NULL, 1, 0, 0);
    codeobj_bbcd0f099e8836266b6f509e54d667ab = MAKE_CODE_OBJECT(module_filename_obj, 436, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[224], NULL, 1, 0, 0);
    codeobj_44adb9ae1cc91144e3e0d27ff1564e13 = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[144], mod_consts[144], mod_consts[225], NULL, 2, 0, 0);
    codeobj_e83479ae842abb5987f05d61dbfeb89d = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], mod_consts[26], mod_consts[226], NULL, 3, 0, 0);
    codeobj_c5660fa95f21b00d359fd3799f497d7d = MAKE_CODE_OBJECT(module_filename_obj, 343, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], mod_consts[26], mod_consts[226], NULL, 3, 0, 0);
    codeobj_85971a8d1a015bbf94e08c8dd28d2019 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[149], mod_consts[149], mod_consts[227], NULL, 2, 0, 0);
    codeobj_36bd1b68ca475641b870bff96136df09 = MAKE_CODE_OBJECT(module_filename_obj, 158, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], mod_consts[72], mod_consts[228], NULL, 2, 0, 0);
    codeobj_5956dc43cfe9826196f2cf6ba86625c4 = MAKE_CODE_OBJECT(module_filename_obj, 290, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], mod_consts[72], mod_consts[228], NULL, 2, 0, 0);
    codeobj_05c5a1d48bf547a952c73f401b9a08ae = MAKE_CODE_OBJECT(module_filename_obj, 348, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], mod_consts[72], mod_consts[228], NULL, 2, 0, 0);
    codeobj_b721d3bede8b20267fec912f6930a283 = MAKE_CODE_OBJECT(module_filename_obj, 258, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[180], mod_consts[180], mod_consts[221], NULL, 1, 0, 0);
    codeobj_0df0d51f6f94de4a3e9a14610679ffde = MAKE_CODE_OBJECT(module_filename_obj, 169, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[158], mod_consts[158], mod_consts[228], NULL, 2, 0, 0);
    codeobj_83073f412eabf5d48e67aa6cd50c5d7d = MAKE_CODE_OBJECT(module_filename_obj, 276, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[158], mod_consts[158], mod_consts[228], NULL, 2, 0, 0);
    codeobj_45fe04c005444488bca35a3f8f55d241 = MAKE_CODE_OBJECT(module_filename_obj, 327, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[158], mod_consts[158], mod_consts[228], NULL, 2, 0, 0);
    codeobj_16459607660e99b9d014a78a1363f425 = MAKE_CODE_OBJECT(module_filename_obj, 383, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[158], mod_consts[158], mod_consts[229], NULL, 2, 0, 0);
    codeobj_e0c1de067114a58779ae8c82c215a25a = MAKE_CODE_OBJECT(module_filename_obj, 180, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[160], mod_consts[160], mod_consts[228], NULL, 2, 0, 0);
    codeobj_7e6599633bc6e7f730db7daf5896ba5c = MAKE_CODE_OBJECT(module_filename_obj, 281, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[160], mod_consts[160], mod_consts[228], NULL, 2, 0, 0);
    codeobj_fd5f6572f427b5146952ce1768b96d1a = MAKE_CODE_OBJECT(module_filename_obj, 331, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[160], mod_consts[160], mod_consts[228], NULL, 2, 0, 0);
    codeobj_94058a196af52a03458e7617f21d039e = MAKE_CODE_OBJECT(module_filename_obj, 395, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[160], mod_consts[160], mod_consts[229], NULL, 2, 0, 0);
    codeobj_a29f455eb169921a314e2e0e66e18e3a = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[75], mod_consts[75], mod_consts[228], NULL, 2, 0, 0);
    codeobj_5d0f54fe5ce789125e2d0d215a1ddafb = MAKE_CODE_OBJECT(module_filename_obj, 263, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[75], mod_consts[75], mod_consts[228], NULL, 2, 0, 0);
    codeobj_b09a8b548d1bd1a648852a3b96134ff5 = MAKE_CODE_OBJECT(module_filename_obj, 369, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[75], mod_consts[75], mod_consts[230], NULL, 3, 0, 0);
    codeobj_e62e694acd1e8c50266e180a584119fc = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[65], mod_consts[65], mod_consts[231], NULL, 3, 0, 0);
    codeobj_f7055b796f41e29d79adb186c48ed8d2 = MAKE_CODE_OBJECT(module_filename_obj, 268, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[65], mod_consts[65], mod_consts[231], NULL, 3, 0, 0);
    codeobj_a306fa4298d809f2c7b2925f6f548be1 = MAKE_CODE_OBJECT(module_filename_obj, 353, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[65], mod_consts[65], mod_consts[231], NULL, 3, 0, 0);
    codeobj_0d8db8a7e14658aff4c77c16dc4a0a83 = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[153], mod_consts[153], mod_consts[232], NULL, 3, 0, 0);
    codeobj_7655e9ab10b9fb34014c6087aedc8d5c = MAKE_CODE_OBJECT(module_filename_obj, 231, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[0], mod_consts[0], mod_consts[233], NULL, 3, 0, 0);
    codeobj_c1dc99ad0eeca9e2720507c8d3aeb79c = MAKE_CODE_OBJECT(module_filename_obj, 295, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[0], mod_consts[0], mod_consts[233], NULL, 3, 0, 0);
    codeobj_8fc27b0f8851ddf09690cec72a7efc8c = MAKE_CODE_OBJECT(module_filename_obj, 361, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[0], mod_consts[0], mod_consts[233], NULL, 3, 0, 0);
    codeobj_545559ee84dcbe006f4a64535c84c0e7 = MAKE_CODE_OBJECT(module_filename_obj, 237, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[22], mod_consts[222], NULL, 1, 0, 0);
    codeobj_7f241669e91b02a8512ee99f8d2e8cb4 = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[22], mod_consts[222], NULL, 1, 0, 0);
    codeobj_8d5cdf57ffc3d40a081ac6177b20f276 = MAKE_CODE_OBJECT(module_filename_obj, 198, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[165], mod_consts[165], mod_consts[234], NULL, 7, 0, 0);
    codeobj_0b10c62f75abf1482bedd9ea7fb3c54c = MAKE_CODE_OBJECT(module_filename_obj, 132, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[29], mod_consts[29], mod_consts[232], NULL, 3, 0, 0);
    codeobj_d0ac4960cb5feed7ca8c9ceae2a7787d = MAKE_CODE_OBJECT(module_filename_obj, 462, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[210], mod_consts[210], mod_consts[235], NULL, 2, 0, 0);
    codeobj_1a16ef79151d81ef9fcf0e7a0a28628a = MAKE_CODE_OBJECT(module_filename_obj, 120, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[71], mod_consts[71], mod_consts[226], NULL, 3, 0, 0);
    codeobj_170ed234e59be6961f01a01c5437bc46 = MAKE_CODE_OBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[228], NULL, 2, 0, 0);
    codeobj_7b364ab455877cbb6d9ca3b0b9b3a0da = MAKE_CODE_OBJECT(module_filename_obj, 307, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[228], NULL, 2, 0, 0);
    codeobj_c0286ef63e67bb22c6a30d7332e2f388 = MAKE_CODE_OBJECT(module_filename_obj, 373, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[228], NULL, 2, 0, 0);
    codeobj_697af669e42691ce5ee119c873a0e53b = MAKE_CODE_OBJECT(module_filename_obj, 404, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[236], NULL, 3, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_pyarrow$filesystem$$$function__21_ls$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_pyarrow$filesystem$$$function__42_walk$$$genobj__1_walk(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__10_mkdir(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__11_exists();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__12_isdir();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__13_isfile();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__14__isfilestore();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__15_read_parquet(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__16_open(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__17_pathsep();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__18___init__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__19__get_instance();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__1_cat();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__20_get_instance();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__21_ls();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__22_mkdir(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__23_isdir();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__24_isfile();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__25__isfilestore();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__26_exists();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__27_open(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__28_pathsep();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__29_walk();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__2_ls();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__30___init__();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__31_isdir();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__32_isfile();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__33__isfilestore();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__34_delete(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__35_exists();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__36_mkdir(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__37_open(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__38_ls(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__39_walk();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__3_delete(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__40_isdir();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__41_isfile();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__42_walk(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__43__sanitize_s3();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__44__ensure_filesystem();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__45_resolve_filesystem_and_path(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__4_disk_usage();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__5__path_join();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__6_stat();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__7_rm(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__8_mv();


static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__9_rename();


// The module function definitions.
static PyObject *impl_pyarrow$filesystem$$$function__1_cat(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *var_f = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_44adb9ae1cc91144e3e0d27ff1564e13;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_44adb9ae1cc91144e3e0d27ff1564e13 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_44adb9ae1cc91144e3e0d27ff1564e13)) {
        Py_XDECREF(cache_frame_44adb9ae1cc91144e3e0d27ff1564e13);

#if _DEBUG_REFCOUNTS
        if (cache_frame_44adb9ae1cc91144e3e0d27ff1564e13 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_44adb9ae1cc91144e3e0d27ff1564e13 = MAKE_FUNCTION_FRAME(codeobj_44adb9ae1cc91144e3e0d27ff1564e13, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_44adb9ae1cc91144e3e0d27ff1564e13->m_type_description == NULL);
    frame_44adb9ae1cc91144e3e0d27ff1564e13 = cache_frame_44adb9ae1cc91144e3e0d27ff1564e13;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_44adb9ae1cc91144e3e0d27ff1564e13);
    assert(Py_REFCNT(frame_44adb9ae1cc91144e3e0d27ff1564e13) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_path);
        tmp_args_element_value_1 = par_path;
        tmp_args_element_value_2 = mod_consts[1];
        frame_44adb9ae1cc91144e3e0d27ff1564e13->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[0],
                call_args
            );
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_1 = tmp_with_1__source;
        tmp_called_value_1 = LOOKUP_SPECIAL(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_44adb9ae1cc91144e3e0d27ff1564e13->m_frame.f_lineno = 54;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_2 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL(tmp_expression_value_2, mod_consts[3]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_5 = tmp_with_1__enter;
        assert(var_f == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_f = tmp_assign_source_5;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_f);
        tmp_called_instance_2 = var_f;
        frame_44adb9ae1cc91144e3e0d27ff1564e13->m_frame.f_lineno = 55;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[4]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        goto try_return_handler_3;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_44adb9ae1cc91144e3e0d27ff1564e13, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_44adb9ae1cc91144e3e0d27ff1564e13, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
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
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_6;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_2 = tmp_with_1__exit;
        tmp_args_element_value_3 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_4 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_5 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_44adb9ae1cc91144e3e0d27ff1564e13->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 55;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_44adb9ae1cc91144e3e0d27ff1564e13->m_frame) frame_44adb9ae1cc91144e3e0d27ff1564e13->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_5;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 54;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_44adb9ae1cc91144e3e0d27ff1564e13->m_frame) frame_44adb9ae1cc91144e3e0d27ff1564e13->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_5;
    branch_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_3:;
    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_3 = tmp_with_1__exit;
        frame_44adb9ae1cc91144e3e0d27ff1564e13->m_frame.f_lineno = 55;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_3, mod_consts[5]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_3:;
    goto try_return_handler_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_4 = tmp_with_1__exit;
        frame_44adb9ae1cc91144e3e0d27ff1564e13->m_frame.f_lineno = 55;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_4, mod_consts[5]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 55;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_cmp_expr_left_4;
        nuitka_bool tmp_cmp_expr_right_4;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_4 = tmp_with_1__indicator;
        tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        frame_44adb9ae1cc91144e3e0d27ff1564e13->m_frame.f_lineno = 55;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_5, mod_consts[5]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_5:;
    goto try_end_4;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
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

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_44adb9ae1cc91144e3e0d27ff1564e13, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_44adb9ae1cc91144e3e0d27ff1564e13->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_44adb9ae1cc91144e3e0d27ff1564e13, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_44adb9ae1cc91144e3e0d27ff1564e13,
        type_description_1,
        par_self,
        par_path,
        var_f
    );


    // Release cached frame if used for exception.
    if (frame_44adb9ae1cc91144e3e0d27ff1564e13 == cache_frame_44adb9ae1cc91144e3e0d27ff1564e13) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_44adb9ae1cc91144e3e0d27ff1564e13);
        cache_frame_44adb9ae1cc91144e3e0d27ff1564e13 = NULL;
    }

    assertFrameObject(frame_44adb9ae1cc91144e3e0d27ff1564e13);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    CHECK_OBJECT(tmp_with_1__exit);
    Py_DECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_f);
    Py_DECREF(var_f);
    var_f = NULL;
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

    Py_XDECREF(var_f);
    var_f = NULL;
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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$filesystem$$$function__2_ls(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    struct Nuitka_FrameObject *frame_a29f455eb169921a314e2e0e66e18e3a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a29f455eb169921a314e2e0e66e18e3a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a29f455eb169921a314e2e0e66e18e3a)) {
        Py_XDECREF(cache_frame_a29f455eb169921a314e2e0e66e18e3a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a29f455eb169921a314e2e0e66e18e3a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a29f455eb169921a314e2e0e66e18e3a = MAKE_FUNCTION_FRAME(codeobj_a29f455eb169921a314e2e0e66e18e3a, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a29f455eb169921a314e2e0e66e18e3a->m_type_description == NULL);
    frame_a29f455eb169921a314e2e0e66e18e3a = cache_frame_a29f455eb169921a314e2e0e66e18e3a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a29f455eb169921a314e2e0e66e18e3a);
    assert(Py_REFCNT(frame_a29f455eb169921a314e2e0e66e18e3a) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 66;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a29f455eb169921a314e2e0e66e18e3a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a29f455eb169921a314e2e0e66e18e3a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a29f455eb169921a314e2e0e66e18e3a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a29f455eb169921a314e2e0e66e18e3a,
        type_description_1,
        par_self,
        par_path
    );


    // Release cached frame if used for exception.
    if (frame_a29f455eb169921a314e2e0e66e18e3a == cache_frame_a29f455eb169921a314e2e0e66e18e3a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a29f455eb169921a314e2e0e66e18e3a);
        cache_frame_a29f455eb169921a314e2e0e66e18e3a = NULL;
    }

    assertFrameObject(frame_a29f455eb169921a314e2e0e66e18e3a);

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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_pyarrow$filesystem$$$function__3_delete(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *par_recursive = python_pars[2];
    struct Nuitka_FrameObject *frame_e83479ae842abb5987f05d61dbfeb89d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e83479ae842abb5987f05d61dbfeb89d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e83479ae842abb5987f05d61dbfeb89d)) {
        Py_XDECREF(cache_frame_e83479ae842abb5987f05d61dbfeb89d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e83479ae842abb5987f05d61dbfeb89d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e83479ae842abb5987f05d61dbfeb89d = MAKE_FUNCTION_FRAME(codeobj_e83479ae842abb5987f05d61dbfeb89d, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e83479ae842abb5987f05d61dbfeb89d->m_type_description == NULL);
    frame_e83479ae842abb5987f05d61dbfeb89d = cache_frame_e83479ae842abb5987f05d61dbfeb89d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e83479ae842abb5987f05d61dbfeb89d);
    assert(Py_REFCNT(frame_e83479ae842abb5987f05d61dbfeb89d) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 79;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e83479ae842abb5987f05d61dbfeb89d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e83479ae842abb5987f05d61dbfeb89d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e83479ae842abb5987f05d61dbfeb89d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e83479ae842abb5987f05d61dbfeb89d,
        type_description_1,
        par_self,
        par_path,
        par_recursive
    );


    // Release cached frame if used for exception.
    if (frame_e83479ae842abb5987f05d61dbfeb89d == cache_frame_e83479ae842abb5987f05d61dbfeb89d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e83479ae842abb5987f05d61dbfeb89d);
        cache_frame_e83479ae842abb5987f05d61dbfeb89d = NULL;
    }

    assertFrameObject(frame_e83479ae842abb5987f05d61dbfeb89d);

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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_recursive);
    Py_DECREF(par_recursive);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_pyarrow$filesystem$$$function__4_disk_usage(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *var_path_info = NULL;
    PyObject *var_total = NULL;
    PyObject *var_root = NULL;
    PyObject *var_directories = NULL;
    PyObject *var_files = NULL;
    PyObject *var_child_path = NULL;
    PyObject *var_abspath = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_85971a8d1a015bbf94e08c8dd28d2019;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_85971a8d1a015bbf94e08c8dd28d2019 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_85971a8d1a015bbf94e08c8dd28d2019)) {
        Py_XDECREF(cache_frame_85971a8d1a015bbf94e08c8dd28d2019);

#if _DEBUG_REFCOUNTS
        if (cache_frame_85971a8d1a015bbf94e08c8dd28d2019 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_85971a8d1a015bbf94e08c8dd28d2019 = MAKE_FUNCTION_FRAME(codeobj_85971a8d1a015bbf94e08c8dd28d2019, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_85971a8d1a015bbf94e08c8dd28d2019->m_type_description == NULL);
    frame_85971a8d1a015bbf94e08c8dd28d2019 = cache_frame_85971a8d1a015bbf94e08c8dd28d2019;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_85971a8d1a015bbf94e08c8dd28d2019);
    assert(Py_REFCNT(frame_85971a8d1a015bbf94e08c8dd28d2019) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_1 = par_path;
        frame_85971a8d1a015bbf94e08c8dd28d2019->m_frame.f_lineno = 94;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_path;
            assert(old != NULL);
            par_path = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_path);
        tmp_args_element_value_2 = par_path;
        frame_85971a8d1a015bbf94e08c8dd28d2019->m_frame.f_lineno = 95;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[10], tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_path_info == NULL);
        var_path_info = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_path_info);
        tmp_expression_value_1 = var_path_info;
        tmp_subscript_value_1 = mod_consts[11];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[12];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooo";
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
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_path_info);
        tmp_expression_value_2 = var_path_info;
        tmp_subscript_value_2 = mod_consts[13];
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[14];
        assert(var_total == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_total = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_path);
        tmp_args_element_value_3 = par_path;
        frame_85971a8d1a015bbf94e08c8dd28d2019->m_frame.f_lineno = 100;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[15], tmp_args_element_value_3);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooo";
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
                type_description_1 = "ooooooooo";
                exception_lineno = 100;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
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
            exception_lineno = 100;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 100;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 100;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_3;
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_9;
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
                    exception_lineno = 100;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[16];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooo";
            exception_lineno = 100;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
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
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_root;
            var_root = tmp_assign_source_10;
            Py_INCREF(var_root);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_directories;
            var_directories = tmp_assign_source_11;
            Py_INCREF(var_directories);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = var_files;
            var_files = tmp_assign_source_12;
            Py_INCREF(var_files);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(var_files);
        tmp_iter_arg_3 = var_files;
        tmp_assign_source_13 = MAKE_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_14 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooo";
                exception_lineno = 101;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_15 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_child_path;
            var_child_path = tmp_assign_source_15;
            Py_INCREF(var_child_path);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 102;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_3 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }
        if (var_root == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 102;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }

        tmp_args_element_value_4 = var_root;
        CHECK_OBJECT(var_child_path);
        tmp_args_element_value_5 = var_child_path;
        frame_85971a8d1a015bbf94e08c8dd28d2019->m_frame.f_lineno = 102;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_abspath;
            var_abspath = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_subscript_value_3;
        if (var_total == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 103;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }

        tmp_iadd_expr_left_1 = var_total;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 103;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_abspath);
        tmp_args_element_value_6 = var_abspath;
        frame_85971a8d1a015bbf94e08c8dd28d2019->m_frame.f_lineno = 103;
        tmp_expression_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[10], tmp_args_element_value_6);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }
        tmp_subscript_value_3 = mod_consts[13];
        tmp_iadd_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_17 = tmp_iadd_expr_left_1;
        var_total = tmp_assign_source_17;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 101;
        type_description_1 = "ooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_3;
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


        exception_lineno = 100;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
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
    if (var_total == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 105;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_total;
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
        exception_tb = MAKE_TRACEBACK(frame_85971a8d1a015bbf94e08c8dd28d2019, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_85971a8d1a015bbf94e08c8dd28d2019->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_85971a8d1a015bbf94e08c8dd28d2019, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_85971a8d1a015bbf94e08c8dd28d2019,
        type_description_1,
        par_self,
        par_path,
        var_path_info,
        var_total,
        var_root,
        var_directories,
        var_files,
        var_child_path,
        var_abspath
    );


    // Release cached frame if used for exception.
    if (frame_85971a8d1a015bbf94e08c8dd28d2019 == cache_frame_85971a8d1a015bbf94e08c8dd28d2019) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_85971a8d1a015bbf94e08c8dd28d2019);
        cache_frame_85971a8d1a015bbf94e08c8dd28d2019 = NULL;
    }

    assertFrameObject(frame_85971a8d1a015bbf94e08c8dd28d2019);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    par_path = NULL;
    CHECK_OBJECT(var_path_info);
    Py_DECREF(var_path_info);
    var_path_info = NULL;
    Py_XDECREF(var_total);
    var_total = NULL;
    Py_XDECREF(var_root);
    var_root = NULL;
    Py_XDECREF(var_directories);
    var_directories = NULL;
    Py_XDECREF(var_files);
    var_files = NULL;
    Py_XDECREF(var_child_path);
    var_child_path = NULL;
    Py_XDECREF(var_abspath);
    var_abspath = NULL;
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

    Py_XDECREF(par_path);
    par_path = NULL;
    Py_XDECREF(var_path_info);
    var_path_info = NULL;
    Py_XDECREF(var_total);
    var_total = NULL;
    Py_XDECREF(var_root);
    var_root = NULL;
    Py_XDECREF(var_directories);
    var_directories = NULL;
    Py_XDECREF(var_files);
    var_files = NULL;
    Py_XDECREF(var_child_path);
    var_child_path = NULL;
    Py_XDECREF(var_abspath);
    var_abspath = NULL;
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


static PyObject *impl_pyarrow$filesystem$$$function__5__path_join(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_args = python_pars[1];
    struct Nuitka_FrameObject *frame_f91b308547db8e8d3bd3ec827692f3f8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f91b308547db8e8d3bd3ec827692f3f8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f91b308547db8e8d3bd3ec827692f3f8)) {
        Py_XDECREF(cache_frame_f91b308547db8e8d3bd3ec827692f3f8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f91b308547db8e8d3bd3ec827692f3f8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f91b308547db8e8d3bd3ec827692f3f8 = MAKE_FUNCTION_FRAME(codeobj_f91b308547db8e8d3bd3ec827692f3f8, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f91b308547db8e8d3bd3ec827692f3f8->m_type_description == NULL);
    frame_f91b308547db8e8d3bd3ec827692f3f8 = cache_frame_f91b308547db8e8d3bd3ec827692f3f8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f91b308547db8e8d3bd3ec827692f3f8);
    assert(Py_REFCNT(frame_f91b308547db8e8d3bd3ec827692f3f8) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[22]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_args);
        tmp_args_element_value_1 = par_args;
        frame_f91b308547db8e8d3bd3ec827692f3f8->m_frame.f_lineno = 108;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
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
        exception_tb = MAKE_TRACEBACK(frame_f91b308547db8e8d3bd3ec827692f3f8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f91b308547db8e8d3bd3ec827692f3f8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f91b308547db8e8d3bd3ec827692f3f8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f91b308547db8e8d3bd3ec827692f3f8,
        type_description_1,
        par_self,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_f91b308547db8e8d3bd3ec827692f3f8 == cache_frame_f91b308547db8e8d3bd3ec827692f3f8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f91b308547db8e8d3bd3ec827692f3f8);
        cache_frame_f91b308547db8e8d3bd3ec827692f3f8 = NULL;
    }

    assertFrameObject(frame_f91b308547db8e8d3bd3ec827692f3f8);

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
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$filesystem$$$function__6_stat(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    struct Nuitka_FrameObject *frame_170ed234e59be6961f01a01c5437bc46;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_170ed234e59be6961f01a01c5437bc46 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_170ed234e59be6961f01a01c5437bc46)) {
        Py_XDECREF(cache_frame_170ed234e59be6961f01a01c5437bc46);

#if _DEBUG_REFCOUNTS
        if (cache_frame_170ed234e59be6961f01a01c5437bc46 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_170ed234e59be6961f01a01c5437bc46 = MAKE_FUNCTION_FRAME(codeobj_170ed234e59be6961f01a01c5437bc46, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_170ed234e59be6961f01a01c5437bc46->m_type_description == NULL);
    frame_170ed234e59be6961f01a01c5437bc46 = cache_frame_170ed234e59be6961f01a01c5437bc46;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_170ed234e59be6961f01a01c5437bc46);
    assert(Py_REFCNT(frame_170ed234e59be6961f01a01c5437bc46) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[24];
        frame_170ed234e59be6961f01a01c5437bc46->m_frame.f_lineno = 118;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 118;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_170ed234e59be6961f01a01c5437bc46, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_170ed234e59be6961f01a01c5437bc46->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_170ed234e59be6961f01a01c5437bc46, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_170ed234e59be6961f01a01c5437bc46,
        type_description_1,
        par_self,
        par_path
    );


    // Release cached frame if used for exception.
    if (frame_170ed234e59be6961f01a01c5437bc46 == cache_frame_170ed234e59be6961f01a01c5437bc46) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_170ed234e59be6961f01a01c5437bc46);
        cache_frame_170ed234e59be6961f01a01c5437bc46 = NULL;
    }

    assertFrameObject(frame_170ed234e59be6961f01a01c5437bc46);

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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_pyarrow$filesystem$$$function__7_rm(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *par_recursive = python_pars[2];
    struct Nuitka_FrameObject *frame_1a16ef79151d81ef9fcf0e7a0a28628a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1a16ef79151d81ef9fcf0e7a0a28628a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1a16ef79151d81ef9fcf0e7a0a28628a)) {
        Py_XDECREF(cache_frame_1a16ef79151d81ef9fcf0e7a0a28628a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1a16ef79151d81ef9fcf0e7a0a28628a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1a16ef79151d81ef9fcf0e7a0a28628a = MAKE_FUNCTION_FRAME(codeobj_1a16ef79151d81ef9fcf0e7a0a28628a, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1a16ef79151d81ef9fcf0e7a0a28628a->m_type_description == NULL);
    frame_1a16ef79151d81ef9fcf0e7a0a28628a = cache_frame_1a16ef79151d81ef9fcf0e7a0a28628a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1a16ef79151d81ef9fcf0e7a0a28628a);
    assert(Py_REFCNT(frame_1a16ef79151d81ef9fcf0e7a0a28628a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[26]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_kw_call_arg_value_0_1 = par_path;
        CHECK_OBJECT(par_recursive);
        tmp_kw_call_dict_value_0_1 = par_recursive;
        frame_1a16ef79151d81ef9fcf0e7a0a28628a->m_frame.f_lineno = 124;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[27]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1a16ef79151d81ef9fcf0e7a0a28628a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a16ef79151d81ef9fcf0e7a0a28628a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a16ef79151d81ef9fcf0e7a0a28628a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1a16ef79151d81ef9fcf0e7a0a28628a,
        type_description_1,
        par_self,
        par_path,
        par_recursive
    );


    // Release cached frame if used for exception.
    if (frame_1a16ef79151d81ef9fcf0e7a0a28628a == cache_frame_1a16ef79151d81ef9fcf0e7a0a28628a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1a16ef79151d81ef9fcf0e7a0a28628a);
        cache_frame_1a16ef79151d81ef9fcf0e7a0a28628a = NULL;
    }

    assertFrameObject(frame_1a16ef79151d81ef9fcf0e7a0a28628a);

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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_recursive);
    Py_DECREF(par_recursive);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_recursive);
    Py_DECREF(par_recursive);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$filesystem$$$function__8_mv(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *par_new_path = python_pars[2];
    struct Nuitka_FrameObject *frame_0d8db8a7e14658aff4c77c16dc4a0a83;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0d8db8a7e14658aff4c77c16dc4a0a83 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0d8db8a7e14658aff4c77c16dc4a0a83)) {
        Py_XDECREF(cache_frame_0d8db8a7e14658aff4c77c16dc4a0a83);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0d8db8a7e14658aff4c77c16dc4a0a83 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0d8db8a7e14658aff4c77c16dc4a0a83 = MAKE_FUNCTION_FRAME(codeobj_0d8db8a7e14658aff4c77c16dc4a0a83, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0d8db8a7e14658aff4c77c16dc4a0a83->m_type_description == NULL);
    frame_0d8db8a7e14658aff4c77c16dc4a0a83 = cache_frame_0d8db8a7e14658aff4c77c16dc4a0a83;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0d8db8a7e14658aff4c77c16dc4a0a83);
    assert(Py_REFCNT(frame_0d8db8a7e14658aff4c77c16dc4a0a83) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_path);
        tmp_args_element_value_1 = par_path;
        CHECK_OBJECT(par_new_path);
        tmp_args_element_value_2 = par_new_path;
        frame_0d8db8a7e14658aff4c77c16dc4a0a83->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[29],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0d8db8a7e14658aff4c77c16dc4a0a83, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0d8db8a7e14658aff4c77c16dc4a0a83->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0d8db8a7e14658aff4c77c16dc4a0a83, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0d8db8a7e14658aff4c77c16dc4a0a83,
        type_description_1,
        par_self,
        par_path,
        par_new_path
    );


    // Release cached frame if used for exception.
    if (frame_0d8db8a7e14658aff4c77c16dc4a0a83 == cache_frame_0d8db8a7e14658aff4c77c16dc4a0a83) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0d8db8a7e14658aff4c77c16dc4a0a83);
        cache_frame_0d8db8a7e14658aff4c77c16dc4a0a83 = NULL;
    }

    assertFrameObject(frame_0d8db8a7e14658aff4c77c16dc4a0a83);

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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_new_path);
    Py_DECREF(par_new_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_new_path);
    Py_DECREF(par_new_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$filesystem$$$function__9_rename(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *par_new_path = python_pars[2];
    struct Nuitka_FrameObject *frame_0b10c62f75abf1482bedd9ea7fb3c54c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0b10c62f75abf1482bedd9ea7fb3c54c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0b10c62f75abf1482bedd9ea7fb3c54c)) {
        Py_XDECREF(cache_frame_0b10c62f75abf1482bedd9ea7fb3c54c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0b10c62f75abf1482bedd9ea7fb3c54c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0b10c62f75abf1482bedd9ea7fb3c54c = MAKE_FUNCTION_FRAME(codeobj_0b10c62f75abf1482bedd9ea7fb3c54c, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0b10c62f75abf1482bedd9ea7fb3c54c->m_type_description == NULL);
    frame_0b10c62f75abf1482bedd9ea7fb3c54c = cache_frame_0b10c62f75abf1482bedd9ea7fb3c54c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0b10c62f75abf1482bedd9ea7fb3c54c);
    assert(Py_REFCNT(frame_0b10c62f75abf1482bedd9ea7fb3c54c) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[31];
        frame_0b10c62f75abf1482bedd9ea7fb3c54c->m_frame.f_lineno = 143;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 143;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0b10c62f75abf1482bedd9ea7fb3c54c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0b10c62f75abf1482bedd9ea7fb3c54c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0b10c62f75abf1482bedd9ea7fb3c54c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0b10c62f75abf1482bedd9ea7fb3c54c,
        type_description_1,
        par_self,
        par_path,
        par_new_path
    );


    // Release cached frame if used for exception.
    if (frame_0b10c62f75abf1482bedd9ea7fb3c54c == cache_frame_0b10c62f75abf1482bedd9ea7fb3c54c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0b10c62f75abf1482bedd9ea7fb3c54c);
        cache_frame_0b10c62f75abf1482bedd9ea7fb3c54c = NULL;
    }

    assertFrameObject(frame_0b10c62f75abf1482bedd9ea7fb3c54c);

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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_new_path);
    Py_DECREF(par_new_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_pyarrow$filesystem$$$function__10_mkdir(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *par_create_parents = python_pars[2];
    struct Nuitka_FrameObject *frame_e62e694acd1e8c50266e180a584119fc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e62e694acd1e8c50266e180a584119fc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e62e694acd1e8c50266e180a584119fc)) {
        Py_XDECREF(cache_frame_e62e694acd1e8c50266e180a584119fc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e62e694acd1e8c50266e180a584119fc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e62e694acd1e8c50266e180a584119fc = MAKE_FUNCTION_FRAME(codeobj_e62e694acd1e8c50266e180a584119fc, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e62e694acd1e8c50266e180a584119fc->m_type_description == NULL);
    frame_e62e694acd1e8c50266e180a584119fc = cache_frame_e62e694acd1e8c50266e180a584119fc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e62e694acd1e8c50266e180a584119fc);
    assert(Py_REFCNT(frame_e62e694acd1e8c50266e180a584119fc) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 156;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e62e694acd1e8c50266e180a584119fc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e62e694acd1e8c50266e180a584119fc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e62e694acd1e8c50266e180a584119fc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e62e694acd1e8c50266e180a584119fc,
        type_description_1,
        par_self,
        par_path,
        par_create_parents
    );


    // Release cached frame if used for exception.
    if (frame_e62e694acd1e8c50266e180a584119fc == cache_frame_e62e694acd1e8c50266e180a584119fc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e62e694acd1e8c50266e180a584119fc);
        cache_frame_e62e694acd1e8c50266e180a584119fc = NULL;
    }

    assertFrameObject(frame_e62e694acd1e8c50266e180a584119fc);

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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_create_parents);
    Py_DECREF(par_create_parents);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_pyarrow$filesystem$$$function__11_exists(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    struct Nuitka_FrameObject *frame_36bd1b68ca475641b870bff96136df09;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_36bd1b68ca475641b870bff96136df09 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_36bd1b68ca475641b870bff96136df09)) {
        Py_XDECREF(cache_frame_36bd1b68ca475641b870bff96136df09);

#if _DEBUG_REFCOUNTS
        if (cache_frame_36bd1b68ca475641b870bff96136df09 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_36bd1b68ca475641b870bff96136df09 = MAKE_FUNCTION_FRAME(codeobj_36bd1b68ca475641b870bff96136df09, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_36bd1b68ca475641b870bff96136df09->m_type_description == NULL);
    frame_36bd1b68ca475641b870bff96136df09 = cache_frame_36bd1b68ca475641b870bff96136df09;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_36bd1b68ca475641b870bff96136df09);
    assert(Py_REFCNT(frame_36bd1b68ca475641b870bff96136df09) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 167;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_36bd1b68ca475641b870bff96136df09, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_36bd1b68ca475641b870bff96136df09->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_36bd1b68ca475641b870bff96136df09, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_36bd1b68ca475641b870bff96136df09,
        type_description_1,
        par_self,
        par_path
    );


    // Release cached frame if used for exception.
    if (frame_36bd1b68ca475641b870bff96136df09 == cache_frame_36bd1b68ca475641b870bff96136df09) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_36bd1b68ca475641b870bff96136df09);
        cache_frame_36bd1b68ca475641b870bff96136df09 = NULL;
    }

    assertFrameObject(frame_36bd1b68ca475641b870bff96136df09);

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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_pyarrow$filesystem$$$function__12_isdir(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    struct Nuitka_FrameObject *frame_0df0d51f6f94de4a3e9a14610679ffde;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0df0d51f6f94de4a3e9a14610679ffde = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0df0d51f6f94de4a3e9a14610679ffde)) {
        Py_XDECREF(cache_frame_0df0d51f6f94de4a3e9a14610679ffde);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0df0d51f6f94de4a3e9a14610679ffde == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0df0d51f6f94de4a3e9a14610679ffde = MAKE_FUNCTION_FRAME(codeobj_0df0d51f6f94de4a3e9a14610679ffde, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0df0d51f6f94de4a3e9a14610679ffde->m_type_description == NULL);
    frame_0df0d51f6f94de4a3e9a14610679ffde = cache_frame_0df0d51f6f94de4a3e9a14610679ffde;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0df0d51f6f94de4a3e9a14610679ffde);
    assert(Py_REFCNT(frame_0df0d51f6f94de4a3e9a14610679ffde) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 178;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0df0d51f6f94de4a3e9a14610679ffde, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0df0d51f6f94de4a3e9a14610679ffde->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0df0d51f6f94de4a3e9a14610679ffde, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0df0d51f6f94de4a3e9a14610679ffde,
        type_description_1,
        par_self,
        par_path
    );


    // Release cached frame if used for exception.
    if (frame_0df0d51f6f94de4a3e9a14610679ffde == cache_frame_0df0d51f6f94de4a3e9a14610679ffde) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0df0d51f6f94de4a3e9a14610679ffde);
        cache_frame_0df0d51f6f94de4a3e9a14610679ffde = NULL;
    }

    assertFrameObject(frame_0df0d51f6f94de4a3e9a14610679ffde);

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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_pyarrow$filesystem$$$function__13_isfile(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    struct Nuitka_FrameObject *frame_e0c1de067114a58779ae8c82c215a25a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e0c1de067114a58779ae8c82c215a25a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e0c1de067114a58779ae8c82c215a25a)) {
        Py_XDECREF(cache_frame_e0c1de067114a58779ae8c82c215a25a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e0c1de067114a58779ae8c82c215a25a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e0c1de067114a58779ae8c82c215a25a = MAKE_FUNCTION_FRAME(codeobj_e0c1de067114a58779ae8c82c215a25a, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e0c1de067114a58779ae8c82c215a25a->m_type_description == NULL);
    frame_e0c1de067114a58779ae8c82c215a25a = cache_frame_e0c1de067114a58779ae8c82c215a25a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e0c1de067114a58779ae8c82c215a25a);
    assert(Py_REFCNT(frame_e0c1de067114a58779ae8c82c215a25a) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 189;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e0c1de067114a58779ae8c82c215a25a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e0c1de067114a58779ae8c82c215a25a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e0c1de067114a58779ae8c82c215a25a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e0c1de067114a58779ae8c82c215a25a,
        type_description_1,
        par_self,
        par_path
    );


    // Release cached frame if used for exception.
    if (frame_e0c1de067114a58779ae8c82c215a25a == cache_frame_e0c1de067114a58779ae8c82c215a25a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e0c1de067114a58779ae8c82c215a25a);
        cache_frame_e0c1de067114a58779ae8c82c215a25a = NULL;
    }

    assertFrameObject(frame_e0c1de067114a58779ae8c82c215a25a);

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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_pyarrow$filesystem$$$function__14__isfilestore(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_874e8fd93ad757a72d1f1f962ed5008a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_874e8fd93ad757a72d1f1f962ed5008a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_874e8fd93ad757a72d1f1f962ed5008a)) {
        Py_XDECREF(cache_frame_874e8fd93ad757a72d1f1f962ed5008a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_874e8fd93ad757a72d1f1f962ed5008a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_874e8fd93ad757a72d1f1f962ed5008a = MAKE_FUNCTION_FRAME(codeobj_874e8fd93ad757a72d1f1f962ed5008a, module_pyarrow$filesystem, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_874e8fd93ad757a72d1f1f962ed5008a->m_type_description == NULL);
    frame_874e8fd93ad757a72d1f1f962ed5008a = cache_frame_874e8fd93ad757a72d1f1f962ed5008a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_874e8fd93ad757a72d1f1f962ed5008a);
    assert(Py_REFCNT(frame_874e8fd93ad757a72d1f1f962ed5008a) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 196;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_874e8fd93ad757a72d1f1f962ed5008a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_874e8fd93ad757a72d1f1f962ed5008a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_874e8fd93ad757a72d1f1f962ed5008a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_874e8fd93ad757a72d1f1f962ed5008a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_874e8fd93ad757a72d1f1f962ed5008a == cache_frame_874e8fd93ad757a72d1f1f962ed5008a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_874e8fd93ad757a72d1f1f962ed5008a);
        cache_frame_874e8fd93ad757a72d1f1f962ed5008a = NULL;
    }

    assertFrameObject(frame_874e8fd93ad757a72d1f1f962ed5008a);

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

}


static PyObject *impl_pyarrow$filesystem$$$function__15_read_parquet(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *par_columns = python_pars[2];
    PyObject *par_metadata = python_pars[3];
    PyObject *par_schema = python_pars[4];
    PyObject *par_use_threads = python_pars[5];
    PyObject *par_use_pandas_metadata = python_pars[6];
    PyObject *var_ParquetDataset = NULL;
    PyObject *var_dataset = NULL;
    struct Nuitka_FrameObject *frame_8d5cdf57ffc3d40a081ac6177b20f276;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8d5cdf57ffc3d40a081ac6177b20f276 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8d5cdf57ffc3d40a081ac6177b20f276)) {
        Py_XDECREF(cache_frame_8d5cdf57ffc3d40a081ac6177b20f276);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8d5cdf57ffc3d40a081ac6177b20f276 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8d5cdf57ffc3d40a081ac6177b20f276 = MAKE_FUNCTION_FRAME(codeobj_8d5cdf57ffc3d40a081ac6177b20f276, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8d5cdf57ffc3d40a081ac6177b20f276->m_type_description == NULL);
    frame_8d5cdf57ffc3d40a081ac6177b20f276 = cache_frame_8d5cdf57ffc3d40a081ac6177b20f276;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8d5cdf57ffc3d40a081ac6177b20f276);
    assert(Py_REFCNT(frame_8d5cdf57ffc3d40a081ac6177b20f276) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[38];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyarrow$filesystem;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[39];
        tmp_level_value_1 = mod_consts[14];
        frame_8d5cdf57ffc3d40a081ac6177b20f276->m_frame.f_lineno = 225;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pyarrow$filesystem,
                mod_consts[40],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[40]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ParquetDataset == NULL);
        var_ParquetDataset = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        CHECK_OBJECT(var_ParquetDataset);
        tmp_called_value_1 = var_ParquetDataset;
        CHECK_OBJECT(par_path);
        tmp_kw_call_arg_value_0_1 = par_path;
        CHECK_OBJECT(par_schema);
        tmp_kw_call_dict_value_0_1 = par_schema;
        CHECK_OBJECT(par_metadata);
        tmp_kw_call_dict_value_1_1 = par_metadata;
        CHECK_OBJECT(par_self);
        tmp_kw_call_dict_value_2_1 = par_self;
        frame_8d5cdf57ffc3d40a081ac6177b20f276->m_frame.f_lineno = 226;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[41]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dataset == NULL);
        var_dataset = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        CHECK_OBJECT(var_dataset);
        tmp_expression_value_1 = var_dataset;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_columns);
        tmp_kw_call_value_0_1 = par_columns;
        CHECK_OBJECT(par_use_threads);
        tmp_kw_call_value_1_1 = par_use_threads;
        CHECK_OBJECT(par_use_pandas_metadata);
        tmp_kw_call_value_2_1 = par_use_pandas_metadata;
        frame_8d5cdf57ffc3d40a081ac6177b20f276->m_frame.f_lineno = 228;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[42]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_8d5cdf57ffc3d40a081ac6177b20f276, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8d5cdf57ffc3d40a081ac6177b20f276->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8d5cdf57ffc3d40a081ac6177b20f276, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8d5cdf57ffc3d40a081ac6177b20f276,
        type_description_1,
        par_self,
        par_path,
        par_columns,
        par_metadata,
        par_schema,
        par_use_threads,
        par_use_pandas_metadata,
        var_ParquetDataset,
        var_dataset
    );


    // Release cached frame if used for exception.
    if (frame_8d5cdf57ffc3d40a081ac6177b20f276 == cache_frame_8d5cdf57ffc3d40a081ac6177b20f276) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8d5cdf57ffc3d40a081ac6177b20f276);
        cache_frame_8d5cdf57ffc3d40a081ac6177b20f276 = NULL;
    }

    assertFrameObject(frame_8d5cdf57ffc3d40a081ac6177b20f276);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_ParquetDataset);
    Py_DECREF(var_ParquetDataset);
    var_ParquetDataset = NULL;
    CHECK_OBJECT(var_dataset);
    Py_DECREF(var_dataset);
    var_dataset = NULL;
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

    Py_XDECREF(var_ParquetDataset);
    var_ParquetDataset = NULL;
    Py_XDECREF(var_dataset);
    var_dataset = NULL;
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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_columns);
    Py_DECREF(par_columns);
    CHECK_OBJECT(par_metadata);
    Py_DECREF(par_metadata);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_use_threads);
    Py_DECREF(par_use_threads);
    CHECK_OBJECT(par_use_pandas_metadata);
    Py_DECREF(par_use_pandas_metadata);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_columns);
    Py_DECREF(par_columns);
    CHECK_OBJECT(par_metadata);
    Py_DECREF(par_metadata);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_use_threads);
    Py_DECREF(par_use_threads);
    CHECK_OBJECT(par_use_pandas_metadata);
    Py_DECREF(par_use_pandas_metadata);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$filesystem$$$function__16_open(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *par_mode = python_pars[2];
    struct Nuitka_FrameObject *frame_7655e9ab10b9fb34014c6087aedc8d5c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7655e9ab10b9fb34014c6087aedc8d5c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7655e9ab10b9fb34014c6087aedc8d5c)) {
        Py_XDECREF(cache_frame_7655e9ab10b9fb34014c6087aedc8d5c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7655e9ab10b9fb34014c6087aedc8d5c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7655e9ab10b9fb34014c6087aedc8d5c = MAKE_FUNCTION_FRAME(codeobj_7655e9ab10b9fb34014c6087aedc8d5c, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7655e9ab10b9fb34014c6087aedc8d5c->m_type_description == NULL);
    frame_7655e9ab10b9fb34014c6087aedc8d5c = cache_frame_7655e9ab10b9fb34014c6087aedc8d5c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7655e9ab10b9fb34014c6087aedc8d5c);
    assert(Py_REFCNT(frame_7655e9ab10b9fb34014c6087aedc8d5c) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 235;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7655e9ab10b9fb34014c6087aedc8d5c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7655e9ab10b9fb34014c6087aedc8d5c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7655e9ab10b9fb34014c6087aedc8d5c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7655e9ab10b9fb34014c6087aedc8d5c,
        type_description_1,
        par_self,
        par_path,
        par_mode
    );


    // Release cached frame if used for exception.
    if (frame_7655e9ab10b9fb34014c6087aedc8d5c == cache_frame_7655e9ab10b9fb34014c6087aedc8d5c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7655e9ab10b9fb34014c6087aedc8d5c);
        cache_frame_7655e9ab10b9fb34014c6087aedc8d5c = NULL;
    }

    assertFrameObject(frame_7655e9ab10b9fb34014c6087aedc8d5c);

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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_pyarrow$filesystem$$$function__18___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a23cc791937381618ec7f26a61f03fa9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a23cc791937381618ec7f26a61f03fa9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a23cc791937381618ec7f26a61f03fa9)) {
        Py_XDECREF(cache_frame_a23cc791937381618ec7f26a61f03fa9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a23cc791937381618ec7f26a61f03fa9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a23cc791937381618ec7f26a61f03fa9 = MAKE_FUNCTION_FRAME(codeobj_a23cc791937381618ec7f26a61f03fa9, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a23cc791937381618ec7f26a61f03fa9->m_type_description == NULL);
    frame_a23cc791937381618ec7f26a61f03fa9 = cache_frame_a23cc791937381618ec7f26a61f03fa9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a23cc791937381618ec7f26a61f03fa9);
    assert(Py_REFCNT(frame_a23cc791937381618ec7f26a61f03fa9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[46]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 247;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oc";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[49]);
        frame_a23cc791937381618ec7f26a61f03fa9->m_frame.f_lineno = 247;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 248;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_pyarrow$filesystem, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_a23cc791937381618ec7f26a61f03fa9->m_frame.f_lineno = 248;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[51]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a23cc791937381618ec7f26a61f03fa9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a23cc791937381618ec7f26a61f03fa9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a23cc791937381618ec7f26a61f03fa9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a23cc791937381618ec7f26a61f03fa9,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_a23cc791937381618ec7f26a61f03fa9 == cache_frame_a23cc791937381618ec7f26a61f03fa9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a23cc791937381618ec7f26a61f03fa9);
        cache_frame_a23cc791937381618ec7f26a61f03fa9 = NULL;
    }

    assertFrameObject(frame_a23cc791937381618ec7f26a61f03fa9);

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


static PyObject *impl_pyarrow$filesystem$$$function__19__get_instance(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_67d1dd131493422a901f4b859b019f01;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_67d1dd131493422a901f4b859b019f01 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_67d1dd131493422a901f4b859b019f01)) {
        Py_XDECREF(cache_frame_67d1dd131493422a901f4b859b019f01);

#if _DEBUG_REFCOUNTS
        if (cache_frame_67d1dd131493422a901f4b859b019f01 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_67d1dd131493422a901f4b859b019f01 = MAKE_FUNCTION_FRAME(codeobj_67d1dd131493422a901f4b859b019f01, module_pyarrow$filesystem, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_67d1dd131493422a901f4b859b019f01->m_type_description == NULL);
    frame_67d1dd131493422a901f4b859b019f01 = cache_frame_67d1dd131493422a901f4b859b019f01;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_67d1dd131493422a901f4b859b019f01);
    assert(Py_REFCNT(frame_67d1dd131493422a901f4b859b019f01) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_1 = par_cls;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[52]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        frame_67d1dd131493422a901f4b859b019f01->m_frame.f_lineno = 253;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[53]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_2 = tmp_with_1__source;
        tmp_called_value_1 = LOOKUP_SPECIAL(tmp_expression_value_2, mod_consts[2]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        frame_67d1dd131493422a901f4b859b019f01->m_frame.f_lineno = 253;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_3 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL(tmp_expression_value_3, mod_consts[3]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_4;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        frame_67d1dd131493422a901f4b859b019f01->m_frame.f_lineno = 254;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[54],
            PyTuple_GET_ITEM(mod_consts[55], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        frame_67d1dd131493422a901f4b859b019f01->m_frame.f_lineno = 255;
        tmp_assattr_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_cls);
        tmp_assattr_target_1 = par_cls;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[52], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "o";
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_67d1dd131493422a901f4b859b019f01, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_67d1dd131493422a901f4b859b019f01, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_5;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_3 = tmp_with_1__exit;
        tmp_args_element_value_1 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_2 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_3 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_67d1dd131493422a901f4b859b019f01->m_frame.f_lineno = 255;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "o";
            goto try_except_handler_4;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "o";
            goto try_except_handler_4;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 255;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_67d1dd131493422a901f4b859b019f01->m_frame) frame_67d1dd131493422a901f4b859b019f01->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_4;
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 253;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_67d1dd131493422a901f4b859b019f01->m_frame) frame_67d1dd131493422a901f4b859b019f01->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_4;
    branch_end_2:;
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

    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_4 = tmp_with_1__exit;
        frame_67d1dd131493422a901f4b859b019f01->m_frame.f_lineno = 255;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_4, mod_consts[5]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 255;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_1;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_cmp_expr_left_4;
        nuitka_bool tmp_cmp_expr_right_4;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_4 = tmp_with_1__indicator;
        tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        frame_67d1dd131493422a901f4b859b019f01->m_frame.f_lineno = 255;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_5, mod_consts[5]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_5:;
    goto try_end_4;
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

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    branch_no_1:;
    {
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_4 = par_cls;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[52]);
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
        exception_tb = MAKE_TRACEBACK(frame_67d1dd131493422a901f4b859b019f01, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_67d1dd131493422a901f4b859b019f01->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_67d1dd131493422a901f4b859b019f01, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_67d1dd131493422a901f4b859b019f01,
        type_description_1,
        par_cls
    );


    // Release cached frame if used for exception.
    if (frame_67d1dd131493422a901f4b859b019f01 == cache_frame_67d1dd131493422a901f4b859b019f01) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_67d1dd131493422a901f4b859b019f01);
        cache_frame_67d1dd131493422a901f4b859b019f01 = NULL;
    }

    assertFrameObject(frame_67d1dd131493422a901f4b859b019f01);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$filesystem$$$function__20_get_instance(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    struct Nuitka_FrameObject *frame_b721d3bede8b20267fec912f6930a283;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b721d3bede8b20267fec912f6930a283 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b721d3bede8b20267fec912f6930a283)) {
        Py_XDECREF(cache_frame_b721d3bede8b20267fec912f6930a283);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b721d3bede8b20267fec912f6930a283 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b721d3bede8b20267fec912f6930a283 = MAKE_FUNCTION_FRAME(codeobj_b721d3bede8b20267fec912f6930a283, module_pyarrow$filesystem, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b721d3bede8b20267fec912f6930a283->m_type_description == NULL);
    frame_b721d3bede8b20267fec912f6930a283 = cache_frame_b721d3bede8b20267fec912f6930a283;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b721d3bede8b20267fec912f6930a283);
    assert(Py_REFCNT(frame_b721d3bede8b20267fec912f6930a283) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[46]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 260;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "o";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[49]);
        frame_b721d3bede8b20267fec912f6930a283->m_frame.f_lineno = 260;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_cls);
        tmp_called_instance_1 = par_cls;
        frame_b721d3bede8b20267fec912f6930a283->m_frame.f_lineno = 261;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[57]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
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
        exception_tb = MAKE_TRACEBACK(frame_b721d3bede8b20267fec912f6930a283, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b721d3bede8b20267fec912f6930a283->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b721d3bede8b20267fec912f6930a283, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b721d3bede8b20267fec912f6930a283,
        type_description_1,
        par_cls
    );


    // Release cached frame if used for exception.
    if (frame_b721d3bede8b20267fec912f6930a283 == cache_frame_b721d3bede8b20267fec912f6930a283) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b721d3bede8b20267fec912f6930a283);
        cache_frame_b721d3bede8b20267fec912f6930a283 = NULL;
    }

    assertFrameObject(frame_b721d3bede8b20267fec912f6930a283);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$filesystem$$$function__21_ls(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_CellObject *par_path = Nuitka_Cell_New1(python_pars[1]);
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_5d0f54fe5ce789125e2d0d215a1ddafb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5d0f54fe5ce789125e2d0d215a1ddafb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5d0f54fe5ce789125e2d0d215a1ddafb)) {
        Py_XDECREF(cache_frame_5d0f54fe5ce789125e2d0d215a1ddafb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5d0f54fe5ce789125e2d0d215a1ddafb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5d0f54fe5ce789125e2d0d215a1ddafb = MAKE_FUNCTION_FRAME(codeobj_5d0f54fe5ce789125e2d0d215a1ddafb, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5d0f54fe5ce789125e2d0d215a1ddafb->m_type_description == NULL);
    frame_5d0f54fe5ce789125e2d0d215a1ddafb = cache_frame_5d0f54fe5ce789125e2d0d215a1ddafb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5d0f54fe5ce789125e2d0d215a1ddafb);
    assert(Py_REFCNT(frame_5d0f54fe5ce789125e2d0d215a1ddafb) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_path));
        tmp_args_element_value_1 = Nuitka_Cell_GET(par_path);
        frame_5d0f54fe5ce789125e2d0d215a1ddafb->m_frame.f_lineno = 265;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(par_path);
            PyCell_SET(par_path, tmp_assign_source_1);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[58]);
        assert(tmp_called_value_2 != NULL);
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_path_arg_1;
            CHECK_OBJECT(Nuitka_Cell_GET(par_path));
            tmp_path_arg_1 = Nuitka_Cell_GET(par_path);
            tmp_iter_arg_1 = OS_LISTDIR(tmp_path_arg_1);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_1 = "oc";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_1 = "oc";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_2;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[2];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
            tmp_closure_1[1] = par_path;
            Py_INCREF(tmp_closure_1[1]);

            tmp_args_element_value_2 = MAKE_GENERATOR_pyarrow$filesystem$$$function__21_ls$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        frame_5d0f54fe5ce789125e2d0d215a1ddafb->m_frame.f_lineno = 266;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oc";
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
        exception_tb = MAKE_TRACEBACK(frame_5d0f54fe5ce789125e2d0d215a1ddafb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5d0f54fe5ce789125e2d0d215a1ddafb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5d0f54fe5ce789125e2d0d215a1ddafb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5d0f54fe5ce789125e2d0d215a1ddafb,
        type_description_1,
        par_self,
        par_path
    );


    // Release cached frame if used for exception.
    if (frame_5d0f54fe5ce789125e2d0d215a1ddafb == cache_frame_5d0f54fe5ce789125e2d0d215a1ddafb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5d0f54fe5ce789125e2d0d215a1ddafb);
        cache_frame_5d0f54fe5ce789125e2d0d215a1ddafb = NULL;
    }

    assertFrameObject(frame_5d0f54fe5ce789125e2d0d215a1ddafb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    par_path = NULL;
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

    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    par_path = NULL;
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



struct pyarrow$filesystem$$$function__21_ls$$$genexpr__1_genexpr_locals {
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

static PyObject *pyarrow$filesystem$$$function__21_ls$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct pyarrow$filesystem$$$function__21_ls$$$genexpr__1_genexpr_locals *generator_heap = (struct pyarrow$filesystem$$$function__21_ls$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_4406a7e782bd112fa513f8e34fd5a157, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
                generator_heap->type_description_1 = "Noc";
                generator_heap->exception_lineno = 266;
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 266;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[60]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 266;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        CHECK_OBJECT(generator_heap->var_x);
        tmp_args_element_value_2 = generator_heap->var_x;
        generator->m_frame->m_frame.f_lineno = 266;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 266;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 266;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 266;
        generator_heap->type_description_1 = "Noc";
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
            generator_heap->var_x,
            generator->m_closure[1]
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

static PyObject *MAKE_GENERATOR_pyarrow$filesystem$$$function__21_ls$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        pyarrow$filesystem$$$function__21_ls$$$genexpr__1_genexpr_context,
        module_pyarrow$filesystem,
        mod_consts[61],
#if PYTHON_VERSION >= 0x350
        mod_consts[62],
#endif
        codeobj_4406a7e782bd112fa513f8e34fd5a157,
        closure,
        2,
        sizeof(struct pyarrow$filesystem$$$function__21_ls$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_pyarrow$filesystem$$$function__22_mkdir(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *par_create_parents = python_pars[2];
    struct Nuitka_FrameObject *frame_f7055b796f41e29d79adb186c48ed8d2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f7055b796f41e29d79adb186c48ed8d2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f7055b796f41e29d79adb186c48ed8d2)) {
        Py_XDECREF(cache_frame_f7055b796f41e29d79adb186c48ed8d2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f7055b796f41e29d79adb186c48ed8d2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f7055b796f41e29d79adb186c48ed8d2 = MAKE_FUNCTION_FRAME(codeobj_f7055b796f41e29d79adb186c48ed8d2, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f7055b796f41e29d79adb186c48ed8d2->m_type_description == NULL);
    frame_f7055b796f41e29d79adb186c48ed8d2 = cache_frame_f7055b796f41e29d79adb186c48ed8d2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f7055b796f41e29d79adb186c48ed8d2);
    assert(Py_REFCNT(frame_f7055b796f41e29d79adb186c48ed8d2) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_1 = par_path;
        frame_f7055b796f41e29d79adb186c48ed8d2->m_frame.f_lineno = 270;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_path;
            assert(old != NULL);
            par_path = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_create_parents);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_create_parents);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        CHECK_OBJECT(par_path);
        tmp_args_element_value_2 = par_path;
        frame_f7055b796f41e29d79adb186c48ed8d2->m_frame.f_lineno = 272;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[64], tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        assert(!(tmp_called_instance_2 == NULL));
        CHECK_OBJECT(par_path);
        tmp_args_element_value_3 = par_path;
        frame_f7055b796f41e29d79adb186c48ed8d2->m_frame.f_lineno = 274;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[65], tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f7055b796f41e29d79adb186c48ed8d2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f7055b796f41e29d79adb186c48ed8d2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f7055b796f41e29d79adb186c48ed8d2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f7055b796f41e29d79adb186c48ed8d2,
        type_description_1,
        par_self,
        par_path,
        par_create_parents
    );


    // Release cached frame if used for exception.
    if (frame_f7055b796f41e29d79adb186c48ed8d2 == cache_frame_f7055b796f41e29d79adb186c48ed8d2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f7055b796f41e29d79adb186c48ed8d2);
        cache_frame_f7055b796f41e29d79adb186c48ed8d2 = NULL;
    }

    assertFrameObject(frame_f7055b796f41e29d79adb186c48ed8d2);

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
    Py_XDECREF(par_path);
    par_path = NULL;
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

    Py_XDECREF(par_path);
    par_path = NULL;
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
    CHECK_OBJECT(par_create_parents);
    Py_DECREF(par_create_parents);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_create_parents);
    Py_DECREF(par_create_parents);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$filesystem$$$function__23_isdir(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    struct Nuitka_FrameObject *frame_83073f412eabf5d48e67aa6cd50c5d7d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_83073f412eabf5d48e67aa6cd50c5d7d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_83073f412eabf5d48e67aa6cd50c5d7d)) {
        Py_XDECREF(cache_frame_83073f412eabf5d48e67aa6cd50c5d7d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_83073f412eabf5d48e67aa6cd50c5d7d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_83073f412eabf5d48e67aa6cd50c5d7d = MAKE_FUNCTION_FRAME(codeobj_83073f412eabf5d48e67aa6cd50c5d7d, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_83073f412eabf5d48e67aa6cd50c5d7d->m_type_description == NULL);
    frame_83073f412eabf5d48e67aa6cd50c5d7d = cache_frame_83073f412eabf5d48e67aa6cd50c5d7d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_83073f412eabf5d48e67aa6cd50c5d7d);
    assert(Py_REFCNT(frame_83073f412eabf5d48e67aa6cd50c5d7d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_1 = par_path;
        frame_83073f412eabf5d48e67aa6cd50c5d7d->m_frame.f_lineno = 278;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_path;
            assert(old != NULL);
            par_path = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_isdir_arg_1;
        CHECK_OBJECT(par_path);
        tmp_isdir_arg_1 = par_path;
        tmp_return_value = OS_PATH_FILE_ISDIR(tmp_isdir_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
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
        exception_tb = MAKE_TRACEBACK(frame_83073f412eabf5d48e67aa6cd50c5d7d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_83073f412eabf5d48e67aa6cd50c5d7d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_83073f412eabf5d48e67aa6cd50c5d7d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_83073f412eabf5d48e67aa6cd50c5d7d,
        type_description_1,
        par_self,
        par_path
    );


    // Release cached frame if used for exception.
    if (frame_83073f412eabf5d48e67aa6cd50c5d7d == cache_frame_83073f412eabf5d48e67aa6cd50c5d7d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_83073f412eabf5d48e67aa6cd50c5d7d);
        cache_frame_83073f412eabf5d48e67aa6cd50c5d7d = NULL;
    }

    assertFrameObject(frame_83073f412eabf5d48e67aa6cd50c5d7d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    par_path = NULL;
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

    Py_XDECREF(par_path);
    par_path = NULL;
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


static PyObject *impl_pyarrow$filesystem$$$function__24_isfile(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    struct Nuitka_FrameObject *frame_7e6599633bc6e7f730db7daf5896ba5c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7e6599633bc6e7f730db7daf5896ba5c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7e6599633bc6e7f730db7daf5896ba5c)) {
        Py_XDECREF(cache_frame_7e6599633bc6e7f730db7daf5896ba5c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7e6599633bc6e7f730db7daf5896ba5c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7e6599633bc6e7f730db7daf5896ba5c = MAKE_FUNCTION_FRAME(codeobj_7e6599633bc6e7f730db7daf5896ba5c, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7e6599633bc6e7f730db7daf5896ba5c->m_type_description == NULL);
    frame_7e6599633bc6e7f730db7daf5896ba5c = cache_frame_7e6599633bc6e7f730db7daf5896ba5c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7e6599633bc6e7f730db7daf5896ba5c);
    assert(Py_REFCNT(frame_7e6599633bc6e7f730db7daf5896ba5c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_1 = par_path;
        frame_7e6599633bc6e7f730db7daf5896ba5c->m_frame.f_lineno = 283;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_path;
            assert(old != NULL);
            par_path = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_isfile_arg_1;
        CHECK_OBJECT(par_path);
        tmp_isfile_arg_1 = par_path;
        tmp_return_value = OS_PATH_FILE_ISFILE(tmp_isfile_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
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
        exception_tb = MAKE_TRACEBACK(frame_7e6599633bc6e7f730db7daf5896ba5c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7e6599633bc6e7f730db7daf5896ba5c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7e6599633bc6e7f730db7daf5896ba5c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7e6599633bc6e7f730db7daf5896ba5c,
        type_description_1,
        par_self,
        par_path
    );


    // Release cached frame if used for exception.
    if (frame_7e6599633bc6e7f730db7daf5896ba5c == cache_frame_7e6599633bc6e7f730db7daf5896ba5c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7e6599633bc6e7f730db7daf5896ba5c);
        cache_frame_7e6599633bc6e7f730db7daf5896ba5c = NULL;
    }

    assertFrameObject(frame_7e6599633bc6e7f730db7daf5896ba5c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    par_path = NULL;
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

    Py_XDECREF(par_path);
    par_path = NULL;
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


static PyObject *impl_pyarrow$filesystem$$$function__26_exists(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    struct Nuitka_FrameObject *frame_5956dc43cfe9826196f2cf6ba86625c4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5956dc43cfe9826196f2cf6ba86625c4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5956dc43cfe9826196f2cf6ba86625c4)) {
        Py_XDECREF(cache_frame_5956dc43cfe9826196f2cf6ba86625c4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5956dc43cfe9826196f2cf6ba86625c4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5956dc43cfe9826196f2cf6ba86625c4 = MAKE_FUNCTION_FRAME(codeobj_5956dc43cfe9826196f2cf6ba86625c4, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5956dc43cfe9826196f2cf6ba86625c4->m_type_description == NULL);
    frame_5956dc43cfe9826196f2cf6ba86625c4 = cache_frame_5956dc43cfe9826196f2cf6ba86625c4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5956dc43cfe9826196f2cf6ba86625c4);
    assert(Py_REFCNT(frame_5956dc43cfe9826196f2cf6ba86625c4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_1 = par_path;
        frame_5956dc43cfe9826196f2cf6ba86625c4->m_frame.f_lineno = 292;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_path;
            assert(old != NULL);
            par_path = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_exists_arg_1;
        CHECK_OBJECT(par_path);
        tmp_exists_arg_1 = par_path;
        tmp_return_value = OS_PATH_FILE_EXISTS(tmp_exists_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
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
        exception_tb = MAKE_TRACEBACK(frame_5956dc43cfe9826196f2cf6ba86625c4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5956dc43cfe9826196f2cf6ba86625c4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5956dc43cfe9826196f2cf6ba86625c4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5956dc43cfe9826196f2cf6ba86625c4,
        type_description_1,
        par_self,
        par_path
    );


    // Release cached frame if used for exception.
    if (frame_5956dc43cfe9826196f2cf6ba86625c4 == cache_frame_5956dc43cfe9826196f2cf6ba86625c4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5956dc43cfe9826196f2cf6ba86625c4);
        cache_frame_5956dc43cfe9826196f2cf6ba86625c4 = NULL;
    }

    assertFrameObject(frame_5956dc43cfe9826196f2cf6ba86625c4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    par_path = NULL;
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

    Py_XDECREF(par_path);
    par_path = NULL;
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


static PyObject *impl_pyarrow$filesystem$$$function__27_open(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *par_mode = python_pars[2];
    struct Nuitka_FrameObject *frame_c1dc99ad0eeca9e2720507c8d3aeb79c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c1dc99ad0eeca9e2720507c8d3aeb79c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c1dc99ad0eeca9e2720507c8d3aeb79c)) {
        Py_XDECREF(cache_frame_c1dc99ad0eeca9e2720507c8d3aeb79c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c1dc99ad0eeca9e2720507c8d3aeb79c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c1dc99ad0eeca9e2720507c8d3aeb79c = MAKE_FUNCTION_FRAME(codeobj_c1dc99ad0eeca9e2720507c8d3aeb79c, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c1dc99ad0eeca9e2720507c8d3aeb79c->m_type_description == NULL);
    frame_c1dc99ad0eeca9e2720507c8d3aeb79c = cache_frame_c1dc99ad0eeca9e2720507c8d3aeb79c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c1dc99ad0eeca9e2720507c8d3aeb79c);
    assert(Py_REFCNT(frame_c1dc99ad0eeca9e2720507c8d3aeb79c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_1 = par_path;
        frame_c1dc99ad0eeca9e2720507c8d3aeb79c->m_frame.f_lineno = 300;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_path;
            assert(old != NULL);
            par_path = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        CHECK_OBJECT(par_path);
        tmp_open_filename_1 = par_path;
        CHECK_OBJECT(par_mode);
        tmp_open_mode_1 = par_mode;
        tmp_return_value = BUILTIN_OPEN(tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
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
        exception_tb = MAKE_TRACEBACK(frame_c1dc99ad0eeca9e2720507c8d3aeb79c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c1dc99ad0eeca9e2720507c8d3aeb79c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c1dc99ad0eeca9e2720507c8d3aeb79c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c1dc99ad0eeca9e2720507c8d3aeb79c,
        type_description_1,
        par_self,
        par_path,
        par_mode
    );


    // Release cached frame if used for exception.
    if (frame_c1dc99ad0eeca9e2720507c8d3aeb79c == cache_frame_c1dc99ad0eeca9e2720507c8d3aeb79c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c1dc99ad0eeca9e2720507c8d3aeb79c);
        cache_frame_c1dc99ad0eeca9e2720507c8d3aeb79c = NULL;
    }

    assertFrameObject(frame_c1dc99ad0eeca9e2720507c8d3aeb79c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    par_path = NULL;
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

    Py_XDECREF(par_path);
    par_path = NULL;
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
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$filesystem$$$function__28_pathsep(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7f241669e91b02a8512ee99f8d2e8cb4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7f241669e91b02a8512ee99f8d2e8cb4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7f241669e91b02a8512ee99f8d2e8cb4)) {
        Py_XDECREF(cache_frame_7f241669e91b02a8512ee99f8d2e8cb4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7f241669e91b02a8512ee99f8d2e8cb4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7f241669e91b02a8512ee99f8d2e8cb4 = MAKE_FUNCTION_FRAME(codeobj_7f241669e91b02a8512ee99f8d2e8cb4, module_pyarrow$filesystem, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7f241669e91b02a8512ee99f8d2e8cb4->m_type_description == NULL);
    frame_7f241669e91b02a8512ee99f8d2e8cb4 = cache_frame_7f241669e91b02a8512ee99f8d2e8cb4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7f241669e91b02a8512ee99f8d2e8cb4);
    assert(Py_REFCNT(frame_7f241669e91b02a8512ee99f8d2e8cb4) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = IMPORT_HARD_NTPATH();
        assert(!(tmp_expression_value_1 == NULL));
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[66]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
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
        exception_tb = MAKE_TRACEBACK(frame_7f241669e91b02a8512ee99f8d2e8cb4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7f241669e91b02a8512ee99f8d2e8cb4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7f241669e91b02a8512ee99f8d2e8cb4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7f241669e91b02a8512ee99f8d2e8cb4,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7f241669e91b02a8512ee99f8d2e8cb4 == cache_frame_7f241669e91b02a8512ee99f8d2e8cb4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7f241669e91b02a8512ee99f8d2e8cb4);
        cache_frame_7f241669e91b02a8512ee99f8d2e8cb4 = NULL;
    }

    assertFrameObject(frame_7f241669e91b02a8512ee99f8d2e8cb4);

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


static PyObject *impl_pyarrow$filesystem$$$function__29_walk(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    struct Nuitka_FrameObject *frame_7b364ab455877cbb6d9ca3b0b9b3a0da;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7b364ab455877cbb6d9ca3b0b9b3a0da = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7b364ab455877cbb6d9ca3b0b9b3a0da)) {
        Py_XDECREF(cache_frame_7b364ab455877cbb6d9ca3b0b9b3a0da);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7b364ab455877cbb6d9ca3b0b9b3a0da == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7b364ab455877cbb6d9ca3b0b9b3a0da = MAKE_FUNCTION_FRAME(codeobj_7b364ab455877cbb6d9ca3b0b9b3a0da, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7b364ab455877cbb6d9ca3b0b9b3a0da->m_type_description == NULL);
    frame_7b364ab455877cbb6d9ca3b0b9b3a0da = cache_frame_7b364ab455877cbb6d9ca3b0b9b3a0da;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7b364ab455877cbb6d9ca3b0b9b3a0da);
    assert(Py_REFCNT(frame_7b364ab455877cbb6d9ca3b0b9b3a0da) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_1 = par_path;
        frame_7b364ab455877cbb6d9ca3b0b9b3a0da->m_frame.f_lineno = 311;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_path;
            assert(old != NULL);
            par_path = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        CHECK_OBJECT(par_path);
        tmp_args_element_value_2 = par_path;
        frame_7b364ab455877cbb6d9ca3b0b9b3a0da->m_frame.f_lineno = 312;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[15], tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
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
        exception_tb = MAKE_TRACEBACK(frame_7b364ab455877cbb6d9ca3b0b9b3a0da, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7b364ab455877cbb6d9ca3b0b9b3a0da->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7b364ab455877cbb6d9ca3b0b9b3a0da, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7b364ab455877cbb6d9ca3b0b9b3a0da,
        type_description_1,
        par_self,
        par_path
    );


    // Release cached frame if used for exception.
    if (frame_7b364ab455877cbb6d9ca3b0b9b3a0da == cache_frame_7b364ab455877cbb6d9ca3b0b9b3a0da) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7b364ab455877cbb6d9ca3b0b9b3a0da);
        cache_frame_7b364ab455877cbb6d9ca3b0b9b3a0da = NULL;
    }

    assertFrameObject(frame_7b364ab455877cbb6d9ca3b0b9b3a0da);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    par_path = NULL;
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

    Py_XDECREF(par_path);
    par_path = NULL;
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


static PyObject *impl_pyarrow$filesystem$$$function__30___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_fs = python_pars[1];
    struct Nuitka_FrameObject *frame_4a05af87862755c4b44ff700d68e60ee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_4a05af87862755c4b44ff700d68e60ee = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4a05af87862755c4b44ff700d68e60ee)) {
        Py_XDECREF(cache_frame_4a05af87862755c4b44ff700d68e60ee);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4a05af87862755c4b44ff700d68e60ee == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4a05af87862755c4b44ff700d68e60ee = MAKE_FUNCTION_FRAME(codeobj_4a05af87862755c4b44ff700d68e60ee, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4a05af87862755c4b44ff700d68e60ee->m_type_description == NULL);
    frame_4a05af87862755c4b44ff700d68e60ee = cache_frame_4a05af87862755c4b44ff700d68e60ee;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4a05af87862755c4b44ff700d68e60ee);
    assert(Py_REFCNT(frame_4a05af87862755c4b44ff700d68e60ee) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[46]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[68];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "oo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[49]);
        frame_4a05af87862755c4b44ff700d68e60ee->m_frame.f_lineno = 321;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_fs);
        tmp_assattr_value_1 = par_fs;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[69], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4a05af87862755c4b44ff700d68e60ee, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4a05af87862755c4b44ff700d68e60ee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4a05af87862755c4b44ff700d68e60ee, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4a05af87862755c4b44ff700d68e60ee,
        type_description_1,
        par_self,
        par_fs
    );


    // Release cached frame if used for exception.
    if (frame_4a05af87862755c4b44ff700d68e60ee == cache_frame_4a05af87862755c4b44ff700d68e60ee) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4a05af87862755c4b44ff700d68e60ee);
        cache_frame_4a05af87862755c4b44ff700d68e60ee = NULL;
    }

    assertFrameObject(frame_4a05af87862755c4b44ff700d68e60ee);

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
    CHECK_OBJECT(par_fs);
    Py_DECREF(par_fs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_fs);
    Py_DECREF(par_fs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$filesystem$$$function__31_isdir(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    struct Nuitka_FrameObject *frame_45fe04c005444488bca35a3f8f55d241;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_45fe04c005444488bca35a3f8f55d241 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_45fe04c005444488bca35a3f8f55d241)) {
        Py_XDECREF(cache_frame_45fe04c005444488bca35a3f8f55d241);

#if _DEBUG_REFCOUNTS
        if (cache_frame_45fe04c005444488bca35a3f8f55d241 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_45fe04c005444488bca35a3f8f55d241 = MAKE_FUNCTION_FRAME(codeobj_45fe04c005444488bca35a3f8f55d241, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_45fe04c005444488bca35a3f8f55d241->m_type_description == NULL);
    frame_45fe04c005444488bca35a3f8f55d241 = cache_frame_45fe04c005444488bca35a3f8f55d241;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_45fe04c005444488bca35a3f8f55d241);
    assert(Py_REFCNT(frame_45fe04c005444488bca35a3f8f55d241) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[70];
        frame_45fe04c005444488bca35a3f8f55d241->m_frame.f_lineno = 329;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 329;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_45fe04c005444488bca35a3f8f55d241, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_45fe04c005444488bca35a3f8f55d241->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_45fe04c005444488bca35a3f8f55d241, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_45fe04c005444488bca35a3f8f55d241,
        type_description_1,
        par_self,
        par_path
    );


    // Release cached frame if used for exception.
    if (frame_45fe04c005444488bca35a3f8f55d241 == cache_frame_45fe04c005444488bca35a3f8f55d241) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_45fe04c005444488bca35a3f8f55d241);
        cache_frame_45fe04c005444488bca35a3f8f55d241 = NULL;
    }

    assertFrameObject(frame_45fe04c005444488bca35a3f8f55d241);

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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_pyarrow$filesystem$$$function__32_isfile(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    struct Nuitka_FrameObject *frame_fd5f6572f427b5146952ce1768b96d1a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fd5f6572f427b5146952ce1768b96d1a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fd5f6572f427b5146952ce1768b96d1a)) {
        Py_XDECREF(cache_frame_fd5f6572f427b5146952ce1768b96d1a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fd5f6572f427b5146952ce1768b96d1a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fd5f6572f427b5146952ce1768b96d1a = MAKE_FUNCTION_FRAME(codeobj_fd5f6572f427b5146952ce1768b96d1a, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fd5f6572f427b5146952ce1768b96d1a->m_type_description == NULL);
    frame_fd5f6572f427b5146952ce1768b96d1a = cache_frame_fd5f6572f427b5146952ce1768b96d1a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fd5f6572f427b5146952ce1768b96d1a);
    assert(Py_REFCNT(frame_fd5f6572f427b5146952ce1768b96d1a) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[70];
        frame_fd5f6572f427b5146952ce1768b96d1a->m_frame.f_lineno = 333;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 333;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fd5f6572f427b5146952ce1768b96d1a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fd5f6572f427b5146952ce1768b96d1a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fd5f6572f427b5146952ce1768b96d1a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fd5f6572f427b5146952ce1768b96d1a,
        type_description_1,
        par_self,
        par_path
    );


    // Release cached frame if used for exception.
    if (frame_fd5f6572f427b5146952ce1768b96d1a == cache_frame_fd5f6572f427b5146952ce1768b96d1a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fd5f6572f427b5146952ce1768b96d1a);
        cache_frame_fd5f6572f427b5146952ce1768b96d1a = NULL;
    }

    assertFrameObject(frame_fd5f6572f427b5146952ce1768b96d1a);

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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_pyarrow$filesystem$$$function__34_delete(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *par_recursive = python_pars[2];
    struct Nuitka_FrameObject *frame_c5660fa95f21b00d359fd3799f497d7d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c5660fa95f21b00d359fd3799f497d7d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c5660fa95f21b00d359fd3799f497d7d)) {
        Py_XDECREF(cache_frame_c5660fa95f21b00d359fd3799f497d7d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c5660fa95f21b00d359fd3799f497d7d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c5660fa95f21b00d359fd3799f497d7d = MAKE_FUNCTION_FRAME(codeobj_c5660fa95f21b00d359fd3799f497d7d, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c5660fa95f21b00d359fd3799f497d7d->m_type_description == NULL);
    frame_c5660fa95f21b00d359fd3799f497d7d = cache_frame_c5660fa95f21b00d359fd3799f497d7d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c5660fa95f21b00d359fd3799f497d7d);
    assert(Py_REFCNT(frame_c5660fa95f21b00d359fd3799f497d7d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_1 = par_path;
        frame_c5660fa95f21b00d359fd3799f497d7d->m_frame.f_lineno = 345;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_path;
            assert(old != NULL);
            par_path = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[69]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[71]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_kw_call_arg_value_0_1 = par_path;
        CHECK_OBJECT(par_recursive);
        tmp_kw_call_dict_value_0_1 = par_recursive;
        frame_c5660fa95f21b00d359fd3799f497d7d->m_frame.f_lineno = 346;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[27]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
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
        exception_tb = MAKE_TRACEBACK(frame_c5660fa95f21b00d359fd3799f497d7d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c5660fa95f21b00d359fd3799f497d7d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c5660fa95f21b00d359fd3799f497d7d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c5660fa95f21b00d359fd3799f497d7d,
        type_description_1,
        par_self,
        par_path,
        par_recursive
    );


    // Release cached frame if used for exception.
    if (frame_c5660fa95f21b00d359fd3799f497d7d == cache_frame_c5660fa95f21b00d359fd3799f497d7d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c5660fa95f21b00d359fd3799f497d7d);
        cache_frame_c5660fa95f21b00d359fd3799f497d7d = NULL;
    }

    assertFrameObject(frame_c5660fa95f21b00d359fd3799f497d7d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    par_path = NULL;
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

    Py_XDECREF(par_path);
    par_path = NULL;
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
    CHECK_OBJECT(par_recursive);
    Py_DECREF(par_recursive);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_recursive);
    Py_DECREF(par_recursive);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$filesystem$$$function__35_exists(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    struct Nuitka_FrameObject *frame_05c5a1d48bf547a952c73f401b9a08ae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_05c5a1d48bf547a952c73f401b9a08ae = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_05c5a1d48bf547a952c73f401b9a08ae)) {
        Py_XDECREF(cache_frame_05c5a1d48bf547a952c73f401b9a08ae);

#if _DEBUG_REFCOUNTS
        if (cache_frame_05c5a1d48bf547a952c73f401b9a08ae == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_05c5a1d48bf547a952c73f401b9a08ae = MAKE_FUNCTION_FRAME(codeobj_05c5a1d48bf547a952c73f401b9a08ae, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_05c5a1d48bf547a952c73f401b9a08ae->m_type_description == NULL);
    frame_05c5a1d48bf547a952c73f401b9a08ae = cache_frame_05c5a1d48bf547a952c73f401b9a08ae;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_05c5a1d48bf547a952c73f401b9a08ae);
    assert(Py_REFCNT(frame_05c5a1d48bf547a952c73f401b9a08ae) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_1 = par_path;
        frame_05c5a1d48bf547a952c73f401b9a08ae->m_frame.f_lineno = 350;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_path;
            assert(old != NULL);
            par_path = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[69]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_2 = par_path;
        frame_05c5a1d48bf547a952c73f401b9a08ae->m_frame.f_lineno = 351;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[72], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
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
        exception_tb = MAKE_TRACEBACK(frame_05c5a1d48bf547a952c73f401b9a08ae, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_05c5a1d48bf547a952c73f401b9a08ae->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_05c5a1d48bf547a952c73f401b9a08ae, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_05c5a1d48bf547a952c73f401b9a08ae,
        type_description_1,
        par_self,
        par_path
    );


    // Release cached frame if used for exception.
    if (frame_05c5a1d48bf547a952c73f401b9a08ae == cache_frame_05c5a1d48bf547a952c73f401b9a08ae) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_05c5a1d48bf547a952c73f401b9a08ae);
        cache_frame_05c5a1d48bf547a952c73f401b9a08ae = NULL;
    }

    assertFrameObject(frame_05c5a1d48bf547a952c73f401b9a08ae);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    par_path = NULL;
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

    Py_XDECREF(par_path);
    par_path = NULL;
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


static PyObject *impl_pyarrow$filesystem$$$function__36_mkdir(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *par_create_parents = python_pars[2];
    struct Nuitka_FrameObject *frame_a306fa4298d809f2c7b2925f6f548be1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a306fa4298d809f2c7b2925f6f548be1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a306fa4298d809f2c7b2925f6f548be1)) {
        Py_XDECREF(cache_frame_a306fa4298d809f2c7b2925f6f548be1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a306fa4298d809f2c7b2925f6f548be1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a306fa4298d809f2c7b2925f6f548be1 = MAKE_FUNCTION_FRAME(codeobj_a306fa4298d809f2c7b2925f6f548be1, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a306fa4298d809f2c7b2925f6f548be1->m_type_description == NULL);
    frame_a306fa4298d809f2c7b2925f6f548be1 = cache_frame_a306fa4298d809f2c7b2925f6f548be1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a306fa4298d809f2c7b2925f6f548be1);
    assert(Py_REFCNT(frame_a306fa4298d809f2c7b2925f6f548be1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_1 = par_path;
        frame_a306fa4298d809f2c7b2925f6f548be1->m_frame.f_lineno = 355;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_path;
            assert(old != NULL);
            par_path = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_create_parents);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_create_parents);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[69]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_2 = par_path;
        frame_a306fa4298d809f2c7b2925f6f548be1->m_frame.f_lineno = 357;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[73], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[69]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_3 = par_path;
        frame_a306fa4298d809f2c7b2925f6f548be1->m_frame.f_lineno = 359;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[65], tmp_args_element_value_3);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a306fa4298d809f2c7b2925f6f548be1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a306fa4298d809f2c7b2925f6f548be1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a306fa4298d809f2c7b2925f6f548be1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a306fa4298d809f2c7b2925f6f548be1,
        type_description_1,
        par_self,
        par_path,
        par_create_parents
    );


    // Release cached frame if used for exception.
    if (frame_a306fa4298d809f2c7b2925f6f548be1 == cache_frame_a306fa4298d809f2c7b2925f6f548be1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a306fa4298d809f2c7b2925f6f548be1);
        cache_frame_a306fa4298d809f2c7b2925f6f548be1 = NULL;
    }

    assertFrameObject(frame_a306fa4298d809f2c7b2925f6f548be1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_path);
    par_path = NULL;
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

    Py_XDECREF(par_path);
    par_path = NULL;
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
    CHECK_OBJECT(par_create_parents);
    Py_DECREF(par_create_parents);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_create_parents);
    Py_DECREF(par_create_parents);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$filesystem$$$function__37_open(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *par_mode = python_pars[2];
    struct Nuitka_FrameObject *frame_8fc27b0f8851ddf09690cec72a7efc8c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8fc27b0f8851ddf09690cec72a7efc8c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8fc27b0f8851ddf09690cec72a7efc8c)) {
        Py_XDECREF(cache_frame_8fc27b0f8851ddf09690cec72a7efc8c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8fc27b0f8851ddf09690cec72a7efc8c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8fc27b0f8851ddf09690cec72a7efc8c = MAKE_FUNCTION_FRAME(codeobj_8fc27b0f8851ddf09690cec72a7efc8c, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8fc27b0f8851ddf09690cec72a7efc8c->m_type_description == NULL);
    frame_8fc27b0f8851ddf09690cec72a7efc8c = cache_frame_8fc27b0f8851ddf09690cec72a7efc8c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8fc27b0f8851ddf09690cec72a7efc8c);
    assert(Py_REFCNT(frame_8fc27b0f8851ddf09690cec72a7efc8c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_1 = par_path;
        frame_8fc27b0f8851ddf09690cec72a7efc8c->m_frame.f_lineno = 366;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_path;
            assert(old != NULL);
            par_path = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[69]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_kw_call_arg_value_0_1 = par_path;
        CHECK_OBJECT(par_mode);
        tmp_kw_call_dict_value_0_1 = par_mode;
        frame_8fc27b0f8851ddf09690cec72a7efc8c->m_frame.f_lineno = 367;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[74]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
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
        exception_tb = MAKE_TRACEBACK(frame_8fc27b0f8851ddf09690cec72a7efc8c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8fc27b0f8851ddf09690cec72a7efc8c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8fc27b0f8851ddf09690cec72a7efc8c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8fc27b0f8851ddf09690cec72a7efc8c,
        type_description_1,
        par_self,
        par_path,
        par_mode
    );


    // Release cached frame if used for exception.
    if (frame_8fc27b0f8851ddf09690cec72a7efc8c == cache_frame_8fc27b0f8851ddf09690cec72a7efc8c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8fc27b0f8851ddf09690cec72a7efc8c);
        cache_frame_8fc27b0f8851ddf09690cec72a7efc8c = NULL;
    }

    assertFrameObject(frame_8fc27b0f8851ddf09690cec72a7efc8c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    par_path = NULL;
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

    Py_XDECREF(par_path);
    par_path = NULL;
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
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$filesystem$$$function__38_ls(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *par_detail = python_pars[2];
    struct Nuitka_FrameObject *frame_b09a8b548d1bd1a648852a3b96134ff5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b09a8b548d1bd1a648852a3b96134ff5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b09a8b548d1bd1a648852a3b96134ff5)) {
        Py_XDECREF(cache_frame_b09a8b548d1bd1a648852a3b96134ff5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b09a8b548d1bd1a648852a3b96134ff5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b09a8b548d1bd1a648852a3b96134ff5 = MAKE_FUNCTION_FRAME(codeobj_b09a8b548d1bd1a648852a3b96134ff5, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b09a8b548d1bd1a648852a3b96134ff5->m_type_description == NULL);
    frame_b09a8b548d1bd1a648852a3b96134ff5 = cache_frame_b09a8b548d1bd1a648852a3b96134ff5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b09a8b548d1bd1a648852a3b96134ff5);
    assert(Py_REFCNT(frame_b09a8b548d1bd1a648852a3b96134ff5) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_1 = par_path;
        frame_b09a8b548d1bd1a648852a3b96134ff5->m_frame.f_lineno = 370;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_path;
            assert(old != NULL);
            par_path = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[69]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[75]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_kw_call_arg_value_0_1 = par_path;
        CHECK_OBJECT(par_detail);
        tmp_kw_call_dict_value_0_1 = par_detail;
        frame_b09a8b548d1bd1a648852a3b96134ff5->m_frame.f_lineno = 371;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[76]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
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
        exception_tb = MAKE_TRACEBACK(frame_b09a8b548d1bd1a648852a3b96134ff5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b09a8b548d1bd1a648852a3b96134ff5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b09a8b548d1bd1a648852a3b96134ff5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b09a8b548d1bd1a648852a3b96134ff5,
        type_description_1,
        par_self,
        par_path,
        par_detail
    );


    // Release cached frame if used for exception.
    if (frame_b09a8b548d1bd1a648852a3b96134ff5 == cache_frame_b09a8b548d1bd1a648852a3b96134ff5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b09a8b548d1bd1a648852a3b96134ff5);
        cache_frame_b09a8b548d1bd1a648852a3b96134ff5 = NULL;
    }

    assertFrameObject(frame_b09a8b548d1bd1a648852a3b96134ff5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    par_path = NULL;
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

    Py_XDECREF(par_path);
    par_path = NULL;
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
    CHECK_OBJECT(par_detail);
    Py_DECREF(par_detail);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_detail);
    Py_DECREF(par_detail);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$filesystem$$$function__39_walk(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    struct Nuitka_FrameObject *frame_c0286ef63e67bb22c6a30d7332e2f388;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c0286ef63e67bb22c6a30d7332e2f388 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c0286ef63e67bb22c6a30d7332e2f388)) {
        Py_XDECREF(cache_frame_c0286ef63e67bb22c6a30d7332e2f388);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c0286ef63e67bb22c6a30d7332e2f388 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c0286ef63e67bb22c6a30d7332e2f388 = MAKE_FUNCTION_FRAME(codeobj_c0286ef63e67bb22c6a30d7332e2f388, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c0286ef63e67bb22c6a30d7332e2f388->m_type_description == NULL);
    frame_c0286ef63e67bb22c6a30d7332e2f388 = cache_frame_c0286ef63e67bb22c6a30d7332e2f388;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c0286ef63e67bb22c6a30d7332e2f388);
    assert(Py_REFCNT(frame_c0286ef63e67bb22c6a30d7332e2f388) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_1 = par_path;
        frame_c0286ef63e67bb22c6a30d7332e2f388->m_frame.f_lineno = 377;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_path;
            assert(old != NULL);
            par_path = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[69]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_2 = par_path;
        frame_c0286ef63e67bb22c6a30d7332e2f388->m_frame.f_lineno = 378;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[15], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
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
        exception_tb = MAKE_TRACEBACK(frame_c0286ef63e67bb22c6a30d7332e2f388, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c0286ef63e67bb22c6a30d7332e2f388->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c0286ef63e67bb22c6a30d7332e2f388, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c0286ef63e67bb22c6a30d7332e2f388,
        type_description_1,
        par_self,
        par_path
    );


    // Release cached frame if used for exception.
    if (frame_c0286ef63e67bb22c6a30d7332e2f388 == cache_frame_c0286ef63e67bb22c6a30d7332e2f388) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c0286ef63e67bb22c6a30d7332e2f388);
        cache_frame_c0286ef63e67bb22c6a30d7332e2f388 = NULL;
    }

    assertFrameObject(frame_c0286ef63e67bb22c6a30d7332e2f388);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    par_path = NULL;
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

    Py_XDECREF(par_path);
    par_path = NULL;
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


static PyObject *impl_pyarrow$filesystem$$$function__40_isdir(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *var_contents = NULL;
    struct Nuitka_FrameObject *frame_16459607660e99b9d014a78a1363f425;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_16459607660e99b9d014a78a1363f425 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_16459607660e99b9d014a78a1363f425)) {
        Py_XDECREF(cache_frame_16459607660e99b9d014a78a1363f425);

#if _DEBUG_REFCOUNTS
        if (cache_frame_16459607660e99b9d014a78a1363f425 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_16459607660e99b9d014a78a1363f425 = MAKE_FUNCTION_FRAME(codeobj_16459607660e99b9d014a78a1363f425, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_16459607660e99b9d014a78a1363f425->m_type_description == NULL);
    frame_16459607660e99b9d014a78a1363f425 = cache_frame_16459607660e99b9d014a78a1363f425;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_16459607660e99b9d014a78a1363f425);
    assert(Py_REFCNT(frame_16459607660e99b9d014a78a1363f425) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_2 = par_path;
        frame_16459607660e99b9d014a78a1363f425->m_frame.f_lineno = 385;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_16459607660e99b9d014a78a1363f425->m_frame.f_lineno = 385;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_path;
            assert(old != NULL);
            par_path = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[69]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_3 = par_path;
        frame_16459607660e99b9d014a78a1363f425->m_frame.f_lineno = 387;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[75], tmp_args_element_value_3);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(var_contents == NULL);
        var_contents = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        bool tmp_tmp_and_left_value_1_cbool_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_contents);
        tmp_len_arg_1 = var_contents;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = 1;
        tmp_tmp_and_left_value_1_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        tmp_and_left_value_1 = tmp_tmp_and_left_value_1_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_contents);
        tmp_expression_value_2 = var_contents;
        tmp_subscript_value_1 = mod_consts[14];
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_path);
        tmp_cmp_expr_right_2 = par_path;
        tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_16459607660e99b9d014a78a1363f425, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_16459607660e99b9d014a78a1363f425, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_3 = PyExc_OSError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 386;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_16459607660e99b9d014a78a1363f425->m_frame) frame_16459607660e99b9d014a78a1363f425->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_3;
    branch_end_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto frame_return_exit_1;
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
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_16459607660e99b9d014a78a1363f425, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_16459607660e99b9d014a78a1363f425->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_16459607660e99b9d014a78a1363f425, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_16459607660e99b9d014a78a1363f425,
        type_description_1,
        par_self,
        par_path,
        var_contents
    );


    // Release cached frame if used for exception.
    if (frame_16459607660e99b9d014a78a1363f425 == cache_frame_16459607660e99b9d014a78a1363f425) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_16459607660e99b9d014a78a1363f425);
        cache_frame_16459607660e99b9d014a78a1363f425 = NULL;
    }

    assertFrameObject(frame_16459607660e99b9d014a78a1363f425);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    par_path = NULL;
    Py_XDECREF(var_contents);
    var_contents = NULL;
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

    Py_XDECREF(par_path);
    par_path = NULL;
    Py_XDECREF(var_contents);
    var_contents = NULL;
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


static PyObject *impl_pyarrow$filesystem$$$function__41_isfile(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *var_contents = NULL;
    struct Nuitka_FrameObject *frame_94058a196af52a03458e7617f21d039e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_94058a196af52a03458e7617f21d039e = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_94058a196af52a03458e7617f21d039e)) {
        Py_XDECREF(cache_frame_94058a196af52a03458e7617f21d039e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_94058a196af52a03458e7617f21d039e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_94058a196af52a03458e7617f21d039e = MAKE_FUNCTION_FRAME(codeobj_94058a196af52a03458e7617f21d039e, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_94058a196af52a03458e7617f21d039e->m_type_description == NULL);
    frame_94058a196af52a03458e7617f21d039e = cache_frame_94058a196af52a03458e7617f21d039e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_94058a196af52a03458e7617f21d039e);
    assert(Py_REFCNT(frame_94058a196af52a03458e7617f21d039e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_2 = par_path;
        frame_94058a196af52a03458e7617f21d039e->m_frame.f_lineno = 397;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_94058a196af52a03458e7617f21d039e->m_frame.f_lineno = 397;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_path;
            assert(old != NULL);
            par_path = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[69]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_3 = par_path;
        frame_94058a196af52a03458e7617f21d039e->m_frame.f_lineno = 399;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[75], tmp_args_element_value_3);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(var_contents == NULL);
        var_contents = tmp_assign_source_2;
    }
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        bool tmp_tmp_and_left_value_1_cbool_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_contents);
        tmp_len_arg_1 = var_contents;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = 1;
        tmp_tmp_and_left_value_1_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        tmp_and_left_value_1 = (tmp_tmp_and_left_value_1_cbool_1 != false) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_contents);
        tmp_expression_value_2 = var_contents;
        tmp_subscript_value_1 = mod_consts[14];
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_path);
        tmp_cmp_expr_right_2 = par_path;
        tmp_and_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF(tmp_and_left_value_1);
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_94058a196af52a03458e7617f21d039e, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_94058a196af52a03458e7617f21d039e, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_3 = PyExc_OSError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 398;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_94058a196af52a03458e7617f21d039e->m_frame) frame_94058a196af52a03458e7617f21d039e->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto frame_return_exit_1;
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
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_94058a196af52a03458e7617f21d039e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_94058a196af52a03458e7617f21d039e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_94058a196af52a03458e7617f21d039e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_94058a196af52a03458e7617f21d039e,
        type_description_1,
        par_self,
        par_path,
        var_contents
    );


    // Release cached frame if used for exception.
    if (frame_94058a196af52a03458e7617f21d039e == cache_frame_94058a196af52a03458e7617f21d039e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_94058a196af52a03458e7617f21d039e);
        cache_frame_94058a196af52a03458e7617f21d039e = NULL;
    }

    assertFrameObject(frame_94058a196af52a03458e7617f21d039e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    par_path = NULL;
    Py_XDECREF(var_contents);
    var_contents = NULL;
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

    Py_XDECREF(par_path);
    par_path = NULL;
    Py_XDECREF(var_contents);
    var_contents = NULL;
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


static PyObject *impl_pyarrow$filesystem$$$function__42_walk(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_path = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_refresh = Nuitka_Cell_New1(python_pars[2]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = par_path;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_refresh;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_self;
        Py_INCREF(tmp_closure_1[2]);

        tmp_return_value = MAKE_GENERATOR_pyarrow$filesystem$$$function__42_walk$$$genobj__1_walk(tmp_closure_1);

        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    par_path = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_refresh);
    Py_DECREF(par_refresh);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct pyarrow$filesystem$$$function__42_walk$$$genobj__1_walk_locals {
    PyObject *var_directories;
    PyObject *var_files;
    PyObject *var_key;
    PyObject *var_directory;
    PyObject *outline_0_var_f;
    PyObject *outline_1_var_x;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    PyObject *tmp_for_loop_2__for_iterator;
    PyObject *tmp_for_loop_2__iter_value;
    PyObject *tmp_listcomp_1__$0;
    PyObject *tmp_listcomp_1__contraction;
    PyObject *tmp_listcomp_1__iter_value_0;
    PyObject *tmp_listcomp_2__$0;
    PyObject *tmp_listcomp_2__contraction;
    PyObject *tmp_listcomp_2__iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    struct Nuitka_FrameObject *frame_d1ccf487c8f98e1cbc6de16b689bbf72_2;
    char const *type_description_2;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    struct Nuitka_FrameObject *frame_901a22f5724cb31f758a4314c50f37d3_3;
    char const *type_description_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
};

static PyObject *pyarrow$filesystem$$$function__42_walk$$$genobj__1_walk_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct pyarrow$filesystem$$$function__42_walk$$$genobj__1_walk_locals *generator_heap = (struct pyarrow$filesystem$$$function__42_walk$$$genobj__1_walk_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d1ccf487c8f98e1cbc6de16b689bbf72_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_901a22f5724cb31f758a4314c50f37d3_3 = NULL;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_directories = NULL;
    generator_heap->var_files = NULL;
    generator_heap->var_key = NULL;
    generator_heap->var_directory = NULL;
    generator_heap->outline_0_var_f = NULL;
    generator_heap->outline_1_var_x = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    generator_heap->tmp_listcomp_1__$0 = NULL;
    generator_heap->tmp_listcomp_1__contraction = NULL;
    generator_heap->tmp_listcomp_1__iter_value_0 = NULL;
    generator_heap->tmp_listcomp_2__$0 = NULL;
    generator_heap->tmp_listcomp_2__contraction = NULL;
    generator_heap->tmp_listcomp_2__iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;
    generator_heap->type_description_2 = NULL;
    generator_heap->type_description_3 = NULL;

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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_697af669e42691ce5ee119c873a0e53b, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 411;
            generator_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 411;
            generator_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[60]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 411;
            generator_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 411;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 411;
            generator_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 411;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 411;
            generator_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(generator->m_closure[0]);
            PyCell_SET(generator->m_closure[0], tmp_assign_source_1);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PySet_New(NULL);
        assert(generator_heap->var_directories == NULL);
        generator_heap->var_directories = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PySet_New(NULL);
        assert(generator_heap->var_files == NULL);
        generator_heap->var_files = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[17]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 415;
            generator_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[2]);
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[69]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 415;
            generator_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[80]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 415;
            generator_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[81]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 415;
            generator_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        generator->m_frame->m_frame.f_lineno = 415;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[82]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 415;
            generator_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 415;
            generator_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        assert(!(tmp_assign_source_4 == NULL));
        assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "cccoooo";
                generator_heap->exception_lineno = 415;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_assign_source_6 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_key;
            generator_heap->var_key = tmp_assign_source_6;
            Py_INCREF(generator_heap->var_key);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(generator_heap->var_key);
        tmp_expression_value_3 = generator_heap->var_key;
        tmp_subscript_value_1 = mod_consts[83];
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 416;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = Nuitka_Cell_GET(generator->m_closure[0]);
            PyCell_SET(generator->m_closure[0], tmp_assign_source_7);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(generator_heap->var_key);
        tmp_expression_value_4 = generator_heap->var_key;
        tmp_subscript_value_2 = mod_consts[84];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_2);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 417;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = mod_consts[85];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 417;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        if (generator_heap->var_directories == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[86]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 418;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = generator_heap->var_directories;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_args_element_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 418;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[87], tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 418;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(generator_heap->var_key);
        tmp_expression_value_5 = generator_heap->var_key;
        tmp_subscript_value_3 = mod_consts[84];
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_3);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 419;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_2 = mod_consts[88];
        tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 419;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_2;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 419;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        if (generator_heap->var_files == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[89]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 422;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = generator_heap->var_files;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_args_element_value_4 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 422;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[87], tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 422;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_2:;
    branch_end_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 415;
        generator_heap->type_description_1 = "cccoooo";
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

    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts[58]);
        assert(tmp_called_value_4 != NULL);
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_2;
            if (generator_heap->var_files == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[89]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 425;
                generator_heap->type_description_1 = "cccoooo";
                goto try_except_handler_3;
            }

            tmp_iter_arg_2 = generator_heap->var_files;
            tmp_assign_source_9 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 425;
                generator_heap->type_description_1 = "cccoooo";
                goto try_except_handler_3;
            }
            assert(generator_heap->tmp_listcomp_1__$0 == NULL);
            generator_heap->tmp_listcomp_1__$0 = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = MAKE_LIST_EMPTY(0);
            assert(generator_heap->tmp_listcomp_1__contraction == NULL);
            generator_heap->tmp_listcomp_1__contraction = tmp_assign_source_10;
        }
        if (isFrameUnusable(cache_frame_d1ccf487c8f98e1cbc6de16b689bbf72_2)) {
            Py_XDECREF(cache_frame_d1ccf487c8f98e1cbc6de16b689bbf72_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_d1ccf487c8f98e1cbc6de16b689bbf72_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_d1ccf487c8f98e1cbc6de16b689bbf72_2 = MAKE_FUNCTION_FRAME(codeobj_d1ccf487c8f98e1cbc6de16b689bbf72, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_d1ccf487c8f98e1cbc6de16b689bbf72_2->m_type_description == NULL);
        generator_heap->frame_d1ccf487c8f98e1cbc6de16b689bbf72_2 = cache_frame_d1ccf487c8f98e1cbc6de16b689bbf72_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(generator_heap->frame_d1ccf487c8f98e1cbc6de16b689bbf72_2);
        assert(Py_REFCNT(generator_heap->frame_d1ccf487c8f98e1cbc6de16b689bbf72_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT(generator_heap->tmp_listcomp_1__$0);
            tmp_next_source_2 = generator_heap->tmp_listcomp_1__$0;
            tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_11 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    generator_heap->type_description_2 = "oo";
                    generator_heap->exception_lineno = 425;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = generator_heap->tmp_listcomp_1__iter_value_0;
                generator_heap->tmp_listcomp_1__iter_value_0 = tmp_assign_source_11;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT(generator_heap->tmp_listcomp_1__iter_value_0);
            tmp_assign_source_12 = generator_heap->tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = generator_heap->outline_0_var_f;
                generator_heap->outline_0_var_f = tmp_assign_source_12;
                Py_INCREF(generator_heap->outline_0_var_f);
                Py_XDECREF(old);
            }

        }
        {
            bool tmp_condition_result_3;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(generator_heap->outline_0_var_f);
            tmp_cmp_expr_left_3 = generator_heap->outline_0_var_f;
            if (generator_heap->var_directories == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[86]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 426;
                generator_heap->type_description_2 = "oo";
                goto try_except_handler_4;
            }

            tmp_cmp_expr_right_3 = generator_heap->var_directories;
            generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
            if (generator_heap->tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 426;
                generator_heap->type_description_2 = "oo";
                goto try_except_handler_4;
            }
            tmp_condition_result_3 = (generator_heap->tmp_res == 0) ? true : false;
            if (tmp_condition_result_3 != false) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_called_value_5;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_subscript_value_4;
            CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
            tmp_append_list_1 = generator_heap->tmp_listcomp_1__contraction;
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 425;
                generator_heap->type_description_2 = "oo";
                goto try_except_handler_4;
            }
            tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[91]);
            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 425;
                generator_heap->type_description_2 = "oo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT(generator_heap->outline_0_var_f);
            tmp_args_element_value_6 = generator_heap->outline_0_var_f;
            generator_heap->frame_d1ccf487c8f98e1cbc6de16b689bbf72_2->m_frame.f_lineno = 425;
            tmp_expression_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_5);
            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 425;
                generator_heap->type_description_2 = "oo";
                goto try_except_handler_4;
            }
            tmp_subscript_value_4 = mod_consts[92];
            tmp_append_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_4, 1);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 425;
                generator_heap->type_description_2 = "oo";
                goto try_except_handler_4;
            }
            generator_heap->tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (generator_heap->tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 425;
                generator_heap->type_description_2 = "oo";
                goto try_except_handler_4;
            }
        }
        branch_no_3:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 425;
            generator_heap->type_description_2 = "oo";
            goto try_except_handler_4;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
        tmp_args_element_value_5 = generator_heap->tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_5);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(generator_heap->tmp_listcomp_1__$0);
        Py_DECREF(generator_heap->tmp_listcomp_1__$0);
        generator_heap->tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
        Py_DECREF(generator_heap->tmp_listcomp_1__contraction);
        generator_heap->tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp_1__iter_value_0);
        generator_heap->tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_1;
        // Exception handler code:
        try_except_handler_4:;
        generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        CHECK_OBJECT(generator_heap->tmp_listcomp_1__$0);
        Py_DECREF(generator_heap->tmp_listcomp_1__$0);
        generator_heap->tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
        Py_DECREF(generator_heap->tmp_listcomp_1__contraction);
        generator_heap->tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp_1__iter_value_0);
        generator_heap->tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_2;
        generator_heap->exception_value = generator_heap->exception_keeper_value_2;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_1:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_3;
        frame_exception_exit_2:


        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator_heap->frame_d1ccf487c8f98e1cbc6de16b689bbf72_2, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator_heap->frame_d1ccf487c8f98e1cbc6de16b689bbf72_2->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator_heap->frame_d1ccf487c8f98e1cbc6de16b689bbf72_2, generator_heap->exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            generator_heap->frame_d1ccf487c8f98e1cbc6de16b689bbf72_2,
            generator_heap->type_description_2,
            generator_heap->outline_0_var_f,
            generator_heap->var_directories
        );


        // Release cached frame if used for exception.
        if (generator_heap->frame_d1ccf487c8f98e1cbc6de16b689bbf72_2 == cache_frame_d1ccf487c8f98e1cbc6de16b689bbf72_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_d1ccf487c8f98e1cbc6de16b689bbf72_2);
            cache_frame_d1ccf487c8f98e1cbc6de16b689bbf72_2 = NULL;
        }

        assertFrameObject(generator_heap->frame_d1ccf487c8f98e1cbc6de16b689bbf72_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        generator_heap->type_description_1 = "cccoooo";
        goto try_except_handler_3;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF(generator_heap->outline_0_var_f);
        generator_heap->outline_0_var_f = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->outline_0_var_f);
        generator_heap->outline_0_var_f = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_3;
        generator_heap->exception_value = generator_heap->exception_keeper_value_3;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        generator_heap->exception_lineno = 425;
        goto frame_exception_exit_1;
        outline_result_1:;
        generator->m_frame->m_frame.f_lineno = 425;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 425;
            generator_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = generator_heap->var_files;
            generator_heap->var_files = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_6 = LOOKUP_BUILTIN(mod_consts[58]);
        assert(tmp_called_value_6 != NULL);
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_iter_arg_3;
            if (generator_heap->var_directories == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[86]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 428;
                generator_heap->type_description_1 = "cccoooo";
                goto try_except_handler_5;
            }

            tmp_iter_arg_3 = generator_heap->var_directories;
            tmp_assign_source_14 = MAKE_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 427;
                generator_heap->type_description_1 = "cccoooo";
                goto try_except_handler_5;
            }
            assert(generator_heap->tmp_listcomp_2__$0 == NULL);
            generator_heap->tmp_listcomp_2__$0 = tmp_assign_source_14;
        }
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = MAKE_LIST_EMPTY(0);
            assert(generator_heap->tmp_listcomp_2__contraction == NULL);
            generator_heap->tmp_listcomp_2__contraction = tmp_assign_source_15;
        }
        if (isFrameUnusable(cache_frame_901a22f5724cb31f758a4314c50f37d3_3)) {
            Py_XDECREF(cache_frame_901a22f5724cb31f758a4314c50f37d3_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_901a22f5724cb31f758a4314c50f37d3_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_901a22f5724cb31f758a4314c50f37d3_3 = MAKE_FUNCTION_FRAME(codeobj_901a22f5724cb31f758a4314c50f37d3, module_pyarrow$filesystem, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_901a22f5724cb31f758a4314c50f37d3_3->m_type_description == NULL);
        generator_heap->frame_901a22f5724cb31f758a4314c50f37d3_3 = cache_frame_901a22f5724cb31f758a4314c50f37d3_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(generator_heap->frame_901a22f5724cb31f758a4314c50f37d3_3);
        assert(Py_REFCNT(generator_heap->frame_901a22f5724cb31f758a4314c50f37d3_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT(generator_heap->tmp_listcomp_2__$0);
            tmp_next_source_3 = generator_heap->tmp_listcomp_2__$0;
            tmp_assign_source_16 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_16 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    generator_heap->type_description_2 = "o";
                    generator_heap->exception_lineno = 427;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = generator_heap->tmp_listcomp_2__iter_value_0;
                generator_heap->tmp_listcomp_2__iter_value_0 = tmp_assign_source_16;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT(generator_heap->tmp_listcomp_2__iter_value_0);
            tmp_assign_source_17 = generator_heap->tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = generator_heap->outline_1_var_x;
                generator_heap->outline_1_var_x = tmp_assign_source_17;
                Py_INCREF(generator_heap->outline_1_var_x);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_called_value_7;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_subscript_value_5;
            CHECK_OBJECT(generator_heap->tmp_listcomp_2__contraction);
            tmp_append_list_2 = generator_heap->tmp_listcomp_2__contraction;
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 427;
                generator_heap->type_description_2 = "o";
                goto try_except_handler_6;
            }
            tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[91]);
            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 427;
                generator_heap->type_description_2 = "o";
                goto try_except_handler_6;
            }
            CHECK_OBJECT(generator_heap->outline_1_var_x);
            tmp_args_element_value_8 = generator_heap->outline_1_var_x;
            generator_heap->frame_901a22f5724cb31f758a4314c50f37d3_3->m_frame.f_lineno = 427;
            tmp_expression_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_8);
            Py_DECREF(tmp_called_value_7);
            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 427;
                generator_heap->type_description_2 = "o";
                goto try_except_handler_6;
            }
            tmp_subscript_value_5 = mod_consts[92];
            tmp_append_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_5, 1);
            Py_DECREF(tmp_expression_value_8);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 427;
                generator_heap->type_description_2 = "o";
                goto try_except_handler_6;
            }
            generator_heap->tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (generator_heap->tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 427;
                generator_heap->type_description_2 = "o";
                goto try_except_handler_6;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 427;
            generator_heap->type_description_2 = "o";
            goto try_except_handler_6;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(generator_heap->tmp_listcomp_2__contraction);
        tmp_args_element_value_7 = generator_heap->tmp_listcomp_2__contraction;
        Py_INCREF(tmp_args_element_value_7);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(generator_heap->tmp_listcomp_2__$0);
        Py_DECREF(generator_heap->tmp_listcomp_2__$0);
        generator_heap->tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_listcomp_2__contraction);
        Py_DECREF(generator_heap->tmp_listcomp_2__contraction);
        generator_heap->tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp_2__iter_value_0);
        generator_heap->tmp_listcomp_2__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_6:;
        generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        CHECK_OBJECT(generator_heap->tmp_listcomp_2__$0);
        Py_DECREF(generator_heap->tmp_listcomp_2__$0);
        generator_heap->tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_listcomp_2__contraction);
        Py_DECREF(generator_heap->tmp_listcomp_2__contraction);
        generator_heap->tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp_2__iter_value_0);
        generator_heap->tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_4;
        generator_heap->exception_value = generator_heap->exception_keeper_value_4;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

        goto frame_exception_exit_3;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_5;
        frame_exception_exit_3:


        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator_heap->frame_901a22f5724cb31f758a4314c50f37d3_3, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator_heap->frame_901a22f5724cb31f758a4314c50f37d3_3->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator_heap->frame_901a22f5724cb31f758a4314c50f37d3_3, generator_heap->exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            generator_heap->frame_901a22f5724cb31f758a4314c50f37d3_3,
            generator_heap->type_description_2,
            generator_heap->outline_1_var_x
        );


        // Release cached frame if used for exception.
        if (generator_heap->frame_901a22f5724cb31f758a4314c50f37d3_3 == cache_frame_901a22f5724cb31f758a4314c50f37d3_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_901a22f5724cb31f758a4314c50f37d3_3);
            cache_frame_901a22f5724cb31f758a4314c50f37d3_3 = NULL;
        }

        assertFrameObject(generator_heap->frame_901a22f5724cb31f758a4314c50f37d3_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        generator_heap->type_description_1 = "cccoooo";
        goto try_except_handler_5;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_XDECREF(generator_heap->outline_1_var_x);
        generator_heap->outline_1_var_x = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        generator_heap->exception_keeper_type_5 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_5 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_5 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->outline_1_var_x);
        generator_heap->outline_1_var_x = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_5;
        generator_heap->exception_value = generator_heap->exception_keeper_value_5;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_5;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        generator_heap->exception_lineno = 427;
        goto frame_exception_exit_1;
        outline_result_2:;
        generator->m_frame->m_frame.f_lineno = 427;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 427;
            generator_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = generator_heap->var_directories;
            generator_heap->var_directories = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_10;
        PyObject *tmp_tuple_element_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[60]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 430;
            generator_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_expression_value_10 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_expression_value_10, 0, tmp_tuple_element_1);
        CHECK_OBJECT(generator_heap->var_directories);
        tmp_tuple_element_1 = generator_heap->var_directories;
        PyTuple_SET_ITEM0(tmp_expression_value_10, 1, tmp_tuple_element_1);
        CHECK_OBJECT(generator_heap->var_files);
        tmp_tuple_element_1 = generator_heap->var_files;
        PyTuple_SET_ITEM0(tmp_expression_value_10, 2, tmp_tuple_element_1);
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_10;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 430;
            generator_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(generator_heap->var_directories);
        tmp_iter_arg_4 = generator_heap->var_directories;
        tmp_assign_source_18 = MAKE_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 432;
            generator_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_2__for_iterator == NULL);
        generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_18;
    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
        tmp_next_source_4 = generator_heap->tmp_for_loop_2__for_iterator;
        tmp_assign_source_19 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_19 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "cccoooo";
                generator_heap->exception_lineno = 432;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
            generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(generator_heap->tmp_for_loop_2__iter_value);
        tmp_assign_source_20 = generator_heap->tmp_for_loop_2__iter_value;
        {
            PyObject *old = generator_heap->var_directory;
            generator_heap->var_directory = tmp_assign_source_20;
            Py_INCREF(generator_heap->var_directory);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_11;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_yieldfrom_result_1;
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[17]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 433;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_12 = Nuitka_Cell_GET(generator->m_closure[2]);
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[15]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 433;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(generator_heap->var_directory);
        tmp_kw_call_arg_value_0_2 = generator_heap->var_directory;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[81]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 433;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_7;
        }

        tmp_kw_call_dict_value_0_2 = Nuitka_Cell_GET(generator->m_closure[1]);
        generator->m_frame->m_frame.f_lineno = 433;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_expression_value_11 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_8, args, kw_values, mod_consts[82]);
        }

        Py_DECREF(tmp_called_value_8);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 433;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_7;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_8, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), &tmp_kw_call_arg_value_0_2, sizeof(PyObject *), &tmp_kw_call_dict_value_0_2, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 2;
        generator->m_yieldfrom = tmp_expression_value_11;
        return NULL;

        yield_return_2:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_8, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), &tmp_kw_call_arg_value_0_2, sizeof(PyObject *), &tmp_kw_call_dict_value_0_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 433;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_7;
        }
        tmp_yieldfrom_result_1 = yield_return_value;
        Py_DECREF(tmp_yieldfrom_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 432;
        generator_heap->type_description_1 = "cccoooo";
        goto try_except_handler_7;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_7:;
    generator_heap->exception_keeper_type_6 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_6 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_6 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_6;
    generator_heap->exception_value = generator_heap->exception_keeper_value_6;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_6;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_3;
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
            generator->m_closure[2],
            generator->m_closure[0],
            generator->m_closure[1],
            generator_heap->var_directories,
            generator_heap->var_files,
            generator_heap->var_key,
            generator_heap->var_directory
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

    frame_no_exception_3:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_7 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_7 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_7 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_directories);
    generator_heap->var_directories = NULL;
    Py_XDECREF(generator_heap->var_files);
    generator_heap->var_files = NULL;
    Py_XDECREF(generator_heap->var_key);
    generator_heap->var_key = NULL;
    Py_XDECREF(generator_heap->var_directory);
    generator_heap->var_directory = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_7;
    generator_heap->exception_value = generator_heap->exception_keeper_value_7;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_7;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:
    try_end_3:;
    Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    CHECK_OBJECT(generator_heap->var_directories);
    Py_DECREF(generator_heap->var_directories);
    generator_heap->var_directories = NULL;
    CHECK_OBJECT(generator_heap->var_files);
    Py_DECREF(generator_heap->var_files);
    generator_heap->var_files = NULL;
    Py_XDECREF(generator_heap->var_key);
    generator_heap->var_key = NULL;
    Py_XDECREF(generator_heap->var_directory);
    generator_heap->var_directory = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_pyarrow$filesystem$$$function__42_walk$$$genobj__1_walk(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        pyarrow$filesystem$$$function__42_walk$$$genobj__1_walk_context,
        module_pyarrow$filesystem,
        mod_consts[15],
#if PYTHON_VERSION >= 0x350
        mod_consts[93],
#endif
        codeobj_697af669e42691ce5ee119c873a0e53b,
        closure,
        3,
        sizeof(struct pyarrow$filesystem$$$function__42_walk$$$genobj__1_walk_locals)
    );
}


static PyObject *impl_pyarrow$filesystem$$$function__43__sanitize_s3(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[0];
    struct Nuitka_FrameObject *frame_bbcd0f099e8836266b6f509e54d667ab;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bbcd0f099e8836266b6f509e54d667ab = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bbcd0f099e8836266b6f509e54d667ab)) {
        Py_XDECREF(cache_frame_bbcd0f099e8836266b6f509e54d667ab);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bbcd0f099e8836266b6f509e54d667ab == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bbcd0f099e8836266b6f509e54d667ab = MAKE_FUNCTION_FRAME(codeobj_bbcd0f099e8836266b6f509e54d667ab, module_pyarrow$filesystem, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bbcd0f099e8836266b6f509e54d667ab->m_type_description == NULL);
    frame_bbcd0f099e8836266b6f509e54d667ab = cache_frame_bbcd0f099e8836266b6f509e54d667ab;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bbcd0f099e8836266b6f509e54d667ab);
    assert(Py_REFCNT(frame_bbcd0f099e8836266b6f509e54d667ab) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_path);
        tmp_expression_value_1 = par_path;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[94]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_bbcd0f099e8836266b6f509e54d667ab->m_frame.f_lineno = 437;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[95]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 437;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_path);
        tmp_expression_value_2 = par_path;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[96]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_bbcd0f099e8836266b6f509e54d667ab->m_frame.f_lineno = 438;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[97]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    CHECK_OBJECT(par_path);
    tmp_return_value = par_path;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bbcd0f099e8836266b6f509e54d667ab, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bbcd0f099e8836266b6f509e54d667ab->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bbcd0f099e8836266b6f509e54d667ab, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bbcd0f099e8836266b6f509e54d667ab,
        type_description_1,
        par_path
    );


    // Release cached frame if used for exception.
    if (frame_bbcd0f099e8836266b6f509e54d667ab == cache_frame_bbcd0f099e8836266b6f509e54d667ab) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bbcd0f099e8836266b6f509e54d667ab);
        cache_frame_bbcd0f099e8836266b6f509e54d667ab = NULL;
    }

    assertFrameObject(frame_bbcd0f099e8836266b6f509e54d667ab);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$filesystem$$$function__44__ensure_filesystem(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fs = python_pars[0];
    PyObject *var_fs_type = NULL;
    PyObject *var_fsspec = NULL;
    struct Nuitka_FrameObject *frame_640ee17012522cb53be2608f661e8155;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_640ee17012522cb53be2608f661e8155 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_fs);
        tmp_type_arg_1 = par_fs;
        tmp_assign_source_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(var_fs_type == NULL);
        var_fs_type = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_640ee17012522cb53be2608f661e8155)) {
        Py_XDECREF(cache_frame_640ee17012522cb53be2608f661e8155);

#if _DEBUG_REFCOUNTS
        if (cache_frame_640ee17012522cb53be2608f661e8155 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_640ee17012522cb53be2608f661e8155 = MAKE_FUNCTION_FRAME(codeobj_640ee17012522cb53be2608f661e8155, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_640ee17012522cb53be2608f661e8155->m_type_description == NULL);
    frame_640ee17012522cb53be2608f661e8155 = cache_frame_640ee17012522cb53be2608f661e8155;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_640ee17012522cb53be2608f661e8155);
    assert(Py_REFCNT(frame_640ee17012522cb53be2608f661e8155) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_issubclass_cls_1;
        PyObject *tmp_issubclass_classes_1;
        CHECK_OBJECT(var_fs_type);
        tmp_issubclass_cls_1 = var_fs_type;
        tmp_issubclass_classes_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_issubclass_classes_1 == NULL)) {
            tmp_issubclass_classes_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_issubclass_classes_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ooo";
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
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        tmp_cmp_expr_left_1 = mod_consts[99];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[101]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[101]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[99];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_fsspec == NULL);
        var_fsspec = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_fs);
        tmp_isinstance_inst_1 = par_fs;
        CHECK_OBJECT(var_fsspec);
        tmp_expression_value_4 = var_fsspec;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[102]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    CHECK_OBJECT(par_fs);
    tmp_return_value = par_fs;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[103];
        CHECK_OBJECT(var_fs_type);
        tmp_kw_call_arg_value_1_1 = var_fs_type;
        frame_640ee17012522cb53be2608f661e8155->m_frame.f_lineno = 457;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_640ee17012522cb53be2608f661e8155->m_frame.f_lineno = 457;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_OSError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 457;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    CHECK_OBJECT(par_fs);
    tmp_return_value = par_fs;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_640ee17012522cb53be2608f661e8155, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_640ee17012522cb53be2608f661e8155->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_640ee17012522cb53be2608f661e8155, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_640ee17012522cb53be2608f661e8155,
        type_description_1,
        par_fs,
        var_fs_type,
        var_fsspec
    );


    // Release cached frame if used for exception.
    if (frame_640ee17012522cb53be2608f661e8155 == cache_frame_640ee17012522cb53be2608f661e8155) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_640ee17012522cb53be2608f661e8155);
        cache_frame_640ee17012522cb53be2608f661e8155 = NULL;
    }

    assertFrameObject(frame_640ee17012522cb53be2608f661e8155);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_fs_type);
    Py_DECREF(var_fs_type);
    var_fs_type = NULL;
    Py_XDECREF(var_fsspec);
    var_fsspec = NULL;
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

    CHECK_OBJECT(var_fs_type);
    Py_DECREF(var_fs_type);
    var_fs_type = NULL;
    Py_XDECREF(var_fsspec);
    var_fsspec = NULL;
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
    CHECK_OBJECT(par_fs);
    Py_DECREF(par_fs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fs);
    Py_DECREF(par_fs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$filesystem$$$function__45_resolve_filesystem_and_path(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_where = python_pars[0];
    PyObject *par_filesystem = python_pars[1];
    PyObject *var_path = NULL;
    PyObject *var_parsed_uri = NULL;
    PyObject *var_netloc_split = NULL;
    PyObject *var_host = NULL;
    PyObject *var_port = NULL;
    PyObject *var_fs = NULL;
    PyObject *var_fs_path = NULL;
    struct Nuitka_FrameObject *frame_d0ac4960cb5feed7ca8c9ceae2a7787d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d0ac4960cb5feed7ca8c9ceae2a7787d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d0ac4960cb5feed7ca8c9ceae2a7787d)) {
        Py_XDECREF(cache_frame_d0ac4960cb5feed7ca8c9ceae2a7787d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d0ac4960cb5feed7ca8c9ceae2a7787d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d0ac4960cb5feed7ca8c9ceae2a7787d = MAKE_FUNCTION_FRAME(codeobj_d0ac4960cb5feed7ca8c9ceae2a7787d, module_pyarrow$filesystem, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d0ac4960cb5feed7ca8c9ceae2a7787d->m_type_description == NULL);
    frame_d0ac4960cb5feed7ca8c9ceae2a7787d = cache_frame_d0ac4960cb5feed7ca8c9ceae2a7787d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d0ac4960cb5feed7ca8c9ceae2a7787d);
    assert(Py_REFCNT(frame_d0ac4960cb5feed7ca8c9ceae2a7787d) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_where);
        tmp_args_element_value_1 = par_where;
        frame_d0ac4960cb5feed7ca8c9ceae2a7787d->m_frame.f_lineno = 467;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "ooooooooo";
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
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_filesystem);
        tmp_cmp_expr_left_1 = par_filesystem;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[105];
        frame_d0ac4960cb5feed7ca8c9ceae2a7787d->m_frame.f_lineno = 469;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 469;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_filesystem);
        tmp_tuple_element_1 = par_filesystem;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_where);
        tmp_tuple_element_1 = par_where;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_filesystem);
        tmp_cmp_expr_left_2 = par_filesystem;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_filesystem);
        tmp_args_element_value_2 = par_filesystem;
        frame_d0ac4960cb5feed7ca8c9ceae2a7787d->m_frame.f_lineno = 474;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_filesystem;
            assert(old != NULL);
            par_filesystem = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_filesystem);
        tmp_isinstance_inst_1 = par_filesystem;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_where);
        tmp_args_element_value_3 = par_where;
        frame_d0ac4960cb5feed7ca8c9ceae2a7787d->m_frame.f_lineno = 476;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_path == NULL);
        var_path = tmp_assign_source_2;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_where);
        tmp_isinstance_inst_2 = par_where;
        tmp_isinstance_cls_2 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[107];
        frame_d0ac4960cb5feed7ca8c9ceae2a7787d->m_frame.f_lineno = 478;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 478;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(par_where);
        tmp_assign_source_3 = par_where;
        assert(var_path == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_path = tmp_assign_source_3;
    }
    branch_end_5:;
    branch_end_4:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_filesystem);
        tmp_tuple_element_2 = par_filesystem;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_path);
        tmp_tuple_element_2 = var_path;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        goto frame_return_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_where);
        tmp_args_element_value_4 = par_where;
        frame_d0ac4960cb5feed7ca8c9ceae2a7787d->m_frame.f_lineno = 486;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_path == NULL);
        var_path = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[109]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_path);
        tmp_args_element_value_5 = var_path;
        frame_d0ac4960cb5feed7ca8c9ceae2a7787d->m_frame.f_lineno = 488;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[110], tmp_args_element_value_5);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_parsed_uri == NULL);
        var_parsed_uri = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_parsed_uri);
        tmp_expression_value_2 = var_parsed_uri;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[111]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = mod_consts[112];
        tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_parsed_uri);
        tmp_expression_value_3 = var_parsed_uri;
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[111]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = mod_consts[113];
        tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_6 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_parsed_uri);
        tmp_expression_value_5 = var_parsed_uri;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[114]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[91]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d0ac4960cb5feed7ca8c9ceae2a7787d->m_frame.f_lineno = 491;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[115]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_netloc_split == NULL);
        var_netloc_split = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_netloc_split);
        tmp_expression_value_6 = var_netloc_split;
        tmp_subscript_value_1 = mod_consts[14];
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_1, 0);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_host == NULL);
        var_host = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_host);
        tmp_cmp_expr_left_5 = var_host;
        tmp_cmp_expr_right_5 = mod_consts[116];
        tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[117];
        {
            PyObject *old = var_host;
            assert(old != NULL);
            var_host = tmp_assign_source_8;
            Py_INCREF(var_host);
            Py_DECREF(old);
        }

    }
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_parsed_uri);
        tmp_expression_value_7 = var_parsed_uri;
        tmp_add_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[111]);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = mod_consts[118];
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_host);
        tmp_add_expr_right_1 = var_host;
        tmp_assign_source_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_host;
            assert(old != NULL);
            var_host = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[14];
        assert(var_port == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_port = tmp_assign_source_10;
    }
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_6;
        nuitka_digit tmp_cmp_expr_right_6;
        PyObject *tmp_len_arg_1;
        bool tmp_tmp_and_left_value_1_cbool_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_netloc_split);
        tmp_len_arg_1 = var_netloc_split;
        tmp_cmp_expr_left_6 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = 2;
        tmp_tmp_and_left_value_1_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        tmp_and_left_value_1 = tmp_tmp_and_left_value_1_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_netloc_split);
        tmp_expression_value_9 = var_netloc_split;
        tmp_subscript_value_2 = mod_consts[92];
        tmp_expression_value_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_9, tmp_subscript_value_2, 1);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[119]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d0ac4960cb5feed7ca8c9ceae2a7787d->m_frame.f_lineno = 498;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 498;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_condition_result_8 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_8 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_netloc_split);
        tmp_expression_value_10 = var_netloc_split;
        tmp_subscript_value_3 = mod_consts[92];
        tmp_int_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_10, tmp_subscript_value_3, 1);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_port;
            assert(old != NULL);
            var_port = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    branch_no_8:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[112]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[121]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_host);
        tmp_kw_call_value_0_1 = var_host;
        CHECK_OBJECT(var_port);
        tmp_kw_call_value_1_1 = var_port;
        frame_d0ac4960cb5feed7ca8c9ceae2a7787d->m_frame.f_lineno = 500;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assign_source_12 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_7, kw_values, mod_consts[122]);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fs == NULL);
        var_fs = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(var_parsed_uri);
        tmp_expression_value_13 = var_parsed_uri;
        tmp_assign_source_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[60]);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fs_path == NULL);
        var_fs_path = tmp_assign_source_13;
    }
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(var_parsed_uri);
        tmp_expression_value_14 = var_parsed_uri;
        tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[111]);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_7 = mod_consts[12];
        tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_left_7);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d0ac4960cb5feed7ca8c9ceae2a7787d->m_frame.f_lineno = 504;
        tmp_assign_source_14 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[57]);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fs == NULL);
        var_fs = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(var_parsed_uri);
        tmp_expression_value_15 = var_parsed_uri;
        tmp_assign_source_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[60]);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fs_path == NULL);
        var_fs_path = tmp_assign_source_15;
    }
    goto branch_end_9;
    branch_no_9:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d0ac4960cb5feed7ca8c9ceae2a7787d->m_frame.f_lineno = 508;
        tmp_assign_source_16 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[57]);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fs == NULL);
        var_fs = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(var_path);
        tmp_assign_source_17 = var_path;
        assert(var_fs_path == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_fs_path = tmp_assign_source_17;
    }
    branch_end_9:;
    branch_end_6:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d0ac4960cb5feed7ca8c9ceae2a7787d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d0ac4960cb5feed7ca8c9ceae2a7787d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d0ac4960cb5feed7ca8c9ceae2a7787d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d0ac4960cb5feed7ca8c9ceae2a7787d,
        type_description_1,
        par_where,
        par_filesystem,
        var_path,
        var_parsed_uri,
        var_netloc_split,
        var_host,
        var_port,
        var_fs,
        var_fs_path
    );


    // Release cached frame if used for exception.
    if (frame_d0ac4960cb5feed7ca8c9ceae2a7787d == cache_frame_d0ac4960cb5feed7ca8c9ceae2a7787d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d0ac4960cb5feed7ca8c9ceae2a7787d);
        cache_frame_d0ac4960cb5feed7ca8c9ceae2a7787d = NULL;
    }

    assertFrameObject(frame_d0ac4960cb5feed7ca8c9ceae2a7787d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT(var_fs);
        tmp_tuple_element_3 = var_fs;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_fs_path);
        tmp_tuple_element_3 = var_fs_path;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_3);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_filesystem);
    Py_DECREF(par_filesystem);
    par_filesystem = NULL;
    Py_XDECREF(var_path);
    var_path = NULL;
    Py_XDECREF(var_parsed_uri);
    var_parsed_uri = NULL;
    Py_XDECREF(var_netloc_split);
    var_netloc_split = NULL;
    Py_XDECREF(var_host);
    var_host = NULL;
    Py_XDECREF(var_port);
    var_port = NULL;
    Py_XDECREF(var_fs);
    var_fs = NULL;
    Py_XDECREF(var_fs_path);
    var_fs_path = NULL;
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

    Py_XDECREF(par_filesystem);
    par_filesystem = NULL;
    Py_XDECREF(var_path);
    var_path = NULL;
    Py_XDECREF(var_parsed_uri);
    var_parsed_uri = NULL;
    Py_XDECREF(var_netloc_split);
    var_netloc_split = NULL;
    Py_XDECREF(var_host);
    var_host = NULL;
    Py_XDECREF(var_port);
    var_port = NULL;
    Py_XDECREF(var_fs);
    var_fs = NULL;
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
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_where);
    Py_DECREF(par_where);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__10_mkdir(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__10_mkdir,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        mod_consts[156],
#endif
        codeobj_e62e694acd1e8c50266e180a584119fc,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        mod_consts[33],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__11_exists() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__11_exists,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[157],
#endif
        codeobj_36bd1b68ca475641b870bff96136df09,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        mod_consts[34],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__12_isdir() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__12_isdir,
        mod_consts[158],
#if PYTHON_VERSION >= 0x300
        mod_consts[159],
#endif
        codeobj_0df0d51f6f94de4a3e9a14610679ffde,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        mod_consts[35],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__13_isfile() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__13_isfile,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        mod_consts[161],
#endif
        codeobj_e0c1de067114a58779ae8c82c215a25a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        mod_consts[36],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__14__isfilestore() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__14__isfilestore,
        mod_consts[162],
#if PYTHON_VERSION >= 0x300
        mod_consts[163],
#endif
        codeobj_874e8fd93ad757a72d1f1f962ed5008a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        mod_consts[37],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__15_read_parquet(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__15_read_parquet,
        mod_consts[165],
#if PYTHON_VERSION >= 0x300
        mod_consts[166],
#endif
        codeobj_8d5cdf57ffc3d40a081ac6177b20f276,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        mod_consts[43],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__16_open(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__16_open,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        mod_consts[168],
#endif
        codeobj_7655e9ab10b9fb34014c6087aedc8d5c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        mod_consts[44],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__17_pathsep() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[170],
#endif
        codeobj_545559ee84dcbe006f4a64535c84c0e7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[169]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__18___init__(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__18___init__,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_a23cc791937381618ec7f26a61f03fa9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__19__get_instance() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__19__get_instance,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_67d1dd131493422a901f4b859b019f01,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__1_cat() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__1_cat,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        mod_consts[145],
#endif
        codeobj_44adb9ae1cc91144e3e0d27ff1564e13,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        mod_consts[6],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__20_get_instance() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__20_get_instance,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        mod_consts[181],
#endif
        codeobj_b721d3bede8b20267fec912f6930a283,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__21_ls() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__21_ls,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        mod_consts[182],
#endif
        codeobj_5d0f54fe5ce789125e2d0d215a1ddafb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__22_mkdir(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__22_mkdir,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        mod_consts[183],
#endif
        codeobj_f7055b796f41e29d79adb186c48ed8d2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__23_isdir() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__23_isdir,
        mod_consts[158],
#if PYTHON_VERSION >= 0x300
        mod_consts[184],
#endif
        codeobj_83073f412eabf5d48e67aa6cd50c5d7d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__24_isfile() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__24_isfile,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        mod_consts[185],
#endif
        codeobj_7e6599633bc6e7f730db7daf5896ba5c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__25__isfilestore() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[162],
#if PYTHON_VERSION >= 0x300
        mod_consts[186],
#endif
        codeobj_d476241b9970f0870d7fdb65a073a658,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnTrue(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__26_exists() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__26_exists,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[187],
#endif
        codeobj_5956dc43cfe9826196f2cf6ba86625c4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__27_open(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__27_open,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        mod_consts[188],
#endif
        codeobj_c1dc99ad0eeca9e2720507c8d3aeb79c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        mod_consts[44],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__28_pathsep() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__28_pathsep,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[190],
#endif
        codeobj_7f241669e91b02a8512ee99f8d2e8cb4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__29_walk() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__29_walk,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[191],
#endif
        codeobj_7b364ab455877cbb6d9ca3b0b9b3a0da,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        mod_consts[67],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__2_ls() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__2_ls,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        mod_consts[146],
#endif
        codeobj_a29f455eb169921a314e2e0e66e18e3a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        mod_consts[7],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__30___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__30___init__,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        mod_consts[195],
#endif
        codeobj_4a05af87862755c4b44ff700d68e60ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__31_isdir() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__31_isdir,
        mod_consts[158],
#if PYTHON_VERSION >= 0x300
        mod_consts[196],
#endif
        codeobj_45fe04c005444488bca35a3f8f55d241,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__32_isfile() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__32_isfile,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        mod_consts[197],
#endif
        codeobj_fd5f6572f427b5146952ce1768b96d1a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__33__isfilestore() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[162],
#if PYTHON_VERSION >= 0x300
        mod_consts[199],
#endif
        codeobj_76f8f7635ca730313c4116f4b2fc1951,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        mod_consts[198],
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnFalse(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__34_delete(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__34_delete,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[200],
#endif
        codeobj_c5660fa95f21b00d359fd3799f497d7d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__35_exists() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__35_exists,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[201],
#endif
        codeobj_05c5a1d48bf547a952c73f401b9a08ae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__36_mkdir(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__36_mkdir,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        mod_consts[202],
#endif
        codeobj_a306fa4298d809f2c7b2925f6f548be1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__37_open(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__37_open,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        mod_consts[203],
#endif
        codeobj_8fc27b0f8851ddf09690cec72a7efc8c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        mod_consts[44],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__38_ls(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__38_ls,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        mod_consts[204],
#endif
        codeobj_b09a8b548d1bd1a648852a3b96134ff5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__39_walk() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__39_walk,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[205],
#endif
        codeobj_c0286ef63e67bb22c6a30d7332e2f388,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        mod_consts[77],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__3_delete(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__3_delete,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_e83479ae842abb5987f05d61dbfeb89d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        mod_consts[8],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__40_isdir() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__40_isdir,
        mod_consts[158],
#if PYTHON_VERSION >= 0x300
        mod_consts[207],
#endif
        codeobj_16459607660e99b9d014a78a1363f425,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__41_isfile() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__41_isfile,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        mod_consts[208],
#endif
        codeobj_94058a196af52a03458e7617f21d039e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__42_walk(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__42_walk,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[93],
#endif
        codeobj_697af669e42691ce5ee119c873a0e53b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        mod_consts[79],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__43__sanitize_s3() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__43__sanitize_s3,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bbcd0f099e8836266b6f509e54d667ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__44__ensure_filesystem() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__44__ensure_filesystem,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_640ee17012522cb53be2608f661e8155,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__45_resolve_filesystem_and_path(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__45_resolve_filesystem_and_path,
        mod_consts[210],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d0ac4960cb5feed7ca8c9ceae2a7787d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        mod_consts[123],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__4_disk_usage() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__4_disk_usage,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        mod_consts[150],
#endif
        codeobj_85971a8d1a015bbf94e08c8dd28d2019,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        mod_consts[21],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__5__path_join() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__5__path_join,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        mod_consts[151],
#endif
        codeobj_f91b308547db8e8d3bd3ec827692f3f8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__6_stat() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__6_stat,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[24],
#endif
        codeobj_170ed234e59be6961f01a01c5437bc46,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        mod_consts[25],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__7_rm(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__7_rm,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        mod_consts[152],
#endif
        codeobj_1a16ef79151d81ef9fcf0e7a0a28628a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        mod_consts[28],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__8_mv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__8_mv,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        mod_consts[154],
#endif
        codeobj_0d8db8a7e14658aff4c77c16dc4a0a83,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        mod_consts[30],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$filesystem$$$function__9_rename() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$filesystem$$$function__9_rename,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        mod_consts[31],
#endif
        codeobj_0b10c62f75abf1482bedd9ea7fb3c54c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow$filesystem,
        mod_consts[32],
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

function_impl_code functable_pyarrow$filesystem[] = {
    impl_pyarrow$filesystem$$$function__1_cat,
    impl_pyarrow$filesystem$$$function__2_ls,
    impl_pyarrow$filesystem$$$function__3_delete,
    impl_pyarrow$filesystem$$$function__4_disk_usage,
    impl_pyarrow$filesystem$$$function__5__path_join,
    impl_pyarrow$filesystem$$$function__6_stat,
    impl_pyarrow$filesystem$$$function__7_rm,
    impl_pyarrow$filesystem$$$function__8_mv,
    impl_pyarrow$filesystem$$$function__9_rename,
    impl_pyarrow$filesystem$$$function__10_mkdir,
    impl_pyarrow$filesystem$$$function__11_exists,
    impl_pyarrow$filesystem$$$function__12_isdir,
    impl_pyarrow$filesystem$$$function__13_isfile,
    impl_pyarrow$filesystem$$$function__14__isfilestore,
    impl_pyarrow$filesystem$$$function__15_read_parquet,
    impl_pyarrow$filesystem$$$function__16_open,
    NULL,
    impl_pyarrow$filesystem$$$function__18___init__,
    impl_pyarrow$filesystem$$$function__19__get_instance,
    impl_pyarrow$filesystem$$$function__20_get_instance,
    impl_pyarrow$filesystem$$$function__21_ls,
    impl_pyarrow$filesystem$$$function__22_mkdir,
    impl_pyarrow$filesystem$$$function__23_isdir,
    impl_pyarrow$filesystem$$$function__24_isfile,
    NULL,
    impl_pyarrow$filesystem$$$function__26_exists,
    impl_pyarrow$filesystem$$$function__27_open,
    impl_pyarrow$filesystem$$$function__28_pathsep,
    impl_pyarrow$filesystem$$$function__29_walk,
    impl_pyarrow$filesystem$$$function__30___init__,
    impl_pyarrow$filesystem$$$function__31_isdir,
    impl_pyarrow$filesystem$$$function__32_isfile,
    NULL,
    impl_pyarrow$filesystem$$$function__34_delete,
    impl_pyarrow$filesystem$$$function__35_exists,
    impl_pyarrow$filesystem$$$function__36_mkdir,
    impl_pyarrow$filesystem$$$function__37_open,
    impl_pyarrow$filesystem$$$function__38_ls,
    impl_pyarrow$filesystem$$$function__39_walk,
    impl_pyarrow$filesystem$$$function__40_isdir,
    impl_pyarrow$filesystem$$$function__41_isfile,
    impl_pyarrow$filesystem$$$function__42_walk,
    impl_pyarrow$filesystem$$$function__43__sanitize_s3,
    impl_pyarrow$filesystem$$$function__44__ensure_filesystem,
    impl_pyarrow$filesystem$$$function__45_resolve_filesystem_and_path,
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

    function_impl_code *current = functable_pyarrow$filesystem;
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

    if (offset > sizeof(functable_pyarrow$filesystem) || offset < 0) {
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
        functable_pyarrow$filesystem[offset],
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
        module_pyarrow$filesystem,
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
PyObject *modulecode_pyarrow$filesystem(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyarrow.filesystem");

    // Store the module for future use.
    module_pyarrow$filesystem = module;

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
        PRINT_STRING("pyarrow.filesystem: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pyarrow.filesystem: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pyarrow.filesystem: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyarrow$filesystem\n");

    moduledict_pyarrow$filesystem = MODULE_DICT(module_pyarrow$filesystem);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyarrow$filesystem,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyarrow$filesystem,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[116]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyarrow$filesystem,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyarrow$filesystem,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyarrow$filesystem,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyarrow$filesystem);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_pyarrow$filesystem);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    struct Nuitka_CellObject *outline_1_var___class__ = Nuitka_Cell_Empty();
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
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
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_7bee16186d65b02db50581a0f2503cd0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *locals_pyarrow$filesystem$$$class__1_FileSystem_36 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_be78addffee29d0b3f4e06082445f2e9_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242 = NULL;
    struct Nuitka_FrameObject *frame_35c032802b0296b7bcd5b3b991bdfe59_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
    PyObject *locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315 = NULL;
    struct Nuitka_FrameObject *frame_d4ec06e4d07191483fb122867fd305e9_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *locals_pyarrow$filesystem$$$class__4_S3FSWrapper_381 = NULL;
    struct Nuitka_FrameObject *frame_33af982ede7fc6280ab86d08ba460169_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_2);
    }
    frame_7bee16186d65b02db50581a0f2503cd0 = MAKE_MODULE_FRAME(codeobj_7bee16186d65b02db50581a0f2503cd0, module_pyarrow$filesystem);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7bee16186d65b02db50581a0f2503cd0);
    assert(Py_REFCNT(frame_7bee16186d65b02db50581a0f2503cd0) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[127], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[128], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_POSIXPATH();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[130];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyarrow$filesystem;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[14];
        frame_7bee16186d65b02db50581a0f2503cd0->m_frame.f_lineno = 22;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[45];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pyarrow$filesystem;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[14];
        frame_7bee16186d65b02db50581a0f2503cd0->m_frame.f_lineno = 23;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[131];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pyarrow$filesystem;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[132];
        tmp_level_value_3 = mod_consts[14];
        frame_7bee16186d65b02db50581a0f2503cd0->m_frame.f_lineno = 25;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pyarrow$filesystem,
                mod_consts[23],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[23]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[133];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_pyarrow$filesystem;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[14];
        frame_7bee16186d65b02db50581a0f2503cd0->m_frame.f_lineno = 27;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[134];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_pyarrow$filesystem;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[135];
        tmp_level_value_5 = mod_consts[14];
        frame_7bee16186d65b02db50581a0f2503cd0->m_frame.f_lineno = 28;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_pyarrow$filesystem,
                mod_consts[136],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[136]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_pyarrow$filesystem,
                mod_consts[9],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[9]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_pyarrow$filesystem,
                mod_consts[104],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[104]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_pyarrow$filesystem,
                mod_consts[137],
                mod_consts[14]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[137]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_15);
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

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[138]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        frame_7bee16186d65b02db50581a0f2503cd0->m_frame.f_lineno = 31;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_1, mod_consts[139]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pyarrow$filesystem$$$class__1_FileSystem_36 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[140];
        tmp_res = PyDict_SetItem(locals_pyarrow$filesystem$$$class__1_FileSystem_36, mod_consts[141], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[142];
        tmp_res = PyDict_SetItem(locals_pyarrow$filesystem$$$class__1_FileSystem_36, mod_consts[124], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[98];
        tmp_res = PyDict_SetItem(locals_pyarrow$filesystem$$$class__1_FileSystem_36, mod_consts[143], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyarrow$filesystem$$$function__1_cat();

        tmp_res = PyDict_SetItem(locals_pyarrow$filesystem$$$class__1_FileSystem_36, mod_consts[144], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyarrow$filesystem$$$function__2_ls();

        tmp_res = PyDict_SetItem(locals_pyarrow$filesystem$$$class__1_FileSystem_36, mod_consts[75], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[147];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_pyarrow$filesystem$$$function__3_delete(tmp_defaults_1);

            tmp_res = PyDict_SetItem(locals_pyarrow$filesystem$$$class__1_FileSystem_36, mod_consts[26], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_pyarrow$filesystem$$$function__4_disk_usage();

        tmp_res = PyDict_SetItem(locals_pyarrow$filesystem$$$class__1_FileSystem_36, mod_consts[149], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyarrow$filesystem$$$function__5__path_join();

        tmp_res = PyDict_SetItem(locals_pyarrow$filesystem$$$class__1_FileSystem_36, mod_consts[18], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyarrow$filesystem$$$function__6_stat();

        tmp_res = PyDict_SetItem(locals_pyarrow$filesystem$$$class__1_FileSystem_36, mod_consts[10], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[147];
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_pyarrow$filesystem$$$function__7_rm(tmp_defaults_2);

            tmp_res = PyDict_SetItem(locals_pyarrow$filesystem$$$class__1_FileSystem_36, mod_consts[71], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_pyarrow$filesystem$$$function__8_mv();

        tmp_res = PyDict_SetItem(locals_pyarrow$filesystem$$$class__1_FileSystem_36, mod_consts[153], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyarrow$filesystem$$$function__9_rename();

        tmp_res = PyDict_SetItem(locals_pyarrow$filesystem$$$class__1_FileSystem_36, mod_consts[29], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[155];
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_pyarrow$filesystem$$$function__10_mkdir(tmp_defaults_3);

            tmp_res = PyDict_SetItem(locals_pyarrow$filesystem$$$class__1_FileSystem_36, mod_consts[65], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_pyarrow$filesystem$$$function__11_exists();

        tmp_res = PyDict_SetItem(locals_pyarrow$filesystem$$$class__1_FileSystem_36, mod_consts[72], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyarrow$filesystem$$$function__12_isdir();

        tmp_res = PyDict_SetItem(locals_pyarrow$filesystem$$$class__1_FileSystem_36, mod_consts[158], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyarrow$filesystem$$$function__13_isfile();

        tmp_res = PyDict_SetItem(locals_pyarrow$filesystem$$$class__1_FileSystem_36, mod_consts[160], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyarrow$filesystem$$$function__14__isfilestore();

        tmp_res = PyDict_SetItem(locals_pyarrow$filesystem$$$class__1_FileSystem_36, mod_consts[162], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = mod_consts[164];
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_pyarrow$filesystem$$$function__15_read_parquet(tmp_defaults_4);

            tmp_res = PyDict_SetItem(locals_pyarrow$filesystem$$$class__1_FileSystem_36, mod_consts[165], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = mod_consts[167];
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_pyarrow$filesystem$$$function__16_open(tmp_defaults_5);

            tmp_res = PyDict_SetItem(locals_pyarrow$filesystem$$$class__1_FileSystem_36, mod_consts[0], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        frame_be78addffee29d0b3f4e06082445f2e9_2 = MAKE_CLASS_FRAME(codeobj_be78addffee29d0b3f4e06082445f2e9, module_pyarrow$filesystem, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_be78addffee29d0b3f4e06082445f2e9_2);
        assert(Py_REFCNT(frame_be78addffee29d0b3f4e06082445f2e9_2) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            tmp_called_value_2 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_1 = MAKE_FUNCTION_pyarrow$filesystem$$$function__17_pathsep();

            frame_be78addffee29d0b3f4e06082445f2e9_2->m_frame.f_lineno = 237;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyarrow$filesystem$$$class__1_FileSystem_36, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_be78addffee29d0b3f4e06082445f2e9_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_be78addffee29d0b3f4e06082445f2e9_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_be78addffee29d0b3f4e06082445f2e9_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_be78addffee29d0b3f4e06082445f2e9_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_be78addffee29d0b3f4e06082445f2e9_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_3 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[98];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[171];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_pyarrow$filesystem$$$class__1_FileSystem_36;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_7bee16186d65b02db50581a0f2503cd0->m_frame.f_lineno = 36;
            tmp_assign_source_20 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_20;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_19 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_19);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_pyarrow$filesystem$$$class__1_FileSystem_36);
        locals_pyarrow$filesystem$$$class__1_FileSystem_36 = NULL;
        goto try_return_handler_3;
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

        Py_DECREF(locals_pyarrow$filesystem$$$class__1_FileSystem_36);
        locals_pyarrow$filesystem$$$class__1_FileSystem_36 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 36;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_19);
    }
    goto try_end_2;
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

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        assert(!(tmp_tuple_element_2 == NULL));
        tmp_assign_source_21 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_21, 0, tmp_tuple_element_2);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_21;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_22 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_5;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_2 = tmp_class_creation_2__bases;
        tmp_subscript_value_1 = mod_consts[14];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_5;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_5;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_1 = tmp_class_creation_2__bases;
        tmp_assign_source_24 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_24;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_3 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_3, mod_consts[172]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_2;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_4 = tmp_class_creation_2__metaclass;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[172]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_5;
        }
        tmp_tuple_element_3 = mod_consts[56];
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_3 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
        frame_7bee16186d65b02db50581a0f2503cd0->m_frame.f_lineno = 242;
        tmp_assign_source_25 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_2);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_5 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_5, mod_consts[173]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_5;
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
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[174];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_1 = mod_consts[175];
        tmp_getattr_default_1 = mod_consts[176];
        tmp_tuple_element_4 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_5;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_2 = tmp_class_creation_2__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[175]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 242;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_26;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[140];
        tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[141], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[56];
        tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[143], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_7;
        }
        frame_35c032802b0296b7bcd5b3b991bdfe59_3 = MAKE_CLASS_FRAME(codeobj_35c032802b0296b7bcd5b3b991bdfe59, module_pyarrow$filesystem, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_35c032802b0296b7bcd5b3b991bdfe59_3);
        assert(Py_REFCNT(frame_35c032802b0296b7bcd5b3b991bdfe59_3) == 2);

        // Framed code:
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_2 = "c";
            goto frame_exception_exit_3;
        }
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = outline_1_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_pyarrow$filesystem$$$function__18___init__(tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[51], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_classmethod_arg_1;
            tmp_res = MAPPING_HAS_ITEM(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[178]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_4 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_value_5 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[178]);

            if (unlikely(tmp_called_value_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[178]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 250;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_2 = MAKE_FUNCTION_pyarrow$filesystem$$$function__19__get_instance();

            frame_35c032802b0296b7bcd5b3b991bdfe59_3->m_frame.f_lineno = 250;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_2;
            condexpr_false_2:;


            tmp_classmethod_arg_1 = MAKE_FUNCTION_pyarrow$filesystem$$$function__19__get_instance();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_classmethod_arg_2;
            tmp_res = MAPPING_HAS_ITEM(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[178]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_5 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_value_6 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[178]);

            if (unlikely(tmp_called_value_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[178]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 258;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_3 = MAKE_FUNCTION_pyarrow$filesystem$$$function__20_get_instance();

            frame_35c032802b0296b7bcd5b3b991bdfe59_3->m_frame.f_lineno = 258;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_3;
            condexpr_false_3:;


            tmp_classmethod_arg_2 = MAKE_FUNCTION_pyarrow$filesystem$$$function__20_get_instance();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_2);
            Py_DECREF(tmp_classmethod_arg_2);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[180], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_7;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_args_element_value_5;
            tmp_called_value_8 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[136]);

            if (tmp_called_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[136]);

                    if (unlikely(tmp_called_value_8 == NULL)) {
                        tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                    }

                    if (tmp_called_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 263;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_8);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_expression_value_7 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[98]);

            if (tmp_expression_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[98]);

                    if (unlikely(tmp_expression_value_7 == NULL)) {
                        tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                    }

                    if (tmp_expression_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_8);

                        exception_lineno = 263;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_7);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[75]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_args_element_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_8);

                exception_lineno = 263;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            frame_35c032802b0296b7bcd5b3b991bdfe59_3->m_frame.f_lineno = 263;
            tmp_called_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_5 = MAKE_FUNCTION_pyarrow$filesystem$$$function__21_ls();

            frame_35c032802b0296b7bcd5b3b991bdfe59_3->m_frame.f_lineno = 263;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[75], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_9;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_defaults_6;
            tmp_called_value_10 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[136]);

            if (tmp_called_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[136]);

                    if (unlikely(tmp_called_value_10 == NULL)) {
                        tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                    }

                    if (tmp_called_value_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 268;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_10);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_expression_value_8 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[98]);

            if (tmp_expression_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[98]);

                    if (unlikely(tmp_expression_value_8 == NULL)) {
                        tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                    }

                    if (tmp_expression_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_10);

                        exception_lineno = 268;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_8);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[65]);
            Py_DECREF(tmp_expression_value_8);
            if (tmp_args_element_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_10);

                exception_lineno = 268;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            frame_35c032802b0296b7bcd5b3b991bdfe59_3->m_frame.f_lineno = 268;
            tmp_called_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_defaults_6 = mod_consts[155];
            Py_INCREF(tmp_defaults_6);


            tmp_args_element_value_7 = MAKE_FUNCTION_pyarrow$filesystem$$$function__22_mkdir(tmp_defaults_6);

            frame_35c032802b0296b7bcd5b3b991bdfe59_3->m_frame.f_lineno = 268;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[65], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_11;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_args_element_value_9;
            tmp_called_value_12 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[136]);

            if (tmp_called_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[136]);

                    if (unlikely(tmp_called_value_12 == NULL)) {
                        tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                    }

                    if (tmp_called_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 276;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_12);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_expression_value_9 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[98]);

            if (tmp_expression_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[98]);

                    if (unlikely(tmp_expression_value_9 == NULL)) {
                        tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                    }

                    if (tmp_expression_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_12);

                        exception_lineno = 276;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_9);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[158]);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_args_element_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_12);

                exception_lineno = 276;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            frame_35c032802b0296b7bcd5b3b991bdfe59_3->m_frame.f_lineno = 276;
            tmp_called_value_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_8);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_9 = MAKE_FUNCTION_pyarrow$filesystem$$$function__23_isdir();

            frame_35c032802b0296b7bcd5b3b991bdfe59_3->m_frame.f_lineno = 276;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[158], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_13;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_args_element_value_11;
            tmp_called_value_14 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[136]);

            if (tmp_called_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[136]);

                    if (unlikely(tmp_called_value_14 == NULL)) {
                        tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                    }

                    if (tmp_called_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 281;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_14);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_expression_value_10 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[98]);

            if (tmp_expression_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[98]);

                    if (unlikely(tmp_expression_value_10 == NULL)) {
                        tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                    }

                    if (tmp_expression_value_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_14);

                        exception_lineno = 281;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_10);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[160]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_args_element_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);

                exception_lineno = 281;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            frame_35c032802b0296b7bcd5b3b991bdfe59_3->m_frame.f_lineno = 281;
            tmp_called_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_11 = MAKE_FUNCTION_pyarrow$filesystem$$$function__24_isfile();

            frame_35c032802b0296b7bcd5b3b991bdfe59_3->m_frame.f_lineno = 281;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[160], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_15;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_args_element_value_13;
            tmp_called_value_16 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[136]);

            if (tmp_called_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[136]);

                    if (unlikely(tmp_called_value_16 == NULL)) {
                        tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                    }

                    if (tmp_called_value_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 286;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_16);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_expression_value_11 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[98]);

            if (tmp_expression_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[98]);

                    if (unlikely(tmp_expression_value_11 == NULL)) {
                        tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                    }

                    if (tmp_expression_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);

                        exception_lineno = 286;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_11);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[162]);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_args_element_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);

                exception_lineno = 286;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            frame_35c032802b0296b7bcd5b3b991bdfe59_3->m_frame.f_lineno = 286;
            tmp_called_value_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_13 = MAKE_FUNCTION_pyarrow$filesystem$$$function__25__isfilestore();

            frame_35c032802b0296b7bcd5b3b991bdfe59_3->m_frame.f_lineno = 286;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[162], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_17;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_args_element_value_15;
            tmp_called_value_18 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[136]);

            if (tmp_called_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[136]);

                    if (unlikely(tmp_called_value_18 == NULL)) {
                        tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                    }

                    if (tmp_called_value_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 290;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_18);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_expression_value_12 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[98]);

            if (tmp_expression_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[98]);

                    if (unlikely(tmp_expression_value_12 == NULL)) {
                        tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                    }

                    if (tmp_expression_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_18);

                        exception_lineno = 290;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_12);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[72]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_args_element_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_18);

                exception_lineno = 290;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            frame_35c032802b0296b7bcd5b3b991bdfe59_3->m_frame.f_lineno = 290;
            tmp_called_value_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_14);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_15 = MAKE_FUNCTION_pyarrow$filesystem$$$function__26_exists();

            frame_35c032802b0296b7bcd5b3b991bdfe59_3->m_frame.f_lineno = 290;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_19;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_defaults_7;
            tmp_called_value_20 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[136]);

            if (tmp_called_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[136]);

                    if (unlikely(tmp_called_value_20 == NULL)) {
                        tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                    }

                    if (tmp_called_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 295;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_20);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_expression_value_13 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[98]);

            if (tmp_expression_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[98]);

                    if (unlikely(tmp_expression_value_13 == NULL)) {
                        tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                    }

                    if (tmp_expression_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_20);

                        exception_lineno = 295;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_13);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[0]);
            Py_DECREF(tmp_expression_value_13);
            if (tmp_args_element_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_20);

                exception_lineno = 295;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            frame_35c032802b0296b7bcd5b3b991bdfe59_3->m_frame.f_lineno = 295;
            tmp_called_value_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_defaults_7 = mod_consts[167];
            Py_INCREF(tmp_defaults_7);


            tmp_args_element_value_17 = MAKE_FUNCTION_pyarrow$filesystem$$$function__27_open(tmp_defaults_7);

            frame_35c032802b0296b7bcd5b3b991bdfe59_3->m_frame.f_lineno = 295;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[0], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_19;
            tmp_res = MAPPING_HAS_ITEM(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[189]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_6 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_value_21 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[189]);

            if (unlikely(tmp_called_value_21 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[189]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 303;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_18 = MAKE_FUNCTION_pyarrow$filesystem$$$function__28_pathsep();

            frame_35c032802b0296b7bcd5b3b991bdfe59_3->m_frame.f_lineno = 303;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_18);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_22 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_19 = MAKE_FUNCTION_pyarrow$filesystem$$$function__28_pathsep();

            frame_35c032802b0296b7bcd5b3b991bdfe59_3->m_frame.f_lineno = 303;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_pyarrow$filesystem$$$function__29_walk();

        tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[15], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_2 = "c";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_35c032802b0296b7bcd5b3b991bdfe59_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_35c032802b0296b7bcd5b3b991bdfe59_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_35c032802b0296b7bcd5b3b991bdfe59_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_35c032802b0296b7bcd5b3b991bdfe59_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_35c032802b0296b7bcd5b3b991bdfe59_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_7 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;

                goto try_except_handler_7;
            }
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242, mod_consts[192], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_7;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_3;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_23 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_5 = mod_consts[56];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_5 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
            frame_7bee16186d65b02db50581a0f2503cd0->m_frame.f_lineno = 242;
            tmp_assign_source_28 = CALL_FUNCTION(tmp_called_value_23, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;

                goto try_except_handler_7;
            }
            assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
            PyCell_SET(outline_1_var___class__, tmp_assign_source_28);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
        tmp_assign_source_27 = Nuitka_Cell_GET(outline_1_var___class__);
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242);
        locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242);
        locals_pyarrow$filesystem$$$class__2_LocalFileSystem_242 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 242;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_27);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
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
        PyObject *tmp_assign_source_29;
        PyObject *tmp_tuple_element_6;
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto try_except_handler_8;
        }
        tmp_assign_source_29 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_29, 0, tmp_tuple_element_6);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_30 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto try_except_handler_8;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_14 = tmp_class_creation_3__bases;
        tmp_subscript_value_2 = mod_consts[14];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_14, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto try_except_handler_8;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto try_except_handler_8;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_2 = tmp_class_creation_3__bases;
        tmp_assign_source_32 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_32;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_15 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_15, mod_consts[172]);
        tmp_condition_result_9 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_value_4;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kwargs_value_4;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_16 = tmp_class_creation_3__metaclass;
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[172]);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto try_except_handler_8;
        }
        tmp_tuple_element_7 = mod_consts[193];
        tmp_args_value_4 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_7 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_4 = tmp_class_creation_3__class_decl_dict;
        frame_7bee16186d65b02db50581a0f2503cd0->m_frame.f_lineno = 315;
        tmp_assign_source_33 = CALL_FUNCTION(tmp_called_value_24, tmp_args_value_4, tmp_kwargs_value_4);
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_value_4);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_33;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_17 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_17, mod_consts[173]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto try_except_handler_8;
        }
        tmp_condition_result_10 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[174];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_2 = mod_consts[175];
        tmp_getattr_default_2 = mod_consts[176];
        tmp_tuple_element_8 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto try_except_handler_8;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_18;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_4 = tmp_class_creation_3__prepared;
            tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_18 == NULL));
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[175]);
            Py_DECREF(tmp_expression_value_18);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 315;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_34;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_35;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[140];
        tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315, mod_consts[141], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[194];
        tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315, mod_consts[124], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[193];
        tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315, mod_consts[143], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto try_except_handler_10;
        }
        frame_d4ec06e4d07191483fb122867fd305e9_4 = MAKE_CLASS_FRAME(codeobj_d4ec06e4d07191483fb122867fd305e9, module_pyarrow$filesystem, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_d4ec06e4d07191483fb122867fd305e9_4);
        assert(Py_REFCNT(frame_d4ec06e4d07191483fb122867fd305e9_4) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_pyarrow$filesystem$$$function__30___init__();

        tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315, mod_consts[51], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        {
            PyObject *tmp_called_value_25;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_args_element_value_21;
            tmp_called_value_26 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315, mod_consts[136]);

            if (tmp_called_value_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[136]);

                    if (unlikely(tmp_called_value_26 == NULL)) {
                        tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                    }

                    if (tmp_called_value_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 327;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_26);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_19 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315, mod_consts[98]);

            if (tmp_expression_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[98]);

                    if (unlikely(tmp_expression_value_19 == NULL)) {
                        tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                    }

                    if (tmp_expression_value_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_26);

                        exception_lineno = 327;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_19);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[158]);
            Py_DECREF(tmp_expression_value_19);
            if (tmp_args_element_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);

                exception_lineno = 327;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_d4ec06e4d07191483fb122867fd305e9_4->m_frame.f_lineno = 327;
            tmp_called_value_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_20);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_called_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_21 = MAKE_FUNCTION_pyarrow$filesystem$$$function__31_isdir();

            frame_d4ec06e4d07191483fb122867fd305e9_4->m_frame.f_lineno = 327;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_21);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315, mod_consts[158], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_27;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_args_element_value_23;
            tmp_called_value_28 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315, mod_consts[136]);

            if (tmp_called_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[136]);

                    if (unlikely(tmp_called_value_28 == NULL)) {
                        tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                    }

                    if (tmp_called_value_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 331;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_28);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_20 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315, mod_consts[98]);

            if (tmp_expression_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[98]);

                    if (unlikely(tmp_expression_value_20 == NULL)) {
                        tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                    }

                    if (tmp_expression_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_28);

                        exception_lineno = 331;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_20);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[160]);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_args_element_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_28);

                exception_lineno = 331;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_d4ec06e4d07191483fb122867fd305e9_4->m_frame.f_lineno = 331;
            tmp_called_value_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_22);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_called_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_23 = MAKE_FUNCTION_pyarrow$filesystem$$$function__32_isfile();

            frame_d4ec06e4d07191483fb122867fd305e9_4->m_frame.f_lineno = 331;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_23);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315, mod_consts[160], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_29;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_args_element_value_25;
            tmp_called_value_30 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315, mod_consts[136]);

            if (tmp_called_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[136]);

                    if (unlikely(tmp_called_value_30 == NULL)) {
                        tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                    }

                    if (tmp_called_value_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 335;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_30);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_21 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315, mod_consts[98]);

            if (tmp_expression_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[98]);

                    if (unlikely(tmp_expression_value_21 == NULL)) {
                        tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                    }

                    if (tmp_expression_value_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_30);

                        exception_lineno = 335;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_21);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[162]);
            Py_DECREF(tmp_expression_value_21);
            if (tmp_args_element_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_30);

                exception_lineno = 335;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_d4ec06e4d07191483fb122867fd305e9_4->m_frame.f_lineno = 335;
            tmp_called_value_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_24);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_called_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_25 = MAKE_FUNCTION_pyarrow$filesystem$$$function__33__isfilestore();

            frame_d4ec06e4d07191483fb122867fd305e9_4->m_frame.f_lineno = 335;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_25);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315, mod_consts[162], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_31;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_defaults_8;
            tmp_called_value_32 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315, mod_consts[136]);

            if (tmp_called_value_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[136]);

                    if (unlikely(tmp_called_value_32 == NULL)) {
                        tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                    }

                    if (tmp_called_value_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 343;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_32);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_22 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315, mod_consts[98]);

            if (tmp_expression_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[98]);

                    if (unlikely(tmp_expression_value_22 == NULL)) {
                        tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                    }

                    if (tmp_expression_value_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_32);

                        exception_lineno = 343;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_22);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[26]);
            Py_DECREF(tmp_expression_value_22);
            if (tmp_args_element_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_32);

                exception_lineno = 343;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_d4ec06e4d07191483fb122867fd305e9_4->m_frame.f_lineno = 343;
            tmp_called_value_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_26);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_called_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_defaults_8 = mod_consts[147];
            Py_INCREF(tmp_defaults_8);


            tmp_args_element_value_27 = MAKE_FUNCTION_pyarrow$filesystem$$$function__34_delete(tmp_defaults_8);

            frame_d4ec06e4d07191483fb122867fd305e9_4->m_frame.f_lineno = 343;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_27);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315, mod_consts[26], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_33;
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_args_element_value_29;
            tmp_called_value_34 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315, mod_consts[136]);

            if (tmp_called_value_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[136]);

                    if (unlikely(tmp_called_value_34 == NULL)) {
                        tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                    }

                    if (tmp_called_value_34 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 348;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_34);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_23 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315, mod_consts[98]);

            if (tmp_expression_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[98]);

                    if (unlikely(tmp_expression_value_23 == NULL)) {
                        tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                    }

                    if (tmp_expression_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_34);

                        exception_lineno = 348;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_23);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[72]);
            Py_DECREF(tmp_expression_value_23);
            if (tmp_args_element_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_34);

                exception_lineno = 348;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_d4ec06e4d07191483fb122867fd305e9_4->m_frame.f_lineno = 348;
            tmp_called_value_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_28);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_called_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 348;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_29 = MAKE_FUNCTION_pyarrow$filesystem$$$function__35_exists();

            frame_d4ec06e4d07191483fb122867fd305e9_4->m_frame.f_lineno = 348;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_29);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 348;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 348;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_35;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_defaults_9;
            tmp_called_value_36 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315, mod_consts[136]);

            if (tmp_called_value_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[136]);

                    if (unlikely(tmp_called_value_36 == NULL)) {
                        tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                    }

                    if (tmp_called_value_36 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 353;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_36);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_24 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315, mod_consts[98]);

            if (tmp_expression_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[98]);

                    if (unlikely(tmp_expression_value_24 == NULL)) {
                        tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                    }

                    if (tmp_expression_value_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_36);

                        exception_lineno = 353;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_24);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[65]);
            Py_DECREF(tmp_expression_value_24);
            if (tmp_args_element_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_36);

                exception_lineno = 353;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_d4ec06e4d07191483fb122867fd305e9_4->m_frame.f_lineno = 353;
            tmp_called_value_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_30);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_called_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_defaults_9 = mod_consts[155];
            Py_INCREF(tmp_defaults_9);


            tmp_args_element_value_31 = MAKE_FUNCTION_pyarrow$filesystem$$$function__36_mkdir(tmp_defaults_9);

            frame_d4ec06e4d07191483fb122867fd305e9_4->m_frame.f_lineno = 353;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_31);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_args_element_value_31);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315, mod_consts[65], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_37;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_element_value_32;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_args_element_value_33;
            PyObject *tmp_defaults_10;
            tmp_called_value_38 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315, mod_consts[136]);

            if (tmp_called_value_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[136]);

                    if (unlikely(tmp_called_value_38 == NULL)) {
                        tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                    }

                    if (tmp_called_value_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 361;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_38);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_25 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315, mod_consts[98]);

            if (tmp_expression_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[98]);

                    if (unlikely(tmp_expression_value_25 == NULL)) {
                        tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                    }

                    if (tmp_expression_value_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_38);

                        exception_lineno = 361;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_25);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[0]);
            Py_DECREF(tmp_expression_value_25);
            if (tmp_args_element_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_38);

                exception_lineno = 361;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_d4ec06e4d07191483fb122867fd305e9_4->m_frame.f_lineno = 361;
            tmp_called_value_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_32);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_32);
            if (tmp_called_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 361;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_defaults_10 = mod_consts[167];
            Py_INCREF(tmp_defaults_10);


            tmp_args_element_value_33 = MAKE_FUNCTION_pyarrow$filesystem$$$function__37_open(tmp_defaults_10);

            frame_d4ec06e4d07191483fb122867fd305e9_4->m_frame.f_lineno = 361;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_33);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_33);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 361;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315, mod_consts[0], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 361;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_defaults_11;
            tmp_defaults_11 = mod_consts[147];
            Py_INCREF(tmp_defaults_11);


            tmp_dictset_value = MAKE_FUNCTION_pyarrow$filesystem$$$function__38_ls(tmp_defaults_11);

            tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315, mod_consts[75], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 369;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_pyarrow$filesystem$$$function__39_walk();

        tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315, mod_consts[15], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d4ec06e4d07191483fb122867fd305e9_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d4ec06e4d07191483fb122867fd305e9_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d4ec06e4d07191483fb122867fd305e9_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d4ec06e4d07191483fb122867fd305e9_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_d4ec06e4d07191483fb122867fd305e9_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_10;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_11 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;

                goto try_except_handler_10;
            }
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315, mod_consts[192], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto try_except_handler_10;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_value_39;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_5;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_39 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_9 = mod_consts[193];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_9 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315;
            PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
            frame_7bee16186d65b02db50581a0f2503cd0->m_frame.f_lineno = 315;
            tmp_assign_source_36 = CALL_FUNCTION(tmp_called_value_39, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;

                goto try_except_handler_10;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_36;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_35 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_35);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315);
        locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315);
        locals_pyarrow$filesystem$$$class__3_DaskFileSystem_315 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 315;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_35);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
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
        PyObject *tmp_assign_source_37;
        PyObject *tmp_tuple_element_10;
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[193]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[193]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto try_except_handler_11;
        }
        tmp_assign_source_37 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_37, 0, tmp_tuple_element_10);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_38 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_12;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto try_except_handler_11;
        }
        tmp_condition_result_12 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_26 = tmp_class_creation_4__bases;
        tmp_subscript_value_3 = mod_consts[14];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_26, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto try_except_handler_11;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto try_except_handler_11;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_3 = tmp_class_creation_4__bases;
        tmp_assign_source_40 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_40;
    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_expression_value_27;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_27 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_27, mod_consts[172]);
        tmp_condition_result_13 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_value_6;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_kwargs_value_6;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_28 = tmp_class_creation_4__metaclass;
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[172]);
        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto try_except_handler_11;
        }
        tmp_tuple_element_11 = mod_consts[206];
        tmp_args_value_6 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_11);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_11 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_11);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_6 = tmp_class_creation_4__class_decl_dict;
        frame_7bee16186d65b02db50581a0f2503cd0->m_frame.f_lineno = 381;
        tmp_assign_source_41 = CALL_FUNCTION(tmp_called_value_40, tmp_args_value_6, tmp_kwargs_value_6);
        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_args_value_6);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_41;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_29;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_29 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_29, mod_consts[173]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto try_except_handler_11;
        }
        tmp_condition_result_14 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[174];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_3 = mod_consts[175];
        tmp_getattr_default_3 = mod_consts[176];
        tmp_tuple_element_12 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto try_except_handler_11;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_30;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_6 = tmp_class_creation_4__prepared;
            tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_30 == NULL));
            tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[175]);
            Py_DECREF(tmp_expression_value_30);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 381;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_12);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto try_except_handler_11;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 381;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_11;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_42;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_43;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_pyarrow$filesystem$$$class__4_S3FSWrapper_381 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[140];
        tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__4_S3FSWrapper_381, mod_consts[141], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[206];
        tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__4_S3FSWrapper_381, mod_consts[143], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto try_except_handler_13;
        }
        frame_33af982ede7fc6280ab86d08ba460169_5 = MAKE_CLASS_FRAME(codeobj_33af982ede7fc6280ab86d08ba460169, module_pyarrow$filesystem, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_33af982ede7fc6280ab86d08ba460169_5);
        assert(Py_REFCNT(frame_33af982ede7fc6280ab86d08ba460169_5) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_41;
            PyObject *tmp_called_value_42;
            PyObject *tmp_args_element_value_34;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_args_element_value_35;
            tmp_called_value_42 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__4_S3FSWrapper_381, mod_consts[136]);

            if (tmp_called_value_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[136]);

                    if (unlikely(tmp_called_value_42 == NULL)) {
                        tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                    }

                    if (tmp_called_value_42 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 383;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_value_42);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_31 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__4_S3FSWrapper_381, mod_consts[98]);

            if (tmp_expression_value_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[98]);

                    if (unlikely(tmp_expression_value_31 == NULL)) {
                        tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                    }

                    if (tmp_expression_value_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_42);

                        exception_lineno = 383;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_31);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_args_element_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[158]);
            Py_DECREF(tmp_expression_value_31);
            if (tmp_args_element_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_42);

                exception_lineno = 383;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_33af982ede7fc6280ab86d08ba460169_5->m_frame.f_lineno = 383;
            tmp_called_value_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_34);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_args_element_value_34);
            if (tmp_called_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }


            tmp_args_element_value_35 = MAKE_FUNCTION_pyarrow$filesystem$$$function__40_isdir();

            frame_33af982ede7fc6280ab86d08ba460169_5->m_frame.f_lineno = 383;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_41, tmp_args_element_value_35);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_args_element_value_35);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__4_S3FSWrapper_381, mod_consts[158], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_43;
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_element_value_36;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_args_element_value_37;
            tmp_called_value_44 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__4_S3FSWrapper_381, mod_consts[136]);

            if (tmp_called_value_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[136]);

                    if (unlikely(tmp_called_value_44 == NULL)) {
                        tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                    }

                    if (tmp_called_value_44 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 395;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_value_44);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_32 = PyObject_GetItem(locals_pyarrow$filesystem$$$class__4_S3FSWrapper_381, mod_consts[98]);

            if (tmp_expression_value_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[98]);

                    if (unlikely(tmp_expression_value_32 == NULL)) {
                        tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                    }

                    if (tmp_expression_value_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_44);

                        exception_lineno = 395;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_32);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_args_element_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[160]);
            Py_DECREF(tmp_expression_value_32);
            if (tmp_args_element_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_44);

                exception_lineno = 395;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_33af982ede7fc6280ab86d08ba460169_5->m_frame.f_lineno = 395;
            tmp_called_value_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_36);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_args_element_value_36);
            if (tmp_called_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }


            tmp_args_element_value_37 = MAKE_FUNCTION_pyarrow$filesystem$$$function__41_isfile();

            frame_33af982ede7fc6280ab86d08ba460169_5->m_frame.f_lineno = 395;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_43, tmp_args_element_value_37);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_args_element_value_37);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__4_S3FSWrapper_381, mod_consts[160], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_defaults_12;
            tmp_defaults_12 = mod_consts[147];
            Py_INCREF(tmp_defaults_12);


            tmp_dictset_value = MAKE_FUNCTION_pyarrow$filesystem$$$function__42_walk(tmp_defaults_12);

            tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__4_S3FSWrapper_381, mod_consts[15], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 404;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_33af982ede7fc6280ab86d08ba460169_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_33af982ede7fc6280ab86d08ba460169_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_33af982ede7fc6280ab86d08ba460169_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_33af982ede7fc6280ab86d08ba460169_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_33af982ede7fc6280ab86d08ba460169_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_13;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_15 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 381;

                goto try_except_handler_13;
            }
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyarrow$filesystem$$$class__4_S3FSWrapper_381, mod_consts[192], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto try_except_handler_13;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_called_value_45;
            PyObject *tmp_args_value_7;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kwargs_value_7;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_45 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_13 = mod_consts[206];
            tmp_args_value_7 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_13 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = locals_pyarrow$filesystem$$$class__4_S3FSWrapper_381;
            PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
            frame_7bee16186d65b02db50581a0f2503cd0->m_frame.f_lineno = 381;
            tmp_assign_source_44 = CALL_FUNCTION(tmp_called_value_45, tmp_args_value_7, tmp_kwargs_value_7);
            Py_DECREF(tmp_args_value_7);
            if (tmp_assign_source_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 381;

                goto try_except_handler_13;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_44;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_43 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_43);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_pyarrow$filesystem$$$class__4_S3FSWrapper_381);
        locals_pyarrow$filesystem$$$class__4_S3FSWrapper_381 = NULL;
        goto try_return_handler_12;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyarrow$filesystem$$$class__4_S3FSWrapper_381);
        locals_pyarrow$filesystem$$$class__4_S3FSWrapper_381 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 381;
        goto try_except_handler_11;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_43);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_5;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7bee16186d65b02db50581a0f2503cd0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7bee16186d65b02db50581a0f2503cd0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7bee16186d65b02db50581a0f2503cd0, exception_lineno);
    }



    assertFrameObject(frame_7bee16186d65b02db50581a0f2503cd0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_5:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
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
    {
        PyObject *tmp_assign_source_45;


        tmp_assign_source_45 = MAKE_FUNCTION_pyarrow$filesystem$$$function__43__sanitize_s3();

        UPDATE_STRING_DICT1(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;


        tmp_assign_source_46 = MAKE_FUNCTION_pyarrow$filesystem$$$function__44__ensure_filesystem();

        UPDATE_STRING_DICT1(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_defaults_13;
        tmp_defaults_13 = mod_consts[209];
        Py_INCREF(tmp_defaults_13);


        tmp_assign_source_47 = MAKE_FUNCTION_pyarrow$filesystem$$$function__45_resolve_filesystem_and_path(tmp_defaults_13);

        UPDATE_STRING_DICT1(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_47);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyarrow.filesystem", false);

    Py_INCREF(module_pyarrow$filesystem);
    return module_pyarrow$filesystem;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyarrow$filesystem, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("pyarrow$filesystem", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
