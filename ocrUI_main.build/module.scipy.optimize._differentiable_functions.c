/* Generated code for Python module 'scipy.optimize._differentiable_functions'
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

/* The "module_scipy$optimize$_differentiable_functions" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$_differentiable_functions;
PyDictObject *moduledict_scipy$optimize$_differentiable_functions;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[210];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[210];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("scipy.optimize._differentiable_functions"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 210; i++) {
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
void checkModuleConstants_scipy$optimize$_differentiable_functions(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 210; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_360bbc2fefbecbc756c38a789d457d40;
static PyCodeObject *codeobj_fc3b0c22b98c67d7c83247b20b0d979f;
static PyCodeObject *codeobj_0ae1f9ab225a1e59b23ceb1dd495d3a8;
static PyCodeObject *codeobj_893eb5481c9c509a5ad1cc315a23bfaa;
static PyCodeObject *codeobj_89a2733fcae3e5aa6c9d259516d36d35;
static PyCodeObject *codeobj_5f58a7a2511ef197fcb98f9f0fd5c15d;
static PyCodeObject *codeobj_3a350c660f38d8e0dfe84c51be7b5c75;
static PyCodeObject *codeobj_3cdb38eae7588ad7fe5dfbc4d8f986f1;
static PyCodeObject *codeobj_41aa85885bd478070f62a072ec776d84;
static PyCodeObject *codeobj_a4ae25d8160cae1b74038db1b0cf776b;
static PyCodeObject *codeobj_fba7236a33658d1c937c803d11a3b78c;
static PyCodeObject *codeobj_815c48437434415c409d1fd1ecbdd01b;
static PyCodeObject *codeobj_4f4a100fc881657f9fb799527bfac42a;
static PyCodeObject *codeobj_6548a36476e2d013f1352ec2d31e563a;
static PyCodeObject *codeobj_f1035641f64e54a473d191f48236631d;
static PyCodeObject *codeobj_515688b3898229ed211ddd965916ceb7;
static PyCodeObject *codeobj_80f8f5a2302b980afb9fa15b8de98b5c;
static PyCodeObject *codeobj_c779da7f54f91217b6901cbd6cd1d372;
static PyCodeObject *codeobj_01200459f5aa7819f02bf84c19414e24;
static PyCodeObject *codeobj_24668a9b7ecc44cc3deb051ca4505514;
static PyCodeObject *codeobj_cf7dbca8f00b8e77b486b9aab9136016;
static PyCodeObject *codeobj_1bfd769d653cd0967d14c7d774a58fd4;
static PyCodeObject *codeobj_9f85af8b07f9efa6686e48347a852e23;
static PyCodeObject *codeobj_23f3fbfaa8a95bb3ecb94414ceab6e7a;
static PyCodeObject *codeobj_7cf1d499b09ad37166984b3307d4bbdf;
static PyCodeObject *codeobj_337c36815298adaa91c027994c748383;
static PyCodeObject *codeobj_6054c2252161ffbc8463e8fc73e998e4;
static PyCodeObject *codeobj_8a17990ca1decd9440adb32e457b4a1e;
static PyCodeObject *codeobj_7a917831f043dfae498905b281006f92;
static PyCodeObject *codeobj_c0ea32a0760a005c85de5fadab684619;
static PyCodeObject *codeobj_1690a5f4557cada2662546c6f41bbcf3;
static PyCodeObject *codeobj_c2d726aa5d301a19f8ddaa2000f69065;
static PyCodeObject *codeobj_7d66471f0081eea4694a3c7ca0397aa8;
static PyCodeObject *codeobj_986a589fe2b1cb59891f3ebd69995808;
static PyCodeObject *codeobj_5536999fd2d47acdcfa7b330827d7f1d;
static PyCodeObject *codeobj_1889ffa30a61a277769d421a3e8849e3;
static PyCodeObject *codeobj_7c29c25bd7189b335bb8450f215b7592;
static PyCodeObject *codeobj_97a77acc4e359302c7f64ad5a6c3433d;
static PyCodeObject *codeobj_2761a13d18f1c6966a16e1a89085be3a;
static PyCodeObject *codeobj_1af8f43e2652d3b3d3a3e81dd5ac2d9d;
static PyCodeObject *codeobj_d6513a2f6f3c788c73f5a215b627073c;
static PyCodeObject *codeobj_199505446e89ea369c149f14a98ca570;
static PyCodeObject *codeobj_16631b48faddf3b5f67750604abf3a10;
static PyCodeObject *codeobj_fa3c2496fec7ce69d288cf79ac0c3f18;
static PyCodeObject *codeobj_c5e573be22ca2b5c434ea0c9ffe91499;
static PyCodeObject *codeobj_0d284f5628c8d33a8755174fa333b806;
static PyCodeObject *codeobj_05d4ebf5414bca8450e9e33da77f3c73;
static PyCodeObject *codeobj_ad207e19e1739197c6b22d7d4cb301b0;
static PyCodeObject *codeobj_352a99a0b0f458d141cb999315ee0b58;
static PyCodeObject *codeobj_2187f61b37c1bbbe1523c98a6430e2e0;
static PyCodeObject *codeobj_0678b2b029e6797c59451a3b6a9a75d3;
static PyCodeObject *codeobj_c7b69292664aa6b6a76847e2ea3a20be;
static PyCodeObject *codeobj_26d857c4a271045f6437952cdade5f39;
static PyCodeObject *codeobj_fa39f885a4e854bb6531c56d4367aefd;
static PyCodeObject *codeobj_b8ae361500f0e22f35b13de3326724c1;
static PyCodeObject *codeobj_fcfcf02fbfde671f1735fc4639dbbdfc;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[173]); CHECK_OBJECT(module_filename_obj);
    codeobj_360bbc2fefbecbc756c38a789d457d40 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[174], mod_consts[174], NULL, NULL, 0, 0, 0);
    codeobj_fc3b0c22b98c67d7c83247b20b0d979f = MAKE_CODE_OBJECT(module_filename_obj, 583, CO_NOFREE, mod_consts[165], mod_consts[165], mod_consts[175], NULL, 0, 0, 0);
    codeobj_0ae1f9ab225a1e59b23ceb1dd495d3a8 = MAKE_CODE_OBJECT(module_filename_obj, 540, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[176], NULL, 4, 0, 0);
    codeobj_893eb5481c9c509a5ad1cc315a23bfaa = MAKE_CODE_OBJECT(module_filename_obj, 86, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[177], NULL, 9, 0, 0);
    codeobj_89a2733fcae3e5aa6c9d259516d36d35 = MAKE_CODE_OBJECT(module_filename_obj, 289, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[178], NULL, 9, 0, 0);
    codeobj_5f58a7a2511ef197fcb98f9f0fd5c15d = MAKE_CODE_OBJECT(module_filename_obj, 590, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], mod_consts[179], mod_consts[175], 3, 0, 0);
    codeobj_3a350c660f38d8e0dfe84c51be7b5c75 = MAKE_CODE_OBJECT(module_filename_obj, 231, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[180], NULL, 1, 0, 0);
    codeobj_3cdb38eae7588ad7fe5dfbc4d8f986f1 = MAKE_CODE_OBJECT(module_filename_obj, 500, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[180], NULL, 1, 0, 0);
    codeobj_41aa85885bd478070f62a072ec776d84 = MAKE_CODE_OBJECT(module_filename_obj, 236, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[38], mod_consts[38], mod_consts[180], NULL, 1, 0, 0);
    codeobj_a4ae25d8160cae1b74038db1b0cf776b = MAKE_CODE_OBJECT(module_filename_obj, 241, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[180], NULL, 1, 0, 0);
    codeobj_fba7236a33658d1c937c803d11a3b78c = MAKE_CODE_OBJECT(module_filename_obj, 510, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[180], NULL, 1, 0, 0);
    codeobj_815c48437434415c409d1fd1ecbdd01b = MAKE_CODE_OBJECT(module_filename_obj, 505, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[102], mod_consts[102], mod_consts[180], NULL, 1, 0, 0);
    codeobj_4f4a100fc881657f9fb799527bfac42a = MAKE_CODE_OBJECT(module_filename_obj, 491, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[104], mod_consts[104], mod_consts[181], NULL, 2, 0, 0);
    codeobj_6548a36476e2d013f1352ec2d31e563a = MAKE_CODE_OBJECT(module_filename_obj, 496, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[103], mod_consts[103], mod_consts[182], NULL, 2, 0, 0);
    codeobj_f1035641f64e54a473d191f48236631d = MAKE_CODE_OBJECT(module_filename_obj, 561, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[103], mod_consts[103], mod_consts[182], NULL, 2, 0, 0);
    codeobj_515688b3898229ed211ddd965916ceb7 = MAKE_CODE_OBJECT(module_filename_obj, 246, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[61], mod_consts[61], mod_consts[182], NULL, 2, 0, 0);
    codeobj_80f8f5a2302b980afb9fa15b8de98b5c = MAKE_CODE_OBJECT(module_filename_obj, 515, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[61], mod_consts[61], mod_consts[182], NULL, 2, 0, 0);
    codeobj_c779da7f54f91217b6901cbd6cd1d372 = MAKE_CODE_OBJECT(module_filename_obj, 566, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[61], mod_consts[61], mod_consts[182], NULL, 2, 0, 0);
    codeobj_01200459f5aa7819f02bf84c19414e24 = MAKE_CODE_OBJECT(module_filename_obj, 264, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], mod_consts[143], mod_consts[182], NULL, 2, 0, 0);
    codeobj_24668a9b7ecc44cc3deb051ca4505514 = MAKE_CODE_OBJECT(module_filename_obj, 339, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[27], mod_consts[27], mod_consts[183], mod_consts[184], 1, 0, 0);
    codeobj_cf7dbca8f00b8e77b486b9aab9136016 = MAKE_CODE_OBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[27], mod_consts[27], mod_consts[185], mod_consts[186], 1, 0, 0);
    codeobj_1bfd769d653cd0967d14c7d774a58fd4 = MAKE_CODE_OBJECT(module_filename_obj, 252, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[64], mod_consts[64], mod_consts[182], NULL, 2, 0, 0);
    codeobj_9f85af8b07f9efa6686e48347a852e23 = MAKE_CODE_OBJECT(module_filename_obj, 144, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[33], mod_consts[33], mod_consts[187], mod_consts[188], 1, 0, 0);
    codeobj_23f3fbfaa8a95bb3ecb94414ceab6e7a = MAKE_CODE_OBJECT(module_filename_obj, 258, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[53], mod_consts[53], mod_consts[182], NULL, 2, 0, 0);
    codeobj_7cf1d499b09ad37166984b3307d4bbdf = MAKE_CODE_OBJECT(module_filename_obj, 525, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[53], mod_consts[53], mod_consts[189], NULL, 3, 0, 0);
    codeobj_337c36815298adaa91c027994c748383 = MAKE_CODE_OBJECT(module_filename_obj, 577, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[53], mod_consts[53], mod_consts[189], NULL, 3, 0, 0);
    codeobj_6054c2252161ffbc8463e8fc73e998e4 = MAKE_CODE_OBJECT(module_filename_obj, 168, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[44], mod_consts[44], mod_consts[190], mod_consts[191], 1, 0, 0);
    codeobj_8a17990ca1decd9440adb32e457b4a1e = MAKE_CODE_OBJECT(module_filename_obj, 174, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[44], mod_consts[44], mod_consts[190], mod_consts[191], 1, 0, 0);
    codeobj_7a917831f043dfae498905b281006f92 = MAKE_CODE_OBJECT(module_filename_obj, 179, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[44], mod_consts[44], mod_consts[190], mod_consts[191], 1, 0, 0);
    codeobj_c0ea32a0760a005c85de5fadab684619 = MAKE_CODE_OBJECT(module_filename_obj, 424, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[44], mod_consts[44], mod_consts[192], mod_consts[193], 2, 0, 0);
    codeobj_1690a5f4557cada2662546c6f41bbcf3 = MAKE_CODE_OBJECT(module_filename_obj, 430, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[44], mod_consts[44], mod_consts[192], mod_consts[193], 2, 0, 0);
    codeobj_c2d726aa5d301a19f8ddaa2000f69065 = MAKE_CODE_OBJECT(module_filename_obj, 435, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[44], mod_consts[44], mod_consts[192], mod_consts[193], 2, 0, 0);
    codeobj_7d66471f0081eea4694a3c7ca0397aa8 = MAKE_CODE_OBJECT(module_filename_obj, 520, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[99], mod_consts[99], mod_consts[182], NULL, 2, 0, 0);
    codeobj_986a589fe2b1cb59891f3ebd69995808 = MAKE_CODE_OBJECT(module_filename_obj, 573, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[99], mod_consts[99], mod_consts[182], NULL, 2, 0, 0);
    codeobj_5536999fd2d47acdcfa7b330827d7f1d = MAKE_CODE_OBJECT(module_filename_obj, 443, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[95], mod_consts[95], mod_consts[194], mod_consts[195], 2, 0, 0);
    codeobj_1889ffa30a61a277769d421a3e8849e3 = MAKE_CODE_OBJECT(module_filename_obj, 360, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[86], mod_consts[86], mod_consts[196], mod_consts[197], 1, 0, 0);
    codeobj_7c29c25bd7189b335bb8450f215b7592 = MAKE_CODE_OBJECT(module_filename_obj, 367, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[86], mod_consts[86], mod_consts[196], mod_consts[197], 1, 0, 0);
    codeobj_97a77acc4e359302c7f64ad5a6c3433d = MAKE_CODE_OBJECT(module_filename_obj, 374, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[86], mod_consts[86], mod_consts[196], mod_consts[197], 1, 0, 0);
    codeobj_2761a13d18f1c6966a16e1a89085be3a = MAKE_CODE_OBJECT(module_filename_obj, 136, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[29], mod_consts[29], mod_consts[198], mod_consts[198], 0, 0, 0);
    codeobj_1af8f43e2652d3b3d3a3e81dd5ac2d9d = MAKE_CODE_OBJECT(module_filename_obj, 343, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[29], mod_consts[29], mod_consts[198], mod_consts[198], 0, 0, 0);
    codeobj_d6513a2f6f3c788c73f5a215b627073c = MAKE_CODE_OBJECT(module_filename_obj, 148, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[35], mod_consts[35], mod_consts[199], mod_consts[199], 0, 0, 0);
    codeobj_199505446e89ea369c149f14a98ca570 = MAKE_CODE_OBJECT(module_filename_obj, 152, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[35], mod_consts[35], mod_consts[200], mod_consts[201], 0, 0, 0);
    codeobj_16631b48faddf3b5f67750604abf3a10 = MAKE_CODE_OBJECT(module_filename_obj, 461, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[50], mod_consts[50], mod_consts[202], mod_consts[180], 0, 0, 0);
    codeobj_fa3c2496fec7ce69d288cf79ac0c3f18 = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[50], mod_consts[50], mod_consts[203], mod_consts[203], 0, 0, 0);
    codeobj_c5e573be22ca2b5c434ea0c9ffe91499 = MAKE_CODE_OBJECT(module_filename_obj, 440, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[50], mod_consts[50], mod_consts[203], mod_consts[203], 0, 0, 0);
    codeobj_0d284f5628c8d33a8755174fa333b806 = MAKE_CODE_OBJECT(module_filename_obj, 203, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[50], mod_consts[50], mod_consts[180], mod_consts[180], 0, 0, 0);
    codeobj_05d4ebf5414bca8450e9e33da77f3c73 = MAKE_CODE_OBJECT(module_filename_obj, 188, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[50], mod_consts[50], mod_consts[204], mod_consts[205], 0, 0, 0);
    codeobj_ad207e19e1739197c6b22d7d4cb301b0 = MAKE_CODE_OBJECT(module_filename_obj, 446, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[50], mod_consts[50], mod_consts[206], mod_consts[207], 0, 0, 0);
    codeobj_352a99a0b0f458d141cb999315ee0b58 = MAKE_CODE_OBJECT(module_filename_obj, 380, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[90], mod_consts[90], mod_consts[208], mod_consts[208], 0, 0, 0);
    codeobj_2187f61b37c1bbbe1523c98a6430e2e0 = MAKE_CODE_OBJECT(module_filename_obj, 390, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[90], mod_consts[90], mod_consts[200], mod_consts[201], 0, 0, 0);
    codeobj_0678b2b029e6797c59451a3b6a9a75d3 = MAKE_CODE_OBJECT(module_filename_obj, 399, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[90], mod_consts[90], mod_consts[200], mod_consts[201], 0, 0, 0);
    codeobj_c7b69292664aa6b6a76847e2ea3a20be = MAKE_CODE_OBJECT(module_filename_obj, 407, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[90], mod_consts[90], mod_consts[200], mod_consts[201], 0, 0, 0);
    codeobj_26d857c4a271045f6437952cdade5f39 = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[57], mod_consts[57], mod_consts[209], mod_consts[180], 1, 0, 0);
    codeobj_fa39f885a4e854bb6531c56d4367aefd = MAKE_CODE_OBJECT(module_filename_obj, 222, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[57], mod_consts[57], mod_consts[209], mod_consts[180], 1, 0, 0);
    codeobj_b8ae361500f0e22f35b13de3326724c1 = MAKE_CODE_OBJECT(module_filename_obj, 473, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[57], mod_consts[57], mod_consts[209], mod_consts[180], 1, 0, 0);
    codeobj_fcfcf02fbfde671f1735fc4639dbbdfc = MAKE_CODE_OBJECT(module_filename_obj, 483, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[57], mod_consts[57], mod_consts[209], mod_consts[180], 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__2_complex_call_helper_pos_star_list(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__10__update_v();


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__11__update_x();


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__12__update_fun();


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__13__update_jac();


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__14__update_hess();


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__15_fun();


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__16_jac();


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__17_hess();


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__18___init__();


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__19__update_x();


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__10_update_hess(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__11_update_hess(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__12_update_x(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__13_update_x(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__1_fun_wrapped(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__2_update_fun(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__3_grad_wrapped(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__4_update_grad(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__5_update_grad(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__6_hess_wrapped(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__7_hess_wrapped(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__8_hess_wrapped(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__9_update_hess(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__20_fun();


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__21_jac();


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__22_hess();


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__23___init__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__2__update_fun();


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__3__update_grad();


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__4__update_hess();


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__5_fun();


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__6_grad();


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__7_hess();


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__8_fun_and_grad();


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__();


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__10_hess_wrapped(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__11_hess_wrapped(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__12_hess_wrapped(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__13_update_hess(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__14_jac_dot_v(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__15_update_hess(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__16_update_hess(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__17_update_x(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__18_update_x(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__1_fun_wrapped(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__2_update_fun(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__3_jac_wrapped(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__4_jac_wrapped(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__5_jac_wrapped(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__6_update_jac(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__7_update_jac(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__8_update_jac(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__9_update_jac(struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_fun = Nuitka_Cell_New1(python_pars[1]);
    PyObject *par_x0 = python_pars[2];
    struct Nuitka_CellObject *par_args = Nuitka_Cell_New1(python_pars[3]);
    struct Nuitka_CellObject *par_grad = Nuitka_Cell_New1(python_pars[4]);
    struct Nuitka_CellObject *par_hess = Nuitka_Cell_New1(python_pars[5]);
    PyObject *par_finite_diff_rel_step = python_pars[6];
    PyObject *par_finite_diff_bounds = python_pars[7];
    PyObject *par_epsilon = python_pars[8];
    struct Nuitka_CellObject *var_finite_diff_options = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_fun_wrapped = Nuitka_Cell_Empty();
    PyObject *var_update_fun = NULL;
    struct Nuitka_CellObject *var_grad_wrapped = Nuitka_Cell_Empty();
    PyObject *var_update_grad = NULL;
    struct Nuitka_CellObject *var_hess_wrapped = Nuitka_Cell_Empty();
    PyObject *var_update_hess = NULL;
    PyObject *var_update_x = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_893eb5481c9c509a5ad1cc315a23bfaa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_893eb5481c9c509a5ad1cc315a23bfaa = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_893eb5481c9c509a5ad1cc315a23bfaa)) {
        Py_XDECREF(cache_frame_893eb5481c9c509a5ad1cc315a23bfaa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_893eb5481c9c509a5ad1cc315a23bfaa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_893eb5481c9c509a5ad1cc315a23bfaa = MAKE_FUNCTION_FRAME(codeobj_893eb5481c9c509a5ad1cc315a23bfaa, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_893eb5481c9c509a5ad1cc315a23bfaa->m_type_description == NULL);
    frame_893eb5481c9c509a5ad1cc315a23bfaa = cache_frame_893eb5481c9c509a5ad1cc315a23bfaa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_893eb5481c9c509a5ad1cc315a23bfaa);
    assert(Py_REFCNT(frame_893eb5481c9c509a5ad1cc315a23bfaa) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(Nuitka_Cell_GET(par_grad));
        tmp_args_element_value_1 = Nuitka_Cell_GET(par_grad);
        frame_893eb5481c9c509a5ad1cc315a23bfaa->m_frame.f_lineno = 88;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(Nuitka_Cell_GET(par_grad));
        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(par_grad);
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[2];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_format_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_format_value_1 == NULL)) {
                tmp_format_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_1 = "ccocccoooccococoo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[3];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_1 = "ccocccoooccococoo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[4];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        frame_893eb5481c9c509a5ad1cc315a23bfaa->m_frame.f_lineno = 89;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 89;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ccocccoooccococoo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_value_2 != NULL);
        CHECK_OBJECT(Nuitka_Cell_GET(par_hess));
        tmp_args_element_value_2 = Nuitka_Cell_GET(par_hess);
        frame_893eb5481c9c509a5ad1cc315a23bfaa->m_frame.f_lineno = 93;
        tmp_or_left_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 93;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        CHECK_OBJECT(Nuitka_Cell_GET(par_hess));
        tmp_cmp_expr_left_2 = Nuitka_Cell_GET(par_hess);
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_2 = (tmp_res == 1) ? Py_True : Py_False;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(Nuitka_Cell_GET(par_hess));
        tmp_isinstance_inst_1 = Nuitka_Cell_GET(par_hess);
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        Py_INCREF(tmp_or_right_value_1);
        tmp_operand_value_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_operand_value_2 = tmp_or_left_value_1;
        or_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[6];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            tmp_format_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_format_value_2 == NULL)) {
                tmp_format_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_1 = "ccocccoooccococoo";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_2 = mod_consts[3];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_1 = "ccocccoooccococoo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[4];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_make_exception_arg_2 = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        frame_893eb5481c9c509a5ad1cc315a23bfaa->m_frame.f_lineno = 95;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 95;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ccocccoooccococoo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        int tmp_and_left_truth_2;
        bool tmp_and_left_value_2;
        bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(Nuitka_Cell_GET(par_grad));
        tmp_cmp_expr_left_3 = Nuitka_Cell_GET(par_grad);
        tmp_cmp_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
            tmp_cmp_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = (tmp_res == 1) ? true : false;
        tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(Nuitka_Cell_GET(par_hess));
        tmp_cmp_expr_left_4 = Nuitka_Cell_GET(par_hess);
        tmp_cmp_expr_right_4 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
            tmp_cmp_expr_right_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = (tmp_res == 1) ? true : false;
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
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        tmp_make_exception_arg_3 = mod_consts[7];
        frame_893eb5481c9c509a5ad1cc315a23bfaa->m_frame.f_lineno = 101;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 101;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ccocccoooccococoo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_assattr_target_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x0);
        tmp_args_element_value_3 = par_x0;
        frame_893eb5481c9c509a5ad1cc315a23bfaa->m_frame.f_lineno = 107;
        tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[9], tmp_args_element_value_3);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        frame_893eb5481c9c509a5ad1cc315a23bfaa->m_frame.f_lineno = 107;
        tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[11], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_1 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[12], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_2 = Nuitka_Cell_GET(par_self);
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[12]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[13]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_2 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[14], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = mod_consts[15];
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_3 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[16], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = mod_consts[15];
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_4 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[17], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = mod_consts[15];
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_5 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[18], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = Py_False;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_6 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[19], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_value_7 = Py_False;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_7 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[20], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_value_8 = Py_False;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_8 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[21], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_DICT_EMPTY();
        assert(Nuitka_Cell_GET(var_finite_diff_options) == NULL);
        PyCell_SET(var_finite_diff_options, tmp_assign_source_1);

    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(Nuitka_Cell_GET(par_grad));
        tmp_cmp_expr_left_5 = Nuitka_Cell_GET(par_grad);
        tmp_cmp_expr_right_5 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_cmp_expr_right_5 == NULL)) {
            tmp_cmp_expr_right_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_cmp_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ccocccoooccococoo";
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
    CHECK_OBJECT(Nuitka_Cell_GET(par_grad));
    tmp_dictset_value = Nuitka_Cell_GET(par_grad);
    CHECK_OBJECT(Nuitka_Cell_GET(var_finite_diff_options));
    tmp_dictset_dict = Nuitka_Cell_GET(var_finite_diff_options);
    tmp_dictset_key = mod_consts[22];
    assert(PyDict_CheckExact(tmp_dictset_dict));
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

    assert(!(tmp_res != 0));
    CHECK_OBJECT(par_finite_diff_rel_step);
    tmp_dictset_value = par_finite_diff_rel_step;
    CHECK_OBJECT(Nuitka_Cell_GET(var_finite_diff_options));
    tmp_dictset_dict = Nuitka_Cell_GET(var_finite_diff_options);
    tmp_dictset_key = mod_consts[23];
    assert(PyDict_CheckExact(tmp_dictset_dict));
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

    assert(!(tmp_res != 0));
    CHECK_OBJECT(par_epsilon);
    tmp_dictset_value = par_epsilon;
    CHECK_OBJECT(Nuitka_Cell_GET(var_finite_diff_options));
    tmp_dictset_dict = Nuitka_Cell_GET(var_finite_diff_options);
    tmp_dictset_key = mod_consts[24];
    assert(PyDict_CheckExact(tmp_dictset_dict));
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

    assert(!(tmp_res != 0));
    CHECK_OBJECT(par_finite_diff_bounds);
    tmp_dictset_value = par_finite_diff_bounds;
    CHECK_OBJECT(Nuitka_Cell_GET(var_finite_diff_options));
    tmp_dictset_dict = Nuitka_Cell_GET(var_finite_diff_options);
    tmp_dictset_key = mod_consts[25];
    assert(PyDict_CheckExact(tmp_dictset_dict));
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

    assert(!(tmp_res != 0));
    branch_no_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(Nuitka_Cell_GET(par_hess));
        tmp_cmp_expr_left_6 = Nuitka_Cell_GET(par_hess);
        tmp_cmp_expr_right_6 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_cmp_expr_right_6 == NULL)) {
            tmp_cmp_expr_right_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_cmp_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    CHECK_OBJECT(Nuitka_Cell_GET(par_hess));
    tmp_dictset_value = Nuitka_Cell_GET(par_hess);
    CHECK_OBJECT(Nuitka_Cell_GET(var_finite_diff_options));
    tmp_dictset_dict = Nuitka_Cell_GET(var_finite_diff_options);
    tmp_dictset_key = mod_consts[22];
    assert(PyDict_CheckExact(tmp_dictset_dict));
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

    assert(!(tmp_res != 0));
    CHECK_OBJECT(par_finite_diff_rel_step);
    tmp_dictset_value = par_finite_diff_rel_step;
    CHECK_OBJECT(Nuitka_Cell_GET(var_finite_diff_options));
    tmp_dictset_dict = Nuitka_Cell_GET(var_finite_diff_options);
    tmp_dictset_key = mod_consts[23];
    assert(PyDict_CheckExact(tmp_dictset_dict));
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

    assert(!(tmp_res != 0));
    CHECK_OBJECT(par_epsilon);
    tmp_dictset_value = par_epsilon;
    CHECK_OBJECT(Nuitka_Cell_GET(var_finite_diff_options));
    tmp_dictset_dict = Nuitka_Cell_GET(var_finite_diff_options);
    tmp_dictset_key = mod_consts[24];
    assert(PyDict_CheckExact(tmp_dictset_dict));
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

    assert(!(tmp_res != 0));
    tmp_dictset_value = Py_True;
    CHECK_OBJECT(Nuitka_Cell_GET(var_finite_diff_options));
    tmp_dictset_dict = Nuitka_Cell_GET(var_finite_diff_options);
    tmp_dictset_key = mod_consts[26];
    assert(PyDict_CheckExact(tmp_dictset_dict));
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

    assert(!(tmp_res != 0));
    branch_no_5:;
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = par_args;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_fun;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_self;
        Py_INCREF(tmp_closure_1[2]);

        tmp_assign_source_2 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__1_fun_wrapped(tmp_closure_1);

        assert(Nuitka_Cell_GET(var_fun_wrapped) == NULL);
        PyCell_SET(var_fun_wrapped, tmp_assign_source_2);

    }
    {
        PyObject *tmp_assign_source_3;
        struct Nuitka_CellObject *tmp_closure_2[2];

        tmp_closure_2[0] = var_fun_wrapped;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = par_self;
        Py_INCREF(tmp_closure_2[1]);

        tmp_assign_source_3 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__2_update_fun(tmp_closure_2);

        assert(var_update_fun == NULL);
        var_update_fun = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(var_update_fun);
        tmp_assattr_value_9 = var_update_fun;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_9 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[31], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_called_instance_3 = Nuitka_Cell_GET(par_self);
        frame_893eb5481c9c509a5ad1cc315a23bfaa->m_frame.f_lineno = 140;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[32]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        int tmp_truth_name_1;
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_value_3 != NULL);
        CHECK_OBJECT(Nuitka_Cell_GET(par_grad));
        tmp_args_element_value_4 = Nuitka_Cell_GET(par_grad);
        frame_893eb5481c9c509a5ad1cc315a23bfaa->m_frame.f_lineno = 143;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 143;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_4;
        struct Nuitka_CellObject *tmp_closure_3[3];

        tmp_closure_3[0] = par_args;
        Py_INCREF(tmp_closure_3[0]);
        tmp_closure_3[1] = par_grad;
        Py_INCREF(tmp_closure_3[1]);
        tmp_closure_3[2] = par_self;
        Py_INCREF(tmp_closure_3[2]);

        tmp_assign_source_4 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__3_grad_wrapped(tmp_closure_3);

        assert(Nuitka_Cell_GET(var_grad_wrapped) == NULL);
        PyCell_SET(var_grad_wrapped, tmp_assign_source_4);

    }
    {
        PyObject *tmp_assign_source_5;
        struct Nuitka_CellObject *tmp_closure_4[2];

        tmp_closure_4[0] = var_grad_wrapped;
        Py_INCREF(tmp_closure_4[0]);
        tmp_closure_4[1] = par_self;
        Py_INCREF(tmp_closure_4[1]);

        tmp_assign_source_5 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__4_update_grad(tmp_closure_4);

        assert(var_update_grad == NULL);
        var_update_grad = tmp_assign_source_5;
    }
    goto branch_end_6;
    branch_no_6:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(Nuitka_Cell_GET(par_grad));
        tmp_cmp_expr_left_7 = Nuitka_Cell_GET(par_grad);
        tmp_cmp_expr_right_7 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_cmp_expr_right_7 == NULL)) {
            tmp_cmp_expr_right_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_cmp_expr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_6;
        struct Nuitka_CellObject *tmp_closure_5[3];

        tmp_closure_5[0] = var_finite_diff_options;
        Py_INCREF(tmp_closure_5[0]);
        tmp_closure_5[1] = var_fun_wrapped;
        Py_INCREF(tmp_closure_5[1]);
        tmp_closure_5[2] = par_self;
        Py_INCREF(tmp_closure_5[2]);

        tmp_assign_source_6 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__5_update_grad(tmp_closure_5);

        assert(var_update_grad == NULL);
        var_update_grad = tmp_assign_source_6;
    }
    branch_no_7:;
    branch_end_6:;
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        if (var_update_grad == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 158;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_10 = var_update_grad;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_10 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[37], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_called_instance_4 = Nuitka_Cell_GET(par_self);
        frame_893eb5481c9c509a5ad1cc315a23bfaa->m_frame.f_lineno = 159;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[38]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        int tmp_truth_name_2;
        tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_value_4 != NULL);
        CHECK_OBJECT(Nuitka_Cell_GET(par_hess));
        tmp_args_element_value_5 = Nuitka_Cell_GET(par_hess);
        frame_893eb5481c9c509a5ad1cc315a23bfaa->m_frame.f_lineno = 162;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_4);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_4);

            exception_lineno = 162;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_4);
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT(Nuitka_Cell_GET(par_hess));
        tmp_dircall_arg1_1 = Nuitka_Cell_GET(par_hess);
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[39]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x0);
        tmp_args_element_value_6 = par_x0;
        frame_893eb5481c9c509a5ad1cc315a23bfaa->m_frame.f_lineno = 163;
        tmp_tuple_element_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_5);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_3);
        CHECK_OBJECT(Nuitka_Cell_GET(par_args));
        tmp_dircall_arg3_1 = Nuitka_Cell_GET(par_args);
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assattr_value_11 = impl___main__$$$function__2_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_assattr_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_11 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[40], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        tmp_assattr_value_12 = Py_True;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_12 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[21], tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_4 = Nuitka_Cell_GET(par_self);
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[18]);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = mod_consts[41];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ccocccoooccococoo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_8;

    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_13 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_13 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[18], tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ccocccoooccococoo";
            goto try_except_handler_2;
        }
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_6;
        int tmp_truth_name_3;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[43]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_6 = Nuitka_Cell_GET(par_self);
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[40]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 167;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        frame_893eb5481c9c509a5ad1cc315a23bfaa->m_frame.f_lineno = 167;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_5);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_5);

            exception_lineno = 167;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_5);
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_9;
        struct Nuitka_CellObject *tmp_closure_6[3];

        tmp_closure_6[0] = par_args;
        Py_INCREF(tmp_closure_6[0]);
        tmp_closure_6[1] = par_hess;
        Py_INCREF(tmp_closure_6[1]);
        tmp_closure_6[2] = par_self;
        Py_INCREF(tmp_closure_6[2]);

        tmp_assign_source_9 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__6_hess_wrapped(tmp_closure_6);

        assert(Nuitka_Cell_GET(var_hess_wrapped) == NULL);
        PyCell_SET(var_hess_wrapped, tmp_assign_source_9);

    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_assattr_target_14;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[46]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_8 = Nuitka_Cell_GET(par_self);
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[40]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 171;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        frame_893eb5481c9c509a5ad1cc315a23bfaa->m_frame.f_lineno = 171;
        tmp_assattr_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assattr_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_14 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[40], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_9;
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_9 = Nuitka_Cell_GET(par_self);
        tmp_isinstance_inst_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[40]);
        if (tmp_isinstance_inst_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_isinstance_cls_2 == NULL)) {
            tmp_isinstance_cls_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_2);

            exception_lineno = 173;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_inst_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_10;
        struct Nuitka_CellObject *tmp_closure_7[3];

        tmp_closure_7[0] = par_args;
        Py_INCREF(tmp_closure_7[0]);
        tmp_closure_7[1] = par_hess;
        Py_INCREF(tmp_closure_7[1]);
        tmp_closure_7[2] = par_self;
        Py_INCREF(tmp_closure_7[2]);

        tmp_assign_source_10 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__7_hess_wrapped(tmp_closure_7);

        assert(Nuitka_Cell_GET(var_hess_wrapped) == NULL);
        PyCell_SET(var_hess_wrapped, tmp_assign_source_10);

    }
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_11;
        struct Nuitka_CellObject *tmp_closure_8[3];

        tmp_closure_8[0] = par_args;
        Py_INCREF(tmp_closure_8[0]);
        tmp_closure_8[1] = par_hess;
        Py_INCREF(tmp_closure_8[1]);
        tmp_closure_8[2] = par_self;
        Py_INCREF(tmp_closure_8[2]);

        tmp_assign_source_11 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__8_hess_wrapped(tmp_closure_8);

        assert(Nuitka_Cell_GET(var_hess_wrapped) == NULL);
        PyCell_SET(var_hess_wrapped, tmp_assign_source_11);

    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_assattr_target_15;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[48]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 182;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[49]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 182;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_12 = Nuitka_Cell_GET(par_self);
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[40]);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 182;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        frame_893eb5481c9c509a5ad1cc315a23bfaa->m_frame.f_lineno = 182;
        tmp_args_element_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 182;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        frame_893eb5481c9c509a5ad1cc315a23bfaa->m_frame.f_lineno = 182;
        tmp_assattr_value_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_assattr_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_15 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[40], tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_10:;
    branch_end_9:;
    {
        PyObject *tmp_assign_source_12;
        struct Nuitka_CellObject *tmp_closure_9[2];

        tmp_closure_9[0] = var_hess_wrapped;
        Py_INCREF(tmp_closure_9[0]);
        tmp_closure_9[1] = par_self;
        Py_INCREF(tmp_closure_9[1]);

        tmp_assign_source_12 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__9_update_hess(tmp_closure_9);

        assert(var_update_hess == NULL);
        var_update_hess = tmp_assign_source_12;
    }
    goto branch_end_8;
    branch_no_8:;
    {
        bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(Nuitka_Cell_GET(par_hess));
        tmp_cmp_expr_left_8 = Nuitka_Cell_GET(par_hess);
        tmp_cmp_expr_right_8 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_cmp_expr_right_8 == NULL)) {
            tmp_cmp_expr_right_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_cmp_expr_right_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_8, tmp_cmp_expr_left_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_13;
        struct Nuitka_CellObject *tmp_closure_10[3];

        tmp_closure_10[0] = var_finite_diff_options;
        Py_INCREF(tmp_closure_10[0]);
        tmp_closure_10[1] = var_grad_wrapped;
        Py_INCREF(tmp_closure_10[1]);
        tmp_closure_10[2] = par_self;
        Py_INCREF(tmp_closure_10[2]);

        tmp_assign_source_13 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__10_update_hess(tmp_closure_10);

        assert(var_update_hess == NULL);
        var_update_hess = tmp_assign_source_13;
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(var_update_hess);
        tmp_called_value_10 = var_update_hess;
        frame_893eb5481c9c509a5ad1cc315a23bfaa->m_frame.f_lineno = 194;
        tmp_call_result_6 = CALL_FUNCTION_NO_ARGS(tmp_called_value_10);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_assattr_target_16;
        tmp_assattr_value_16 = Py_True;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_16 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[21], tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_11;
    branch_no_11:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        CHECK_OBJECT(Nuitka_Cell_GET(par_hess));
        tmp_isinstance_inst_3 = Nuitka_Cell_GET(par_hess);
        tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_isinstance_cls_3 == NULL)) {
            tmp_isinstance_cls_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_isinstance_cls_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_assattr_target_17;
        CHECK_OBJECT(Nuitka_Cell_GET(par_hess));
        tmp_assattr_value_17 = Nuitka_Cell_GET(par_hess);
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_17 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, mod_consts[40], tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_12;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_14 = Nuitka_Cell_GET(par_self);
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[40]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[52]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_15 = Nuitka_Cell_GET(par_self);
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[14]);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 198;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = mod_consts[53];
        frame_893eb5481c9c509a5ad1cc315a23bfaa->m_frame.f_lineno = 198;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_assattr_target_18;
        tmp_assattr_value_18 = Py_True;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_18 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_18, mod_consts[21], tmp_assattr_value_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_assattr_target_19;
        tmp_assattr_value_19 = Py_None;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_19 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_19, mod_consts[54], tmp_assattr_value_19);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_assattr_target_20;
        tmp_assattr_value_20 = Py_None;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_20 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_20, mod_consts[55], tmp_assattr_value_20);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_14;
        struct Nuitka_CellObject *tmp_closure_11[1];

        tmp_closure_11[0] = par_self;
        Py_INCREF(tmp_closure_11[0]);

        tmp_assign_source_14 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__11_update_hess(tmp_closure_11);

        assert(var_update_hess == NULL);
        var_update_hess = tmp_assign_source_14;
    }
    branch_no_12:;
    branch_end_11:;
    branch_end_8:;
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_assattr_target_21;
        if (var_update_hess == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 207;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_21 = var_update_hess;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_21 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_21, mod_consts[56], tmp_assattr_value_21);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_isinstance_inst_4;
        PyObject *tmp_isinstance_cls_4;
        CHECK_OBJECT(Nuitka_Cell_GET(par_hess));
        tmp_isinstance_inst_4 = Nuitka_Cell_GET(par_hess);
        tmp_isinstance_cls_4 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_isinstance_cls_4 == NULL)) {
            tmp_isinstance_cls_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_isinstance_cls_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_15;
        struct Nuitka_CellObject *tmp_closure_12[1];

        tmp_closure_12[0] = par_self;
        Py_INCREF(tmp_closure_12[0]);

        tmp_assign_source_15 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__12_update_x(tmp_closure_12);

        assert(var_update_x == NULL);
        var_update_x = tmp_assign_source_15;
    }
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_16;
        struct Nuitka_CellObject *tmp_closure_13[1];

        tmp_closure_13[0] = par_self;
        Py_INCREF(tmp_closure_13[0]);

        tmp_assign_source_16 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__13_update_x(tmp_closure_13);

        assert(var_update_x == NULL);
        var_update_x = tmp_assign_source_16;
    }
    branch_end_13:;
    {
        PyObject *tmp_assattr_value_22;
        PyObject *tmp_assattr_target_22;
        CHECK_OBJECT(var_update_x);
        tmp_assattr_value_22 = var_update_x;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_22 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_22, mod_consts[59], tmp_assattr_value_22);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ccocccoooccococoo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_893eb5481c9c509a5ad1cc315a23bfaa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_893eb5481c9c509a5ad1cc315a23bfaa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_893eb5481c9c509a5ad1cc315a23bfaa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_893eb5481c9c509a5ad1cc315a23bfaa,
        type_description_1,
        par_self,
        par_fun,
        par_x0,
        par_args,
        par_grad,
        par_hess,
        par_finite_diff_rel_step,
        par_finite_diff_bounds,
        par_epsilon,
        var_finite_diff_options,
        var_fun_wrapped,
        var_update_fun,
        var_grad_wrapped,
        var_update_grad,
        var_hess_wrapped,
        var_update_hess,
        var_update_x
    );


    // Release cached frame if used for exception.
    if (frame_893eb5481c9c509a5ad1cc315a23bfaa == cache_frame_893eb5481c9c509a5ad1cc315a23bfaa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_893eb5481c9c509a5ad1cc315a23bfaa);
        cache_frame_893eb5481c9c509a5ad1cc315a23bfaa = NULL;
    }

    assertFrameObject(frame_893eb5481c9c509a5ad1cc315a23bfaa);

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
    CHECK_OBJECT(var_finite_diff_options);
    Py_DECREF(var_finite_diff_options);
    var_finite_diff_options = NULL;
    CHECK_OBJECT(var_fun_wrapped);
    Py_DECREF(var_fun_wrapped);
    var_fun_wrapped = NULL;
    CHECK_OBJECT(var_update_fun);
    Py_DECREF(var_update_fun);
    var_update_fun = NULL;
    CHECK_OBJECT(var_grad_wrapped);
    Py_DECREF(var_grad_wrapped);
    var_grad_wrapped = NULL;
    Py_XDECREF(var_update_grad);
    var_update_grad = NULL;
    CHECK_OBJECT(var_hess_wrapped);
    Py_DECREF(var_hess_wrapped);
    var_hess_wrapped = NULL;
    Py_XDECREF(var_update_hess);
    var_update_hess = NULL;
    CHECK_OBJECT(var_update_x);
    Py_DECREF(var_update_x);
    var_update_x = NULL;
    goto function_return_exit;
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

    CHECK_OBJECT(var_finite_diff_options);
    Py_DECREF(var_finite_diff_options);
    var_finite_diff_options = NULL;
    CHECK_OBJECT(var_fun_wrapped);
    Py_DECREF(var_fun_wrapped);
    var_fun_wrapped = NULL;
    Py_XDECREF(var_update_fun);
    var_update_fun = NULL;
    CHECK_OBJECT(var_grad_wrapped);
    Py_DECREF(var_grad_wrapped);
    var_grad_wrapped = NULL;
    Py_XDECREF(var_update_grad);
    var_update_grad = NULL;
    CHECK_OBJECT(var_hess_wrapped);
    Py_DECREF(var_hess_wrapped);
    var_hess_wrapped = NULL;
    Py_XDECREF(var_update_hess);
    var_update_hess = NULL;
    Py_XDECREF(var_update_x);
    var_update_x = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_fun);
    Py_DECREF(par_fun);
    CHECK_OBJECT(par_x0);
    Py_DECREF(par_x0);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_grad);
    Py_DECREF(par_grad);
    CHECK_OBJECT(par_hess);
    Py_DECREF(par_hess);
    CHECK_OBJECT(par_finite_diff_rel_step);
    Py_DECREF(par_finite_diff_rel_step);
    CHECK_OBJECT(par_finite_diff_bounds);
    Py_DECREF(par_finite_diff_bounds);
    CHECK_OBJECT(par_epsilon);
    Py_DECREF(par_epsilon);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_fun);
    Py_DECREF(par_fun);
    CHECK_OBJECT(par_x0);
    Py_DECREF(par_x0);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_grad);
    Py_DECREF(par_grad);
    CHECK_OBJECT(par_hess);
    Py_DECREF(par_hess);
    CHECK_OBJECT(par_finite_diff_rel_step);
    Py_DECREF(par_finite_diff_rel_step);
    CHECK_OBJECT(par_finite_diff_bounds);
    Py_DECREF(par_finite_diff_bounds);
    CHECK_OBJECT(par_epsilon);
    Py_DECREF(par_epsilon);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__1_fun_wrapped(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_cf7dbca8f00b8e77b486b9aab9136016;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cf7dbca8f00b8e77b486b9aab9136016 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cf7dbca8f00b8e77b486b9aab9136016)) {
        Py_XDECREF(cache_frame_cf7dbca8f00b8e77b486b9aab9136016);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cf7dbca8f00b8e77b486b9aab9136016 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cf7dbca8f00b8e77b486b9aab9136016 = MAKE_FUNCTION_FRAME(codeobj_cf7dbca8f00b8e77b486b9aab9136016, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cf7dbca8f00b8e77b486b9aab9136016->m_type_description == NULL);
    frame_cf7dbca8f00b8e77b486b9aab9136016 = cache_frame_cf7dbca8f00b8e77b486b9aab9136016;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cf7dbca8f00b8e77b486b9aab9136016);
    assert(Py_REFCNT(frame_cf7dbca8f00b8e77b486b9aab9136016) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 130;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = mod_consts[41];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "occc";
            goto try_except_handler_1;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 130;
            type_description_1 = "occc";
            goto try_except_handler_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[16], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "occc";
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_dircall_arg3_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[61]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 134;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[39]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_cf7dbca8f00b8e77b486b9aab9136016->m_frame.f_lineno = 134;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 134;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = Nuitka_Cell_GET(self->m_closure[0]);
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__2_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "occc";
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
        exception_tb = MAKE_TRACEBACK(frame_cf7dbca8f00b8e77b486b9aab9136016, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cf7dbca8f00b8e77b486b9aab9136016->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cf7dbca8f00b8e77b486b9aab9136016, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cf7dbca8f00b8e77b486b9aab9136016,
        type_description_1,
        par_x,
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_cf7dbca8f00b8e77b486b9aab9136016 == cache_frame_cf7dbca8f00b8e77b486b9aab9136016) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cf7dbca8f00b8e77b486b9aab9136016);
        cache_frame_cf7dbca8f00b8e77b486b9aab9136016 = NULL;
    }

    assertFrameObject(frame_cf7dbca8f00b8e77b486b9aab9136016);

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


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__2_update_fun(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_2761a13d18f1c6966a16e1a89085be3a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_2761a13d18f1c6966a16e1a89085be3a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2761a13d18f1c6966a16e1a89085be3a)) {
        Py_XDECREF(cache_frame_2761a13d18f1c6966a16e1a89085be3a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2761a13d18f1c6966a16e1a89085be3a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2761a13d18f1c6966a16e1a89085be3a = MAKE_FUNCTION_FRAME(codeobj_2761a13d18f1c6966a16e1a89085be3a, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2761a13d18f1c6966a16e1a89085be3a->m_type_description == NULL);
    frame_2761a13d18f1c6966a16e1a89085be3a = cache_frame_2761a13d18f1c6966a16e1a89085be3a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2761a13d18f1c6966a16e1a89085be3a);
    assert(Py_REFCNT(frame_2761a13d18f1c6966a16e1a89085be3a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 137;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 137;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        frame_2761a13d18f1c6966a16e1a89085be3a->m_frame.f_lineno = 137;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 137;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[63], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2761a13d18f1c6966a16e1a89085be3a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2761a13d18f1c6966a16e1a89085be3a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2761a13d18f1c6966a16e1a89085be3a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2761a13d18f1c6966a16e1a89085be3a,
        type_description_1,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_2761a13d18f1c6966a16e1a89085be3a == cache_frame_2761a13d18f1c6966a16e1a89085be3a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2761a13d18f1c6966a16e1a89085be3a);
        cache_frame_2761a13d18f1c6966a16e1a89085be3a = NULL;
    }

    assertFrameObject(frame_2761a13d18f1c6966a16e1a89085be3a);

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

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__3_grad_wrapped(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_9f85af8b07f9efa6686e48347a852e23;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9f85af8b07f9efa6686e48347a852e23 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9f85af8b07f9efa6686e48347a852e23)) {
        Py_XDECREF(cache_frame_9f85af8b07f9efa6686e48347a852e23);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9f85af8b07f9efa6686e48347a852e23 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9f85af8b07f9efa6686e48347a852e23 = MAKE_FUNCTION_FRAME(codeobj_9f85af8b07f9efa6686e48347a852e23, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9f85af8b07f9efa6686e48347a852e23->m_type_description == NULL);
    frame_9f85af8b07f9efa6686e48347a852e23 = cache_frame_9f85af8b07f9efa6686e48347a852e23;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9f85af8b07f9efa6686e48347a852e23);
    assert(Py_REFCNT(frame_9f85af8b07f9efa6686e48347a852e23) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 145;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[17]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = mod_consts[41];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "occc";
            goto try_except_handler_1;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 145;
            type_description_1 = "occc";
            goto try_except_handler_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[17], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "occc";
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[9]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 146;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 146;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[39]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 146;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        frame_9f85af8b07f9efa6686e48347a852e23->m_frame.f_lineno = 146;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 146;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 146;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = Nuitka_Cell_GET(self->m_closure[0]);
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_args_element_value_1 = impl___main__$$$function__2_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 146;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        frame_9f85af8b07f9efa6686e48347a852e23->m_frame.f_lineno = 146;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "occc";
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
        exception_tb = MAKE_TRACEBACK(frame_9f85af8b07f9efa6686e48347a852e23, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9f85af8b07f9efa6686e48347a852e23->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9f85af8b07f9efa6686e48347a852e23, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9f85af8b07f9efa6686e48347a852e23,
        type_description_1,
        par_x,
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_9f85af8b07f9efa6686e48347a852e23 == cache_frame_9f85af8b07f9efa6686e48347a852e23) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9f85af8b07f9efa6686e48347a852e23);
        cache_frame_9f85af8b07f9efa6686e48347a852e23 = NULL;
    }

    assertFrameObject(frame_9f85af8b07f9efa6686e48347a852e23);

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


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__4_update_grad(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_d6513a2f6f3c788c73f5a215b627073c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_d6513a2f6f3c788c73f5a215b627073c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d6513a2f6f3c788c73f5a215b627073c)) {
        Py_XDECREF(cache_frame_d6513a2f6f3c788c73f5a215b627073c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d6513a2f6f3c788c73f5a215b627073c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d6513a2f6f3c788c73f5a215b627073c = MAKE_FUNCTION_FRAME(codeobj_d6513a2f6f3c788c73f5a215b627073c, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d6513a2f6f3c788c73f5a215b627073c->m_type_description == NULL);
    frame_d6513a2f6f3c788c73f5a215b627073c = cache_frame_d6513a2f6f3c788c73f5a215b627073c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d6513a2f6f3c788c73f5a215b627073c);
    assert(Py_REFCNT(frame_d6513a2f6f3c788c73f5a215b627073c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 149;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 149;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        frame_d6513a2f6f3c788c73f5a215b627073c->m_frame.f_lineno = 149;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 149;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[65], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d6513a2f6f3c788c73f5a215b627073c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d6513a2f6f3c788c73f5a215b627073c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d6513a2f6f3c788c73f5a215b627073c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d6513a2f6f3c788c73f5a215b627073c,
        type_description_1,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_d6513a2f6f3c788c73f5a215b627073c == cache_frame_d6513a2f6f3c788c73f5a215b627073c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d6513a2f6f3c788c73f5a215b627073c);
        cache_frame_d6513a2f6f3c788c73f5a215b627073c = NULL;
    }

    assertFrameObject(frame_d6513a2f6f3c788c73f5a215b627073c);

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

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__5_update_grad(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_199505446e89ea369c149f14a98ca570;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_199505446e89ea369c149f14a98ca570 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_199505446e89ea369c149f14a98ca570)) {
        Py_XDECREF(cache_frame_199505446e89ea369c149f14a98ca570);

#if _DEBUG_REFCOUNTS
        if (cache_frame_199505446e89ea369c149f14a98ca570 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_199505446e89ea369c149f14a98ca570 = MAKE_FUNCTION_FRAME(codeobj_199505446e89ea369c149f14a98ca570, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_199505446e89ea369c149f14a98ca570->m_type_description == NULL);
    frame_199505446e89ea369c149f14a98ca570 = cache_frame_199505446e89ea369c149f14a98ca570;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_199505446e89ea369c149f14a98ca570);
    assert(Py_REFCNT(frame_199505446e89ea369c149f14a98ca570) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 153;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[2]);
        frame_199505446e89ea369c149f14a98ca570->m_frame.f_lineno = 153;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[32]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 154;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[17]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = mod_consts[41];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ccc";
            goto try_except_handler_1;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 154;
            type_description_1 = "ccc";
            goto try_except_handler_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[17], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ccc";
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_assattr_target_2;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 155;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_2;
            PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 155;
                type_description_1 = "ccc";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[2]);
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[12]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;
                type_description_1 = "ccc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_dircall_arg2_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_dict_key_1 = mod_consts[67];
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 155;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[63]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 155;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            Py_DECREF(tmp_dircall_arg3_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 156;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg4_1 = Nuitka_Cell_GET(self->m_closure[0]);
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_assattr_value_2 = impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_assattr_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 155;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[65], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_199505446e89ea369c149f14a98ca570, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_199505446e89ea369c149f14a98ca570->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_199505446e89ea369c149f14a98ca570, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_199505446e89ea369c149f14a98ca570,
        type_description_1,
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_199505446e89ea369c149f14a98ca570 == cache_frame_199505446e89ea369c149f14a98ca570) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_199505446e89ea369c149f14a98ca570);
        cache_frame_199505446e89ea369c149f14a98ca570 = NULL;
    }

    assertFrameObject(frame_199505446e89ea369c149f14a98ca570);

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

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__6_hess_wrapped(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_6054c2252161ffbc8463e8fc73e998e4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6054c2252161ffbc8463e8fc73e998e4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6054c2252161ffbc8463e8fc73e998e4)) {
        Py_XDECREF(cache_frame_6054c2252161ffbc8463e8fc73e998e4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6054c2252161ffbc8463e8fc73e998e4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6054c2252161ffbc8463e8fc73e998e4 = MAKE_FUNCTION_FRAME(codeobj_6054c2252161ffbc8463e8fc73e998e4, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6054c2252161ffbc8463e8fc73e998e4->m_type_description == NULL);
    frame_6054c2252161ffbc8463e8fc73e998e4 = cache_frame_6054c2252161ffbc8463e8fc73e998e4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6054c2252161ffbc8463e8fc73e998e4);
    assert(Py_REFCNT(frame_6054c2252161ffbc8463e8fc73e998e4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = mod_consts[41];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "occc";
            goto try_except_handler_1;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "occc";
            goto try_except_handler_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[18], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "occc";
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[46]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 170;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 170;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[39]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 170;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        frame_6054c2252161ffbc8463e8fc73e998e4->m_frame.f_lineno = 170;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 170;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 170;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = Nuitka_Cell_GET(self->m_closure[0]);
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_args_element_value_1 = impl___main__$$$function__2_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 170;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        frame_6054c2252161ffbc8463e8fc73e998e4->m_frame.f_lineno = 170;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "occc";
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
        exception_tb = MAKE_TRACEBACK(frame_6054c2252161ffbc8463e8fc73e998e4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6054c2252161ffbc8463e8fc73e998e4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6054c2252161ffbc8463e8fc73e998e4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6054c2252161ffbc8463e8fc73e998e4,
        type_description_1,
        par_x,
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_6054c2252161ffbc8463e8fc73e998e4 == cache_frame_6054c2252161ffbc8463e8fc73e998e4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6054c2252161ffbc8463e8fc73e998e4);
        cache_frame_6054c2252161ffbc8463e8fc73e998e4 = NULL;
    }

    assertFrameObject(frame_6054c2252161ffbc8463e8fc73e998e4);

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


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__7_hess_wrapped(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_8a17990ca1decd9440adb32e457b4a1e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8a17990ca1decd9440adb32e457b4a1e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8a17990ca1decd9440adb32e457b4a1e)) {
        Py_XDECREF(cache_frame_8a17990ca1decd9440adb32e457b4a1e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8a17990ca1decd9440adb32e457b4a1e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8a17990ca1decd9440adb32e457b4a1e = MAKE_FUNCTION_FRAME(codeobj_8a17990ca1decd9440adb32e457b4a1e, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8a17990ca1decd9440adb32e457b4a1e->m_type_description == NULL);
    frame_8a17990ca1decd9440adb32e457b4a1e = cache_frame_8a17990ca1decd9440adb32e457b4a1e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8a17990ca1decd9440adb32e457b4a1e);
    assert(Py_REFCNT(frame_8a17990ca1decd9440adb32e457b4a1e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 175;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = mod_consts[41];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "occc";
            goto try_except_handler_1;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 175;
            type_description_1 = "occc";
            goto try_except_handler_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[18], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "occc";
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_dircall_arg3_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 176;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[39]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_8a17990ca1decd9440adb32e457b4a1e->m_frame.f_lineno = 176;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 176;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = Nuitka_Cell_GET(self->m_closure[0]);
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__2_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "occc";
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
        exception_tb = MAKE_TRACEBACK(frame_8a17990ca1decd9440adb32e457b4a1e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8a17990ca1decd9440adb32e457b4a1e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8a17990ca1decd9440adb32e457b4a1e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8a17990ca1decd9440adb32e457b4a1e,
        type_description_1,
        par_x,
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_8a17990ca1decd9440adb32e457b4a1e == cache_frame_8a17990ca1decd9440adb32e457b4a1e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8a17990ca1decd9440adb32e457b4a1e);
        cache_frame_8a17990ca1decd9440adb32e457b4a1e = NULL;
    }

    assertFrameObject(frame_8a17990ca1decd9440adb32e457b4a1e);

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


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__8_hess_wrapped(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_7a917831f043dfae498905b281006f92;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7a917831f043dfae498905b281006f92 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7a917831f043dfae498905b281006f92)) {
        Py_XDECREF(cache_frame_7a917831f043dfae498905b281006f92);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7a917831f043dfae498905b281006f92 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7a917831f043dfae498905b281006f92 = MAKE_FUNCTION_FRAME(codeobj_7a917831f043dfae498905b281006f92, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7a917831f043dfae498905b281006f92->m_type_description == NULL);
    frame_7a917831f043dfae498905b281006f92 = cache_frame_7a917831f043dfae498905b281006f92;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7a917831f043dfae498905b281006f92);
    assert(Py_REFCNT(frame_7a917831f043dfae498905b281006f92) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 180;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = mod_consts[41];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "occc";
            goto try_except_handler_1;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 180;
            type_description_1 = "occc";
            goto try_except_handler_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[18], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "occc";
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[48]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 181;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[49]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 181;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 181;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 181;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[39]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 181;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_3 = par_x;
        frame_7a917831f043dfae498905b281006f92->m_frame.f_lineno = 181;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 181;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 181;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = Nuitka_Cell_GET(self->m_closure[0]);
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_args_element_value_2 = impl___main__$$$function__2_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 181;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        frame_7a917831f043dfae498905b281006f92->m_frame.f_lineno = 181;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 181;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        frame_7a917831f043dfae498905b281006f92->m_frame.f_lineno = 181;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "occc";
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
        exception_tb = MAKE_TRACEBACK(frame_7a917831f043dfae498905b281006f92, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7a917831f043dfae498905b281006f92->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7a917831f043dfae498905b281006f92, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7a917831f043dfae498905b281006f92,
        type_description_1,
        par_x,
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_7a917831f043dfae498905b281006f92 == cache_frame_7a917831f043dfae498905b281006f92) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7a917831f043dfae498905b281006f92);
        cache_frame_7a917831f043dfae498905b281006f92 = NULL;
    }

    assertFrameObject(frame_7a917831f043dfae498905b281006f92);

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


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__9_update_hess(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_fa3c2496fec7ce69d288cf79ac0c3f18;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_fa3c2496fec7ce69d288cf79ac0c3f18 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fa3c2496fec7ce69d288cf79ac0c3f18)) {
        Py_XDECREF(cache_frame_fa3c2496fec7ce69d288cf79ac0c3f18);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fa3c2496fec7ce69d288cf79ac0c3f18 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fa3c2496fec7ce69d288cf79ac0c3f18 = MAKE_FUNCTION_FRAME(codeobj_fa3c2496fec7ce69d288cf79ac0c3f18, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fa3c2496fec7ce69d288cf79ac0c3f18->m_type_description == NULL);
    frame_fa3c2496fec7ce69d288cf79ac0c3f18 = cache_frame_fa3c2496fec7ce69d288cf79ac0c3f18;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fa3c2496fec7ce69d288cf79ac0c3f18);
    assert(Py_REFCNT(frame_fa3c2496fec7ce69d288cf79ac0c3f18) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 185;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 185;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        frame_fa3c2496fec7ce69d288cf79ac0c3f18->m_frame.f_lineno = 185;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 185;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[40], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fa3c2496fec7ce69d288cf79ac0c3f18, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fa3c2496fec7ce69d288cf79ac0c3f18->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fa3c2496fec7ce69d288cf79ac0c3f18, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fa3c2496fec7ce69d288cf79ac0c3f18,
        type_description_1,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_fa3c2496fec7ce69d288cf79ac0c3f18 == cache_frame_fa3c2496fec7ce69d288cf79ac0c3f18) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fa3c2496fec7ce69d288cf79ac0c3f18);
        cache_frame_fa3c2496fec7ce69d288cf79ac0c3f18 = NULL;
    }

    assertFrameObject(frame_fa3c2496fec7ce69d288cf79ac0c3f18);

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

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__10_update_hess(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_05d4ebf5414bca8450e9e33da77f3c73;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_05d4ebf5414bca8450e9e33da77f3c73 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_05d4ebf5414bca8450e9e33da77f3c73)) {
        Py_XDECREF(cache_frame_05d4ebf5414bca8450e9e33da77f3c73);

#if _DEBUG_REFCOUNTS
        if (cache_frame_05d4ebf5414bca8450e9e33da77f3c73 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_05d4ebf5414bca8450e9e33da77f3c73 = MAKE_FUNCTION_FRAME(codeobj_05d4ebf5414bca8450e9e33da77f3c73, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_05d4ebf5414bca8450e9e33da77f3c73->m_type_description == NULL);
    frame_05d4ebf5414bca8450e9e33da77f3c73 = cache_frame_05d4ebf5414bca8450e9e33da77f3c73;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_05d4ebf5414bca8450e9e33da77f3c73);
    assert(Py_REFCNT(frame_05d4ebf5414bca8450e9e33da77f3c73) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[2]);
        frame_05d4ebf5414bca8450e9e33da77f3c73->m_frame.f_lineno = 189;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[38]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_assattr_target_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 190;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_1;
            PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 190;
                type_description_1 = "ccc";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_1 = "ccc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_dircall_arg2_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_dict_key_1 = mod_consts[67];
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 190;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[65]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 190;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            Py_DECREF(tmp_dircall_arg3_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 191;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg4_1 = Nuitka_Cell_GET(self->m_closure[0]);
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_assattr_value_1 = impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 190;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[40], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_expression_value_3;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 192;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[40]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ccc";
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
        exception_tb = MAKE_TRACEBACK(frame_05d4ebf5414bca8450e9e33da77f3c73, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_05d4ebf5414bca8450e9e33da77f3c73->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_05d4ebf5414bca8450e9e33da77f3c73, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_05d4ebf5414bca8450e9e33da77f3c73,
        type_description_1,
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_05d4ebf5414bca8450e9e33da77f3c73 == cache_frame_05d4ebf5414bca8450e9e33da77f3c73) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_05d4ebf5414bca8450e9e33da77f3c73);
        cache_frame_05d4ebf5414bca8450e9e33da77f3c73 = NULL;
    }

    assertFrameObject(frame_05d4ebf5414bca8450e9e33da77f3c73);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__11_update_hess(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_0d284f5628c8d33a8755174fa333b806;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0d284f5628c8d33a8755174fa333b806 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0d284f5628c8d33a8755174fa333b806)) {
        Py_XDECREF(cache_frame_0d284f5628c8d33a8755174fa333b806);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0d284f5628c8d33a8755174fa333b806 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0d284f5628c8d33a8755174fa333b806 = MAKE_FUNCTION_FRAME(codeobj_0d284f5628c8d33a8755174fa333b806, module_scipy$optimize$_differentiable_functions, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0d284f5628c8d33a8755174fa333b806->m_type_description == NULL);
    frame_0d284f5628c8d33a8755174fa333b806 = cache_frame_0d284f5628c8d33a8755174fa333b806;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0d284f5628c8d33a8755174fa333b806);
    assert(Py_REFCNT(frame_0d284f5628c8d33a8755174fa333b806) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 204;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_0d284f5628c8d33a8755174fa333b806->m_frame.f_lineno = 204;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[38]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 205;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[40]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[69]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 205;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[12]);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 205;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_sub_expr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 205;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[54]);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 205;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 205;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 205;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_sub_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[65]);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 205;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_sub_expr_left_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 205;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_sub_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[55]);
        if (tmp_sub_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_sub_expr_left_2);

            exception_lineno = 205;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        Py_DECREF(tmp_sub_expr_right_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 205;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        frame_0d284f5628c8d33a8755174fa333b806->m_frame.f_lineno = 205;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0d284f5628c8d33a8755174fa333b806, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0d284f5628c8d33a8755174fa333b806->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0d284f5628c8d33a8755174fa333b806, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0d284f5628c8d33a8755174fa333b806,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_0d284f5628c8d33a8755174fa333b806 == cache_frame_0d284f5628c8d33a8755174fa333b806) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0d284f5628c8d33a8755174fa333b806);
        cache_frame_0d284f5628c8d33a8755174fa333b806 = NULL;
    }

    assertFrameObject(frame_0d284f5628c8d33a8755174fa333b806);

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

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__12_update_x(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_26d857c4a271045f6437952cdade5f39;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_26d857c4a271045f6437952cdade5f39 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_26d857c4a271045f6437952cdade5f39)) {
        Py_XDECREF(cache_frame_26d857c4a271045f6437952cdade5f39);

#if _DEBUG_REFCOUNTS
        if (cache_frame_26d857c4a271045f6437952cdade5f39 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_26d857c4a271045f6437952cdade5f39 = MAKE_FUNCTION_FRAME(codeobj_26d857c4a271045f6437952cdade5f39, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_26d857c4a271045f6437952cdade5f39->m_type_description == NULL);
    frame_26d857c4a271045f6437952cdade5f39 = cache_frame_26d857c4a271045f6437952cdade5f39;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_26d857c4a271045f6437952cdade5f39);
    assert(Py_REFCNT(frame_26d857c4a271045f6437952cdade5f39) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 211;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_26d857c4a271045f6437952cdade5f39->m_frame.f_lineno = 211;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[38]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 212;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 212;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[54], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_assattr_target_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 213;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_assattr_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[65]);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_assattr_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 213;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[55], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_26d857c4a271045f6437952cdade5f39->m_frame.f_lineno = 216;
        tmp_called_instance_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[9], tmp_args_element_value_1);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_26d857c4a271045f6437952cdade5f39->m_frame.f_lineno = 216;
        tmp_assattr_value_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[11], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_assattr_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 216;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[12], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = Py_False;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 217;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[19], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = Py_False;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 218;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[20], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = Py_False;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 219;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_6 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[21], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 220;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_26d857c4a271045f6437952cdade5f39->m_frame.f_lineno = 220;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[70]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
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
        exception_tb = MAKE_TRACEBACK(frame_26d857c4a271045f6437952cdade5f39, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_26d857c4a271045f6437952cdade5f39->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_26d857c4a271045f6437952cdade5f39, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_26d857c4a271045f6437952cdade5f39,
        type_description_1,
        par_x,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_26d857c4a271045f6437952cdade5f39 == cache_frame_26d857c4a271045f6437952cdade5f39) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_26d857c4a271045f6437952cdade5f39);
        cache_frame_26d857c4a271045f6437952cdade5f39 = NULL;
    }

    assertFrameObject(frame_26d857c4a271045f6437952cdade5f39);

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


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__13_update_x(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_fa39f885a4e854bb6531c56d4367aefd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_fa39f885a4e854bb6531c56d4367aefd = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fa39f885a4e854bb6531c56d4367aefd)) {
        Py_XDECREF(cache_frame_fa39f885a4e854bb6531c56d4367aefd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fa39f885a4e854bb6531c56d4367aefd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fa39f885a4e854bb6531c56d4367aefd = MAKE_FUNCTION_FRAME(codeobj_fa39f885a4e854bb6531c56d4367aefd, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fa39f885a4e854bb6531c56d4367aefd->m_type_description == NULL);
    frame_fa39f885a4e854bb6531c56d4367aefd = cache_frame_fa39f885a4e854bb6531c56d4367aefd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fa39f885a4e854bb6531c56d4367aefd);
    assert(Py_REFCNT(frame_fa39f885a4e854bb6531c56d4367aefd) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_fa39f885a4e854bb6531c56d4367aefd->m_frame.f_lineno = 225;
        tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[9], tmp_args_element_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_fa39f885a4e854bb6531c56d4367aefd->m_frame.f_lineno = 225;
        tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[11], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 225;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[12], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_False;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 226;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[19], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = Py_False;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 227;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[20], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = Py_False;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 228;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[21], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fa39f885a4e854bb6531c56d4367aefd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fa39f885a4e854bb6531c56d4367aefd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fa39f885a4e854bb6531c56d4367aefd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fa39f885a4e854bb6531c56d4367aefd,
        type_description_1,
        par_x,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_fa39f885a4e854bb6531c56d4367aefd == cache_frame_fa39f885a4e854bb6531c56d4367aefd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fa39f885a4e854bb6531c56d4367aefd);
        cache_frame_fa39f885a4e854bb6531c56d4367aefd = NULL;
    }

    assertFrameObject(frame_fa39f885a4e854bb6531c56d4367aefd);

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


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__2__update_fun(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3a350c660f38d8e0dfe84c51be7b5c75;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_3a350c660f38d8e0dfe84c51be7b5c75 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3a350c660f38d8e0dfe84c51be7b5c75)) {
        Py_XDECREF(cache_frame_3a350c660f38d8e0dfe84c51be7b5c75);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3a350c660f38d8e0dfe84c51be7b5c75 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3a350c660f38d8e0dfe84c51be7b5c75 = MAKE_FUNCTION_FRAME(codeobj_3a350c660f38d8e0dfe84c51be7b5c75, module_scipy$optimize$_differentiable_functions, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3a350c660f38d8e0dfe84c51be7b5c75->m_type_description == NULL);
    frame_3a350c660f38d8e0dfe84c51be7b5c75 = cache_frame_3a350c660f38d8e0dfe84c51be7b5c75;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3a350c660f38d8e0dfe84c51be7b5c75);
    assert(Py_REFCNT(frame_3a350c660f38d8e0dfe84c51be7b5c75) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "o";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_3a350c660f38d8e0dfe84c51be7b5c75->m_frame.f_lineno = 233;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[31]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[19], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3a350c660f38d8e0dfe84c51be7b5c75, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3a350c660f38d8e0dfe84c51be7b5c75->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3a350c660f38d8e0dfe84c51be7b5c75, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3a350c660f38d8e0dfe84c51be7b5c75,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_3a350c660f38d8e0dfe84c51be7b5c75 == cache_frame_3a350c660f38d8e0dfe84c51be7b5c75) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3a350c660f38d8e0dfe84c51be7b5c75);
        cache_frame_3a350c660f38d8e0dfe84c51be7b5c75 = NULL;
    }

    assertFrameObject(frame_3a350c660f38d8e0dfe84c51be7b5c75);

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


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__3__update_grad(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_41aa85885bd478070f62a072ec776d84;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_41aa85885bd478070f62a072ec776d84 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_41aa85885bd478070f62a072ec776d84)) {
        Py_XDECREF(cache_frame_41aa85885bd478070f62a072ec776d84);

#if _DEBUG_REFCOUNTS
        if (cache_frame_41aa85885bd478070f62a072ec776d84 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_41aa85885bd478070f62a072ec776d84 = MAKE_FUNCTION_FRAME(codeobj_41aa85885bd478070f62a072ec776d84, module_scipy$optimize$_differentiable_functions, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_41aa85885bd478070f62a072ec776d84->m_type_description == NULL);
    frame_41aa85885bd478070f62a072ec776d84 = cache_frame_41aa85885bd478070f62a072ec776d84;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_41aa85885bd478070f62a072ec776d84);
    assert(Py_REFCNT(frame_41aa85885bd478070f62a072ec776d84) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "o";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_41aa85885bd478070f62a072ec776d84->m_frame.f_lineno = 238;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[37]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[20], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_41aa85885bd478070f62a072ec776d84, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_41aa85885bd478070f62a072ec776d84->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_41aa85885bd478070f62a072ec776d84, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_41aa85885bd478070f62a072ec776d84,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_41aa85885bd478070f62a072ec776d84 == cache_frame_41aa85885bd478070f62a072ec776d84) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_41aa85885bd478070f62a072ec776d84);
        cache_frame_41aa85885bd478070f62a072ec776d84 = NULL;
    }

    assertFrameObject(frame_41aa85885bd478070f62a072ec776d84);

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


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__4__update_hess(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a4ae25d8160cae1b74038db1b0cf776b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_a4ae25d8160cae1b74038db1b0cf776b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a4ae25d8160cae1b74038db1b0cf776b)) {
        Py_XDECREF(cache_frame_a4ae25d8160cae1b74038db1b0cf776b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a4ae25d8160cae1b74038db1b0cf776b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a4ae25d8160cae1b74038db1b0cf776b = MAKE_FUNCTION_FRAME(codeobj_a4ae25d8160cae1b74038db1b0cf776b, module_scipy$optimize$_differentiable_functions, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a4ae25d8160cae1b74038db1b0cf776b->m_type_description == NULL);
    frame_a4ae25d8160cae1b74038db1b0cf776b = cache_frame_a4ae25d8160cae1b74038db1b0cf776b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a4ae25d8160cae1b74038db1b0cf776b);
    assert(Py_REFCNT(frame_a4ae25d8160cae1b74038db1b0cf776b) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "o";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_a4ae25d8160cae1b74038db1b0cf776b->m_frame.f_lineno = 243;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[56]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[21], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a4ae25d8160cae1b74038db1b0cf776b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a4ae25d8160cae1b74038db1b0cf776b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a4ae25d8160cae1b74038db1b0cf776b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a4ae25d8160cae1b74038db1b0cf776b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a4ae25d8160cae1b74038db1b0cf776b == cache_frame_a4ae25d8160cae1b74038db1b0cf776b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a4ae25d8160cae1b74038db1b0cf776b);
        cache_frame_a4ae25d8160cae1b74038db1b0cf776b = NULL;
    }

    assertFrameObject(frame_a4ae25d8160cae1b74038db1b0cf776b);

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


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__5_fun(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    struct Nuitka_FrameObject *frame_515688b3898229ed211ddd965916ceb7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_515688b3898229ed211ddd965916ceb7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_515688b3898229ed211ddd965916ceb7)) {
        Py_XDECREF(cache_frame_515688b3898229ed211ddd965916ceb7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_515688b3898229ed211ddd965916ceb7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_515688b3898229ed211ddd965916ceb7 = MAKE_FUNCTION_FRAME(codeobj_515688b3898229ed211ddd965916ceb7, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_515688b3898229ed211ddd965916ceb7->m_type_description == NULL);
    frame_515688b3898229ed211ddd965916ceb7 = cache_frame_515688b3898229ed211ddd965916ceb7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_515688b3898229ed211ddd965916ceb7);
    assert(Py_REFCNT(frame_515688b3898229ed211ddd965916ceb7) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[71]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[12]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 247;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_515688b3898229ed211ddd965916ceb7->m_frame.f_lineno = 247;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oo";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_3 = par_x;
        frame_515688b3898229ed211ddd965916ceb7->m_frame.f_lineno = 248;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[59], tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_515688b3898229ed211ddd965916ceb7->m_frame.f_lineno = 249;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[32]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[63]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
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
        exception_tb = MAKE_TRACEBACK(frame_515688b3898229ed211ddd965916ceb7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_515688b3898229ed211ddd965916ceb7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_515688b3898229ed211ddd965916ceb7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_515688b3898229ed211ddd965916ceb7,
        type_description_1,
        par_self,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_515688b3898229ed211ddd965916ceb7 == cache_frame_515688b3898229ed211ddd965916ceb7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_515688b3898229ed211ddd965916ceb7);
        cache_frame_515688b3898229ed211ddd965916ceb7 = NULL;
    }

    assertFrameObject(frame_515688b3898229ed211ddd965916ceb7);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__6_grad(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    struct Nuitka_FrameObject *frame_1bfd769d653cd0967d14c7d774a58fd4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1bfd769d653cd0967d14c7d774a58fd4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1bfd769d653cd0967d14c7d774a58fd4)) {
        Py_XDECREF(cache_frame_1bfd769d653cd0967d14c7d774a58fd4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1bfd769d653cd0967d14c7d774a58fd4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1bfd769d653cd0967d14c7d774a58fd4 = MAKE_FUNCTION_FRAME(codeobj_1bfd769d653cd0967d14c7d774a58fd4, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1bfd769d653cd0967d14c7d774a58fd4->m_type_description == NULL);
    frame_1bfd769d653cd0967d14c7d774a58fd4 = cache_frame_1bfd769d653cd0967d14c7d774a58fd4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1bfd769d653cd0967d14c7d774a58fd4);
    assert(Py_REFCNT(frame_1bfd769d653cd0967d14c7d774a58fd4) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[71]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[12]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 253;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_1bfd769d653cd0967d14c7d774a58fd4->m_frame.f_lineno = 253;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oo";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_3 = par_x;
        frame_1bfd769d653cd0967d14c7d774a58fd4->m_frame.f_lineno = 254;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[59], tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_1bfd769d653cd0967d14c7d774a58fd4->m_frame.f_lineno = 255;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[38]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[65]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
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
        exception_tb = MAKE_TRACEBACK(frame_1bfd769d653cd0967d14c7d774a58fd4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1bfd769d653cd0967d14c7d774a58fd4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1bfd769d653cd0967d14c7d774a58fd4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1bfd769d653cd0967d14c7d774a58fd4,
        type_description_1,
        par_self,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_1bfd769d653cd0967d14c7d774a58fd4 == cache_frame_1bfd769d653cd0967d14c7d774a58fd4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1bfd769d653cd0967d14c7d774a58fd4);
        cache_frame_1bfd769d653cd0967d14c7d774a58fd4 = NULL;
    }

    assertFrameObject(frame_1bfd769d653cd0967d14c7d774a58fd4);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__7_hess(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    struct Nuitka_FrameObject *frame_23f3fbfaa8a95bb3ecb94414ceab6e7a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_23f3fbfaa8a95bb3ecb94414ceab6e7a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_23f3fbfaa8a95bb3ecb94414ceab6e7a)) {
        Py_XDECREF(cache_frame_23f3fbfaa8a95bb3ecb94414ceab6e7a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_23f3fbfaa8a95bb3ecb94414ceab6e7a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_23f3fbfaa8a95bb3ecb94414ceab6e7a = MAKE_FUNCTION_FRAME(codeobj_23f3fbfaa8a95bb3ecb94414ceab6e7a, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_23f3fbfaa8a95bb3ecb94414ceab6e7a->m_type_description == NULL);
    frame_23f3fbfaa8a95bb3ecb94414ceab6e7a = cache_frame_23f3fbfaa8a95bb3ecb94414ceab6e7a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_23f3fbfaa8a95bb3ecb94414ceab6e7a);
    assert(Py_REFCNT(frame_23f3fbfaa8a95bb3ecb94414ceab6e7a) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[71]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[12]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 259;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_23f3fbfaa8a95bb3ecb94414ceab6e7a->m_frame.f_lineno = 259;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oo";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_3 = par_x;
        frame_23f3fbfaa8a95bb3ecb94414ceab6e7a->m_frame.f_lineno = 260;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[59], tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_23f3fbfaa8a95bb3ecb94414ceab6e7a->m_frame.f_lineno = 261;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[70]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[40]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
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
        exception_tb = MAKE_TRACEBACK(frame_23f3fbfaa8a95bb3ecb94414ceab6e7a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_23f3fbfaa8a95bb3ecb94414ceab6e7a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_23f3fbfaa8a95bb3ecb94414ceab6e7a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_23f3fbfaa8a95bb3ecb94414ceab6e7a,
        type_description_1,
        par_self,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_23f3fbfaa8a95bb3ecb94414ceab6e7a == cache_frame_23f3fbfaa8a95bb3ecb94414ceab6e7a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_23f3fbfaa8a95bb3ecb94414ceab6e7a);
        cache_frame_23f3fbfaa8a95bb3ecb94414ceab6e7a = NULL;
    }

    assertFrameObject(frame_23f3fbfaa8a95bb3ecb94414ceab6e7a);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__8_fun_and_grad(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    struct Nuitka_FrameObject *frame_01200459f5aa7819f02bf84c19414e24;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_01200459f5aa7819f02bf84c19414e24 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_01200459f5aa7819f02bf84c19414e24)) {
        Py_XDECREF(cache_frame_01200459f5aa7819f02bf84c19414e24);

#if _DEBUG_REFCOUNTS
        if (cache_frame_01200459f5aa7819f02bf84c19414e24 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_01200459f5aa7819f02bf84c19414e24 = MAKE_FUNCTION_FRAME(codeobj_01200459f5aa7819f02bf84c19414e24, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_01200459f5aa7819f02bf84c19414e24->m_type_description == NULL);
    frame_01200459f5aa7819f02bf84c19414e24 = cache_frame_01200459f5aa7819f02bf84c19414e24;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_01200459f5aa7819f02bf84c19414e24);
    assert(Py_REFCNT(frame_01200459f5aa7819f02bf84c19414e24) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[71]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[12]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 265;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_01200459f5aa7819f02bf84c19414e24->m_frame.f_lineno = 265;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oo";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_3 = par_x;
        frame_01200459f5aa7819f02bf84c19414e24->m_frame.f_lineno = 266;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[59], tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_01200459f5aa7819f02bf84c19414e24->m_frame.f_lineno = 267;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[32]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_01200459f5aa7819f02bf84c19414e24->m_frame.f_lineno = 268;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[38]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[63]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_4;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[65]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_01200459f5aa7819f02bf84c19414e24, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_01200459f5aa7819f02bf84c19414e24->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_01200459f5aa7819f02bf84c19414e24, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_01200459f5aa7819f02bf84c19414e24,
        type_description_1,
        par_self,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_01200459f5aa7819f02bf84c19414e24 == cache_frame_01200459f5aa7819f02bf84c19414e24) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_01200459f5aa7819f02bf84c19414e24);
        cache_frame_01200459f5aa7819f02bf84c19414e24 = NULL;
    }

    assertFrameObject(frame_01200459f5aa7819f02bf84c19414e24);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__9___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_fun = Nuitka_Cell_New1(python_pars[1]);
    PyObject *par_x0 = python_pars[2];
    struct Nuitka_CellObject *par_jac = Nuitka_Cell_New1(python_pars[3]);
    struct Nuitka_CellObject *par_hess = Nuitka_Cell_New1(python_pars[4]);
    PyObject *par_finite_diff_rel_step = python_pars[5];
    PyObject *par_finite_diff_jac_sparsity = python_pars[6];
    PyObject *par_finite_diff_bounds = python_pars[7];
    PyObject *par_sparse_jacobian = python_pars[8];
    struct Nuitka_CellObject *var_finite_diff_options = Nuitka_Cell_Empty();
    PyObject *var_sparsity_groups = NULL;
    struct Nuitka_CellObject *var_fun_wrapped = Nuitka_Cell_Empty();
    PyObject *var_update_fun = NULL;
    struct Nuitka_CellObject *var_jac_wrapped = Nuitka_Cell_Empty();
    PyObject *var_update_jac = NULL;
    struct Nuitka_CellObject *var_hess_wrapped = Nuitka_Cell_Empty();
    PyObject *var_update_hess = NULL;
    struct Nuitka_CellObject *var_jac_dot_v = Nuitka_Cell_Empty();
    PyObject *var_update_x = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    PyObject *tmp_inplace_assign_2__value = NULL;
    struct Nuitka_FrameObject *frame_89a2733fcae3e5aa6c9d259516d36d35;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_89a2733fcae3e5aa6c9d259516d36d35 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_89a2733fcae3e5aa6c9d259516d36d35)) {
        Py_XDECREF(cache_frame_89a2733fcae3e5aa6c9d259516d36d35);

#if _DEBUG_REFCOUNTS
        if (cache_frame_89a2733fcae3e5aa6c9d259516d36d35 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_89a2733fcae3e5aa6c9d259516d36d35 = MAKE_FUNCTION_FRAME(codeobj_89a2733fcae3e5aa6c9d259516d36d35, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_89a2733fcae3e5aa6c9d259516d36d35->m_type_description == NULL);
    frame_89a2733fcae3e5aa6c9d259516d36d35 = cache_frame_89a2733fcae3e5aa6c9d259516d36d35;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_89a2733fcae3e5aa6c9d259516d36d35);
    assert(Py_REFCNT(frame_89a2733fcae3e5aa6c9d259516d36d35) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(Nuitka_Cell_GET(par_jac));
        tmp_args_element_value_1 = Nuitka_Cell_GET(par_jac);
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 292;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(Nuitka_Cell_GET(par_jac));
        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(par_jac);
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[72];
        tmp_kw_call_arg_value_1_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_kw_call_arg_value_1_1 == NULL)) {
            tmp_kw_call_arg_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 293;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 293;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 293;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ccoccoooocococococo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_value_2 != NULL);
        CHECK_OBJECT(Nuitka_Cell_GET(par_hess));
        tmp_args_element_value_2 = Nuitka_Cell_GET(par_hess);
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 296;
        tmp_or_left_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 296;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        CHECK_OBJECT(Nuitka_Cell_GET(par_hess));
        tmp_cmp_expr_left_2 = Nuitka_Cell_GET(par_hess);
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_2 = (tmp_res == 1) ? Py_True : Py_False;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(Nuitka_Cell_GET(par_hess));
        tmp_isinstance_inst_1 = Nuitka_Cell_GET(par_hess);
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        Py_INCREF(tmp_or_right_value_1);
        tmp_operand_value_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_operand_value_2 = tmp_or_left_value_1;
        or_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        tmp_kw_call_arg_value_0_2 = mod_consts[73];
        tmp_kw_call_arg_value_1_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_kw_call_arg_value_1_2 == NULL)) {
            tmp_kw_call_arg_value_1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_kw_call_arg_value_1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 298;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            tmp_make_exception_arg_2 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 298;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 298;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ccoccoooocococococo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        int tmp_and_left_truth_2;
        bool tmp_and_left_value_2;
        bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(Nuitka_Cell_GET(par_jac));
        tmp_cmp_expr_left_3 = Nuitka_Cell_GET(par_jac);
        tmp_cmp_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
            tmp_cmp_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = (tmp_res == 1) ? true : false;
        tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(Nuitka_Cell_GET(par_hess));
        tmp_cmp_expr_left_4 = Nuitka_Cell_GET(par_hess);
        tmp_cmp_expr_right_4 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
            tmp_cmp_expr_right_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = (tmp_res == 1) ? true : false;
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
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        tmp_make_exception_arg_3 = mod_consts[74];
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 303;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 303;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ccoccoooocococococo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_assattr_target_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x0);
        tmp_args_element_value_3 = par_x0;
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 308;
        tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[9], tmp_args_element_value_3);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 308;
        tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[11], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_1 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[12], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_2 = Nuitka_Cell_GET(par_self);
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[12]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[13]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_2 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[14], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = mod_consts[15];
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_3 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[16], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = mod_consts[15];
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_4 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[75], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = mod_consts[15];
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_5 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[18], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = Py_False;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_6 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[19], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_value_7 = Py_False;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_7 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[76], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_value_8 = Py_False;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_8 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[21], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_DICT_EMPTY();
        assert(Nuitka_Cell_GET(var_finite_diff_options) == NULL);
        PyCell_SET(var_finite_diff_options, tmp_assign_source_1);

    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(Nuitka_Cell_GET(par_jac));
        tmp_cmp_expr_left_5 = Nuitka_Cell_GET(par_jac);
        tmp_cmp_expr_right_5 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_cmp_expr_right_5 == NULL)) {
            tmp_cmp_expr_right_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_cmp_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ccoccoooocococococo";
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
    CHECK_OBJECT(Nuitka_Cell_GET(par_jac));
    tmp_dictset_value = Nuitka_Cell_GET(par_jac);
    CHECK_OBJECT(Nuitka_Cell_GET(var_finite_diff_options));
    tmp_dictset_dict = Nuitka_Cell_GET(var_finite_diff_options);
    tmp_dictset_key = mod_consts[22];
    assert(PyDict_CheckExact(tmp_dictset_dict));
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

    assert(!(tmp_res != 0));
    CHECK_OBJECT(par_finite_diff_rel_step);
    tmp_dictset_value = par_finite_diff_rel_step;
    CHECK_OBJECT(Nuitka_Cell_GET(var_finite_diff_options));
    tmp_dictset_dict = Nuitka_Cell_GET(var_finite_diff_options);
    tmp_dictset_key = mod_consts[23];
    assert(PyDict_CheckExact(tmp_dictset_dict));
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

    assert(!(tmp_res != 0));
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(par_finite_diff_jac_sparsity);
        tmp_cmp_expr_left_6 = par_finite_diff_jac_sparsity;
        tmp_cmp_expr_right_6 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_finite_diff_jac_sparsity);
        tmp_args_element_value_4 = par_finite_diff_jac_sparsity;
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 322;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        assert(var_sparsity_groups == NULL);
        var_sparsity_groups = tmp_assign_source_2;
    }
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_finite_diff_jac_sparsity);
        tmp_tuple_element_1 = par_finite_diff_jac_sparsity;
        tmp_dictset_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dictset_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_sparsity_groups);
        tmp_tuple_element_1 = var_sparsity_groups;
        PyTuple_SET_ITEM0(tmp_dictset_value, 1, tmp_tuple_element_1);
        CHECK_OBJECT(Nuitka_Cell_GET(var_finite_diff_options));
        tmp_dictset_dict = Nuitka_Cell_GET(var_finite_diff_options);
        tmp_dictset_key = mod_consts[78];
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
    }
    branch_no_5:;
    CHECK_OBJECT(par_finite_diff_bounds);
    tmp_dictset_value = par_finite_diff_bounds;
    CHECK_OBJECT(Nuitka_Cell_GET(var_finite_diff_options));
    tmp_dictset_dict = Nuitka_Cell_GET(var_finite_diff_options);
    tmp_dictset_key = mod_consts[25];
    assert(PyDict_CheckExact(tmp_dictset_dict));
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

    assert(!(tmp_res != 0));
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_assattr_target_9;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[39]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_4 = Nuitka_Cell_GET(par_self);
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[12]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 326;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 326;
        tmp_assattr_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assattr_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_9 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[79], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_4:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(Nuitka_Cell_GET(par_hess));
        tmp_cmp_expr_left_7 = Nuitka_Cell_GET(par_hess);
        tmp_cmp_expr_right_7 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_cmp_expr_right_7 == NULL)) {
            tmp_cmp_expr_right_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_cmp_expr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    CHECK_OBJECT(Nuitka_Cell_GET(par_hess));
    tmp_dictset_value = Nuitka_Cell_GET(par_hess);
    CHECK_OBJECT(Nuitka_Cell_GET(var_finite_diff_options));
    tmp_dictset_dict = Nuitka_Cell_GET(var_finite_diff_options);
    tmp_dictset_key = mod_consts[22];
    assert(PyDict_CheckExact(tmp_dictset_dict));
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

    assert(!(tmp_res != 0));
    CHECK_OBJECT(par_finite_diff_rel_step);
    tmp_dictset_value = par_finite_diff_rel_step;
    CHECK_OBJECT(Nuitka_Cell_GET(var_finite_diff_options));
    tmp_dictset_dict = Nuitka_Cell_GET(var_finite_diff_options);
    tmp_dictset_key = mod_consts[23];
    assert(PyDict_CheckExact(tmp_dictset_dict));
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

    assert(!(tmp_res != 0));
    tmp_dictset_value = Py_True;
    CHECK_OBJECT(Nuitka_Cell_GET(var_finite_diff_options));
    tmp_dictset_dict = Nuitka_Cell_GET(var_finite_diff_options);
    tmp_dictset_key = mod_consts[26];
    assert(PyDict_CheckExact(tmp_dictset_dict));
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

    assert(!(tmp_res != 0));
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_assattr_target_10;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[39]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_6 = Nuitka_Cell_GET(par_self);
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[12]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 331;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 331;
        tmp_assattr_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assattr_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_10 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[79], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_6:;
    {
        bool tmp_condition_result_7;
        int tmp_and_left_truth_3;
        bool tmp_and_left_value_3;
        bool tmp_and_right_value_3;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        CHECK_OBJECT(Nuitka_Cell_GET(par_jac));
        tmp_cmp_expr_left_8 = Nuitka_Cell_GET(par_jac);
        tmp_cmp_expr_right_8 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_cmp_expr_right_8 == NULL)) {
            tmp_cmp_expr_right_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_cmp_expr_right_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_8, tmp_cmp_expr_left_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = (tmp_res == 1) ? true : false;
        tmp_and_left_truth_3 = tmp_and_left_value_3 != false ? 1 : 0;
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(Nuitka_Cell_GET(par_hess));
        tmp_cmp_expr_left_9 = Nuitka_Cell_GET(par_hess);
        tmp_cmp_expr_right_9 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_cmp_expr_right_9 == NULL)) {
            tmp_cmp_expr_right_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_cmp_expr_right_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_9, tmp_cmp_expr_left_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = (tmp_res == 1) ? true : false;
        tmp_condition_result_7 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_7 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_make_exception_arg_4;
        tmp_make_exception_arg_4 = mod_consts[74];
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 333;
        tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_4);
        assert(!(tmp_raise_type_4 == NULL));
        exception_type = tmp_raise_type_4;
        exception_lineno = 333;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ccoccoooocococococo";
        goto frame_exception_exit_1;
    }
    branch_no_7:;
    {
        PyObject *tmp_assign_source_3;
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_fun;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_self;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_3 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__1_fun_wrapped(tmp_closure_1);

        assert(Nuitka_Cell_GET(var_fun_wrapped) == NULL);
        PyCell_SET(var_fun_wrapped, tmp_assign_source_3);

    }
    {
        PyObject *tmp_assign_source_4;
        struct Nuitka_CellObject *tmp_closure_2[2];

        tmp_closure_2[0] = var_fun_wrapped;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = par_self;
        Py_INCREF(tmp_closure_2[1]);

        tmp_assign_source_4 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__2_update_fun(tmp_closure_2);

        assert(var_update_fun == NULL);
        var_update_fun = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT(var_update_fun);
        tmp_assattr_value_11 = var_update_fun;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_11 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[31], tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_update_fun);
        tmp_called_value_6 = var_update_fun;
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 347;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_assattr_target_12;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[82]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_8 = Nuitka_Cell_GET(par_self);
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[63]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 349;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 349;
        tmp_assattr_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assattr_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_12 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[83], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_assattr_target_13;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_10 = Nuitka_Cell_GET(par_self);
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[83]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[13]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_assattr_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_13 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[84], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_8;
        int tmp_truth_name_1;
        tmp_called_value_8 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_value_8 != NULL);
        CHECK_OBJECT(Nuitka_Cell_GET(par_jac));
        tmp_args_element_value_8 = Nuitka_Cell_GET(par_jac);
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 353;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_8);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 353;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_assattr_target_14;
        CHECK_OBJECT(Nuitka_Cell_GET(par_jac));
        tmp_called_value_9 = Nuitka_Cell_GET(par_jac);
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_11 = Nuitka_Cell_GET(par_self);
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[12]);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 354;
        tmp_assattr_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_assattr_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_14 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[85], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_assattr_target_15;
        tmp_assattr_value_15 = Py_True;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_15 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[76], tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_12 = Nuitka_Cell_GET(par_self);
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[75]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = mod_consts[41];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ccoccoooocococococo";
            goto try_except_handler_2;
        }
        tmp_assign_source_6 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_6;

    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_assattr_target_16;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_16 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_16 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[75], tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ccoccoooocococococo";
            goto try_except_handler_2;
        }
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_or_left_truth_3;
        nuitka_bool tmp_or_left_value_3;
        nuitka_bool tmp_or_right_value_3;
        int tmp_truth_name_2;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_14;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_sparse_jacobian);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_sparse_jacobian);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        CHECK_OBJECT(par_sparse_jacobian);
        tmp_cmp_expr_left_10 = par_sparse_jacobian;
        tmp_cmp_expr_right_10 = Py_None;
        tmp_and_left_value_4 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[43]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_14 = Nuitka_Cell_GET(par_self);
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[85]);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 359;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 359;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 359;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        tmp_or_right_value_3 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_or_right_value_3 = tmp_and_left_value_4;
        and_end_4:;
        tmp_condition_result_9 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_condition_result_9 = tmp_or_left_value_3;
        or_end_3:;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_7;
        struct Nuitka_CellObject *tmp_closure_3[2];

        tmp_closure_3[0] = par_jac;
        Py_INCREF(tmp_closure_3[0]);
        tmp_closure_3[1] = par_self;
        Py_INCREF(tmp_closure_3[1]);

        tmp_assign_source_7 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__3_jac_wrapped(tmp_closure_3);

        assert(Nuitka_Cell_GET(var_jac_wrapped) == NULL);
        PyCell_SET(var_jac_wrapped, tmp_assign_source_7);

    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_assattr_target_17;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[46]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_16 = Nuitka_Cell_GET(par_self);
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[85]);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 363;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 363;
        tmp_assattr_value_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_assattr_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_17 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, mod_consts[85], tmp_assattr_value_17);
        Py_DECREF(tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_assattr_target_18;
        tmp_assattr_value_18 = Py_True;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_18 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_18, mod_consts[88], tmp_assattr_value_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_9;
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_18;
        int tmp_truth_name_4;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[43]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_18 = Nuitka_Cell_GET(par_self);
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[85]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 366;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 366;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_4);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_4);

            exception_lineno = 366;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_4);
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_8;
        struct Nuitka_CellObject *tmp_closure_4[2];

        tmp_closure_4[0] = par_jac;
        Py_INCREF(tmp_closure_4[0]);
        tmp_closure_4[1] = par_self;
        Py_INCREF(tmp_closure_4[1]);

        tmp_assign_source_8 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__4_jac_wrapped(tmp_closure_4);

        assert(Nuitka_Cell_GET(var_jac_wrapped) == NULL);
        PyCell_SET(var_jac_wrapped, tmp_assign_source_8);

    }
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_assattr_target_19;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_19 = Nuitka_Cell_GET(par_self);
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[85]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 370;
        tmp_assattr_value_19 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[89]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_assattr_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_19 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_19, mod_consts[85], tmp_assattr_value_19);
        Py_DECREF(tmp_assattr_value_19);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_assattr_target_20;
        tmp_assattr_value_20 = Py_False;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_20 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_20, mod_consts[88], tmp_assattr_value_20);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_9;
        struct Nuitka_CellObject *tmp_closure_5[2];

        tmp_closure_5[0] = par_jac;
        Py_INCREF(tmp_closure_5[0]);
        tmp_closure_5[1] = par_self;
        Py_INCREF(tmp_closure_5[1]);

        tmp_assign_source_9 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__5_jac_wrapped(tmp_closure_5);

        assert(Nuitka_Cell_GET(var_jac_wrapped) == NULL);
        PyCell_SET(var_jac_wrapped, tmp_assign_source_9);

    }
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_assattr_target_21;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[48]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_21 = Nuitka_Cell_GET(par_self);
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[85]);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 377;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 377;
        tmp_assattr_value_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_assattr_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_21 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_21, mod_consts[85], tmp_assattr_value_21);
        Py_DECREF(tmp_assattr_value_21);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_22;
        PyObject *tmp_assattr_target_22;
        tmp_assattr_value_22 = Py_False;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_22 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_22, mod_consts[88], tmp_assattr_value_22);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_10:;
    branch_end_9:;
    {
        PyObject *tmp_assign_source_10;
        struct Nuitka_CellObject *tmp_closure_6[2];

        tmp_closure_6[0] = var_jac_wrapped;
        Py_INCREF(tmp_closure_6[0]);
        tmp_closure_6[1] = par_self;
        Py_INCREF(tmp_closure_6[1]);

        tmp_assign_source_10 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__6_update_jac(tmp_closure_6);

        assert(var_update_jac == NULL);
        var_update_jac = tmp_assign_source_10;
    }
    goto branch_end_8;
    branch_no_8:;
    {
        bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        CHECK_OBJECT(Nuitka_Cell_GET(par_jac));
        tmp_cmp_expr_left_11 = Nuitka_Cell_GET(par_jac);
        tmp_cmp_expr_right_11 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_cmp_expr_right_11 == NULL)) {
            tmp_cmp_expr_right_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_cmp_expr_right_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_11, tmp_cmp_expr_left_11);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assattr_value_23;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_assattr_target_23;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_fun_wrapped));
        tmp_tuple_element_2 = Nuitka_Cell_GET(var_fun_wrapped);
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_22;
            PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(Nuitka_Cell_GET(par_self));
            tmp_expression_value_22 = Nuitka_Cell_GET(par_self);
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[12]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 384;
                type_description_1 = "ccoccoooocococococo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_dircall_arg2_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_dircall_arg2_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_dict_key_1 = mod_consts[67];
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_23 = Nuitka_Cell_GET(par_self);
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[63]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 384;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(Nuitka_Cell_GET(var_finite_diff_options));
        tmp_dircall_arg4_1 = Nuitka_Cell_GET(var_finite_diff_options);
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_assattr_value_23 = impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_assattr_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_23 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_23, mod_consts[85], tmp_assattr_value_23);
        Py_DECREF(tmp_assattr_value_23);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_24;
        PyObject *tmp_assattr_target_24;
        tmp_assattr_value_24 = Py_True;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_24 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_24, mod_consts[76], tmp_assattr_value_24);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_12;
        int tmp_or_left_truth_4;
        nuitka_bool tmp_or_left_value_4;
        nuitka_bool tmp_or_right_value_4;
        int tmp_truth_name_5;
        int tmp_and_left_truth_5;
        nuitka_bool tmp_and_left_value_5;
        nuitka_bool tmp_and_right_value_5;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_25;
        int tmp_truth_name_6;
        CHECK_OBJECT(par_sparse_jacobian);
        tmp_truth_name_5 = CHECK_IF_TRUE(par_sparse_jacobian);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_4 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_or_left_truth_4 = tmp_or_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_4 == 1) {
            goto or_left_4;
        } else {
            goto or_right_4;
        }
        or_right_4:;
        CHECK_OBJECT(par_sparse_jacobian);
        tmp_cmp_expr_left_12 = par_sparse_jacobian;
        tmp_cmp_expr_right_12 = Py_None;
        tmp_and_left_value_5 = (tmp_cmp_expr_left_12 == tmp_cmp_expr_right_12) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_5 == 1) {
            goto and_right_5;
        } else {
            goto and_left_5;
        }
        and_right_5:;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[43]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_25 = Nuitka_Cell_GET(par_self);
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[85]);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 389;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 389;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_call_result_5);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_5);

            exception_lineno = 389;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_5 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_5);
        tmp_or_right_value_4 = tmp_and_right_value_5;
        goto and_end_5;
        and_left_5:;
        tmp_or_right_value_4 = tmp_and_left_value_5;
        and_end_5:;
        tmp_condition_result_12 = tmp_or_right_value_4;
        goto or_end_4;
        or_left_4:;
        tmp_condition_result_12 = tmp_or_left_value_4;
        or_end_4:;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_11;
        struct Nuitka_CellObject *tmp_closure_7[3];

        tmp_closure_7[0] = var_finite_diff_options;
        Py_INCREF(tmp_closure_7[0]);
        tmp_closure_7[1] = var_fun_wrapped;
        Py_INCREF(tmp_closure_7[1]);
        tmp_closure_7[2] = par_self;
        Py_INCREF(tmp_closure_7[2]);

        tmp_assign_source_11 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__7_update_jac(tmp_closure_7);

        assert(var_update_jac == NULL);
        var_update_jac = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assattr_value_25;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_assattr_target_25;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[46]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_27 = Nuitka_Cell_GET(par_self);
        tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[85]);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 395;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 395;
        tmp_assattr_value_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_assattr_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_25 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_25, mod_consts[85], tmp_assattr_value_25);
        Py_DECREF(tmp_assattr_value_25);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_26;
        PyObject *tmp_assattr_target_26;
        tmp_assattr_value_26 = Py_True;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_26 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_26, mod_consts[88], tmp_assattr_value_26);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_12;
    branch_no_12:;
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_29;
        int tmp_truth_name_7;
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[43]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_29 = Nuitka_Cell_GET(par_self);
        tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[85]);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 398;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 398;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_call_result_6);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_6);

            exception_lineno = 398;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_6);
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_12;
        struct Nuitka_CellObject *tmp_closure_8[3];

        tmp_closure_8[0] = var_finite_diff_options;
        Py_INCREF(tmp_closure_8[0]);
        tmp_closure_8[1] = var_fun_wrapped;
        Py_INCREF(tmp_closure_8[1]);
        tmp_closure_8[2] = par_self;
        Py_INCREF(tmp_closure_8[2]);

        tmp_assign_source_12 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__8_update_jac(tmp_closure_8);

        assert(var_update_jac == NULL);
        var_update_jac = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assattr_value_27;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_assattr_target_27;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_30 = Nuitka_Cell_GET(par_self);
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[85]);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 403;
        tmp_assattr_value_27 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[89]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_assattr_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_27 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_27, mod_consts[85], tmp_assattr_value_27);
        Py_DECREF(tmp_assattr_value_27);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_28;
        PyObject *tmp_assattr_target_28;
        tmp_assattr_value_28 = Py_False;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_28 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_28, mod_consts[88], tmp_assattr_value_28);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_13;
        struct Nuitka_CellObject *tmp_closure_9[3];

        tmp_closure_9[0] = var_finite_diff_options;
        Py_INCREF(tmp_closure_9[0]);
        tmp_closure_9[1] = var_fun_wrapped;
        Py_INCREF(tmp_closure_9[1]);
        tmp_closure_9[2] = par_self;
        Py_INCREF(tmp_closure_9[2]);

        tmp_assign_source_13 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__9_update_jac(tmp_closure_9);

        assert(var_update_jac == NULL);
        var_update_jac = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assattr_value_29;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_assattr_target_29;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[48]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_32 = Nuitka_Cell_GET(par_self);
        tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[85]);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 412;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 412;
        tmp_assattr_value_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_assattr_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_29 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_29, mod_consts[85], tmp_assattr_value_29);
        Py_DECREF(tmp_assattr_value_29);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_30;
        PyObject *tmp_assattr_target_30;
        tmp_assattr_value_30 = Py_False;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_30 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_30, mod_consts[88], tmp_assattr_value_30);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_13:;
    branch_end_12:;
    branch_no_11:;
    branch_end_8:;
    {
        PyObject *tmp_assattr_value_31;
        PyObject *tmp_assattr_target_31;
        if (var_update_jac == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 415;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_31 = var_update_jac;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_31 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_31, mod_consts[92], tmp_assattr_value_31);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_called_value_18;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_18;
        int tmp_truth_name_8;
        tmp_called_value_18 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_value_18 != NULL);
        CHECK_OBJECT(Nuitka_Cell_GET(par_hess));
        tmp_args_element_value_18 = Nuitka_Cell_GET(par_hess);
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 418;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_18);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_call_result_7);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_7);

            exception_lineno = 418;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_7);
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assattr_value_32;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_assattr_target_32;
        CHECK_OBJECT(Nuitka_Cell_GET(par_hess));
        tmp_called_value_19 = Nuitka_Cell_GET(par_hess);
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_33 = Nuitka_Cell_GET(par_self);
        tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[12]);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_34 = Nuitka_Cell_GET(par_self);
        tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[83]);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_19);

            exception_lineno = 419;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 419;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_assattr_value_32 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_19, call_args);
        }

        Py_DECREF(tmp_args_element_value_19);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_assattr_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_32 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_32, mod_consts[40], tmp_assattr_value_32);
        Py_DECREF(tmp_assattr_value_32);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_33;
        PyObject *tmp_assattr_target_33;
        tmp_assattr_value_33 = Py_True;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_33 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_33, mod_consts[21], tmp_assattr_value_33);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_35;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_35 = Nuitka_Cell_GET(par_self);
        tmp_assign_source_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[18]);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_2__value == NULL);
        tmp_inplace_assign_2__value = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        CHECK_OBJECT(tmp_inplace_assign_2__value);
        tmp_iadd_expr_left_2 = tmp_inplace_assign_2__value;
        tmp_iadd_expr_right_2 = mod_consts[41];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "ccoccoooocococococo";
            goto try_except_handler_3;
        }
        tmp_assign_source_15 = tmp_iadd_expr_left_2;
        tmp_inplace_assign_2__value = tmp_assign_source_15;

    }
    {
        PyObject *tmp_assattr_value_34;
        PyObject *tmp_assattr_target_34;
        CHECK_OBJECT(tmp_inplace_assign_2__value);
        tmp_assattr_value_34 = tmp_inplace_assign_2__value;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_34 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_34, mod_consts[18], tmp_assattr_value_34);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "ccoccoooocococococo";
            goto try_except_handler_3;
        }
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

    CHECK_OBJECT(tmp_inplace_assign_2__value);
    Py_DECREF(tmp_inplace_assign_2__value);
    tmp_inplace_assign_2__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_inplace_assign_2__value);
    Py_DECREF(tmp_inplace_assign_2__value);
    tmp_inplace_assign_2__value = NULL;
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_expression_value_37;
        int tmp_truth_name_9;
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[43]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_37 = Nuitka_Cell_GET(par_self);
        tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[40]);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 423;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 423;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_21);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_call_result_8);
        if (tmp_truth_name_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_8);

            exception_lineno = 423;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_15 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_8);
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_16;
        struct Nuitka_CellObject *tmp_closure_10[2];

        tmp_closure_10[0] = par_hess;
        Py_INCREF(tmp_closure_10[0]);
        tmp_closure_10[1] = par_self;
        Py_INCREF(tmp_closure_10[1]);

        tmp_assign_source_16 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__10_hess_wrapped(tmp_closure_10);

        assert(Nuitka_Cell_GET(var_hess_wrapped) == NULL);
        PyCell_SET(var_hess_wrapped, tmp_assign_source_16);

    }
    {
        PyObject *tmp_assattr_value_35;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_assattr_target_35;
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[46]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_39 = Nuitka_Cell_GET(par_self);
        tmp_args_element_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[40]);
        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 427;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 427;
        tmp_assattr_value_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_22);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_assattr_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_35 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_35, mod_consts[40], tmp_assattr_value_35);
        Py_DECREF(tmp_assattr_value_35);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_15;
    branch_no_15:;
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_expression_value_40;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_40 = Nuitka_Cell_GET(par_self);
        tmp_isinstance_inst_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[40]);
        if (tmp_isinstance_inst_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_isinstance_cls_2 == NULL)) {
            tmp_isinstance_cls_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_2);

            exception_lineno = 429;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_inst_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_16 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_17;
        struct Nuitka_CellObject *tmp_closure_11[2];

        tmp_closure_11[0] = par_hess;
        Py_INCREF(tmp_closure_11[0]);
        tmp_closure_11[1] = par_self;
        Py_INCREF(tmp_closure_11[1]);

        tmp_assign_source_17 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__11_hess_wrapped(tmp_closure_11);

        assert(Nuitka_Cell_GET(var_hess_wrapped) == NULL);
        PyCell_SET(var_hess_wrapped, tmp_assign_source_17);

    }
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_18;
        struct Nuitka_CellObject *tmp_closure_12[2];

        tmp_closure_12[0] = par_hess;
        Py_INCREF(tmp_closure_12[0]);
        tmp_closure_12[1] = par_self;
        Py_INCREF(tmp_closure_12[1]);

        tmp_assign_source_18 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__12_hess_wrapped(tmp_closure_12);

        assert(Nuitka_Cell_GET(var_hess_wrapped) == NULL);
        PyCell_SET(var_hess_wrapped, tmp_assign_source_18);

    }
    {
        PyObject *tmp_assattr_value_36;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_assattr_target_36;
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[48]);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 438;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[49]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 438;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_43 = Nuitka_Cell_GET(par_self);
        tmp_args_element_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[40]);
        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 438;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 438;
        tmp_args_element_value_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_24);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 438;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 438;
        tmp_assattr_value_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_23);
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_assattr_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_36 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_36, mod_consts[40], tmp_assattr_value_36);
        Py_DECREF(tmp_assattr_value_36);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_16:;
    branch_end_15:;
    {
        PyObject *tmp_assign_source_19;
        struct Nuitka_CellObject *tmp_closure_13[2];

        tmp_closure_13[0] = var_hess_wrapped;
        Py_INCREF(tmp_closure_13[0]);
        tmp_closure_13[1] = par_self;
        Py_INCREF(tmp_closure_13[1]);

        tmp_assign_source_19 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__13_update_hess(tmp_closure_13);

        assert(var_update_hess == NULL);
        var_update_hess = tmp_assign_source_19;
    }
    goto branch_end_14;
    branch_no_14:;
    {
        bool tmp_condition_result_17;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        CHECK_OBJECT(Nuitka_Cell_GET(par_hess));
        tmp_cmp_expr_left_13 = Nuitka_Cell_GET(par_hess);
        tmp_cmp_expr_right_13 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_cmp_expr_right_13 == NULL)) {
            tmp_cmp_expr_right_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_cmp_expr_right_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_13, tmp_cmp_expr_left_13);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_17 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_20;
        struct Nuitka_CellObject *tmp_closure_14[1];

        tmp_closure_14[0] = var_jac_wrapped;
        Py_INCREF(tmp_closure_14[0]);

        tmp_assign_source_20 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__14_jac_dot_v(tmp_closure_14);

        assert(Nuitka_Cell_GET(var_jac_dot_v) == NULL);
        PyCell_SET(var_jac_dot_v, tmp_assign_source_20);

    }
    {
        PyObject *tmp_assign_source_21;
        struct Nuitka_CellObject *tmp_closure_15[3];

        tmp_closure_15[0] = var_finite_diff_options;
        Py_INCREF(tmp_closure_15[0]);
        tmp_closure_15[1] = var_jac_dot_v;
        Py_INCREF(tmp_closure_15[1]);
        tmp_closure_15[2] = par_self;
        Py_INCREF(tmp_closure_15[2]);

        tmp_assign_source_21 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__15_update_hess(tmp_closure_15);

        assert(var_update_hess == NULL);
        var_update_hess = tmp_assign_source_21;
    }
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_call_result_9;
        CHECK_OBJECT(var_update_hess);
        tmp_called_value_24 = var_update_hess;
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 452;
        tmp_call_result_9 = CALL_FUNCTION_NO_ARGS(tmp_called_value_24);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_assattr_value_37;
        PyObject *tmp_assattr_target_37;
        tmp_assattr_value_37 = Py_True;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_37 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_37, mod_consts[21], tmp_assattr_value_37);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_17;
    branch_no_17:;
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        CHECK_OBJECT(Nuitka_Cell_GET(par_hess));
        tmp_isinstance_inst_3 = Nuitka_Cell_GET(par_hess);
        tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_isinstance_cls_3 == NULL)) {
            tmp_isinstance_cls_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_isinstance_cls_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_18 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assattr_value_38;
        PyObject *tmp_assattr_target_38;
        CHECK_OBJECT(Nuitka_Cell_GET(par_hess));
        tmp_assattr_value_38 = Nuitka_Cell_GET(par_hess);
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_38 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_38, mod_consts[40], tmp_assattr_value_38);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_args_element_value_26;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_45 = Nuitka_Cell_GET(par_self);
        tmp_expression_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[40]);
        if (tmp_expression_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[52]);
        Py_DECREF(tmp_expression_value_44);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_46 = Nuitka_Cell_GET(par_self);
        tmp_args_element_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[14]);
        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 456;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_26 = mod_consts[53];
        frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame.f_lineno = 456;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_25, call_args);
        }

        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_assattr_value_39;
        PyObject *tmp_assattr_target_39;
        tmp_assattr_value_39 = Py_True;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_39 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_39, mod_consts[21], tmp_assattr_value_39);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_40;
        PyObject *tmp_assattr_target_40;
        tmp_assattr_value_40 = Py_None;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_40 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_40, mod_consts[54], tmp_assattr_value_40);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_41;
        PyObject *tmp_assattr_target_41;
        tmp_assattr_value_41 = Py_None;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_41 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_41, mod_consts[97], tmp_assattr_value_41);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_22;
        struct Nuitka_CellObject *tmp_closure_16[1];

        tmp_closure_16[0] = par_self;
        Py_INCREF(tmp_closure_16[0]);

        tmp_assign_source_22 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__16_update_hess(tmp_closure_16);

        assert(var_update_hess == NULL);
        var_update_hess = tmp_assign_source_22;
    }
    branch_no_18:;
    branch_end_17:;
    branch_end_14:;
    {
        PyObject *tmp_assattr_value_42;
        PyObject *tmp_assattr_target_42;
        if (var_update_hess == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 470;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_42 = var_update_hess;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_42 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_42, mod_consts[56], tmp_assattr_value_42);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_isinstance_inst_4;
        PyObject *tmp_isinstance_cls_4;
        CHECK_OBJECT(Nuitka_Cell_GET(par_hess));
        tmp_isinstance_inst_4 = Nuitka_Cell_GET(par_hess);
        tmp_isinstance_cls_4 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_isinstance_cls_4 == NULL)) {
            tmp_isinstance_cls_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_isinstance_cls_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_19 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_23;
        struct Nuitka_CellObject *tmp_closure_17[1];

        tmp_closure_17[0] = par_self;
        Py_INCREF(tmp_closure_17[0]);

        tmp_assign_source_23 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__17_update_x(tmp_closure_17);

        assert(var_update_x == NULL);
        var_update_x = tmp_assign_source_23;
    }
    goto branch_end_19;
    branch_no_19:;
    {
        PyObject *tmp_assign_source_24;
        struct Nuitka_CellObject *tmp_closure_18[1];

        tmp_closure_18[0] = par_self;
        Py_INCREF(tmp_closure_18[0]);

        tmp_assign_source_24 = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__18_update_x(tmp_closure_18);

        assert(var_update_x == NULL);
        var_update_x = tmp_assign_source_24;
    }
    branch_end_19:;
    {
        PyObject *tmp_assattr_value_43;
        PyObject *tmp_assattr_target_43;
        CHECK_OBJECT(var_update_x);
        tmp_assattr_value_43 = var_update_x;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_43 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_43, mod_consts[59], tmp_assattr_value_43);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "ccoccoooocococococo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_89a2733fcae3e5aa6c9d259516d36d35, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_89a2733fcae3e5aa6c9d259516d36d35->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_89a2733fcae3e5aa6c9d259516d36d35, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_89a2733fcae3e5aa6c9d259516d36d35,
        type_description_1,
        par_self,
        par_fun,
        par_x0,
        par_jac,
        par_hess,
        par_finite_diff_rel_step,
        par_finite_diff_jac_sparsity,
        par_finite_diff_bounds,
        par_sparse_jacobian,
        var_finite_diff_options,
        var_sparsity_groups,
        var_fun_wrapped,
        var_update_fun,
        var_jac_wrapped,
        var_update_jac,
        var_hess_wrapped,
        var_update_hess,
        var_jac_dot_v,
        var_update_x
    );


    // Release cached frame if used for exception.
    if (frame_89a2733fcae3e5aa6c9d259516d36d35 == cache_frame_89a2733fcae3e5aa6c9d259516d36d35) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_89a2733fcae3e5aa6c9d259516d36d35);
        cache_frame_89a2733fcae3e5aa6c9d259516d36d35 = NULL;
    }

    assertFrameObject(frame_89a2733fcae3e5aa6c9d259516d36d35);

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
    CHECK_OBJECT(var_finite_diff_options);
    Py_DECREF(var_finite_diff_options);
    var_finite_diff_options = NULL;
    Py_XDECREF(var_sparsity_groups);
    var_sparsity_groups = NULL;
    CHECK_OBJECT(var_fun_wrapped);
    Py_DECREF(var_fun_wrapped);
    var_fun_wrapped = NULL;
    CHECK_OBJECT(var_update_fun);
    Py_DECREF(var_update_fun);
    var_update_fun = NULL;
    CHECK_OBJECT(var_jac_wrapped);
    Py_DECREF(var_jac_wrapped);
    var_jac_wrapped = NULL;
    Py_XDECREF(var_update_jac);
    var_update_jac = NULL;
    CHECK_OBJECT(var_hess_wrapped);
    Py_DECREF(var_hess_wrapped);
    var_hess_wrapped = NULL;
    Py_XDECREF(var_update_hess);
    var_update_hess = NULL;
    CHECK_OBJECT(var_jac_dot_v);
    Py_DECREF(var_jac_dot_v);
    var_jac_dot_v = NULL;
    CHECK_OBJECT(var_update_x);
    Py_DECREF(var_update_x);
    var_update_x = NULL;
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

    CHECK_OBJECT(var_finite_diff_options);
    Py_DECREF(var_finite_diff_options);
    var_finite_diff_options = NULL;
    Py_XDECREF(var_sparsity_groups);
    var_sparsity_groups = NULL;
    CHECK_OBJECT(var_fun_wrapped);
    Py_DECREF(var_fun_wrapped);
    var_fun_wrapped = NULL;
    Py_XDECREF(var_update_fun);
    var_update_fun = NULL;
    CHECK_OBJECT(var_jac_wrapped);
    Py_DECREF(var_jac_wrapped);
    var_jac_wrapped = NULL;
    Py_XDECREF(var_update_jac);
    var_update_jac = NULL;
    CHECK_OBJECT(var_hess_wrapped);
    Py_DECREF(var_hess_wrapped);
    var_hess_wrapped = NULL;
    Py_XDECREF(var_update_hess);
    var_update_hess = NULL;
    CHECK_OBJECT(var_jac_dot_v);
    Py_DECREF(var_jac_dot_v);
    var_jac_dot_v = NULL;
    Py_XDECREF(var_update_x);
    var_update_x = NULL;
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
    CHECK_OBJECT(par_fun);
    Py_DECREF(par_fun);
    CHECK_OBJECT(par_x0);
    Py_DECREF(par_x0);
    CHECK_OBJECT(par_jac);
    Py_DECREF(par_jac);
    CHECK_OBJECT(par_hess);
    Py_DECREF(par_hess);
    CHECK_OBJECT(par_finite_diff_rel_step);
    Py_DECREF(par_finite_diff_rel_step);
    CHECK_OBJECT(par_finite_diff_jac_sparsity);
    Py_DECREF(par_finite_diff_jac_sparsity);
    CHECK_OBJECT(par_finite_diff_bounds);
    Py_DECREF(par_finite_diff_bounds);
    CHECK_OBJECT(par_sparse_jacobian);
    Py_DECREF(par_sparse_jacobian);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_fun);
    Py_DECREF(par_fun);
    CHECK_OBJECT(par_x0);
    Py_DECREF(par_x0);
    CHECK_OBJECT(par_jac);
    Py_DECREF(par_jac);
    CHECK_OBJECT(par_hess);
    Py_DECREF(par_hess);
    CHECK_OBJECT(par_finite_diff_rel_step);
    Py_DECREF(par_finite_diff_rel_step);
    CHECK_OBJECT(par_finite_diff_jac_sparsity);
    Py_DECREF(par_finite_diff_jac_sparsity);
    CHECK_OBJECT(par_finite_diff_bounds);
    Py_DECREF(par_finite_diff_bounds);
    CHECK_OBJECT(par_sparse_jacobian);
    Py_DECREF(par_sparse_jacobian);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__1_fun_wrapped(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_24668a9b7ecc44cc3deb051ca4505514;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_24668a9b7ecc44cc3deb051ca4505514 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_24668a9b7ecc44cc3deb051ca4505514)) {
        Py_XDECREF(cache_frame_24668a9b7ecc44cc3deb051ca4505514);

#if _DEBUG_REFCOUNTS
        if (cache_frame_24668a9b7ecc44cc3deb051ca4505514 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_24668a9b7ecc44cc3deb051ca4505514 = MAKE_FUNCTION_FRAME(codeobj_24668a9b7ecc44cc3deb051ca4505514, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_24668a9b7ecc44cc3deb051ca4505514->m_type_description == NULL);
    frame_24668a9b7ecc44cc3deb051ca4505514 = cache_frame_24668a9b7ecc44cc3deb051ca4505514;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_24668a9b7ecc44cc3deb051ca4505514);
    assert(Py_REFCNT(frame_24668a9b7ecc44cc3deb051ca4505514) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 340;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = mod_consts[41];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "occ";
            goto try_except_handler_1;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 340;
            type_description_1 = "occ";
            goto try_except_handler_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[16], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "occ";
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[9]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[61]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 341;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        frame_24668a9b7ecc44cc3deb051ca4505514->m_frame.f_lineno = 341;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 341;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        frame_24668a9b7ecc44cc3deb051ca4505514->m_frame.f_lineno = 341;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "occ";
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
        exception_tb = MAKE_TRACEBACK(frame_24668a9b7ecc44cc3deb051ca4505514, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_24668a9b7ecc44cc3deb051ca4505514->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_24668a9b7ecc44cc3deb051ca4505514, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_24668a9b7ecc44cc3deb051ca4505514,
        type_description_1,
        par_x,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_24668a9b7ecc44cc3deb051ca4505514 == cache_frame_24668a9b7ecc44cc3deb051ca4505514) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_24668a9b7ecc44cc3deb051ca4505514);
        cache_frame_24668a9b7ecc44cc3deb051ca4505514 = NULL;
    }

    assertFrameObject(frame_24668a9b7ecc44cc3deb051ca4505514);

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


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__2_update_fun(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_1af8f43e2652d3b3d3a3e81dd5ac2d9d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_1af8f43e2652d3b3d3a3e81dd5ac2d9d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1af8f43e2652d3b3d3a3e81dd5ac2d9d)) {
        Py_XDECREF(cache_frame_1af8f43e2652d3b3d3a3e81dd5ac2d9d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1af8f43e2652d3b3d3a3e81dd5ac2d9d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1af8f43e2652d3b3d3a3e81dd5ac2d9d = MAKE_FUNCTION_FRAME(codeobj_1af8f43e2652d3b3d3a3e81dd5ac2d9d, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1af8f43e2652d3b3d3a3e81dd5ac2d9d->m_type_description == NULL);
    frame_1af8f43e2652d3b3d3a3e81dd5ac2d9d = cache_frame_1af8f43e2652d3b3d3a3e81dd5ac2d9d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1af8f43e2652d3b3d3a3e81dd5ac2d9d);
    assert(Py_REFCNT(frame_1af8f43e2652d3b3d3a3e81dd5ac2d9d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 344;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 344;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        frame_1af8f43e2652d3b3d3a3e81dd5ac2d9d->m_frame.f_lineno = 344;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 344;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[63], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1af8f43e2652d3b3d3a3e81dd5ac2d9d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1af8f43e2652d3b3d3a3e81dd5ac2d9d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1af8f43e2652d3b3d3a3e81dd5ac2d9d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1af8f43e2652d3b3d3a3e81dd5ac2d9d,
        type_description_1,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_1af8f43e2652d3b3d3a3e81dd5ac2d9d == cache_frame_1af8f43e2652d3b3d3a3e81dd5ac2d9d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1af8f43e2652d3b3d3a3e81dd5ac2d9d);
        cache_frame_1af8f43e2652d3b3d3a3e81dd5ac2d9d = NULL;
    }

    assertFrameObject(frame_1af8f43e2652d3b3d3a3e81dd5ac2d9d);

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

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__3_jac_wrapped(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_1889ffa30a61a277769d421a3e8849e3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1889ffa30a61a277769d421a3e8849e3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1889ffa30a61a277769d421a3e8849e3)) {
        Py_XDECREF(cache_frame_1889ffa30a61a277769d421a3e8849e3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1889ffa30a61a277769d421a3e8849e3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1889ffa30a61a277769d421a3e8849e3 = MAKE_FUNCTION_FRAME(codeobj_1889ffa30a61a277769d421a3e8849e3, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1889ffa30a61a277769d421a3e8849e3->m_type_description == NULL);
    frame_1889ffa30a61a277769d421a3e8849e3 = cache_frame_1889ffa30a61a277769d421a3e8849e3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1889ffa30a61a277769d421a3e8849e3);
    assert(Py_REFCNT(frame_1889ffa30a61a277769d421a3e8849e3) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 361;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[75]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = mod_consts[41];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "occ";
            goto try_except_handler_1;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 361;
            type_description_1 = "occ";
            goto try_except_handler_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[75], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "occ";
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[46]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[99]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 362;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        frame_1889ffa30a61a277769d421a3e8849e3->m_frame.f_lineno = 362;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 362;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        frame_1889ffa30a61a277769d421a3e8849e3->m_frame.f_lineno = 362;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "occ";
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
        exception_tb = MAKE_TRACEBACK(frame_1889ffa30a61a277769d421a3e8849e3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1889ffa30a61a277769d421a3e8849e3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1889ffa30a61a277769d421a3e8849e3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1889ffa30a61a277769d421a3e8849e3,
        type_description_1,
        par_x,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_1889ffa30a61a277769d421a3e8849e3 == cache_frame_1889ffa30a61a277769d421a3e8849e3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1889ffa30a61a277769d421a3e8849e3);
        cache_frame_1889ffa30a61a277769d421a3e8849e3 = NULL;
    }

    assertFrameObject(frame_1889ffa30a61a277769d421a3e8849e3);

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


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__4_jac_wrapped(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_7c29c25bd7189b335bb8450f215b7592;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7c29c25bd7189b335bb8450f215b7592 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7c29c25bd7189b335bb8450f215b7592)) {
        Py_XDECREF(cache_frame_7c29c25bd7189b335bb8450f215b7592);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7c29c25bd7189b335bb8450f215b7592 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7c29c25bd7189b335bb8450f215b7592 = MAKE_FUNCTION_FRAME(codeobj_7c29c25bd7189b335bb8450f215b7592, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7c29c25bd7189b335bb8450f215b7592->m_type_description == NULL);
    frame_7c29c25bd7189b335bb8450f215b7592 = cache_frame_7c29c25bd7189b335bb8450f215b7592;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7c29c25bd7189b335bb8450f215b7592);
    assert(Py_REFCNT(frame_7c29c25bd7189b335bb8450f215b7592) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 368;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[75]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = mod_consts[41];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "occ";
            goto try_except_handler_1;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 368;
            type_description_1 = "occ";
            goto try_except_handler_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[75], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "occ";
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[99]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 369;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_7c29c25bd7189b335bb8450f215b7592->m_frame.f_lineno = 369;
        tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        frame_7c29c25bd7189b335bb8450f215b7592->m_frame.f_lineno = 369;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[89]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "occ";
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
        exception_tb = MAKE_TRACEBACK(frame_7c29c25bd7189b335bb8450f215b7592, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7c29c25bd7189b335bb8450f215b7592->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7c29c25bd7189b335bb8450f215b7592, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7c29c25bd7189b335bb8450f215b7592,
        type_description_1,
        par_x,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_7c29c25bd7189b335bb8450f215b7592 == cache_frame_7c29c25bd7189b335bb8450f215b7592) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7c29c25bd7189b335bb8450f215b7592);
        cache_frame_7c29c25bd7189b335bb8450f215b7592 = NULL;
    }

    assertFrameObject(frame_7c29c25bd7189b335bb8450f215b7592);

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


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__5_jac_wrapped(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_97a77acc4e359302c7f64ad5a6c3433d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_97a77acc4e359302c7f64ad5a6c3433d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_97a77acc4e359302c7f64ad5a6c3433d)) {
        Py_XDECREF(cache_frame_97a77acc4e359302c7f64ad5a6c3433d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_97a77acc4e359302c7f64ad5a6c3433d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_97a77acc4e359302c7f64ad5a6c3433d = MAKE_FUNCTION_FRAME(codeobj_97a77acc4e359302c7f64ad5a6c3433d, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_97a77acc4e359302c7f64ad5a6c3433d->m_type_description == NULL);
    frame_97a77acc4e359302c7f64ad5a6c3433d = cache_frame_97a77acc4e359302c7f64ad5a6c3433d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_97a77acc4e359302c7f64ad5a6c3433d);
    assert(Py_REFCNT(frame_97a77acc4e359302c7f64ad5a6c3433d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 375;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[75]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = mod_consts[41];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "occ";
            goto try_except_handler_1;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 375;
            type_description_1 = "occ";
            goto try_except_handler_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[75], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "occ";
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[48]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[99]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 376;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        frame_97a77acc4e359302c7f64ad5a6c3433d->m_frame.f_lineno = 376;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 376;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        frame_97a77acc4e359302c7f64ad5a6c3433d->m_frame.f_lineno = 376;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "occ";
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
        exception_tb = MAKE_TRACEBACK(frame_97a77acc4e359302c7f64ad5a6c3433d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_97a77acc4e359302c7f64ad5a6c3433d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_97a77acc4e359302c7f64ad5a6c3433d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_97a77acc4e359302c7f64ad5a6c3433d,
        type_description_1,
        par_x,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_97a77acc4e359302c7f64ad5a6c3433d == cache_frame_97a77acc4e359302c7f64ad5a6c3433d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_97a77acc4e359302c7f64ad5a6c3433d);
        cache_frame_97a77acc4e359302c7f64ad5a6c3433d = NULL;
    }

    assertFrameObject(frame_97a77acc4e359302c7f64ad5a6c3433d);

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


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__6_update_jac(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_352a99a0b0f458d141cb999315ee0b58;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_352a99a0b0f458d141cb999315ee0b58 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_352a99a0b0f458d141cb999315ee0b58)) {
        Py_XDECREF(cache_frame_352a99a0b0f458d141cb999315ee0b58);

#if _DEBUG_REFCOUNTS
        if (cache_frame_352a99a0b0f458d141cb999315ee0b58 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_352a99a0b0f458d141cb999315ee0b58 = MAKE_FUNCTION_FRAME(codeobj_352a99a0b0f458d141cb999315ee0b58, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_352a99a0b0f458d141cb999315ee0b58->m_type_description == NULL);
    frame_352a99a0b0f458d141cb999315ee0b58 = cache_frame_352a99a0b0f458d141cb999315ee0b58;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_352a99a0b0f458d141cb999315ee0b58);
    assert(Py_REFCNT(frame_352a99a0b0f458d141cb999315ee0b58) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 381;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 381;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        frame_352a99a0b0f458d141cb999315ee0b58->m_frame.f_lineno = 381;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 381;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[85], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_352a99a0b0f458d141cb999315ee0b58, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_352a99a0b0f458d141cb999315ee0b58->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_352a99a0b0f458d141cb999315ee0b58, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_352a99a0b0f458d141cb999315ee0b58,
        type_description_1,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_352a99a0b0f458d141cb999315ee0b58 == cache_frame_352a99a0b0f458d141cb999315ee0b58) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_352a99a0b0f458d141cb999315ee0b58);
        cache_frame_352a99a0b0f458d141cb999315ee0b58 = NULL;
    }

    assertFrameObject(frame_352a99a0b0f458d141cb999315ee0b58);

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

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__7_update_jac(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_2187f61b37c1bbbe1523c98a6430e2e0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_2187f61b37c1bbbe1523c98a6430e2e0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2187f61b37c1bbbe1523c98a6430e2e0)) {
        Py_XDECREF(cache_frame_2187f61b37c1bbbe1523c98a6430e2e0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2187f61b37c1bbbe1523c98a6430e2e0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2187f61b37c1bbbe1523c98a6430e2e0 = MAKE_FUNCTION_FRAME(codeobj_2187f61b37c1bbbe1523c98a6430e2e0, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2187f61b37c1bbbe1523c98a6430e2e0->m_type_description == NULL);
    frame_2187f61b37c1bbbe1523c98a6430e2e0 = cache_frame_2187f61b37c1bbbe1523c98a6430e2e0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2187f61b37c1bbbe1523c98a6430e2e0);
    assert(Py_REFCNT(frame_2187f61b37c1bbbe1523c98a6430e2e0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 391;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[2]);
        frame_2187f61b37c1bbbe1523c98a6430e2e0->m_frame.f_lineno = 391;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[32]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[46]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 393;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 393;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_2;
            PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 393;
                type_description_1 = "ccc";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[2]);
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[12]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;
                type_description_1 = "ccc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_dircall_arg2_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_dict_key_1 = mod_consts[67];
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 393;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[63]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 393;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_dircall_arg2_1);
            Py_DECREF(tmp_dircall_arg3_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 394;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg4_1 = Nuitka_Cell_GET(self->m_closure[0]);
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_args_element_value_1 = impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 393;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        frame_2187f61b37c1bbbe1523c98a6430e2e0->m_frame.f_lineno = 392;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 392;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[85], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2187f61b37c1bbbe1523c98a6430e2e0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2187f61b37c1bbbe1523c98a6430e2e0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2187f61b37c1bbbe1523c98a6430e2e0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2187f61b37c1bbbe1523c98a6430e2e0,
        type_description_1,
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_2187f61b37c1bbbe1523c98a6430e2e0 == cache_frame_2187f61b37c1bbbe1523c98a6430e2e0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2187f61b37c1bbbe1523c98a6430e2e0);
        cache_frame_2187f61b37c1bbbe1523c98a6430e2e0 = NULL;
    }

    assertFrameObject(frame_2187f61b37c1bbbe1523c98a6430e2e0);

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

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__8_update_jac(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_0678b2b029e6797c59451a3b6a9a75d3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_0678b2b029e6797c59451a3b6a9a75d3 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0678b2b029e6797c59451a3b6a9a75d3)) {
        Py_XDECREF(cache_frame_0678b2b029e6797c59451a3b6a9a75d3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0678b2b029e6797c59451a3b6a9a75d3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0678b2b029e6797c59451a3b6a9a75d3 = MAKE_FUNCTION_FRAME(codeobj_0678b2b029e6797c59451a3b6a9a75d3, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0678b2b029e6797c59451a3b6a9a75d3->m_type_description == NULL);
    frame_0678b2b029e6797c59451a3b6a9a75d3 = cache_frame_0678b2b029e6797c59451a3b6a9a75d3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0678b2b029e6797c59451a3b6a9a75d3);
    assert(Py_REFCNT(frame_0678b2b029e6797c59451a3b6a9a75d3) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 400;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[2]);
        frame_0678b2b029e6797c59451a3b6a9a75d3->m_frame.f_lineno = 400;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[32]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_assattr_target_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 401;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_1;
            PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 401;
                type_description_1 = "ccc";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 401;
                type_description_1 = "ccc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_dircall_arg2_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_dict_key_1 = mod_consts[67];
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 401;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[63]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 401;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            Py_DECREF(tmp_dircall_arg3_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 402;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg4_1 = Nuitka_Cell_GET(self->m_closure[0]);
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_called_instance_2 = impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        frame_0678b2b029e6797c59451a3b6a9a75d3->m_frame.f_lineno = 401;
        tmp_assattr_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[89]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 401;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[85], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0678b2b029e6797c59451a3b6a9a75d3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0678b2b029e6797c59451a3b6a9a75d3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0678b2b029e6797c59451a3b6a9a75d3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0678b2b029e6797c59451a3b6a9a75d3,
        type_description_1,
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_0678b2b029e6797c59451a3b6a9a75d3 == cache_frame_0678b2b029e6797c59451a3b6a9a75d3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0678b2b029e6797c59451a3b6a9a75d3);
        cache_frame_0678b2b029e6797c59451a3b6a9a75d3 = NULL;
    }

    assertFrameObject(frame_0678b2b029e6797c59451a3b6a9a75d3);

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

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__9_update_jac(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_c7b69292664aa6b6a76847e2ea3a20be;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_c7b69292664aa6b6a76847e2ea3a20be = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c7b69292664aa6b6a76847e2ea3a20be)) {
        Py_XDECREF(cache_frame_c7b69292664aa6b6a76847e2ea3a20be);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c7b69292664aa6b6a76847e2ea3a20be == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c7b69292664aa6b6a76847e2ea3a20be = MAKE_FUNCTION_FRAME(codeobj_c7b69292664aa6b6a76847e2ea3a20be, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c7b69292664aa6b6a76847e2ea3a20be->m_type_description == NULL);
    frame_c7b69292664aa6b6a76847e2ea3a20be = cache_frame_c7b69292664aa6b6a76847e2ea3a20be;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c7b69292664aa6b6a76847e2ea3a20be);
    assert(Py_REFCNT(frame_c7b69292664aa6b6a76847e2ea3a20be) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 408;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[2]);
        frame_c7b69292664aa6b6a76847e2ea3a20be->m_frame.f_lineno = 408;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[32]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[48]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 410;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 410;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_2;
            PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 410;
                type_description_1 = "ccc";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[2]);
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[12]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 410;
                type_description_1 = "ccc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_dircall_arg2_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_dict_key_1 = mod_consts[67];
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 410;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[63]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 410;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_dircall_arg2_1);
            Py_DECREF(tmp_dircall_arg3_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 411;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg4_1 = Nuitka_Cell_GET(self->m_closure[0]);
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_args_element_value_1 = impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 410;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        frame_c7b69292664aa6b6a76847e2ea3a20be->m_frame.f_lineno = 409;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 409;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[85], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c7b69292664aa6b6a76847e2ea3a20be, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c7b69292664aa6b6a76847e2ea3a20be->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c7b69292664aa6b6a76847e2ea3a20be, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c7b69292664aa6b6a76847e2ea3a20be,
        type_description_1,
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_c7b69292664aa6b6a76847e2ea3a20be == cache_frame_c7b69292664aa6b6a76847e2ea3a20be) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c7b69292664aa6b6a76847e2ea3a20be);
        cache_frame_c7b69292664aa6b6a76847e2ea3a20be = NULL;
    }

    assertFrameObject(frame_c7b69292664aa6b6a76847e2ea3a20be);

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

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__10_hess_wrapped(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_v = python_pars[1];
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_c0ea32a0760a005c85de5fadab684619;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c0ea32a0760a005c85de5fadab684619 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c0ea32a0760a005c85de5fadab684619)) {
        Py_XDECREF(cache_frame_c0ea32a0760a005c85de5fadab684619);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c0ea32a0760a005c85de5fadab684619 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c0ea32a0760a005c85de5fadab684619 = MAKE_FUNCTION_FRAME(codeobj_c0ea32a0760a005c85de5fadab684619, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c0ea32a0760a005c85de5fadab684619->m_type_description == NULL);
    frame_c0ea32a0760a005c85de5fadab684619 = cache_frame_c0ea32a0760a005c85de5fadab684619;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c0ea32a0760a005c85de5fadab684619);
    assert(Py_REFCNT(frame_c0ea32a0760a005c85de5fadab684619) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 425;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = mod_consts[41];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "oocc";
            goto try_except_handler_1;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 425;
            type_description_1 = "oocc";
            goto try_except_handler_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[18], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "oocc";
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[46]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 426;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        CHECK_OBJECT(par_v);
        tmp_args_element_value_3 = par_v;
        frame_c0ea32a0760a005c85de5fadab684619->m_frame.f_lineno = 426;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 426;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        frame_c0ea32a0760a005c85de5fadab684619->m_frame.f_lineno = 426;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "oocc";
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
        exception_tb = MAKE_TRACEBACK(frame_c0ea32a0760a005c85de5fadab684619, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c0ea32a0760a005c85de5fadab684619->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c0ea32a0760a005c85de5fadab684619, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c0ea32a0760a005c85de5fadab684619,
        type_description_1,
        par_x,
        par_v,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_c0ea32a0760a005c85de5fadab684619 == cache_frame_c0ea32a0760a005c85de5fadab684619) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c0ea32a0760a005c85de5fadab684619);
        cache_frame_c0ea32a0760a005c85de5fadab684619 = NULL;
    }

    assertFrameObject(frame_c0ea32a0760a005c85de5fadab684619);

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
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__11_hess_wrapped(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_v = python_pars[1];
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_1690a5f4557cada2662546c6f41bbcf3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1690a5f4557cada2662546c6f41bbcf3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1690a5f4557cada2662546c6f41bbcf3)) {
        Py_XDECREF(cache_frame_1690a5f4557cada2662546c6f41bbcf3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1690a5f4557cada2662546c6f41bbcf3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1690a5f4557cada2662546c6f41bbcf3 = MAKE_FUNCTION_FRAME(codeobj_1690a5f4557cada2662546c6f41bbcf3, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1690a5f4557cada2662546c6f41bbcf3->m_type_description == NULL);
    frame_1690a5f4557cada2662546c6f41bbcf3 = cache_frame_1690a5f4557cada2662546c6f41bbcf3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1690a5f4557cada2662546c6f41bbcf3);
    assert(Py_REFCNT(frame_1690a5f4557cada2662546c6f41bbcf3) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 431;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = mod_consts[41];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "oocc";
            goto try_except_handler_1;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 431;
            type_description_1 = "oocc";
            goto try_except_handler_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[18], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "oocc";
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 432;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        CHECK_OBJECT(par_v);
        tmp_args_element_value_2 = par_v;
        frame_1690a5f4557cada2662546c6f41bbcf3->m_frame.f_lineno = 432;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "oocc";
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
        exception_tb = MAKE_TRACEBACK(frame_1690a5f4557cada2662546c6f41bbcf3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1690a5f4557cada2662546c6f41bbcf3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1690a5f4557cada2662546c6f41bbcf3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1690a5f4557cada2662546c6f41bbcf3,
        type_description_1,
        par_x,
        par_v,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_1690a5f4557cada2662546c6f41bbcf3 == cache_frame_1690a5f4557cada2662546c6f41bbcf3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1690a5f4557cada2662546c6f41bbcf3);
        cache_frame_1690a5f4557cada2662546c6f41bbcf3 = NULL;
    }

    assertFrameObject(frame_1690a5f4557cada2662546c6f41bbcf3);

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
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__12_hess_wrapped(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_v = python_pars[1];
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_c2d726aa5d301a19f8ddaa2000f69065;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c2d726aa5d301a19f8ddaa2000f69065 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c2d726aa5d301a19f8ddaa2000f69065)) {
        Py_XDECREF(cache_frame_c2d726aa5d301a19f8ddaa2000f69065);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c2d726aa5d301a19f8ddaa2000f69065 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c2d726aa5d301a19f8ddaa2000f69065 = MAKE_FUNCTION_FRAME(codeobj_c2d726aa5d301a19f8ddaa2000f69065, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c2d726aa5d301a19f8ddaa2000f69065->m_type_description == NULL);
    frame_c2d726aa5d301a19f8ddaa2000f69065 = cache_frame_c2d726aa5d301a19f8ddaa2000f69065;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c2d726aa5d301a19f8ddaa2000f69065);
    assert(Py_REFCNT(frame_c2d726aa5d301a19f8ddaa2000f69065) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 436;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = mod_consts[41];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "oocc";
            goto try_except_handler_1;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 436;
            type_description_1 = "oocc";
            goto try_except_handler_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[18], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "oocc";
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[48]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 437;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[49]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 437;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 437;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_x);
        tmp_args_element_value_3 = par_x;
        CHECK_OBJECT(par_v);
        tmp_args_element_value_4 = par_v;
        frame_c2d726aa5d301a19f8ddaa2000f69065->m_frame.f_lineno = 437;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 437;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        frame_c2d726aa5d301a19f8ddaa2000f69065->m_frame.f_lineno = 437;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 437;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        frame_c2d726aa5d301a19f8ddaa2000f69065->m_frame.f_lineno = 437;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "oocc";
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
        exception_tb = MAKE_TRACEBACK(frame_c2d726aa5d301a19f8ddaa2000f69065, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c2d726aa5d301a19f8ddaa2000f69065->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c2d726aa5d301a19f8ddaa2000f69065, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c2d726aa5d301a19f8ddaa2000f69065,
        type_description_1,
        par_x,
        par_v,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_c2d726aa5d301a19f8ddaa2000f69065 == cache_frame_c2d726aa5d301a19f8ddaa2000f69065) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c2d726aa5d301a19f8ddaa2000f69065);
        cache_frame_c2d726aa5d301a19f8ddaa2000f69065 = NULL;
    }

    assertFrameObject(frame_c2d726aa5d301a19f8ddaa2000f69065);

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
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__13_update_hess(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_c5e573be22ca2b5c434ea0c9ffe91499;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_c5e573be22ca2b5c434ea0c9ffe91499 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c5e573be22ca2b5c434ea0c9ffe91499)) {
        Py_XDECREF(cache_frame_c5e573be22ca2b5c434ea0c9ffe91499);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c5e573be22ca2b5c434ea0c9ffe91499 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c5e573be22ca2b5c434ea0c9ffe91499 = MAKE_FUNCTION_FRAME(codeobj_c5e573be22ca2b5c434ea0c9ffe91499, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c5e573be22ca2b5c434ea0c9ffe91499->m_type_description == NULL);
    frame_c5e573be22ca2b5c434ea0c9ffe91499 = cache_frame_c5e573be22ca2b5c434ea0c9ffe91499;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c5e573be22ca2b5c434ea0c9ffe91499);
    assert(Py_REFCNT(frame_c5e573be22ca2b5c434ea0c9ffe91499) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_assattr_target_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 441;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 441;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_args_element_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 441;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[83]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 441;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        frame_c5e573be22ca2b5c434ea0c9ffe91499->m_frame.f_lineno = 441;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 441;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[40], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c5e573be22ca2b5c434ea0c9ffe91499, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c5e573be22ca2b5c434ea0c9ffe91499->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c5e573be22ca2b5c434ea0c9ffe91499, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c5e573be22ca2b5c434ea0c9ffe91499,
        type_description_1,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_c5e573be22ca2b5c434ea0c9ffe91499 == cache_frame_c5e573be22ca2b5c434ea0c9ffe91499) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c5e573be22ca2b5c434ea0c9ffe91499);
        cache_frame_c5e573be22ca2b5c434ea0c9ffe91499 = NULL;
    }

    assertFrameObject(frame_c5e573be22ca2b5c434ea0c9ffe91499);

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

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__14_jac_dot_v(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_v = python_pars[1];
    struct Nuitka_FrameObject *frame_5536999fd2d47acdcfa7b330827d7f1d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5536999fd2d47acdcfa7b330827d7f1d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5536999fd2d47acdcfa7b330827d7f1d)) {
        Py_XDECREF(cache_frame_5536999fd2d47acdcfa7b330827d7f1d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5536999fd2d47acdcfa7b330827d7f1d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5536999fd2d47acdcfa7b330827d7f1d = MAKE_FUNCTION_FRAME(codeobj_5536999fd2d47acdcfa7b330827d7f1d, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5536999fd2d47acdcfa7b330827d7f1d->m_type_description == NULL);
    frame_5536999fd2d47acdcfa7b330827d7f1d = cache_frame_5536999fd2d47acdcfa7b330827d7f1d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5536999fd2d47acdcfa7b330827d7f1d);
    assert(Py_REFCNT(frame_5536999fd2d47acdcfa7b330827d7f1d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 444;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_5536999fd2d47acdcfa7b330827d7f1d->m_frame.f_lineno = 444;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[100]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_v);
        tmp_args_element_value_2 = par_v;
        frame_5536999fd2d47acdcfa7b330827d7f1d->m_frame.f_lineno = 444;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[101], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_5536999fd2d47acdcfa7b330827d7f1d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5536999fd2d47acdcfa7b330827d7f1d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5536999fd2d47acdcfa7b330827d7f1d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5536999fd2d47acdcfa7b330827d7f1d,
        type_description_1,
        par_x,
        par_v,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_5536999fd2d47acdcfa7b330827d7f1d == cache_frame_5536999fd2d47acdcfa7b330827d7f1d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5536999fd2d47acdcfa7b330827d7f1d);
        cache_frame_5536999fd2d47acdcfa7b330827d7f1d = NULL;
    }

    assertFrameObject(frame_5536999fd2d47acdcfa7b330827d7f1d);

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
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__15_update_hess(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_ad207e19e1739197c6b22d7d4cb301b0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_ad207e19e1739197c6b22d7d4cb301b0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ad207e19e1739197c6b22d7d4cb301b0)) {
        Py_XDECREF(cache_frame_ad207e19e1739197c6b22d7d4cb301b0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ad207e19e1739197c6b22d7d4cb301b0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ad207e19e1739197c6b22d7d4cb301b0 = MAKE_FUNCTION_FRAME(codeobj_ad207e19e1739197c6b22d7d4cb301b0, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ad207e19e1739197c6b22d7d4cb301b0->m_type_description == NULL);
    frame_ad207e19e1739197c6b22d7d4cb301b0 = cache_frame_ad207e19e1739197c6b22d7d4cb301b0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ad207e19e1739197c6b22d7d4cb301b0);
    assert(Py_REFCNT(frame_ad207e19e1739197c6b22d7d4cb301b0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 447;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[2]);
        frame_ad207e19e1739197c6b22d7d4cb301b0->m_frame.f_lineno = 447;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[102]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_assattr_target_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[95]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 448;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_1;
            PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 448;
                type_description_1 = "ccc";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 448;
                type_description_1 = "ccc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_dircall_arg2_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_dict_key_1 = mod_consts[67];
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 449;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[85]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 449;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[100]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 449;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[101]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 449;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 449;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[83]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg2_1);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 449;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        frame_ad207e19e1739197c6b22d7d4cb301b0->m_frame.f_lineno = 449;
        tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 449;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_expression_value_6;
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[62];
            if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 450;
                type_description_1 = "ccc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_6 = Nuitka_Cell_GET(self->m_closure[2]);
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[83]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 450;
                type_description_1 = "ccc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_2);
            tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_dircall_arg2_1);
        Py_DECREF(tmp_dircall_arg3_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            Py_DECREF(tmp_dircall_arg3_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 451;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg4_1 = Nuitka_Cell_GET(self->m_closure[0]);
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_assattr_value_1 = impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 448;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[40], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ccc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ad207e19e1739197c6b22d7d4cb301b0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ad207e19e1739197c6b22d7d4cb301b0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ad207e19e1739197c6b22d7d4cb301b0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ad207e19e1739197c6b22d7d4cb301b0,
        type_description_1,
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_ad207e19e1739197c6b22d7d4cb301b0 == cache_frame_ad207e19e1739197c6b22d7d4cb301b0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ad207e19e1739197c6b22d7d4cb301b0);
        cache_frame_ad207e19e1739197c6b22d7d4cb301b0 = NULL;
    }

    assertFrameObject(frame_ad207e19e1739197c6b22d7d4cb301b0);

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

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__16_update_hess(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_delta_x = NULL;
    PyObject *var_delta_g = NULL;
    struct Nuitka_FrameObject *frame_16631b48faddf3b5f67750604abf3a10;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_16631b48faddf3b5f67750604abf3a10 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_16631b48faddf3b5f67750604abf3a10)) {
        Py_XDECREF(cache_frame_16631b48faddf3b5f67750604abf3a10);

#if _DEBUG_REFCOUNTS
        if (cache_frame_16631b48faddf3b5f67750604abf3a10 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_16631b48faddf3b5f67750604abf3a10 = MAKE_FUNCTION_FRAME(codeobj_16631b48faddf3b5f67750604abf3a10, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_16631b48faddf3b5f67750604abf3a10->m_type_description == NULL);
    frame_16631b48faddf3b5f67750604abf3a10 = cache_frame_16631b48faddf3b5f67750604abf3a10;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_16631b48faddf3b5f67750604abf3a10);
    assert(Py_REFCNT(frame_16631b48faddf3b5f67750604abf3a10) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 462;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_16631b48faddf3b5f67750604abf3a10->m_frame.f_lineno = 462;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[102]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 465;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[54]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 465;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[97]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_2);
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 466;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[12]);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_sub_expr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 466;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[54]);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 466;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        assert(var_delta_x == NULL);
        var_delta_x = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_12;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 467;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[85]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[100]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[101]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 467;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[83]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 467;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_16631b48faddf3b5f67750604abf3a10->m_frame.f_lineno = 467;
        tmp_sub_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_sub_expr_left_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 467;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[97]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_2);

            exception_lineno = 467;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[100]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_2);

            exception_lineno = 467;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[101]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_2);

            exception_lineno = 467;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_sub_expr_left_2);
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 467;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[83]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_2);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 467;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_16631b48faddf3b5f67750604abf3a10->m_frame.f_lineno = 467;
        tmp_sub_expr_right_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_sub_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_2);

            exception_lineno = 467;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        Py_DECREF(tmp_sub_expr_right_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        assert(var_delta_g == NULL);
        var_delta_g = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 468;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_14 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[40]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[69]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_delta_x);
        tmp_args_element_value_3 = var_delta_x;
        CHECK_OBJECT(var_delta_g);
        tmp_args_element_value_4 = var_delta_g;
        frame_16631b48faddf3b5f67750604abf3a10->m_frame.f_lineno = 468;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_16631b48faddf3b5f67750604abf3a10, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_16631b48faddf3b5f67750604abf3a10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_16631b48faddf3b5f67750604abf3a10, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_16631b48faddf3b5f67750604abf3a10,
        type_description_1,
        var_delta_x,
        var_delta_g,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_16631b48faddf3b5f67750604abf3a10 == cache_frame_16631b48faddf3b5f67750604abf3a10) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_16631b48faddf3b5f67750604abf3a10);
        cache_frame_16631b48faddf3b5f67750604abf3a10 = NULL;
    }

    assertFrameObject(frame_16631b48faddf3b5f67750604abf3a10);

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
    Py_XDECREF(var_delta_x);
    var_delta_x = NULL;
    Py_XDECREF(var_delta_g);
    var_delta_g = NULL;
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

    Py_XDECREF(var_delta_x);
    var_delta_x = NULL;
    Py_XDECREF(var_delta_g);
    var_delta_g = NULL;
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

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__17_update_x(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_b8ae361500f0e22f35b13de3326724c1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_b8ae361500f0e22f35b13de3326724c1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b8ae361500f0e22f35b13de3326724c1)) {
        Py_XDECREF(cache_frame_b8ae361500f0e22f35b13de3326724c1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b8ae361500f0e22f35b13de3326724c1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b8ae361500f0e22f35b13de3326724c1 = MAKE_FUNCTION_FRAME(codeobj_b8ae361500f0e22f35b13de3326724c1, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b8ae361500f0e22f35b13de3326724c1->m_type_description == NULL);
    frame_b8ae361500f0e22f35b13de3326724c1 = cache_frame_b8ae361500f0e22f35b13de3326724c1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b8ae361500f0e22f35b13de3326724c1);
    assert(Py_REFCNT(frame_b8ae361500f0e22f35b13de3326724c1) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 474;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_b8ae361500f0e22f35b13de3326724c1->m_frame.f_lineno = 474;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[102]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 475;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 475;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[54], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_assattr_target_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 476;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_assattr_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[85]);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_assattr_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 476;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[97], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_b8ae361500f0e22f35b13de3326724c1->m_frame.f_lineno = 477;
        tmp_called_instance_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[9], tmp_args_element_value_1);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_b8ae361500f0e22f35b13de3326724c1->m_frame.f_lineno = 477;
        tmp_assattr_value_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[11], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_assattr_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 477;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[12], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = Py_False;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 478;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[19], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = Py_False;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 479;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[76], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = Py_False;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 480;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_6 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[21], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 481;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_b8ae361500f0e22f35b13de3326724c1->m_frame.f_lineno = 481;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[70]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
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
        exception_tb = MAKE_TRACEBACK(frame_b8ae361500f0e22f35b13de3326724c1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b8ae361500f0e22f35b13de3326724c1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b8ae361500f0e22f35b13de3326724c1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b8ae361500f0e22f35b13de3326724c1,
        type_description_1,
        par_x,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_b8ae361500f0e22f35b13de3326724c1 == cache_frame_b8ae361500f0e22f35b13de3326724c1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b8ae361500f0e22f35b13de3326724c1);
        cache_frame_b8ae361500f0e22f35b13de3326724c1 = NULL;
    }

    assertFrameObject(frame_b8ae361500f0e22f35b13de3326724c1);

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


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__18_update_x(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_fcfcf02fbfde671f1735fc4639dbbdfc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_fcfcf02fbfde671f1735fc4639dbbdfc = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fcfcf02fbfde671f1735fc4639dbbdfc)) {
        Py_XDECREF(cache_frame_fcfcf02fbfde671f1735fc4639dbbdfc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fcfcf02fbfde671f1735fc4639dbbdfc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fcfcf02fbfde671f1735fc4639dbbdfc = MAKE_FUNCTION_FRAME(codeobj_fcfcf02fbfde671f1735fc4639dbbdfc, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fcfcf02fbfde671f1735fc4639dbbdfc->m_type_description == NULL);
    frame_fcfcf02fbfde671f1735fc4639dbbdfc = cache_frame_fcfcf02fbfde671f1735fc4639dbbdfc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fcfcf02fbfde671f1735fc4639dbbdfc);
    assert(Py_REFCNT(frame_fcfcf02fbfde671f1735fc4639dbbdfc) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_fcfcf02fbfde671f1735fc4639dbbdfc->m_frame.f_lineno = 484;
        tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[9], tmp_args_element_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_fcfcf02fbfde671f1735fc4639dbbdfc->m_frame.f_lineno = 484;
        tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[11], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 484;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[12], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_False;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 485;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[19], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = Py_False;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 486;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[76], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = Py_False;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 487;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[21], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fcfcf02fbfde671f1735fc4639dbbdfc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fcfcf02fbfde671f1735fc4639dbbdfc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fcfcf02fbfde671f1735fc4639dbbdfc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fcfcf02fbfde671f1735fc4639dbbdfc,
        type_description_1,
        par_x,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_fcfcf02fbfde671f1735fc4639dbbdfc == cache_frame_fcfcf02fbfde671f1735fc4639dbbdfc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fcfcf02fbfde671f1735fc4639dbbdfc);
        cache_frame_fcfcf02fbfde671f1735fc4639dbbdfc = NULL;
    }

    assertFrameObject(frame_fcfcf02fbfde671f1735fc4639dbbdfc);

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


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__10__update_v(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_v = python_pars[1];
    struct Nuitka_FrameObject *frame_4f4a100fc881657f9fb799527bfac42a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_4f4a100fc881657f9fb799527bfac42a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4f4a100fc881657f9fb799527bfac42a)) {
        Py_XDECREF(cache_frame_4f4a100fc881657f9fb799527bfac42a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4f4a100fc881657f9fb799527bfac42a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4f4a100fc881657f9fb799527bfac42a = MAKE_FUNCTION_FRAME(codeobj_4f4a100fc881657f9fb799527bfac42a, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4f4a100fc881657f9fb799527bfac42a->m_type_description == NULL);
    frame_4f4a100fc881657f9fb799527bfac42a = cache_frame_4f4a100fc881657f9fb799527bfac42a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4f4a100fc881657f9fb799527bfac42a);
    assert(Py_REFCNT(frame_4f4a100fc881657f9fb799527bfac42a) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[71]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_v);
        tmp_args_element_value_1 = par_v;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[83]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 492;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_4f4a100fc881657f9fb799527bfac42a->m_frame.f_lineno = 492;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "oo";
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_v);
        tmp_assattr_value_1 = par_v;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[83], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[21], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4f4a100fc881657f9fb799527bfac42a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4f4a100fc881657f9fb799527bfac42a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4f4a100fc881657f9fb799527bfac42a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4f4a100fc881657f9fb799527bfac42a,
        type_description_1,
        par_self,
        par_v
    );


    // Release cached frame if used for exception.
    if (frame_4f4a100fc881657f9fb799527bfac42a == cache_frame_4f4a100fc881657f9fb799527bfac42a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4f4a100fc881657f9fb799527bfac42a);
        cache_frame_4f4a100fc881657f9fb799527bfac42a = NULL;
    }

    assertFrameObject(frame_4f4a100fc881657f9fb799527bfac42a);

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
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__11__update_x(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    struct Nuitka_FrameObject *frame_6548a36476e2d013f1352ec2d31e563a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6548a36476e2d013f1352ec2d31e563a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6548a36476e2d013f1352ec2d31e563a)) {
        Py_XDECREF(cache_frame_6548a36476e2d013f1352ec2d31e563a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6548a36476e2d013f1352ec2d31e563a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6548a36476e2d013f1352ec2d31e563a = MAKE_FUNCTION_FRAME(codeobj_6548a36476e2d013f1352ec2d31e563a, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6548a36476e2d013f1352ec2d31e563a->m_type_description == NULL);
    frame_6548a36476e2d013f1352ec2d31e563a = cache_frame_6548a36476e2d013f1352ec2d31e563a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6548a36476e2d013f1352ec2d31e563a);
    assert(Py_REFCNT(frame_6548a36476e2d013f1352ec2d31e563a) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[71]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[12]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 497;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_6548a36476e2d013f1352ec2d31e563a->m_frame.f_lineno = 497;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "oo";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_3 = par_x;
        frame_6548a36476e2d013f1352ec2d31e563a->m_frame.f_lineno = 498;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[59], tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
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
        exception_tb = MAKE_TRACEBACK(frame_6548a36476e2d013f1352ec2d31e563a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6548a36476e2d013f1352ec2d31e563a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6548a36476e2d013f1352ec2d31e563a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6548a36476e2d013f1352ec2d31e563a,
        type_description_1,
        par_self,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_6548a36476e2d013f1352ec2d31e563a == cache_frame_6548a36476e2d013f1352ec2d31e563a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6548a36476e2d013f1352ec2d31e563a);
        cache_frame_6548a36476e2d013f1352ec2d31e563a = NULL;
    }

    assertFrameObject(frame_6548a36476e2d013f1352ec2d31e563a);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__12__update_fun(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3cdb38eae7588ad7fe5dfbc4d8f986f1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_3cdb38eae7588ad7fe5dfbc4d8f986f1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3cdb38eae7588ad7fe5dfbc4d8f986f1)) {
        Py_XDECREF(cache_frame_3cdb38eae7588ad7fe5dfbc4d8f986f1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3cdb38eae7588ad7fe5dfbc4d8f986f1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3cdb38eae7588ad7fe5dfbc4d8f986f1 = MAKE_FUNCTION_FRAME(codeobj_3cdb38eae7588ad7fe5dfbc4d8f986f1, module_scipy$optimize$_differentiable_functions, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3cdb38eae7588ad7fe5dfbc4d8f986f1->m_type_description == NULL);
    frame_3cdb38eae7588ad7fe5dfbc4d8f986f1 = cache_frame_3cdb38eae7588ad7fe5dfbc4d8f986f1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3cdb38eae7588ad7fe5dfbc4d8f986f1);
    assert(Py_REFCNT(frame_3cdb38eae7588ad7fe5dfbc4d8f986f1) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "o";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_3cdb38eae7588ad7fe5dfbc4d8f986f1->m_frame.f_lineno = 502;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[31]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[19], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3cdb38eae7588ad7fe5dfbc4d8f986f1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3cdb38eae7588ad7fe5dfbc4d8f986f1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3cdb38eae7588ad7fe5dfbc4d8f986f1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3cdb38eae7588ad7fe5dfbc4d8f986f1,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_3cdb38eae7588ad7fe5dfbc4d8f986f1 == cache_frame_3cdb38eae7588ad7fe5dfbc4d8f986f1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3cdb38eae7588ad7fe5dfbc4d8f986f1);
        cache_frame_3cdb38eae7588ad7fe5dfbc4d8f986f1 = NULL;
    }

    assertFrameObject(frame_3cdb38eae7588ad7fe5dfbc4d8f986f1);

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


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__13__update_jac(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_815c48437434415c409d1fd1ecbdd01b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_815c48437434415c409d1fd1ecbdd01b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_815c48437434415c409d1fd1ecbdd01b)) {
        Py_XDECREF(cache_frame_815c48437434415c409d1fd1ecbdd01b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_815c48437434415c409d1fd1ecbdd01b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_815c48437434415c409d1fd1ecbdd01b = MAKE_FUNCTION_FRAME(codeobj_815c48437434415c409d1fd1ecbdd01b, module_scipy$optimize$_differentiable_functions, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_815c48437434415c409d1fd1ecbdd01b->m_type_description == NULL);
    frame_815c48437434415c409d1fd1ecbdd01b = cache_frame_815c48437434415c409d1fd1ecbdd01b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_815c48437434415c409d1fd1ecbdd01b);
    assert(Py_REFCNT(frame_815c48437434415c409d1fd1ecbdd01b) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[76]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "o";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_815c48437434415c409d1fd1ecbdd01b->m_frame.f_lineno = 507;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[92]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[76], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_815c48437434415c409d1fd1ecbdd01b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_815c48437434415c409d1fd1ecbdd01b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_815c48437434415c409d1fd1ecbdd01b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_815c48437434415c409d1fd1ecbdd01b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_815c48437434415c409d1fd1ecbdd01b == cache_frame_815c48437434415c409d1fd1ecbdd01b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_815c48437434415c409d1fd1ecbdd01b);
        cache_frame_815c48437434415c409d1fd1ecbdd01b = NULL;
    }

    assertFrameObject(frame_815c48437434415c409d1fd1ecbdd01b);

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


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__14__update_hess(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_fba7236a33658d1c937c803d11a3b78c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_fba7236a33658d1c937c803d11a3b78c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fba7236a33658d1c937c803d11a3b78c)) {
        Py_XDECREF(cache_frame_fba7236a33658d1c937c803d11a3b78c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fba7236a33658d1c937c803d11a3b78c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fba7236a33658d1c937c803d11a3b78c = MAKE_FUNCTION_FRAME(codeobj_fba7236a33658d1c937c803d11a3b78c, module_scipy$optimize$_differentiable_functions, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fba7236a33658d1c937c803d11a3b78c->m_type_description == NULL);
    frame_fba7236a33658d1c937c803d11a3b78c = cache_frame_fba7236a33658d1c937c803d11a3b78c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fba7236a33658d1c937c803d11a3b78c);
    assert(Py_REFCNT(frame_fba7236a33658d1c937c803d11a3b78c) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "o";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_fba7236a33658d1c937c803d11a3b78c->m_frame.f_lineno = 512;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[56]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[21], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fba7236a33658d1c937c803d11a3b78c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fba7236a33658d1c937c803d11a3b78c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fba7236a33658d1c937c803d11a3b78c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fba7236a33658d1c937c803d11a3b78c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_fba7236a33658d1c937c803d11a3b78c == cache_frame_fba7236a33658d1c937c803d11a3b78c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fba7236a33658d1c937c803d11a3b78c);
        cache_frame_fba7236a33658d1c937c803d11a3b78c = NULL;
    }

    assertFrameObject(frame_fba7236a33658d1c937c803d11a3b78c);

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


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__15_fun(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    struct Nuitka_FrameObject *frame_80f8f5a2302b980afb9fa15b8de98b5c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_80f8f5a2302b980afb9fa15b8de98b5c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_80f8f5a2302b980afb9fa15b8de98b5c)) {
        Py_XDECREF(cache_frame_80f8f5a2302b980afb9fa15b8de98b5c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_80f8f5a2302b980afb9fa15b8de98b5c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_80f8f5a2302b980afb9fa15b8de98b5c = MAKE_FUNCTION_FRAME(codeobj_80f8f5a2302b980afb9fa15b8de98b5c, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_80f8f5a2302b980afb9fa15b8de98b5c->m_type_description == NULL);
    frame_80f8f5a2302b980afb9fa15b8de98b5c = cache_frame_80f8f5a2302b980afb9fa15b8de98b5c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_80f8f5a2302b980afb9fa15b8de98b5c);
    assert(Py_REFCNT(frame_80f8f5a2302b980afb9fa15b8de98b5c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_80f8f5a2302b980afb9fa15b8de98b5c->m_frame.f_lineno = 516;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[103], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
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
        frame_80f8f5a2302b980afb9fa15b8de98b5c->m_frame.f_lineno = 517;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[32]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[63]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
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
        exception_tb = MAKE_TRACEBACK(frame_80f8f5a2302b980afb9fa15b8de98b5c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_80f8f5a2302b980afb9fa15b8de98b5c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_80f8f5a2302b980afb9fa15b8de98b5c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_80f8f5a2302b980afb9fa15b8de98b5c,
        type_description_1,
        par_self,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_80f8f5a2302b980afb9fa15b8de98b5c == cache_frame_80f8f5a2302b980afb9fa15b8de98b5c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_80f8f5a2302b980afb9fa15b8de98b5c);
        cache_frame_80f8f5a2302b980afb9fa15b8de98b5c = NULL;
    }

    assertFrameObject(frame_80f8f5a2302b980afb9fa15b8de98b5c);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__16_jac(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    struct Nuitka_FrameObject *frame_7d66471f0081eea4694a3c7ca0397aa8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7d66471f0081eea4694a3c7ca0397aa8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7d66471f0081eea4694a3c7ca0397aa8)) {
        Py_XDECREF(cache_frame_7d66471f0081eea4694a3c7ca0397aa8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7d66471f0081eea4694a3c7ca0397aa8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7d66471f0081eea4694a3c7ca0397aa8 = MAKE_FUNCTION_FRAME(codeobj_7d66471f0081eea4694a3c7ca0397aa8, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7d66471f0081eea4694a3c7ca0397aa8->m_type_description == NULL);
    frame_7d66471f0081eea4694a3c7ca0397aa8 = cache_frame_7d66471f0081eea4694a3c7ca0397aa8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7d66471f0081eea4694a3c7ca0397aa8);
    assert(Py_REFCNT(frame_7d66471f0081eea4694a3c7ca0397aa8) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_7d66471f0081eea4694a3c7ca0397aa8->m_frame.f_lineno = 521;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[103], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
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
        frame_7d66471f0081eea4694a3c7ca0397aa8->m_frame.f_lineno = 522;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[102]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[85]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
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
        exception_tb = MAKE_TRACEBACK(frame_7d66471f0081eea4694a3c7ca0397aa8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7d66471f0081eea4694a3c7ca0397aa8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7d66471f0081eea4694a3c7ca0397aa8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7d66471f0081eea4694a3c7ca0397aa8,
        type_description_1,
        par_self,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_7d66471f0081eea4694a3c7ca0397aa8 == cache_frame_7d66471f0081eea4694a3c7ca0397aa8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7d66471f0081eea4694a3c7ca0397aa8);
        cache_frame_7d66471f0081eea4694a3c7ca0397aa8 = NULL;
    }

    assertFrameObject(frame_7d66471f0081eea4694a3c7ca0397aa8);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__17_hess(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_v = python_pars[2];
    struct Nuitka_FrameObject *frame_7cf1d499b09ad37166984b3307d4bbdf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7cf1d499b09ad37166984b3307d4bbdf = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7cf1d499b09ad37166984b3307d4bbdf)) {
        Py_XDECREF(cache_frame_7cf1d499b09ad37166984b3307d4bbdf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7cf1d499b09ad37166984b3307d4bbdf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7cf1d499b09ad37166984b3307d4bbdf = MAKE_FUNCTION_FRAME(codeobj_7cf1d499b09ad37166984b3307d4bbdf, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7cf1d499b09ad37166984b3307d4bbdf->m_type_description == NULL);
    frame_7cf1d499b09ad37166984b3307d4bbdf = cache_frame_7cf1d499b09ad37166984b3307d4bbdf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7cf1d499b09ad37166984b3307d4bbdf);
    assert(Py_REFCNT(frame_7cf1d499b09ad37166984b3307d4bbdf) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_v);
        tmp_args_element_value_1 = par_v;
        frame_7cf1d499b09ad37166984b3307d4bbdf->m_frame.f_lineno = 527;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[104], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        frame_7cf1d499b09ad37166984b3307d4bbdf->m_frame.f_lineno = 528;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[103], tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_7cf1d499b09ad37166984b3307d4bbdf->m_frame.f_lineno = 529;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[70]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[40]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
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
        exception_tb = MAKE_TRACEBACK(frame_7cf1d499b09ad37166984b3307d4bbdf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7cf1d499b09ad37166984b3307d4bbdf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7cf1d499b09ad37166984b3307d4bbdf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7cf1d499b09ad37166984b3307d4bbdf,
        type_description_1,
        par_self,
        par_x,
        par_v
    );


    // Release cached frame if used for exception.
    if (frame_7cf1d499b09ad37166984b3307d4bbdf == cache_frame_7cf1d499b09ad37166984b3307d4bbdf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7cf1d499b09ad37166984b3307d4bbdf);
        cache_frame_7cf1d499b09ad37166984b3307d4bbdf = NULL;
    }

    assertFrameObject(frame_7cf1d499b09ad37166984b3307d4bbdf);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__18___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_A = python_pars[1];
    PyObject *par_x0 = python_pars[2];
    PyObject *par_sparse_jacobian = python_pars[3];
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_0ae1f9ab225a1e59b23ceb1dd495d3a8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    static struct Nuitka_FrameObject *cache_frame_0ae1f9ab225a1e59b23ceb1dd495d3a8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0ae1f9ab225a1e59b23ceb1dd495d3a8)) {
        Py_XDECREF(cache_frame_0ae1f9ab225a1e59b23ceb1dd495d3a8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0ae1f9ab225a1e59b23ceb1dd495d3a8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0ae1f9ab225a1e59b23ceb1dd495d3a8 = MAKE_FUNCTION_FRAME(codeobj_0ae1f9ab225a1e59b23ceb1dd495d3a8, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0ae1f9ab225a1e59b23ceb1dd495d3a8->m_type_description == NULL);
    frame_0ae1f9ab225a1e59b23ceb1dd495d3a8 = cache_frame_0ae1f9ab225a1e59b23ceb1dd495d3a8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0ae1f9ab225a1e59b23ceb1dd495d3a8);
    assert(Py_REFCNT(frame_0ae1f9ab225a1e59b23ceb1dd495d3a8) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        int tmp_truth_name_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_sparse_jacobian);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_sparse_jacobian);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_sparse_jacobian);
        tmp_cmp_expr_left_1 = par_sparse_jacobian;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_A);
        tmp_args_element_value_1 = par_A;
        frame_0ae1f9ab225a1e59b23ceb1dd495d3a8->m_frame.f_lineno = 541;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[43], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 541;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_or_right_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_or_right_value_1 = tmp_and_left_value_1;
        and_end_1:;
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[46]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_A == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 542;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = par_A;
        frame_0ae1f9ab225a1e59b23ceb1dd495d3a8->m_frame.f_lineno = 542;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[85], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[88], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        int tmp_truth_name_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[43]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_A == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 544;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = par_A;
        frame_0ae1f9ab225a1e59b23ceb1dd495d3a8->m_frame.f_lineno = 544;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 544;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_assattr_target_3;
        if (par_A == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 545;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = par_A;
        frame_0ae1f9ab225a1e59b23ceb1dd495d3a8->m_frame.f_lineno = 545;
        tmp_assattr_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[89]);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[85], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[88], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[48]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 549;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[49]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 549;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_A == NULL) {
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 549;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = par_A;
        frame_0ae1f9ab225a1e59b23ceb1dd495d3a8->m_frame.f_lineno = 549;
        tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_4);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 549;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_0ae1f9ab225a1e59b23ceb1dd495d3a8->m_frame.f_lineno = 549;
        tmp_assattr_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[85], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[88], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_2:;
    branch_end_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 552;
            type_description_1 = "oooo";
            goto try_except_handler_1;
        }

        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[85]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_1 = "oooo";
            goto try_except_handler_1;
        }
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[106]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_1 = "oooo";
            goto try_except_handler_1;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_1 = "oooo";
            goto try_except_handler_1;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 552;
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 552;
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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
                    exception_lineno = 552;
                    goto try_except_handler_2;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[107];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooo";
            exception_lineno = 552;
            goto try_except_handler_2;
        }
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assattr_value_7 = tmp_tuple_unpack_1__element_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 552;
            type_description_1 = "oooo";
            goto try_except_handler_1;
        }

        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[84], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_1 = "oooo";
            goto try_except_handler_1;
        }
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assattr_value_8 = tmp_tuple_unpack_1__element_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 552;
            type_description_1 = "oooo";
            goto try_except_handler_1;
        }

        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[14], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_1 = "oooo";
            goto try_except_handler_1;
        }
    }
    goto try_end_2;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_assattr_target_9;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x0);
        tmp_args_element_value_6 = par_x0;
        frame_0ae1f9ab225a1e59b23ceb1dd495d3a8->m_frame.f_lineno = 554;
        tmp_called_instance_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[9], tmp_args_element_value_6);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_0ae1f9ab225a1e59b23ceb1dd495d3a8->m_frame.f_lineno = 554;
        tmp_assattr_value_9 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[11], 0)
        );

        Py_DECREF(tmp_called_instance_3);
        if (tmp_assattr_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 554;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[12], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_assattr_target_10;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 555;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[85]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[101]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 555;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = par_self;
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[12]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 555;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_0ae1f9ab225a1e59b23ceb1dd495d3a8->m_frame.f_lineno = 555;
        tmp_assattr_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assattr_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 555;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[63], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        tmp_assattr_value_11 = Py_True;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 556;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[19], tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_assattr_target_12;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[108]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 558;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[84]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 558;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[109]);
        frame_0ae1f9ab225a1e59b23ceb1dd495d3a8->m_frame.f_lineno = 558;
        tmp_assattr_value_12 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assattr_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 558;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[83], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_assattr_target_13;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[46]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 559;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = par_self;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[14]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 559;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_14;
            PyTuple_SET_ITEM(tmp_args_element_value_8, 0, tmp_tuple_element_2);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 559;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_14 = par_self;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_8, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_8);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_0ae1f9ab225a1e59b23ceb1dd495d3a8->m_frame.f_lineno = 559;
        tmp_assattr_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assattr_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 559;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[40], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0ae1f9ab225a1e59b23ceb1dd495d3a8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0ae1f9ab225a1e59b23ceb1dd495d3a8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0ae1f9ab225a1e59b23ceb1dd495d3a8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0ae1f9ab225a1e59b23ceb1dd495d3a8,
        type_description_1,
        par_self,
        par_A,
        par_x0,
        par_sparse_jacobian
    );


    // Release cached frame if used for exception.
    if (frame_0ae1f9ab225a1e59b23ceb1dd495d3a8 == cache_frame_0ae1f9ab225a1e59b23ceb1dd495d3a8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0ae1f9ab225a1e59b23ceb1dd495d3a8);
        cache_frame_0ae1f9ab225a1e59b23ceb1dd495d3a8 = NULL;
    }

    assertFrameObject(frame_0ae1f9ab225a1e59b23ceb1dd495d3a8);

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
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    CHECK_OBJECT(par_x0);
    Py_DECREF(par_x0);
    CHECK_OBJECT(par_sparse_jacobian);
    Py_DECREF(par_sparse_jacobian);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_A);
    Py_DECREF(par_A);
    CHECK_OBJECT(par_x0);
    Py_DECREF(par_x0);
    CHECK_OBJECT(par_sparse_jacobian);
    Py_DECREF(par_sparse_jacobian);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__19__update_x(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    struct Nuitka_FrameObject *frame_f1035641f64e54a473d191f48236631d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_f1035641f64e54a473d191f48236631d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f1035641f64e54a473d191f48236631d)) {
        Py_XDECREF(cache_frame_f1035641f64e54a473d191f48236631d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f1035641f64e54a473d191f48236631d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f1035641f64e54a473d191f48236631d = MAKE_FUNCTION_FRAME(codeobj_f1035641f64e54a473d191f48236631d, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f1035641f64e54a473d191f48236631d->m_type_description == NULL);
    frame_f1035641f64e54a473d191f48236631d = cache_frame_f1035641f64e54a473d191f48236631d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f1035641f64e54a473d191f48236631d);
    assert(Py_REFCNT(frame_f1035641f64e54a473d191f48236631d) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[71]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[12]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 562;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f1035641f64e54a473d191f48236631d->m_frame.f_lineno = 562;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_1 = "oo";
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_assattr_target_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_3 = par_x;
        frame_f1035641f64e54a473d191f48236631d->m_frame.f_lineno = 563;
        tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[9], tmp_args_element_value_3);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f1035641f64e54a473d191f48236631d->m_frame.f_lineno = 563;
        tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[11], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[12], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[19], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f1035641f64e54a473d191f48236631d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f1035641f64e54a473d191f48236631d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f1035641f64e54a473d191f48236631d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f1035641f64e54a473d191f48236631d,
        type_description_1,
        par_self,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_f1035641f64e54a473d191f48236631d == cache_frame_f1035641f64e54a473d191f48236631d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f1035641f64e54a473d191f48236631d);
        cache_frame_f1035641f64e54a473d191f48236631d = NULL;
    }

    assertFrameObject(frame_f1035641f64e54a473d191f48236631d);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__20_fun(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    struct Nuitka_FrameObject *frame_c779da7f54f91217b6901cbd6cd1d372;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c779da7f54f91217b6901cbd6cd1d372 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c779da7f54f91217b6901cbd6cd1d372)) {
        Py_XDECREF(cache_frame_c779da7f54f91217b6901cbd6cd1d372);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c779da7f54f91217b6901cbd6cd1d372 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c779da7f54f91217b6901cbd6cd1d372 = MAKE_FUNCTION_FRAME(codeobj_c779da7f54f91217b6901cbd6cd1d372, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c779da7f54f91217b6901cbd6cd1d372->m_type_description == NULL);
    frame_c779da7f54f91217b6901cbd6cd1d372 = cache_frame_c779da7f54f91217b6901cbd6cd1d372;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c779da7f54f91217b6901cbd6cd1d372);
    assert(Py_REFCNT(frame_c779da7f54f91217b6901cbd6cd1d372) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_c779da7f54f91217b6901cbd6cd1d372->m_frame.f_lineno = 567;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[103], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "oo";
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[85]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        frame_c779da7f54f91217b6901cbd6cd1d372->m_frame.f_lineno = 569;
        tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[101], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[63], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[19], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[63]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
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
        exception_tb = MAKE_TRACEBACK(frame_c779da7f54f91217b6901cbd6cd1d372, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c779da7f54f91217b6901cbd6cd1d372->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c779da7f54f91217b6901cbd6cd1d372, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c779da7f54f91217b6901cbd6cd1d372,
        type_description_1,
        par_self,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_c779da7f54f91217b6901cbd6cd1d372 == cache_frame_c779da7f54f91217b6901cbd6cd1d372) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c779da7f54f91217b6901cbd6cd1d372);
        cache_frame_c779da7f54f91217b6901cbd6cd1d372 = NULL;
    }

    assertFrameObject(frame_c779da7f54f91217b6901cbd6cd1d372);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__21_jac(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    struct Nuitka_FrameObject *frame_986a589fe2b1cb59891f3ebd69995808;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_986a589fe2b1cb59891f3ebd69995808 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_986a589fe2b1cb59891f3ebd69995808)) {
        Py_XDECREF(cache_frame_986a589fe2b1cb59891f3ebd69995808);

#if _DEBUG_REFCOUNTS
        if (cache_frame_986a589fe2b1cb59891f3ebd69995808 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_986a589fe2b1cb59891f3ebd69995808 = MAKE_FUNCTION_FRAME(codeobj_986a589fe2b1cb59891f3ebd69995808, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_986a589fe2b1cb59891f3ebd69995808->m_type_description == NULL);
    frame_986a589fe2b1cb59891f3ebd69995808 = cache_frame_986a589fe2b1cb59891f3ebd69995808;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_986a589fe2b1cb59891f3ebd69995808);
    assert(Py_REFCNT(frame_986a589fe2b1cb59891f3ebd69995808) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_986a589fe2b1cb59891f3ebd69995808->m_frame.f_lineno = 574;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[103], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 574;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[85]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;
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
        exception_tb = MAKE_TRACEBACK(frame_986a589fe2b1cb59891f3ebd69995808, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_986a589fe2b1cb59891f3ebd69995808->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_986a589fe2b1cb59891f3ebd69995808, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_986a589fe2b1cb59891f3ebd69995808,
        type_description_1,
        par_self,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_986a589fe2b1cb59891f3ebd69995808 == cache_frame_986a589fe2b1cb59891f3ebd69995808) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_986a589fe2b1cb59891f3ebd69995808);
        cache_frame_986a589fe2b1cb59891f3ebd69995808 = NULL;
    }

    assertFrameObject(frame_986a589fe2b1cb59891f3ebd69995808);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__22_hess(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_v = python_pars[2];
    struct Nuitka_FrameObject *frame_337c36815298adaa91c027994c748383;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_337c36815298adaa91c027994c748383 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_337c36815298adaa91c027994c748383)) {
        Py_XDECREF(cache_frame_337c36815298adaa91c027994c748383);

#if _DEBUG_REFCOUNTS
        if (cache_frame_337c36815298adaa91c027994c748383 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_337c36815298adaa91c027994c748383 = MAKE_FUNCTION_FRAME(codeobj_337c36815298adaa91c027994c748383, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_337c36815298adaa91c027994c748383->m_type_description == NULL);
    frame_337c36815298adaa91c027994c748383 = cache_frame_337c36815298adaa91c027994c748383;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_337c36815298adaa91c027994c748383);
    assert(Py_REFCNT(frame_337c36815298adaa91c027994c748383) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_337c36815298adaa91c027994c748383->m_frame.f_lineno = 578;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[103], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_v);
        tmp_assattr_value_1 = par_v;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[83], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[40]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
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
        exception_tb = MAKE_TRACEBACK(frame_337c36815298adaa91c027994c748383, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_337c36815298adaa91c027994c748383->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_337c36815298adaa91c027994c748383, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_337c36815298adaa91c027994c748383,
        type_description_1,
        par_self,
        par_x,
        par_v
    );


    // Release cached frame if used for exception.
    if (frame_337c36815298adaa91c027994c748383 == cache_frame_337c36815298adaa91c027994c748383) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_337c36815298adaa91c027994c748383);
        cache_frame_337c36815298adaa91c027994c748383 = NULL;
    }

    assertFrameObject(frame_337c36815298adaa91c027994c748383);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_differentiable_functions$$$function__23___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x0 = python_pars[1];
    PyObject *par_sparse_jacobian = python_pars[2];
    PyObject *var_n = NULL;
    PyObject *var_A = NULL;
    struct Nuitka_FrameObject *frame_5f58a7a2511ef197fcb98f9f0fd5c15d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_5f58a7a2511ef197fcb98f9f0fd5c15d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5f58a7a2511ef197fcb98f9f0fd5c15d)) {
        Py_XDECREF(cache_frame_5f58a7a2511ef197fcb98f9f0fd5c15d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5f58a7a2511ef197fcb98f9f0fd5c15d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5f58a7a2511ef197fcb98f9f0fd5c15d = MAKE_FUNCTION_FRAME(codeobj_5f58a7a2511ef197fcb98f9f0fd5c15d, module_scipy$optimize$_differentiable_functions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5f58a7a2511ef197fcb98f9f0fd5c15d->m_type_description == NULL);
    frame_5f58a7a2511ef197fcb98f9f0fd5c15d = cache_frame_5f58a7a2511ef197fcb98f9f0fd5c15d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5f58a7a2511ef197fcb98f9f0fd5c15d);
    assert(Py_REFCNT(frame_5f58a7a2511ef197fcb98f9f0fd5c15d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_x0);
        tmp_len_arg_1 = par_x0;
        tmp_assign_source_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        assert(var_n == NULL);
        var_n = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_sparse_jacobian);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_sparse_jacobian);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_sparse_jacobian);
        tmp_cmp_expr_left_1 = par_sparse_jacobian;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_or_right_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 593;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[110]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 593;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_n);
        tmp_tuple_element_1 = var_n;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[111]);
        frame_5f58a7a2511ef197fcb98f9f0fd5c15d->m_frame.f_lineno = 593;
        tmp_assign_source_2 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 593;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        assert(var_A == NULL);
        var_A = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_True;
        {
            PyObject *old = par_sparse_jacobian;
            assert(old != NULL);
            par_sparse_jacobian = tmp_assign_source_3;
            Py_INCREF(par_sparse_jacobian);
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 596;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_n);
        tmp_args_element_value_1 = var_n;
        frame_5f58a7a2511ef197fcb98f9f0fd5c15d->m_frame.f_lineno = 596;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[110], tmp_args_element_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 596;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        assert(var_A == NULL);
        var_A = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = Py_False;
        {
            PyObject *old = par_sparse_jacobian;
            assert(old != NULL);
            par_sparse_jacobian = tmp_assign_source_5;
            Py_INCREF(par_sparse_jacobian);
            Py_DECREF(old);
        }

    }
    branch_end_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 598;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_2 = BUILTIN_SUPER0(moduledict_scipy$optimize$_differentiable_functions, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_A);
        tmp_args_element_value_2 = var_A;
        CHECK_OBJECT(par_x0);
        tmp_args_element_value_3 = par_x0;
        CHECK_OBJECT(par_sparse_jacobian);
        tmp_args_element_value_4 = par_sparse_jacobian;
        frame_5f58a7a2511ef197fcb98f9f0fd5c15d->m_frame.f_lineno = 598;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_2,
                mod_consts[113],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 598;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5f58a7a2511ef197fcb98f9f0fd5c15d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5f58a7a2511ef197fcb98f9f0fd5c15d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5f58a7a2511ef197fcb98f9f0fd5c15d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5f58a7a2511ef197fcb98f9f0fd5c15d,
        type_description_1,
        par_self,
        par_x0,
        par_sparse_jacobian,
        var_n,
        var_A,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_5f58a7a2511ef197fcb98f9f0fd5c15d == cache_frame_5f58a7a2511ef197fcb98f9f0fd5c15d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5f58a7a2511ef197fcb98f9f0fd5c15d);
        cache_frame_5f58a7a2511ef197fcb98f9f0fd5c15d = NULL;
    }

    assertFrameObject(frame_5f58a7a2511ef197fcb98f9f0fd5c15d);

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
    CHECK_OBJECT(par_sparse_jacobian);
    Py_DECREF(par_sparse_jacobian);
    par_sparse_jacobian = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    CHECK_OBJECT(var_A);
    Py_DECREF(var_A);
    var_A = NULL;
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

    Py_XDECREF(par_sparse_jacobian);
    par_sparse_jacobian = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_A);
    var_A = NULL;
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
    CHECK_OBJECT(par_x0);
    Py_DECREF(par_x0);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x0);
    Py_DECREF(par_x0);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__10__update_v() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__10__update_v,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        mod_consts[149],
#endif
        codeobj_4f4a100fc881657f9fb799527bfac42a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__11__update_x() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__11__update_x,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        mod_consts[150],
#endif
        codeobj_6548a36476e2d013f1352ec2d31e563a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__12__update_fun() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__12__update_fun,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[151],
#endif
        codeobj_3cdb38eae7588ad7fe5dfbc4d8f986f1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__13__update_jac() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__13__update_jac,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        mod_consts[152],
#endif
        codeobj_815c48437434415c409d1fd1ecbdd01b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__14__update_hess() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__14__update_hess,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        mod_consts[153],
#endif
        codeobj_fba7236a33658d1c937c803d11a3b78c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__15_fun() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__15_fun,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        mod_consts[154],
#endif
        codeobj_80f8f5a2302b980afb9fa15b8de98b5c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__16_jac() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__16_jac,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        mod_consts[155],
#endif
        codeobj_7d66471f0081eea4694a3c7ca0397aa8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__17_hess() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__17_hess,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        mod_consts[156],
#endif
        codeobj_7cf1d499b09ad37166984b3307d4bbdf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__18___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__18___init__,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        mod_consts[159],
#endif
        codeobj_0ae1f9ab225a1e59b23ceb1dd495d3a8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__19__update_x() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__19__update_x,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        mod_consts[160],
#endif
        codeobj_f1035641f64e54a473d191f48236631d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__1___init__,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        mod_consts[136],
#endif
        codeobj_893eb5481c9c509a5ad1cc315a23bfaa,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__10_update_hess(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__10_update_hess,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        mod_consts[51],
#endif
        codeobj_05d4ebf5414bca8450e9e33da77f3c73,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__11_update_hess(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__11_update_hess,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        mod_consts[51],
#endif
        codeobj_0d284f5628c8d33a8755174fa333b806,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__12_update_x(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__12_update_x,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        mod_consts[58],
#endif
        codeobj_26d857c4a271045f6437952cdade5f39,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__13_update_x(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__13_update_x,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        mod_consts[58],
#endif
        codeobj_fa39f885a4e854bb6531c56d4367aefd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__1_fun_wrapped(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__1_fun_wrapped,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        mod_consts[28],
#endif
        codeobj_cf7dbca8f00b8e77b486b9aab9136016,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__2_update_fun(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__2_update_fun,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        mod_consts[30],
#endif
        codeobj_2761a13d18f1c6966a16e1a89085be3a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__3_grad_wrapped(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__3_grad_wrapped,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        mod_consts[34],
#endif
        codeobj_9f85af8b07f9efa6686e48347a852e23,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__4_update_grad(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__4_update_grad,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[36],
#endif
        codeobj_d6513a2f6f3c788c73f5a215b627073c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__5_update_grad(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__5_update_grad,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[36],
#endif
        codeobj_199505446e89ea369c149f14a98ca570,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__6_hess_wrapped(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__6_hess_wrapped,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        mod_consts[45],
#endif
        codeobj_6054c2252161ffbc8463e8fc73e998e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__7_hess_wrapped(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__7_hess_wrapped,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        mod_consts[45],
#endif
        codeobj_8a17990ca1decd9440adb32e457b4a1e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__8_hess_wrapped(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__8_hess_wrapped,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        mod_consts[45],
#endif
        codeobj_7a917831f043dfae498905b281006f92,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__9_update_hess(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__9_update_hess,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        mod_consts[51],
#endif
        codeobj_fa3c2496fec7ce69d288cf79ac0c3f18,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__20_fun() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__20_fun,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        mod_consts[161],
#endif
        codeobj_c779da7f54f91217b6901cbd6cd1d372,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__21_jac() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__21_jac,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        mod_consts[162],
#endif
        codeobj_986a589fe2b1cb59891f3ebd69995808,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__22_hess() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__22_hess,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        mod_consts[163],
#endif
        codeobj_337c36815298adaa91c027994c748383,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__23___init__(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__23___init__,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        mod_consts[171],
#endif
        codeobj_5f58a7a2511ef197fcb98f9f0fd5c15d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__2__update_fun() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__2__update_fun,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[137],
#endif
        codeobj_3a350c660f38d8e0dfe84c51be7b5c75,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__3__update_grad() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__3__update_grad,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[138],
#endif
        codeobj_41aa85885bd478070f62a072ec776d84,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__4__update_hess() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__4__update_hess,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        mod_consts[139],
#endif
        codeobj_a4ae25d8160cae1b74038db1b0cf776b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__5_fun() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__5_fun,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        mod_consts[140],
#endif
        codeobj_515688b3898229ed211ddd965916ceb7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__6_grad() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__6_grad,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        mod_consts[141],
#endif
        codeobj_1bfd769d653cd0967d14c7d774a58fd4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__7_hess() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__7_hess,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        mod_consts[142],
#endif
        codeobj_23f3fbfaa8a95bb3ecb94414ceab6e7a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__8_fun_and_grad() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__8_fun_and_grad,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_01200459f5aa7819f02bf84c19414e24,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__9___init__,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_89a2733fcae3e5aa6c9d259516d36d35,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__10_hess_wrapped(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__10_hess_wrapped,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        mod_consts[93],
#endif
        codeobj_c0ea32a0760a005c85de5fadab684619,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__11_hess_wrapped(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__11_hess_wrapped,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        mod_consts[93],
#endif
        codeobj_1690a5f4557cada2662546c6f41bbcf3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__12_hess_wrapped(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__12_hess_wrapped,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        mod_consts[93],
#endif
        codeobj_c2d726aa5d301a19f8ddaa2000f69065,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__13_update_hess(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__13_update_hess,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        mod_consts[94],
#endif
        codeobj_c5e573be22ca2b5c434ea0c9ffe91499,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__14_jac_dot_v(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__14_jac_dot_v,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        mod_consts[96],
#endif
        codeobj_5536999fd2d47acdcfa7b330827d7f1d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__15_update_hess(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__15_update_hess,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        mod_consts[94],
#endif
        codeobj_ad207e19e1739197c6b22d7d4cb301b0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__16_update_hess(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__16_update_hess,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        mod_consts[94],
#endif
        codeobj_16631b48faddf3b5f67750604abf3a10,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__17_update_x(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__17_update_x,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        mod_consts[98],
#endif
        codeobj_b8ae361500f0e22f35b13de3326724c1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__18_update_x(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__18_update_x,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        mod_consts[98],
#endif
        codeobj_fcfcf02fbfde671f1735fc4639dbbdfc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__1_fun_wrapped(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__1_fun_wrapped,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        mod_consts[80],
#endif
        codeobj_24668a9b7ecc44cc3deb051ca4505514,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__2_update_fun(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__2_update_fun,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        mod_consts[81],
#endif
        codeobj_1af8f43e2652d3b3d3a3e81dd5ac2d9d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__3_jac_wrapped(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__3_jac_wrapped,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        mod_consts[87],
#endif
        codeobj_1889ffa30a61a277769d421a3e8849e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__4_jac_wrapped(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__4_jac_wrapped,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        mod_consts[87],
#endif
        codeobj_7c29c25bd7189b335bb8450f215b7592,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__5_jac_wrapped(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__5_jac_wrapped,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        mod_consts[87],
#endif
        codeobj_97a77acc4e359302c7f64ad5a6c3433d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__6_update_jac(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__6_update_jac,
        mod_consts[90],
#if PYTHON_VERSION >= 0x300
        mod_consts[91],
#endif
        codeobj_352a99a0b0f458d141cb999315ee0b58,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__7_update_jac(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__7_update_jac,
        mod_consts[90],
#if PYTHON_VERSION >= 0x300
        mod_consts[91],
#endif
        codeobj_2187f61b37c1bbbe1523c98a6430e2e0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__8_update_jac(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__8_update_jac,
        mod_consts[90],
#if PYTHON_VERSION >= 0x300
        mod_consts[91],
#endif
        codeobj_0678b2b029e6797c59451a3b6a9a75d3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__9_update_jac(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__9_update_jac,
        mod_consts[90],
#if PYTHON_VERSION >= 0x300
        mod_consts[91],
#endif
        codeobj_c7b69292664aa6b6a76847e2ea3a20be,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_differentiable_functions,
        NULL,
        closure,
        3
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

function_impl_code functable_scipy$optimize$_differentiable_functions[] = {
    impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__1_fun_wrapped,
    impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__2_update_fun,
    impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__3_grad_wrapped,
    impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__4_update_grad,
    impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__5_update_grad,
    impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__6_hess_wrapped,
    impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__7_hess_wrapped,
    impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__8_hess_wrapped,
    impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__9_update_hess,
    impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__10_update_hess,
    impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__11_update_hess,
    impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__12_update_x,
    impl_scipy$optimize$_differentiable_functions$$$function__1___init__$$$function__13_update_x,
    impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__1_fun_wrapped,
    impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__2_update_fun,
    impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__3_jac_wrapped,
    impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__4_jac_wrapped,
    impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__5_jac_wrapped,
    impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__6_update_jac,
    impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__7_update_jac,
    impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__8_update_jac,
    impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__9_update_jac,
    impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__10_hess_wrapped,
    impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__11_hess_wrapped,
    impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__12_hess_wrapped,
    impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__13_update_hess,
    impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__14_jac_dot_v,
    impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__15_update_hess,
    impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__16_update_hess,
    impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__17_update_x,
    impl_scipy$optimize$_differentiable_functions$$$function__9___init__$$$function__18_update_x,
    impl_scipy$optimize$_differentiable_functions$$$function__1___init__,
    impl_scipy$optimize$_differentiable_functions$$$function__2__update_fun,
    impl_scipy$optimize$_differentiable_functions$$$function__3__update_grad,
    impl_scipy$optimize$_differentiable_functions$$$function__4__update_hess,
    impl_scipy$optimize$_differentiable_functions$$$function__5_fun,
    impl_scipy$optimize$_differentiable_functions$$$function__6_grad,
    impl_scipy$optimize$_differentiable_functions$$$function__7_hess,
    impl_scipy$optimize$_differentiable_functions$$$function__8_fun_and_grad,
    impl_scipy$optimize$_differentiable_functions$$$function__9___init__,
    impl_scipy$optimize$_differentiable_functions$$$function__10__update_v,
    impl_scipy$optimize$_differentiable_functions$$$function__11__update_x,
    impl_scipy$optimize$_differentiable_functions$$$function__12__update_fun,
    impl_scipy$optimize$_differentiable_functions$$$function__13__update_jac,
    impl_scipy$optimize$_differentiable_functions$$$function__14__update_hess,
    impl_scipy$optimize$_differentiable_functions$$$function__15_fun,
    impl_scipy$optimize$_differentiable_functions$$$function__16_jac,
    impl_scipy$optimize$_differentiable_functions$$$function__17_hess,
    impl_scipy$optimize$_differentiable_functions$$$function__18___init__,
    impl_scipy$optimize$_differentiable_functions$$$function__19__update_x,
    impl_scipy$optimize$_differentiable_functions$$$function__20_fun,
    impl_scipy$optimize$_differentiable_functions$$$function__21_jac,
    impl_scipy$optimize$_differentiable_functions$$$function__22_hess,
    impl_scipy$optimize$_differentiable_functions$$$function__23___init__,
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

    function_impl_code *current = functable_scipy$optimize$_differentiable_functions;
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

    if (offset > sizeof(functable_scipy$optimize$_differentiable_functions) || offset < 0) {
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
        functable_scipy$optimize$_differentiable_functions[offset],
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
        module_scipy$optimize$_differentiable_functions,
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
PyObject *modulecode_scipy$optimize$_differentiable_functions(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("scipy.optimize._differentiable_functions");

    // Store the module for future use.
    module_scipy$optimize$_differentiable_functions = module;

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
        PRINT_STRING("scipy.optimize._differentiable_functions: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy.optimize._differentiable_functions: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy.optimize._differentiable_functions: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initscipy$optimize$_differentiable_functions\n");

    moduledict_scipy$optimize$_differentiable_functions = MODULE_DICT(module_scipy$optimize$_differentiable_functions);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_scipy$optimize$_differentiable_functions,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_scipy$optimize$_differentiable_functions,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[3]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_scipy$optimize$_differentiable_functions,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_differentiable_functions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_differentiable_functions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_scipy$optimize$_differentiable_functions);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_scipy$optimize$_differentiable_functions);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    struct Nuitka_CellObject *outline_3_var___class__ = Nuitka_Cell_Empty();
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_360bbc2fefbecbc756c38a789d457d40;
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
    PyObject *locals_scipy$optimize$_differentiable_functions$$$class__1_ScalarFunction_11 = NULL;
    PyObject *tmp_dictset_value;
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
    PyObject *locals_scipy$optimize$_differentiable_functions$$$class__2_VectorFunction_272 = NULL;
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
    PyObject *locals_scipy$optimize$_differentiable_functions$$$class__3_LinearVectorFunction_533 = NULL;
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
    PyObject *locals_scipy$optimize$_differentiable_functions$$$class__4_IdentityVectorFunction_583 = NULL;
    struct Nuitka_FrameObject *frame_fc3b0c22b98c67d7c83247b20b0d979f_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
        UPDATE_STRING_DICT0(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_2);
    }
    frame_360bbc2fefbecbc756c38a789d457d40 = MAKE_MODULE_FRAME(codeobj_360bbc2fefbecbc756c38a789d457d40, module_scipy$optimize$_differentiable_functions);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_360bbc2fefbecbc756c38a789d457d40);
    assert(Py_REFCNT(frame_360bbc2fefbecbc756c38a789d457d40) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[117], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[118], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[120];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_scipy$optimize$_differentiable_functions;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[15];
        frame_360bbc2fefbecbc756c38a789d457d40->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[121];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_scipy$optimize$_differentiable_functions;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[15];
        frame_360bbc2fefbecbc756c38a789d457d40->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_scipy$optimize$_differentiable_functions,
                mod_consts[122],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[122]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[123];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_scipy$optimize$_differentiable_functions;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[124];
        tmp_level_value_3 = mod_consts[41];
        frame_360bbc2fefbecbc756c38a789d457d40->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_scipy$optimize$_differentiable_functions,
                mod_consts[66],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[66]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_scipy$optimize$_differentiable_functions,
                mod_consts[77],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[77]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_8);
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[125];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_scipy$optimize$_differentiable_functions;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[126];
        tmp_level_value_4 = mod_consts[41];
        frame_360bbc2fefbecbc756c38a789d457d40->m_frame.f_lineno = 4;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_scipy$optimize$_differentiable_functions,
                mod_consts[5],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[5]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[127];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_scipy$optimize$_differentiable_functions;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[128];
        tmp_level_value_5 = mod_consts[15];
        frame_360bbc2fefbecbc756c38a789d457d40->m_frame.f_lineno = 5;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_scipy$optimize$_differentiable_functions,
                mod_consts[47],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[47]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[129];
        UPDATE_STRING_DICT0(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_scipy$optimize$_differentiable_functions$$$class__1_ScalarFunction_11 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[130];
        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__1_ScalarFunction_11, mod_consts[131], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[132];
        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__1_ScalarFunction_11, mod_consts[114], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[133];
        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__1_ScalarFunction_11, mod_consts[134], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[135];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__1___init__(tmp_defaults_1);

            tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__1_ScalarFunction_11, mod_consts[113], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__2__update_fun();

        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__1_ScalarFunction_11, mod_consts[32], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__3__update_grad();

        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__1_ScalarFunction_11, mod_consts[38], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__4__update_hess();

        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__1_ScalarFunction_11, mod_consts[70], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__5_fun();

        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__1_ScalarFunction_11, mod_consts[61], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__6_grad();

        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__1_ScalarFunction_11, mod_consts[64], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__7_hess();

        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__1_ScalarFunction_11, mod_consts[53], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__8_fun_and_grad();

        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__1_ScalarFunction_11, mod_consts[143], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[133];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[145];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_scipy$optimize$_differentiable_functions$$$class__1_ScalarFunction_11;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_360bbc2fefbecbc756c38a789d457d40->m_frame.f_lineno = 11;
            tmp_assign_source_15 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_15;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_14 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_14);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_scipy$optimize$_differentiable_functions$$$class__1_ScalarFunction_11);
        locals_scipy$optimize$_differentiable_functions$$$class__1_ScalarFunction_11 = NULL;
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

        Py_DECREF(locals_scipy$optimize$_differentiable_functions$$$class__1_ScalarFunction_11);
        locals_scipy$optimize$_differentiable_functions$$$class__1_ScalarFunction_11 = NULL;
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
        exception_lineno = 11;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_14);
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
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_17;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_scipy$optimize$_differentiable_functions$$$class__2_VectorFunction_272 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[130];
        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__2_VectorFunction_272, mod_consts[131], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[146];
        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__2_VectorFunction_272, mod_consts[114], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[147];
        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__2_VectorFunction_272, mod_consts[134], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__9___init__();

        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__2_VectorFunction_272, mod_consts[113], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__10__update_v();

        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__2_VectorFunction_272, mod_consts[104], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__11__update_x();

        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__2_VectorFunction_272, mod_consts[103], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__12__update_fun();

        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__2_VectorFunction_272, mod_consts[32], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__13__update_jac();

        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__2_VectorFunction_272, mod_consts[102], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__14__update_hess();

        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__2_VectorFunction_272, mod_consts[70], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__15_fun();

        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__2_VectorFunction_272, mod_consts[61], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__16_jac();

        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__2_VectorFunction_272, mod_consts[99], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__17_hess();

        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__2_VectorFunction_272, mod_consts[53], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_value_2;
            tmp_called_value_2 = (PyObject *)&PyType_Type;
            tmp_tuple_element_2 = mod_consts[147];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[145];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_scipy$optimize$_differentiable_functions$$$class__2_VectorFunction_272;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
            frame_360bbc2fefbecbc756c38a789d457d40->m_frame.f_lineno = 272;
            tmp_assign_source_19 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_19;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_18 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_18);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_scipy$optimize$_differentiable_functions$$$class__2_VectorFunction_272);
        locals_scipy$optimize$_differentiable_functions$$$class__2_VectorFunction_272 = NULL;
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

        Py_DECREF(locals_scipy$optimize$_differentiable_functions$$$class__2_VectorFunction_272);
        locals_scipy$optimize$_differentiable_functions$$$class__2_VectorFunction_272 = NULL;
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
        exception_lineno = 272;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_18);
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

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_21;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_scipy$optimize$_differentiable_functions$$$class__3_LinearVectorFunction_533 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        tmp_dictset_value = mod_consts[130];
        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__3_LinearVectorFunction_533, mod_consts[131], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[157];
        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__3_LinearVectorFunction_533, mod_consts[114], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[158];
        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__3_LinearVectorFunction_533, mod_consts[134], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__18___init__();

        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__3_LinearVectorFunction_533, mod_consts[113], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__19__update_x();

        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__3_LinearVectorFunction_533, mod_consts[103], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__20_fun();

        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__3_LinearVectorFunction_533, mod_consts[61], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__21_jac();

        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__3_LinearVectorFunction_533, mod_consts[99], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__22_hess();

        tmp_res = PyDict_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__3_LinearVectorFunction_533, mod_consts[53], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_3;
            tmp_called_value_3 = (PyObject *)&PyType_Type;
            tmp_tuple_element_3 = mod_consts[158];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[145];
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_scipy$optimize$_differentiable_functions$$$class__3_LinearVectorFunction_533;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_3 = tmp_class_creation_3__class_decl_dict;
            frame_360bbc2fefbecbc756c38a789d457d40->m_frame.f_lineno = 533;
            tmp_assign_source_23 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 533;

                goto try_except_handler_10;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_23;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_22 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_22);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_scipy$optimize$_differentiable_functions$$$class__3_LinearVectorFunction_533);
        locals_scipy$optimize$_differentiable_functions$$$class__3_LinearVectorFunction_533 = NULL;
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

        Py_DECREF(locals_scipy$optimize$_differentiable_functions$$$class__3_LinearVectorFunction_533);
        locals_scipy$optimize$_differentiable_functions$$$class__3_LinearVectorFunction_533 = NULL;
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
        exception_lineno = 533;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_22);
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

    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_tuple_element_4;
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
        }

        assert(!(tmp_tuple_element_4 == NULL));
        tmp_assign_source_24 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_24, 0, tmp_tuple_element_4);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_24;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_25 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;

            goto try_except_handler_11;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_1 = tmp_class_creation_4__bases;
        tmp_subscript_value_1 = mod_consts[15];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;

            goto try_except_handler_11;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;

            goto try_except_handler_11;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_1 = tmp_class_creation_4__bases;
        tmp_assign_source_27 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_27;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_2 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[164]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_4;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_value_4;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_3 = tmp_class_creation_4__metaclass;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[164]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;

            goto try_except_handler_11;
        }
        tmp_tuple_element_5 = mod_consts[165];
        tmp_args_value_4 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_5 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_4 = tmp_class_creation_4__class_decl_dict;
        frame_360bbc2fefbecbc756c38a789d457d40->m_frame.f_lineno = 583;
        tmp_assign_source_28 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_4);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_28;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_4 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[166]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;

            goto try_except_handler_11;
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
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[167];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_1 = mod_consts[168];
        tmp_getattr_default_1 = mod_consts[169];
        tmp_tuple_element_6 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;

            goto try_except_handler_11;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_2 = tmp_class_creation_4__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[168]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 583;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;

            goto try_except_handler_11;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 583;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_11;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_29;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_30;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_scipy$optimize$_differentiable_functions$$$class__4_IdentityVectorFunction_583 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[130];
        tmp_res = PyObject_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__4_IdentityVectorFunction_583, mod_consts[131], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[170];
        tmp_res = PyObject_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__4_IdentityVectorFunction_583, mod_consts[114], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[165];
        tmp_res = PyObject_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__4_IdentityVectorFunction_583, mod_consts[134], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;

            goto try_except_handler_13;
        }
        frame_fc3b0c22b98c67d7c83247b20b0d979f_2 = MAKE_CLASS_FRAME(codeobj_fc3b0c22b98c67d7c83247b20b0d979f, module_scipy$optimize$_differentiable_functions, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_fc3b0c22b98c67d7c83247b20b0d979f_2);
        assert(Py_REFCNT(frame_fc3b0c22b98c67d7c83247b20b0d979f_2) == 2);

        // Framed code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = outline_3_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_differentiable_functions$$$function__23___init__(tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__4_IdentityVectorFunction_583, mod_consts[113], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 590;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_fc3b0c22b98c67d7c83247b20b0d979f_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_fc3b0c22b98c67d7c83247b20b0d979f_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_fc3b0c22b98c67d7c83247b20b0d979f_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_fc3b0c22b98c67d7c83247b20b0d979f_2,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_fc3b0c22b98c67d7c83247b20b0d979f_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_13;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 583;

                goto try_except_handler_13;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_scipy$optimize$_differentiable_functions$$$class__4_IdentityVectorFunction_583, mod_consts[172], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;

            goto try_except_handler_13;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_5;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_5 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_7 = mod_consts[165];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_7 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_scipy$optimize$_differentiable_functions$$$class__4_IdentityVectorFunction_583;
            PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_5 = tmp_class_creation_4__class_decl_dict;
            frame_360bbc2fefbecbc756c38a789d457d40->m_frame.f_lineno = 583;
            tmp_assign_source_31 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 583;

                goto try_except_handler_13;
            }
            assert(Nuitka_Cell_GET(outline_3_var___class__) == NULL);
            PyCell_SET(outline_3_var___class__, tmp_assign_source_31);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_3_var___class__));
        tmp_assign_source_30 = Nuitka_Cell_GET(outline_3_var___class__);
        Py_INCREF(tmp_assign_source_30);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_scipy$optimize$_differentiable_functions$$$class__4_IdentityVectorFunction_583);
        locals_scipy$optimize$_differentiable_functions$$$class__4_IdentityVectorFunction_583 = NULL;
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

        Py_DECREF(locals_scipy$optimize$_differentiable_functions$$$class__4_IdentityVectorFunction_583);
        locals_scipy$optimize$_differentiable_functions$$$class__4_IdentityVectorFunction_583 = NULL;
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
        exception_lineno = 583;
        goto try_except_handler_11;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_30);
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

    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
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

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_360bbc2fefbecbc756c38a789d457d40, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_360bbc2fefbecbc756c38a789d457d40->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_360bbc2fefbecbc756c38a789d457d40, exception_lineno);
    }



    assertFrameObject(frame_360bbc2fefbecbc756c38a789d457d40);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
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

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("scipy.optimize._differentiable_functions", false);

    Py_INCREF(module_scipy$optimize$_differentiable_functions);
    return module_scipy$optimize$_differentiable_functions;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$optimize$_differentiable_functions, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("scipy$optimize$_differentiable_functions", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
