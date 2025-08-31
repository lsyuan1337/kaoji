/* Generated code for Python module 'torch.nn.intrinsic.qat.modules.conv_fused'
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

/* The "module_torch$nn$intrinsic$qat$modules$conv_fused" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$nn$intrinsic$qat$modules$conv_fused;
PyDictObject *moduledict_torch$nn$intrinsic$qat$modules$conv_fused;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[213];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[213];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch.nn.intrinsic.qat.modules.conv_fused"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 213; i++) {
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
void checkModuleConstants_torch$nn$intrinsic$qat$modules$conv_fused(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 213; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_290db10fbad5acc303c0554377bb0833;
static PyCodeObject *codeobj_10bcd231e4fba4b14b61044d07558270;
static PyCodeObject *codeobj_eb1962241b2a746d9f9e594c3a93a0db;
static PyCodeObject *codeobj_b09e0e8d9aa40e06f0d6e6aff9fd8e8d;
static PyCodeObject *codeobj_0f92b38e6cca379f6267f939e94bf40a;
static PyCodeObject *codeobj_e9519555d82dc09cff4b11917d1f9238;
static PyCodeObject *codeobj_cca297555e12171f1a8dac7ed8fd0a15;
static PyCodeObject *codeobj_c0da219430acd03559ff4e46413e5bb5;
static PyCodeObject *codeobj_b0beb0433cb9dec10753a24f33c2293b;
static PyCodeObject *codeobj_5be57df756bd864d34b205d7a5a1929d;
static PyCodeObject *codeobj_ec212b85b3d1c15011f22535973ebc10;
static PyCodeObject *codeobj_578e035b83d380550312598b41098254;
static PyCodeObject *codeobj_5c8a3b74b5524ab2e78321e002c3571d;
static PyCodeObject *codeobj_e7c862916681ba66acf3566abbdc8053;
static PyCodeObject *codeobj_65dad2a49db0940434db2391de502881;
static PyCodeObject *codeobj_4f39d5d708a8d3a420f5c4b308a7df1a;
static PyCodeObject *codeobj_09fb52f5993021669ad8ed5a7a7acbdf;
static PyCodeObject *codeobj_461a3a6c69162c5fa5ad465bac2c50b5;
static PyCodeObject *codeobj_4aaa24291461810fff62166e2954eaaf;
static PyCodeObject *codeobj_d215a544449a6755732689d73e310f5b;
static PyCodeObject *codeobj_6c04402bfb07b8ee7107417af94d1a4b;
static PyCodeObject *codeobj_5528306fb7094adfcad00e3efbbe38f5;
static PyCodeObject *codeobj_510d4d7c966542941e0424d03e769e8f;
static PyCodeObject *codeobj_94dc36f8402a52b94f80b152ed547c8a;
static PyCodeObject *codeobj_e72e9a541dcbfbcaa6c845c59cb82bfe;
static PyCodeObject *codeobj_83882db7a66ba7bc16cab5b908c97c2c;
static PyCodeObject *codeobj_ed8e43e3c218aaa28723f7b4ddcdb442;
static PyCodeObject *codeobj_fa41a634e0508c802d5f80192a570ded;
static PyCodeObject *codeobj_d5fa26fd2380ef08adeaebf0923895a2;
static PyCodeObject *codeobj_907cc9a9d0865c3241e4b1a548b8dab3;
static PyCodeObject *codeobj_a84c96b41c6995e726d3252c295bb8b4;
static PyCodeObject *codeobj_b5029e7a2fd42278705c56d25dcd252e;
static PyCodeObject *codeobj_ea28c591a0f1b5921d3b7fed7c7f0caf;
static PyCodeObject *codeobj_c16df0252bf54330fa22204c5856d653;
static PyCodeObject *codeobj_120ce4d8125c1fbe7a7415b54ef40704;
static PyCodeObject *codeobj_dc6ba744c6e7e8be795b64a85496c9f0;
static PyCodeObject *codeobj_2d757c96e6c206421f6fa918df72bfa6;
static PyCodeObject *codeobj_51790826b23a64a2a1c777ccfcb64ec2;
static PyCodeObject *codeobj_ebdc54e31a3e03cf255ece4d7dbcaf2f;
static PyCodeObject *codeobj_7f06d5abe85d3cb97ac6f9403bb8e7ca;
static PyCodeObject *codeobj_6401b01198d598d0b461f5fce1192be6;
static PyCodeObject *codeobj_bb02ec65cb3be4f872cf2eb482b2804a;
static PyCodeObject *codeobj_da676ec8d2637d264b9ad2e157de67fc;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[194]); CHECK_OBJECT(module_filename_obj);
    codeobj_290db10fbad5acc303c0554377bb0833 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[195], mod_consts[195], NULL, NULL, 0, 0, 0);
    codeobj_10bcd231e4fba4b14b61044d07558270 = MAKE_CODE_OBJECT(module_filename_obj, 257, CO_NOFREE, mod_consts[91], mod_consts[91], mod_consts[196], NULL, 0, 0, 0);
    codeobj_eb1962241b2a746d9f9e594c3a93a0db = MAKE_CODE_OBJECT(module_filename_obj, 350, CO_NOFREE, mod_consts[97], mod_consts[97], mod_consts[196], NULL, 0, 0, 0);
    codeobj_b09e0e8d9aa40e06f0d6e6aff9fd8e8d = MAKE_CODE_OBJECT(module_filename_obj, 480, CO_NOFREE, mod_consts[103], mod_consts[103], mod_consts[196], NULL, 0, 0, 0);
    codeobj_0f92b38e6cca379f6267f939e94bf40a = MAKE_CODE_OBJECT(module_filename_obj, 301, CO_NOFREE, mod_consts[92], mod_consts[92], mod_consts[196], NULL, 0, 0, 0);
    codeobj_e9519555d82dc09cff4b11917d1f9238 = MAKE_CODE_OBJECT(module_filename_obj, 394, CO_NOFREE, mod_consts[96], mod_consts[96], mod_consts[196], NULL, 0, 0, 0);
    codeobj_cca297555e12171f1a8dac7ed8fd0a15 = MAKE_CODE_OBJECT(module_filename_obj, 548, CO_NOFREE, mod_consts[102], mod_consts[102], mod_consts[196], NULL, 0, 0, 0);
    codeobj_c0da219430acd03559ff4e46413e5bb5 = MAKE_CODE_OBJECT(module_filename_obj, 443, CO_NOFREE, mod_consts[98], mod_consts[98], mod_consts[196], NULL, 0, 0, 0);
    codeobj_b0beb0433cb9dec10753a24f33c2293b = MAKE_CODE_OBJECT(module_filename_obj, 614, CO_NOFREE, mod_consts[104], mod_consts[104], mod_consts[196], NULL, 0, 0, 0);
    codeobj_5be57df756bd864d34b205d7a5a1929d = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_NOFREE, mod_consts[31], mod_consts[31], mod_consts[196], NULL, 0, 0, 0);
    codeobj_ec212b85b3d1c15011f22535973ebc10 = MAKE_CODE_OBJECT(module_filename_obj, 279, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[197], NULL, 14, 0, 0);
    codeobj_578e035b83d380550312598b41098254 = MAKE_CODE_OBJECT(module_filename_obj, 372, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[197], NULL, 14, 0, 0);
    codeobj_5c8a3b74b5524ab2e78321e002c3571d = MAKE_CODE_OBJECT(module_filename_obj, 502, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[197], NULL, 14, 0, 0);
    codeobj_e7c862916681ba66acf3566abbdc8053 = MAKE_CODE_OBJECT(module_filename_obj, 323, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[4], mod_consts[4], mod_consts[198], mod_consts[196], 14, 0, 0);
    codeobj_65dad2a49db0940434db2391de502881 = MAKE_CODE_OBJECT(module_filename_obj, 416, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[198], NULL, 14, 0, 0);
    codeobj_4f39d5d708a8d3a420f5c4b308a7df1a = MAKE_CODE_OBJECT(module_filename_obj, 569, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[198], NULL, 14, 0, 0);
    codeobj_09fb52f5993021669ad8ed5a7a7acbdf = MAKE_CODE_OBJECT(module_filename_obj, 460, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[199], NULL, 11, 0, 0);
    codeobj_461a3a6c69162c5fa5ad465bac2c50b5 = MAKE_CODE_OBJECT(module_filename_obj, 631, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[199], NULL, 11, 0, 0);
    codeobj_4aaa24291461810fff62166e2954eaaf = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[200], NULL, 17, 0, 0);
    codeobj_d215a544449a6755732689d73e310f5b = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[47], mod_consts[47], mod_consts[201], NULL, 2, 0, 0);
    codeobj_6c04402bfb07b8ee7107417af94d1a4b = MAKE_CODE_OBJECT(module_filename_obj, 156, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], mod_consts[60], mod_consts[202], NULL, 8, 0, 0);
    codeobj_5528306fb7094adfcad00e3efbbe38f5 = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[46], mod_consts[46], mod_consts[203], NULL, 1, 0, 0);
    codeobj_510d4d7c966542941e0424d03e769e8f = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[152], mod_consts[152], mod_consts[204], NULL, 2, 0, 0);
    codeobj_94dc36f8402a52b94f80b152ed547c8a = MAKE_CODE_OBJECT(module_filename_obj, 343, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[152], mod_consts[152], mod_consts[204], NULL, 2, 0, 0);
    codeobj_e72e9a541dcbfbcaa6c845c59cb82bfe = MAKE_CODE_OBJECT(module_filename_obj, 436, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[152], mod_consts[152], mod_consts[204], NULL, 2, 0, 0);
    codeobj_83882db7a66ba7bc16cab5b908c97c2c = MAKE_CODE_OBJECT(module_filename_obj, 472, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[152], mod_consts[152], mod_consts[204], NULL, 2, 0, 0);
    codeobj_ed8e43e3c218aaa28723f7b4ddcdb442 = MAKE_CODE_OBJECT(module_filename_obj, 607, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[152], mod_consts[152], mod_consts[204], NULL, 2, 0, 0);
    codeobj_fa41a634e0508c802d5f80192a570ded = MAKE_CODE_OBJECT(module_filename_obj, 660, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[152], mod_consts[152], mod_consts[204], NULL, 2, 0, 0);
    codeobj_d5fa26fd2380ef08adeaebf0923895a2 = MAKE_CODE_OBJECT(module_filename_obj, 675, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[205], NULL, 1, 0, 0);
    codeobj_907cc9a9d0865c3241e4b1a548b8dab3 = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[206], NULL, 1, 0, 0);
    codeobj_a84c96b41c6995e726d3252c295bb8b4 = MAKE_CODE_OBJECT(module_filename_obj, 346, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[93], mod_consts[93], mod_consts[207], NULL, 2, 0, 0);
    codeobj_b5029e7a2fd42278705c56d25dcd252e = MAKE_CODE_OBJECT(module_filename_obj, 439, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[93], mod_consts[93], mod_consts[207], NULL, 2, 0, 0);
    codeobj_ea28c591a0f1b5921d3b7fed7c7f0caf = MAKE_CODE_OBJECT(module_filename_obj, 476, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[93], mod_consts[93], mod_consts[207], NULL, 2, 0, 0);
    codeobj_c16df0252bf54330fa22204c5856d653 = MAKE_CODE_OBJECT(module_filename_obj, 610, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[93], mod_consts[93], mod_consts[207], NULL, 2, 0, 0);
    codeobj_120ce4d8125c1fbe7a7415b54ef40704 = MAKE_CODE_OBJECT(module_filename_obj, 665, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[93], mod_consts[93], mod_consts[207], NULL, 2, 0, 0);
    codeobj_dc6ba744c6e7e8be795b64a85496c9f0 = MAKE_CODE_OBJECT(module_filename_obj, 187, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[93], mod_consts[93], mod_consts[208], NULL, 2, 0, 0);
    codeobj_2d757c96e6c206421f6fa918df72bfa6 = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[19], mod_consts[209], NULL, 1, 0, 0);
    codeobj_51790826b23a64a2a1c777ccfcb64ec2 = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[203], NULL, 1, 0, 0);
    codeobj_ebdc54e31a3e03cf255ece4d7dbcaf2f = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[22], mod_consts[206], NULL, 1, 0, 0);
    codeobj_7f06d5abe85d3cb97ac6f9403bb8e7ca = MAKE_CODE_OBJECT(module_filename_obj, 219, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[159], mod_consts[159], mod_consts[210], NULL, 1, 0, 0);
    codeobj_6401b01198d598d0b461f5fce1192be6 = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[49], mod_consts[49], mod_consts[211], NULL, 2, 0, 0);
    codeobj_bb02ec65cb3be4f872cf2eb482b2804a = MAKE_CODE_OBJECT(module_filename_obj, 669, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[21], mod_consts[205], NULL, 1, 0, 0);
    codeobj_da676ec8d2637d264b9ad2e157de67fc = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[21], mod_consts[206], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__10_train(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__11__load_from_state_dict();


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__12_from_float();


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__13_to_float();


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__14___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__15___init__(PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__16_forward();


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__17_from_float();


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__18___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__19___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__1___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__20_forward();


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__21_from_float();


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__22___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__23_forward();


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__24_from_float();


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__25___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__26___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__27_forward();


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__28_from_float();


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__29___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__2_reset_running_stats();


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__30_forward();


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__31_from_float();


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__32_update_bn_stats();


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__33_freeze_bn_stats();


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__3_reset_bn_parameters();


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__4_reset_parameters();


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__5_update_bn_stats();


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__6_freeze_bn_stats();


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__7__forward();


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__8_extra_repr();


static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__9_forward();


// The module function definitions.
static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_in_channels = python_pars[1];
    PyObject *par_out_channels = python_pars[2];
    PyObject *par_kernel_size = python_pars[3];
    PyObject *par_stride = python_pars[4];
    PyObject *par_padding = python_pars[5];
    PyObject *par_dilation = python_pars[6];
    PyObject *par_transposed = python_pars[7];
    PyObject *par_output_padding = python_pars[8];
    PyObject *par_groups = python_pars[9];
    PyObject *par_bias = python_pars[10];
    PyObject *par_padding_mode = python_pars[11];
    PyObject *par_eps = python_pars[12];
    PyObject *par_momentum = python_pars[13];
    PyObject *par_freeze_bn = python_pars[14];
    PyObject *par_qconfig = python_pars[15];
    PyObject *par_dim = python_pars[16];
    struct Nuitka_FrameObject *frame_4aaa24291461810fff62166e2954eaaf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_4aaa24291461810fff62166e2954eaaf = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4aaa24291461810fff62166e2954eaaf)) {
        Py_XDECREF(cache_frame_4aaa24291461810fff62166e2954eaaf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4aaa24291461810fff62166e2954eaaf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4aaa24291461810fff62166e2954eaaf = MAKE_FUNCTION_FRAME(codeobj_4aaa24291461810fff62166e2954eaaf, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4aaa24291461810fff62166e2954eaaf->m_type_description == NULL);
    frame_4aaa24291461810fff62166e2954eaaf = cache_frame_4aaa24291461810fff62166e2954eaaf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4aaa24291461810fff62166e2954eaaf);
    assert(Py_REFCNT(frame_4aaa24291461810fff62166e2954eaaf) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[1]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        CHECK_OBJECT(par_in_channels);
        tmp_args_element_value_2 = par_in_channels;
        CHECK_OBJECT(par_out_channels);
        tmp_args_element_value_3 = par_out_channels;
        CHECK_OBJECT(par_kernel_size);
        tmp_args_element_value_4 = par_kernel_size;
        CHECK_OBJECT(par_stride);
        tmp_args_element_value_5 = par_stride;
        CHECK_OBJECT(par_padding);
        tmp_args_element_value_6 = par_padding;
        CHECK_OBJECT(par_dilation);
        tmp_args_element_value_7 = par_dilation;
        CHECK_OBJECT(par_transposed);
        tmp_args_element_value_8 = par_transposed;
        CHECK_OBJECT(par_output_padding);
        tmp_args_element_value_9 = par_output_padding;
        CHECK_OBJECT(par_groups);
        tmp_args_element_value_10 = par_groups;
        tmp_args_element_value_11 = Py_False;
        CHECK_OBJECT(par_padding_mode);
        tmp_args_element_value_12 = par_padding_mode;
        frame_4aaa24291461810fff62166e2954eaaf->m_frame.f_lineno = 43;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS12(
                tmp_called_instance_1,
                mod_consts[4],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_qconfig);
        tmp_operand_value_1 = par_qconfig;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooooooooooooo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_raise_value_1 = mod_consts[5];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 46;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_qconfig);
        tmp_assattr_value_1 = par_qconfig;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[6], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[7]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 48;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_freeze_bn);
        tmp_assattr_value_2 = par_freeze_bn;
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assattr_value_2 = Py_True;
        condexpr_end_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[8], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_assattr_target_3;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim);
        tmp_subscript_value_1 = par_dim;
        tmp_called_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_out_channels);
        tmp_args_element_value_13 = par_out_channels;
        CHECK_OBJECT(par_eps);
        tmp_args_element_value_14 = par_eps;
        CHECK_OBJECT(par_momentum);
        tmp_args_element_value_15 = par_momentum;
        tmp_args_element_value_16 = Py_True;
        tmp_args_element_value_17 = Py_True;
        frame_4aaa24291461810fff62166e2954eaaf->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_assattr_value_3 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[10], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[6]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4aaa24291461810fff62166e2954eaaf->m_frame.f_lineno = 50;
        tmp_assattr_value_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[11]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[12], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_bias);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_bias);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_assattr_target_5;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_out_channels);
        tmp_args_element_value_19 = par_out_channels;
        frame_4aaa24291461810fff62166e2954eaaf->m_frame.f_lineno = 52;
        tmp_args_element_value_18 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[15], tmp_args_element_value_19);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4aaa24291461810fff62166e2954eaaf->m_frame.f_lineno = 52;
        tmp_assattr_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_18);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[16], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        frame_4aaa24291461810fff62166e2954eaaf->m_frame.f_lineno = 54;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_4,
            mod_consts[17],
            &PyTuple_GET_ITEM(mod_consts[18], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_end_2:;
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        frame_4aaa24291461810fff62166e2954eaaf->m_frame.f_lineno = 55;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[19]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[7]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_4;
        CHECK_OBJECT(par_freeze_bn);
        tmp_truth_name_4 = CHECK_IF_TRUE(par_freeze_bn);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        frame_4aaa24291461810fff62166e2954eaaf->m_frame.f_lineno = 61;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[20]);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_7 = par_self;
        frame_4aaa24291461810fff62166e2954eaaf->m_frame.f_lineno = 63;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[21]);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_end_4:;
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(par_self);
        tmp_called_instance_8 = par_self;
        frame_4aaa24291461810fff62166e2954eaaf->m_frame.f_lineno = 65;
        tmp_call_result_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[20]);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_end_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4aaa24291461810fff62166e2954eaaf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4aaa24291461810fff62166e2954eaaf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4aaa24291461810fff62166e2954eaaf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4aaa24291461810fff62166e2954eaaf,
        type_description_1,
        par_self,
        par_in_channels,
        par_out_channels,
        par_kernel_size,
        par_stride,
        par_padding,
        par_dilation,
        par_transposed,
        par_output_padding,
        par_groups,
        par_bias,
        par_padding_mode,
        par_eps,
        par_momentum,
        par_freeze_bn,
        par_qconfig,
        par_dim
    );


    // Release cached frame if used for exception.
    if (frame_4aaa24291461810fff62166e2954eaaf == cache_frame_4aaa24291461810fff62166e2954eaaf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4aaa24291461810fff62166e2954eaaf);
        cache_frame_4aaa24291461810fff62166e2954eaaf = NULL;
    }

    assertFrameObject(frame_4aaa24291461810fff62166e2954eaaf);

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
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_out_channels);
    Py_DECREF(par_out_channels);
    CHECK_OBJECT(par_kernel_size);
    Py_DECREF(par_kernel_size);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    CHECK_OBJECT(par_dilation);
    Py_DECREF(par_dilation);
    CHECK_OBJECT(par_transposed);
    Py_DECREF(par_transposed);
    CHECK_OBJECT(par_output_padding);
    Py_DECREF(par_output_padding);
    CHECK_OBJECT(par_groups);
    Py_DECREF(par_groups);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);
    CHECK_OBJECT(par_padding_mode);
    Py_DECREF(par_padding_mode);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    CHECK_OBJECT(par_momentum);
    Py_DECREF(par_momentum);
    CHECK_OBJECT(par_freeze_bn);
    Py_DECREF(par_freeze_bn);
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_out_channels);
    Py_DECREF(par_out_channels);
    CHECK_OBJECT(par_kernel_size);
    Py_DECREF(par_kernel_size);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    CHECK_OBJECT(par_dilation);
    Py_DECREF(par_dilation);
    CHECK_OBJECT(par_transposed);
    Py_DECREF(par_transposed);
    CHECK_OBJECT(par_output_padding);
    Py_DECREF(par_output_padding);
    CHECK_OBJECT(par_groups);
    Py_DECREF(par_groups);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);
    CHECK_OBJECT(par_padding_mode);
    Py_DECREF(par_padding_mode);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    CHECK_OBJECT(par_momentum);
    Py_DECREF(par_momentum);
    CHECK_OBJECT(par_freeze_bn);
    Py_DECREF(par_freeze_bn);
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__2_reset_running_stats(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ebdc54e31a3e03cf255ece4d7dbcaf2f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ebdc54e31a3e03cf255ece4d7dbcaf2f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ebdc54e31a3e03cf255ece4d7dbcaf2f)) {
        Py_XDECREF(cache_frame_ebdc54e31a3e03cf255ece4d7dbcaf2f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ebdc54e31a3e03cf255ece4d7dbcaf2f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ebdc54e31a3e03cf255ece4d7dbcaf2f = MAKE_FUNCTION_FRAME(codeobj_ebdc54e31a3e03cf255ece4d7dbcaf2f, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ebdc54e31a3e03cf255ece4d7dbcaf2f->m_type_description == NULL);
    frame_ebdc54e31a3e03cf255ece4d7dbcaf2f = cache_frame_ebdc54e31a3e03cf255ece4d7dbcaf2f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ebdc54e31a3e03cf255ece4d7dbcaf2f);
    assert(Py_REFCNT(frame_ebdc54e31a3e03cf255ece4d7dbcaf2f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[10]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ebdc54e31a3e03cf255ece4d7dbcaf2f->m_frame.f_lineno = 68;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[22]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ebdc54e31a3e03cf255ece4d7dbcaf2f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ebdc54e31a3e03cf255ece4d7dbcaf2f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ebdc54e31a3e03cf255ece4d7dbcaf2f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ebdc54e31a3e03cf255ece4d7dbcaf2f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ebdc54e31a3e03cf255ece4d7dbcaf2f == cache_frame_ebdc54e31a3e03cf255ece4d7dbcaf2f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ebdc54e31a3e03cf255ece4d7dbcaf2f);
        cache_frame_ebdc54e31a3e03cf255ece4d7dbcaf2f = NULL;
    }

    assertFrameObject(frame_ebdc54e31a3e03cf255ece4d7dbcaf2f);

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


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__3_reset_bn_parameters(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_fan_in = NULL;
    PyObject *var__ = NULL;
    PyObject *var_bound = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_2d757c96e6c206421f6fa918df72bfa6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    static struct Nuitka_FrameObject *cache_frame_2d757c96e6c206421f6fa918df72bfa6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2d757c96e6c206421f6fa918df72bfa6)) {
        Py_XDECREF(cache_frame_2d757c96e6c206421f6fa918df72bfa6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2d757c96e6c206421f6fa918df72bfa6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2d757c96e6c206421f6fa918df72bfa6 = MAKE_FUNCTION_FRAME(codeobj_2d757c96e6c206421f6fa918df72bfa6, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2d757c96e6c206421f6fa918df72bfa6->m_type_description == NULL);
    frame_2d757c96e6c206421f6fa918df72bfa6 = cache_frame_2d757c96e6c206421f6fa918df72bfa6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2d757c96e6c206421f6fa918df72bfa6);
    assert(Py_REFCNT(frame_2d757c96e6c206421f6fa918df72bfa6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[10]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_2d757c96e6c206421f6fa918df72bfa6->m_frame.f_lineno = 71;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[22]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[24]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[10]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 72;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[11]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 72;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_2d757c96e6c206421f6fa918df72bfa6->m_frame.f_lineno = 72;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[25]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[10]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 73;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[16]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 73;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_2d757c96e6c206421f6fa918df72bfa6->m_frame.f_lineno = 73;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[16]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
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
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_10;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[26]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[11]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 76;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_2d757c96e6c206421f6fa918df72bfa6->m_frame.f_lineno = 76;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooo";
            goto try_except_handler_2;
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
            exception_lineno = 76;
            goto try_except_handler_3;
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
            exception_lineno = 76;
            goto try_except_handler_3;
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
                    exception_lineno = 76;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[27];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooo";
            exception_lineno = 76;
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
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_fan_in == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_fan_in = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var__ == NULL);
        Py_INCREF(tmp_assign_source_5);
        var__ = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_4;
        tmp_truediv_expr_left_1 = mod_consts[28];
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_fan_in);
        tmp_args_element_value_4 = var_fan_in;
        frame_2d757c96e6c206421f6fa918df72bfa6->m_frame.f_lineno = 77;
        tmp_truediv_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[30], tmp_args_element_value_4);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_bound == NULL);
        var_bound = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[24]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[16]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 78;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bound);
        tmp_operand_value_1 = var_bound;
        tmp_args_element_value_6 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 78;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bound);
        tmp_args_element_value_7 = var_bound;
        frame_2d757c96e6c206421f6fa918df72bfa6->m_frame.f_lineno = 78;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2d757c96e6c206421f6fa918df72bfa6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2d757c96e6c206421f6fa918df72bfa6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2d757c96e6c206421f6fa918df72bfa6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2d757c96e6c206421f6fa918df72bfa6,
        type_description_1,
        par_self,
        var_fan_in,
        var__,
        var_bound
    );


    // Release cached frame if used for exception.
    if (frame_2d757c96e6c206421f6fa918df72bfa6 == cache_frame_2d757c96e6c206421f6fa918df72bfa6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2d757c96e6c206421f6fa918df72bfa6);
        cache_frame_2d757c96e6c206421f6fa918df72bfa6 = NULL;
    }

    assertFrameObject(frame_2d757c96e6c206421f6fa918df72bfa6);

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
    Py_XDECREF(var_fan_in);
    var_fan_in = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_bound);
    var_bound = NULL;
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

    Py_XDECREF(var_fan_in);
    var_fan_in = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_bound);
    var_bound = NULL;
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


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__4_reset_parameters(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_51790826b23a64a2a1c777ccfcb64ec2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_51790826b23a64a2a1c777ccfcb64ec2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_51790826b23a64a2a1c777ccfcb64ec2)) {
        Py_XDECREF(cache_frame_51790826b23a64a2a1c777ccfcb64ec2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_51790826b23a64a2a1c777ccfcb64ec2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_51790826b23a64a2a1c777ccfcb64ec2 = MAKE_FUNCTION_FRAME(codeobj_51790826b23a64a2a1c777ccfcb64ec2, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_51790826b23a64a2a1c777ccfcb64ec2->m_type_description == NULL);
    frame_51790826b23a64a2a1c777ccfcb64ec2 = cache_frame_51790826b23a64a2a1c777ccfcb64ec2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_51790826b23a64a2a1c777ccfcb64ec2);
    assert(Py_REFCNT(frame_51790826b23a64a2a1c777ccfcb64ec2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER2(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        frame_51790826b23a64a2a1c777ccfcb64ec2->m_frame.f_lineno = 81;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[32]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_51790826b23a64a2a1c777ccfcb64ec2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_51790826b23a64a2a1c777ccfcb64ec2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_51790826b23a64a2a1c777ccfcb64ec2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_51790826b23a64a2a1c777ccfcb64ec2,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_51790826b23a64a2a1c777ccfcb64ec2 == cache_frame_51790826b23a64a2a1c777ccfcb64ec2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_51790826b23a64a2a1c777ccfcb64ec2);
        cache_frame_51790826b23a64a2a1c777ccfcb64ec2 = NULL;
    }

    assertFrameObject(frame_51790826b23a64a2a1c777ccfcb64ec2);

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


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__5_update_bn_stats(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_da676ec8d2637d264b9ad2e157de67fc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_da676ec8d2637d264b9ad2e157de67fc = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_da676ec8d2637d264b9ad2e157de67fc)) {
        Py_XDECREF(cache_frame_da676ec8d2637d264b9ad2e157de67fc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_da676ec8d2637d264b9ad2e157de67fc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_da676ec8d2637d264b9ad2e157de67fc = MAKE_FUNCTION_FRAME(codeobj_da676ec8d2637d264b9ad2e157de67fc, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_da676ec8d2637d264b9ad2e157de67fc->m_type_description == NULL);
    frame_da676ec8d2637d264b9ad2e157de67fc = cache_frame_da676ec8d2637d264b9ad2e157de67fc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_da676ec8d2637d264b9ad2e157de67fc);
    assert(Py_REFCNT(frame_da676ec8d2637d264b9ad2e157de67fc) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[8], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_expression_value_1;
        tmp_assattr_value_2 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[10]);
        if (tmp_assattr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[7], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_target_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_da676ec8d2637d264b9ad2e157de67fc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_da676ec8d2637d264b9ad2e157de67fc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_da676ec8d2637d264b9ad2e157de67fc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_da676ec8d2637d264b9ad2e157de67fc,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_da676ec8d2637d264b9ad2e157de67fc == cache_frame_da676ec8d2637d264b9ad2e157de67fc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_da676ec8d2637d264b9ad2e157de67fc);
        cache_frame_da676ec8d2637d264b9ad2e157de67fc = NULL;
    }

    assertFrameObject(frame_da676ec8d2637d264b9ad2e157de67fc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
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


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__6_freeze_bn_stats(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_907cc9a9d0865c3241e4b1a548b8dab3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_907cc9a9d0865c3241e4b1a548b8dab3 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_907cc9a9d0865c3241e4b1a548b8dab3)) {
        Py_XDECREF(cache_frame_907cc9a9d0865c3241e4b1a548b8dab3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_907cc9a9d0865c3241e4b1a548b8dab3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_907cc9a9d0865c3241e4b1a548b8dab3 = MAKE_FUNCTION_FRAME(codeobj_907cc9a9d0865c3241e4b1a548b8dab3, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_907cc9a9d0865c3241e4b1a548b8dab3->m_type_description == NULL);
    frame_907cc9a9d0865c3241e4b1a548b8dab3 = cache_frame_907cc9a9d0865c3241e4b1a548b8dab3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_907cc9a9d0865c3241e4b1a548b8dab3);
    assert(Py_REFCNT(frame_907cc9a9d0865c3241e4b1a548b8dab3) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[8], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_expression_value_1;
        tmp_assattr_value_2 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[10]);
        if (tmp_assattr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[7], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_target_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_907cc9a9d0865c3241e4b1a548b8dab3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_907cc9a9d0865c3241e4b1a548b8dab3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_907cc9a9d0865c3241e4b1a548b8dab3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_907cc9a9d0865c3241e4b1a548b8dab3,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_907cc9a9d0865c3241e4b1a548b8dab3 == cache_frame_907cc9a9d0865c3241e4b1a548b8dab3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_907cc9a9d0865c3241e4b1a548b8dab3);
        cache_frame_907cc9a9d0865c3241e4b1a548b8dab3 = NULL;
    }

    assertFrameObject(frame_907cc9a9d0865c3241e4b1a548b8dab3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
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


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__7__forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *var_running_std = NULL;
    PyObject *var_scale_factor = NULL;
    PyObject *var_weight_shape = NULL;
    PyObject *var_bias_shape = NULL;
    PyObject *var_scaled_weight = NULL;
    PyObject *var_zero_bias = NULL;
    PyObject *var_conv = NULL;
    PyObject *var_conv_orig = NULL;
    struct Nuitka_FrameObject *frame_d215a544449a6755732689d73e310f5b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d215a544449a6755732689d73e310f5b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d215a544449a6755732689d73e310f5b)) {
        Py_XDECREF(cache_frame_d215a544449a6755732689d73e310f5b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d215a544449a6755732689d73e310f5b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d215a544449a6755732689d73e310f5b = MAKE_FUNCTION_FRAME(codeobj_d215a544449a6755732689d73e310f5b, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d215a544449a6755732689d73e310f5b->m_type_description == NULL);
    frame_d215a544449a6755732689d73e310f5b = cache_frame_d215a544449a6755732689d73e310f5b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d215a544449a6755732689d73e310f5b);
    assert(Py_REFCNT(frame_d215a544449a6755732689d73e310f5b) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[10]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[33]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooo";
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
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 94;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[30]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[10]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 95;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[33]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 95;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[10]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 95;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[34]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 95;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 95;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d215a544449a6755732689d73e310f5b->m_frame.f_lineno = 95;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_running_std == NULL);
        var_running_std = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[10]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[11]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_running_std);
        tmp_truediv_expr_right_1 = var_running_std;
        tmp_assign_source_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_scale_factor == NULL);
        var_scale_factor = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        tmp_mult_expr_left_1 = MAKE_LIST1(mod_consts[28]);
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[11]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 97;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[35]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 97;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 97;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_MULT_OBJECT_LIST_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        assert(!(tmp_assign_source_3 == NULL));
        assert(var_weight_shape == NULL);
        var_weight_shape = tmp_assign_source_3;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        tmp_ass_subvalue_1 = mod_consts[36];
        CHECK_OBJECT(var_weight_shape);
        tmp_ass_subscribed_1 = var_weight_shape;
        tmp_ass_subscript_1 = mod_consts[37];
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1);
        if (tmp_ass_subscript_res_1 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        tmp_mult_expr_left_2 = MAKE_LIST1(mod_consts[28]);
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[11]);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_2);

            exception_lineno = 99;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[35]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_len_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_2);

            exception_lineno = 99;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_2 = BUILTIN_LEN(tmp_len_arg_2);
        Py_DECREF(tmp_len_arg_2);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_2);

            exception_lineno = 99;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_MULT_OBJECT_LIST_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        Py_DECREF(tmp_mult_expr_right_2);
        assert(!(tmp_assign_source_4 == NULL));
        assert(var_bias_shape == NULL);
        var_bias_shape = tmp_assign_source_4;
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        tmp_ass_subvalue_2 = mod_consts[36];
        CHECK_OBJECT(var_bias_shape);
        tmp_ass_subscribed_2 = var_bias_shape;
        tmp_ass_subscript_2 = mod_consts[28];
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_2, tmp_ass_subscript_2, 1, tmp_ass_subvalue_2);
        if (tmp_ass_subscript_res_2 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[12]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_mult_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[11]);
        if (tmp_mult_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 101;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_scale_factor);
        tmp_called_instance_1 = var_scale_factor;
        CHECK_OBJECT(var_weight_shape);
        tmp_args_element_value_3 = var_weight_shape;
        frame_d215a544449a6755732689d73e310f5b->m_frame.f_lineno = 101;
        tmp_mult_expr_right_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[38], tmp_args_element_value_3);
        if (tmp_mult_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_mult_expr_left_3);

            exception_lineno = 101;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_left_3);
        Py_DECREF(tmp_mult_expr_right_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 101;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d215a544449a6755732689d73e310f5b->m_frame.f_lineno = 101;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_scaled_weight == NULL);
        var_scaled_weight = tmp_assign_source_5;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[16]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_18;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[39]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_18 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[16]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 105;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d215a544449a6755732689d73e310f5b->m_frame.f_lineno = 105;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_zero_bias == NULL);
        var_zero_bias = tmp_assign_source_6;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_21;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[40]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_20 = par_self;
        tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[41]);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 107;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_scaled_weight);
        tmp_expression_value_21 = var_scaled_weight;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[42]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 107;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d215a544449a6755732689d73e310f5b->m_frame.f_lineno = 107;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[43]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_zero_bias == NULL);
        var_zero_bias = tmp_assign_source_7;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_22 = par_self;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[44]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_input);
        tmp_args_element_value_5 = par_input;
        if (var_scaled_weight == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 108;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = var_scaled_weight;
        CHECK_OBJECT(var_zero_bias);
        tmp_args_element_value_7 = var_zero_bias;
        frame_d215a544449a6755732689d73e310f5b->m_frame.f_lineno = 108;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_conv == NULL);
        var_conv = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(var_conv);
        tmp_truediv_expr_left_2 = var_conv;
        CHECK_OBJECT(var_scale_factor);
        tmp_called_instance_2 = var_scale_factor;
        CHECK_OBJECT(var_bias_shape);
        tmp_args_element_value_8 = var_bias_shape;
        frame_d215a544449a6755732689d73e310f5b->m_frame.f_lineno = 109;
        tmp_truediv_expr_right_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[38], tmp_args_element_value_8);
        if (tmp_truediv_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_right_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_conv_orig == NULL);
        var_conv_orig = tmp_assign_source_9;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_23;
        CHECK_OBJECT(par_self);
        tmp_expression_value_23 = par_self;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[16]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(var_conv_orig);
        tmp_add_expr_left_2 = var_conv_orig;
        CHECK_OBJECT(par_self);
        tmp_expression_value_24 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[16]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bias_shape);
        tmp_args_element_value_9 = var_bias_shape;
        frame_d215a544449a6755732689d73e310f5b->m_frame.f_lineno = 111;
        tmp_add_expr_right_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[38], tmp_args_element_value_9);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_add_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_conv_orig;
            assert(old != NULL);
            var_conv_orig = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(var_conv_orig);
        tmp_args_element_value_10 = var_conv_orig;
        frame_d215a544449a6755732689d73e310f5b->m_frame.f_lineno = 112;
        tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[10], tmp_args_element_value_10);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_conv;
            assert(old != NULL);
            var_conv = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d215a544449a6755732689d73e310f5b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d215a544449a6755732689d73e310f5b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d215a544449a6755732689d73e310f5b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d215a544449a6755732689d73e310f5b,
        type_description_1,
        par_self,
        par_input,
        var_running_std,
        var_scale_factor,
        var_weight_shape,
        var_bias_shape,
        var_scaled_weight,
        var_zero_bias,
        var_conv,
        var_conv_orig
    );


    // Release cached frame if used for exception.
    if (frame_d215a544449a6755732689d73e310f5b == cache_frame_d215a544449a6755732689d73e310f5b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d215a544449a6755732689d73e310f5b);
        cache_frame_d215a544449a6755732689d73e310f5b = NULL;
    }

    assertFrameObject(frame_d215a544449a6755732689d73e310f5b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_conv);
    tmp_return_value = var_conv;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_running_std);
    Py_DECREF(var_running_std);
    var_running_std = NULL;
    CHECK_OBJECT(var_scale_factor);
    Py_DECREF(var_scale_factor);
    var_scale_factor = NULL;
    CHECK_OBJECT(var_weight_shape);
    Py_DECREF(var_weight_shape);
    var_weight_shape = NULL;
    CHECK_OBJECT(var_bias_shape);
    Py_DECREF(var_bias_shape);
    var_bias_shape = NULL;
    Py_XDECREF(var_scaled_weight);
    var_scaled_weight = NULL;
    CHECK_OBJECT(var_zero_bias);
    Py_DECREF(var_zero_bias);
    var_zero_bias = NULL;
    CHECK_OBJECT(var_conv);
    Py_DECREF(var_conv);
    var_conv = NULL;
    CHECK_OBJECT(var_conv_orig);
    Py_DECREF(var_conv_orig);
    var_conv_orig = NULL;
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

    Py_XDECREF(var_running_std);
    var_running_std = NULL;
    Py_XDECREF(var_scale_factor);
    var_scale_factor = NULL;
    Py_XDECREF(var_weight_shape);
    var_weight_shape = NULL;
    Py_XDECREF(var_bias_shape);
    var_bias_shape = NULL;
    Py_XDECREF(var_scaled_weight);
    var_scaled_weight = NULL;
    Py_XDECREF(var_zero_bias);
    var_zero_bias = NULL;
    Py_XDECREF(var_conv);
    var_conv = NULL;
    Py_XDECREF(var_conv_orig);
    var_conv_orig = NULL;
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
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__8_extra_repr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5528306fb7094adfcad00e3efbbe38f5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5528306fb7094adfcad00e3efbbe38f5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5528306fb7094adfcad00e3efbbe38f5)) {
        Py_XDECREF(cache_frame_5528306fb7094adfcad00e3efbbe38f5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5528306fb7094adfcad00e3efbbe38f5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5528306fb7094adfcad00e3efbbe38f5 = MAKE_FUNCTION_FRAME(codeobj_5528306fb7094adfcad00e3efbbe38f5, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5528306fb7094adfcad00e3efbbe38f5->m_type_description == NULL);
    frame_5528306fb7094adfcad00e3efbbe38f5 = cache_frame_5528306fb7094adfcad00e3efbbe38f5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5528306fb7094adfcad00e3efbbe38f5);
    assert(Py_REFCNT(frame_5528306fb7094adfcad00e3efbbe38f5) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER2(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        frame_5528306fb7094adfcad00e3efbbe38f5->m_frame.f_lineno = 117;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[46]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oN";
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
        exception_tb = MAKE_TRACEBACK(frame_5528306fb7094adfcad00e3efbbe38f5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5528306fb7094adfcad00e3efbbe38f5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5528306fb7094adfcad00e3efbbe38f5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5528306fb7094adfcad00e3efbbe38f5,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_5528306fb7094adfcad00e3efbbe38f5 == cache_frame_5528306fb7094adfcad00e3efbbe38f5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5528306fb7094adfcad00e3efbbe38f5);
        cache_frame_5528306fb7094adfcad00e3efbbe38f5 = NULL;
    }

    assertFrameObject(frame_5528306fb7094adfcad00e3efbbe38f5);

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


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__9_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_input = python_pars[1];
    struct Nuitka_FrameObject *frame_510d4d7c966542941e0424d03e769e8f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_510d4d7c966542941e0424d03e769e8f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_510d4d7c966542941e0424d03e769e8f)) {
        Py_XDECREF(cache_frame_510d4d7c966542941e0424d03e769e8f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_510d4d7c966542941e0424d03e769e8f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_510d4d7c966542941e0424d03e769e8f = MAKE_FUNCTION_FRAME(codeobj_510d4d7c966542941e0424d03e769e8f, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_510d4d7c966542941e0424d03e769e8f->m_type_description == NULL);
    frame_510d4d7c966542941e0424d03e769e8f = cache_frame_510d4d7c966542941e0424d03e769e8f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_510d4d7c966542941e0424d03e769e8f);
    assert(Py_REFCNT(frame_510d4d7c966542941e0424d03e769e8f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_input);
        tmp_args_element_value_1 = par_input;
        frame_510d4d7c966542941e0424d03e769e8f->m_frame.f_lineno = 120;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[47], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
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
        exception_tb = MAKE_TRACEBACK(frame_510d4d7c966542941e0424d03e769e8f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_510d4d7c966542941e0424d03e769e8f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_510d4d7c966542941e0424d03e769e8f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_510d4d7c966542941e0424d03e769e8f,
        type_description_1,
        par_self,
        par_input
    );


    // Release cached frame if used for exception.
    if (frame_510d4d7c966542941e0424d03e769e8f == cache_frame_510d4d7c966542941e0424d03e769e8f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_510d4d7c966542941e0424d03e769e8f);
        cache_frame_510d4d7c966542941e0424d03e769e8f = NULL;
    }

    assertFrameObject(frame_510d4d7c966542941e0424d03e769e8f);

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
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__10_train(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_mode = python_pars[1];
    PyObject *var_module = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_6401b01198d598d0b461f5fce1192be6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_6401b01198d598d0b461f5fce1192be6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6401b01198d598d0b461f5fce1192be6)) {
        Py_XDECREF(cache_frame_6401b01198d598d0b461f5fce1192be6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6401b01198d598d0b461f5fce1192be6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6401b01198d598d0b461f5fce1192be6 = MAKE_FUNCTION_FRAME(codeobj_6401b01198d598d0b461f5fce1192be6, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6401b01198d598d0b461f5fce1192be6->m_type_description == NULL);
    frame_6401b01198d598d0b461f5fce1192be6 = cache_frame_6401b01198d598d0b461f5fce1192be6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6401b01198d598d0b461f5fce1192be6);
    assert(Py_REFCNT(frame_6401b01198d598d0b461f5fce1192be6) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_mode);
        tmp_assattr_value_1 = par_mode;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[7], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_6401b01198d598d0b461f5fce1192be6->m_frame.f_lineno = 130;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[48]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooo";
                exception_lineno = 130;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_module;
            var_module = tmp_assign_source_3;
            Py_INCREF(var_module);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_module);
        tmp_expression_value_2 = var_module;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[49]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        if (par_mode == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 131;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_1 = par_mode;
        frame_6401b01198d598d0b461f5fce1192be6->m_frame.f_lineno = 131;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 130;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6401b01198d598d0b461f5fce1192be6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6401b01198d598d0b461f5fce1192be6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6401b01198d598d0b461f5fce1192be6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6401b01198d598d0b461f5fce1192be6,
        type_description_1,
        par_self,
        par_mode,
        var_module
    );


    // Release cached frame if used for exception.
    if (frame_6401b01198d598d0b461f5fce1192be6 == cache_frame_6401b01198d598d0b461f5fce1192be6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6401b01198d598d0b461f5fce1192be6);
        cache_frame_6401b01198d598d0b461f5fce1192be6 = NULL;
    }

    assertFrameObject(frame_6401b01198d598d0b461f5fce1192be6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_module);
    var_module = NULL;
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

    Py_XDECREF(var_module);
    var_module = NULL;
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


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__11__load_from_state_dict(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_state_dict = python_pars[1];
    PyObject *par_prefix = python_pars[2];
    PyObject *par_local_metadata = python_pars[3];
    PyObject *par_strict = python_pars[4];
    PyObject *par_missing_keys = python_pars[5];
    PyObject *par_unexpected_keys = python_pars[6];
    PyObject *par_error_msgs = python_pars[7];
    PyObject *var_version = NULL;
    PyObject *var_v2_to_v1_names = NULL;
    PyObject *var_v2_name = NULL;
    PyObject *var_v1_name = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_6c04402bfb07b8ee7107417af94d1a4b;
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
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_6c04402bfb07b8ee7107417af94d1a4b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6c04402bfb07b8ee7107417af94d1a4b)) {
        Py_XDECREF(cache_frame_6c04402bfb07b8ee7107417af94d1a4b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6c04402bfb07b8ee7107417af94d1a4b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6c04402bfb07b8ee7107417af94d1a4b = MAKE_FUNCTION_FRAME(codeobj_6c04402bfb07b8ee7107417af94d1a4b, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6c04402bfb07b8ee7107417af94d1a4b->m_type_description == NULL);
    frame_6c04402bfb07b8ee7107417af94d1a4b = cache_frame_6c04402bfb07b8ee7107417af94d1a4b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6c04402bfb07b8ee7107417af94d1a4b);
    assert(Py_REFCNT(frame_6c04402bfb07b8ee7107417af94d1a4b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_local_metadata);
        tmp_expression_value_1 = par_local_metadata;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[52]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        frame_6c04402bfb07b8ee7107417af94d1a4b->m_frame.f_lineno = 157;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[53]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        assert(var_version == NULL);
        var_version = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_version);
        tmp_cmp_expr_left_1 = var_version;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_version);
        tmp_cmp_expr_left_2 = var_version;
        tmp_cmp_expr_right_2 = mod_consts[28];
        tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
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
        tmp_assign_source_2 = DICT_COPY(mod_consts[54]);
        assert(var_v2_to_v1_names == NULL);
        var_v2_to_v1_names = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_dict_arg_1;
        CHECK_OBJECT(var_v2_to_v1_names);
        tmp_dict_arg_1 = var_v2_to_v1_names;
        tmp_iter_arg_1 = DICT_ITERITEMS(tmp_dict_arg_1);
        assert(!(tmp_iter_arg_1 == NULL));
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooooN";
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
                type_description_1 = "ooooooooooooN";
                exception_lineno = 167;
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


            exception_lineno = 167;
            type_description_1 = "ooooooooooooN";
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


            type_description_1 = "ooooooooooooN";
            exception_lineno = 167;
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


            type_description_1 = "ooooooooooooN";
            exception_lineno = 167;
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

                    type_description_1 = "ooooooooooooN";
                    exception_lineno = 167;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[27];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooN";
            exception_lineno = 167;
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
            PyObject *old = var_v2_name;
            var_v2_name = tmp_assign_source_8;
            Py_INCREF(var_v2_name);
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
            PyObject *old = var_v1_name;
            var_v1_name = tmp_assign_source_9;
            Py_INCREF(var_v1_name);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        if (par_prefix == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 168;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }

        tmp_add_expr_left_1 = par_prefix;
        CHECK_OBJECT(var_v1_name);
        tmp_add_expr_right_1 = var_v1_name;
        tmp_cmp_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        if (par_state_dict == NULL) {
            Py_DECREF(tmp_cmp_expr_left_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 168;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_right_3 = par_state_dict;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
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
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        if (par_state_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = par_state_dict;
        if (par_prefix == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }

        tmp_add_expr_left_2 = par_prefix;
        CHECK_OBJECT(var_v1_name);
        tmp_add_expr_right_2 = var_v1_name;
        tmp_subscript_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        if (par_state_dict == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = par_state_dict;
        if (par_prefix == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }

        tmp_add_expr_left_3 = par_prefix;
        CHECK_OBJECT(var_v2_name);
        tmp_add_expr_right_3 = var_v2_name;
        tmp_ass_subscript_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 169;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        if (par_state_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 170;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = par_state_dict;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[57]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        if (par_prefix == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 170;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }

        tmp_add_expr_left_4 = par_prefix;
        CHECK_OBJECT(var_v1_name);
        tmp_add_expr_right_4 = var_v1_name;
        tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 170;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        frame_6c04402bfb07b8ee7107417af94d1a4b->m_frame.f_lineno = 170;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        if (par_prefix == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }

        tmp_add_expr_left_5 = par_prefix;
        CHECK_OBJECT(var_v2_name);
        tmp_add_expr_right_5 = var_v2_name;
        tmp_cmp_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        if (par_state_dict == NULL) {
            Py_DECREF(tmp_cmp_expr_left_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_right_4 = par_state_dict;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_strict);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_strict);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        if (par_missing_keys == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 182;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }

        tmp_expression_value_4 = par_missing_keys;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[59]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        if (par_prefix == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 182;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }

        tmp_add_expr_left_6 = par_prefix;
        CHECK_OBJECT(var_v2_name);
        tmp_add_expr_right_6 = var_v2_name;
        tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 182;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        frame_6c04402bfb07b8ee7107417af94d1a4b->m_frame.f_lineno = 182;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;
    branch_no_3:;
    branch_end_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 167;
        type_description_1 = "ooooooooooooN";
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
    branch_no_1:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_5 = BUILTIN_SUPER2(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[60]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        if (par_state_dict == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 185;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = par_state_dict;
        if (par_prefix == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 185;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = par_prefix;
        CHECK_OBJECT(par_local_metadata);
        tmp_args_element_value_5 = par_local_metadata;
        CHECK_OBJECT(par_strict);
        tmp_args_element_value_6 = par_strict;
        if (par_missing_keys == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 185;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_7 = par_missing_keys;
        CHECK_OBJECT(par_unexpected_keys);
        tmp_args_element_value_8 = par_unexpected_keys;
        CHECK_OBJECT(par_error_msgs);
        tmp_args_element_value_9 = par_error_msgs;
        frame_6c04402bfb07b8ee7107417af94d1a4b->m_frame.f_lineno = 184;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6c04402bfb07b8ee7107417af94d1a4b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6c04402bfb07b8ee7107417af94d1a4b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6c04402bfb07b8ee7107417af94d1a4b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6c04402bfb07b8ee7107417af94d1a4b,
        type_description_1,
        par_self,
        par_state_dict,
        par_prefix,
        par_local_metadata,
        par_strict,
        par_missing_keys,
        par_unexpected_keys,
        par_error_msgs,
        var_version,
        var_v2_to_v1_names,
        var_v2_name,
        var_v1_name,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_6c04402bfb07b8ee7107417af94d1a4b == cache_frame_6c04402bfb07b8ee7107417af94d1a4b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6c04402bfb07b8ee7107417af94d1a4b);
        cache_frame_6c04402bfb07b8ee7107417af94d1a4b = NULL;
    }

    assertFrameObject(frame_6c04402bfb07b8ee7107417af94d1a4b);

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
    CHECK_OBJECT(var_version);
    Py_DECREF(var_version);
    var_version = NULL;
    Py_XDECREF(var_v2_to_v1_names);
    var_v2_to_v1_names = NULL;
    Py_XDECREF(var_v2_name);
    var_v2_name = NULL;
    Py_XDECREF(var_v1_name);
    var_v1_name = NULL;
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

    Py_XDECREF(var_version);
    var_version = NULL;
    Py_XDECREF(var_v2_to_v1_names);
    var_v2_to_v1_names = NULL;
    Py_XDECREF(var_v2_name);
    var_v2_name = NULL;
    Py_XDECREF(var_v1_name);
    var_v1_name = NULL;
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
    CHECK_OBJECT(par_state_dict);
    Py_DECREF(par_state_dict);
    CHECK_OBJECT(par_prefix);
    Py_DECREF(par_prefix);
    CHECK_OBJECT(par_local_metadata);
    Py_DECREF(par_local_metadata);
    CHECK_OBJECT(par_strict);
    Py_DECREF(par_strict);
    CHECK_OBJECT(par_missing_keys);
    Py_DECREF(par_missing_keys);
    CHECK_OBJECT(par_unexpected_keys);
    Py_DECREF(par_unexpected_keys);
    CHECK_OBJECT(par_error_msgs);
    Py_DECREF(par_error_msgs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_state_dict);
    Py_DECREF(par_state_dict);
    CHECK_OBJECT(par_prefix);
    Py_DECREF(par_prefix);
    CHECK_OBJECT(par_local_metadata);
    Py_DECREF(par_local_metadata);
    CHECK_OBJECT(par_strict);
    Py_DECREF(par_strict);
    CHECK_OBJECT(par_missing_keys);
    Py_DECREF(par_missing_keys);
    CHECK_OBJECT(par_unexpected_keys);
    Py_DECREF(par_unexpected_keys);
    CHECK_OBJECT(par_error_msgs);
    Py_DECREF(par_error_msgs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__12_from_float(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_mod = python_pars[1];
    PyObject *var_qconfig = NULL;
    PyObject *var_conv = NULL;
    PyObject *var_bn = NULL;
    PyObject *var_qat_convbn = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_dc6ba744c6e7e8be795b64a85496c9f0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
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
    static struct Nuitka_FrameObject *cache_frame_dc6ba744c6e7e8be795b64a85496c9f0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_dc6ba744c6e7e8be795b64a85496c9f0)) {
        Py_XDECREF(cache_frame_dc6ba744c6e7e8be795b64a85496c9f0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dc6ba744c6e7e8be795b64a85496c9f0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dc6ba744c6e7e8be795b64a85496c9f0 = MAKE_FUNCTION_FRAME(codeobj_dc6ba744c6e7e8be795b64a85496c9f0, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dc6ba744c6e7e8be795b64a85496c9f0->m_type_description == NULL);
    frame_dc6ba744c6e7e8be795b64a85496c9f0 = cache_frame_dc6ba744c6e7e8be795b64a85496c9f0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dc6ba744c6e7e8be795b64a85496c9f0);
    assert(Py_REFCNT(frame_dc6ba744c6e7e8be795b64a85496c9f0) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_mod);
        tmp_type_arg_1 = par_mod;
        tmp_cmp_expr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_cmp_expr_left_1 == NULL));
        CHECK_OBJECT(par_cls);
        tmp_expression_value_1 = par_cls;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[61]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 196;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_add_expr_left_3 = mod_consts[62];
        CHECK_OBJECT(par_cls);
        tmp_expression_value_2 = par_cls;
        tmp_add_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[63]);
        if (tmp_add_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = mod_consts[64];
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_expression_value_4 = par_cls;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[61]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 197;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[63]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 197;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_raise_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_raise_value_1, 0, tmp_tuple_element_1);
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 196;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(par_mod);
        tmp_expression_value_5 = par_mod;
        tmp_attribute_value_1 = mod_consts[6];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_5, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooo";
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
        PyObject *tmp_raise_value_2;
        tmp_raise_type_2 = PyExc_AssertionError;
        tmp_raise_value_2 = mod_consts[65];
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        Py_INCREF(tmp_raise_value_2);
        exception_lineno = 198;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_mod);
        tmp_expression_value_6 = par_mod;
        tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[6]);
        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        tmp_raise_type_3 = PyExc_AssertionError;
        tmp_raise_value_3 = mod_consts[66];
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        Py_INCREF(tmp_raise_value_3);
        exception_lineno = 199;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_mod);
        tmp_expression_value_7 = par_mod;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[6]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_qconfig == NULL);
        var_qconfig = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_mod);
        tmp_expression_value_8 = par_mod;
        tmp_subscript_value_1 = mod_consts[37];
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_1, 0);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_2;
            PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_mod);
            tmp_expression_value_9 = par_mod;
            tmp_subscript_value_2 = mod_consts[28];
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_9, tmp_subscript_value_2, 1);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_2 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        assert(!(tmp_assign_source_2 == NULL));
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 201;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 201;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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
                    exception_lineno = 201;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[27];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooo";
            exception_lineno = 201;
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
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_conv == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_conv = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_bn == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_bn = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        CHECK_OBJECT(par_cls);
        tmp_called_value_1 = par_cls;
        CHECK_OBJECT(var_conv);
        tmp_expression_value_10 = var_conv;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[67]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_conv);
        tmp_expression_value_11 = var_conv;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[41]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 202;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_conv);
        tmp_expression_value_12 = var_conv;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[68]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 202;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_conv);
        tmp_expression_value_13 = var_conv;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[69]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 203;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_conv);
        tmp_expression_value_14 = var_conv;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[70]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 203;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_conv);
        tmp_expression_value_15 = var_conv;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[71]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 203;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_conv);
        tmp_expression_value_16 = var_conv;
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[72]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 204;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_conv);
        tmp_expression_value_17 = var_conv;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[16]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 204;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_args_element_value_8 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? Py_True : Py_False;
        Py_DECREF(tmp_cmp_expr_left_2);
        CHECK_OBJECT(var_conv);
        tmp_expression_value_18 = var_conv;
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[73]);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 205;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bn);
        tmp_expression_value_19 = var_bn;
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[34]);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 206;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bn);
        tmp_expression_value_20 = var_bn;
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[74]);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);

            exception_lineno = 206;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = Py_False;
        CHECK_OBJECT(var_qconfig);
        tmp_args_element_value_13 = var_qconfig;
        frame_dc6ba744c6e7e8be795b64a85496c9f0->m_frame.f_lineno = 202;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS13(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_qat_convbn == NULL);
        var_qat_convbn = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_conv);
        tmp_expression_value_21 = var_conv;
        tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[11]);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_qat_convbn);
        tmp_assattr_target_1 = var_qat_convbn;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[11], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_conv);
        tmp_expression_value_22 = var_conv;
        tmp_assattr_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[16]);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_qat_convbn);
        tmp_assattr_target_2 = var_qat_convbn;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[16], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(var_bn);
        tmp_expression_value_23 = var_bn;
        tmp_assattr_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[11]);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_qat_convbn);
        tmp_expression_value_24 = var_qat_convbn;
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[10]);
        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 211;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[11], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(var_bn);
        tmp_expression_value_25 = var_bn;
        tmp_assattr_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[16]);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_qat_convbn);
        tmp_expression_value_26 = var_qat_convbn;
        tmp_assattr_target_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[10]);
        if (tmp_assattr_target_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_4);

            exception_lineno = 212;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[16], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_target_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_expression_value_28;
        CHECK_OBJECT(var_bn);
        tmp_expression_value_27 = var_bn;
        tmp_assattr_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[75]);
        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_qat_convbn);
        tmp_expression_value_28 = var_qat_convbn;
        tmp_assattr_target_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[10]);
        if (tmp_assattr_target_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_5);

            exception_lineno = 213;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[75], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_target_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_assattr_target_6;
        PyObject *tmp_expression_value_30;
        CHECK_OBJECT(var_bn);
        tmp_expression_value_29 = var_bn;
        tmp_assattr_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[33]);
        if (tmp_assattr_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_qat_convbn);
        tmp_expression_value_30 = var_qat_convbn;
        tmp_assattr_target_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[10]);
        if (tmp_assattr_target_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_6);

            exception_lineno = 214;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[33], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_target_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_assattr_target_7;
        PyObject *tmp_expression_value_32;
        CHECK_OBJECT(var_bn);
        tmp_expression_value_31 = var_bn;
        tmp_assattr_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[76]);
        if (tmp_assattr_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_qat_convbn);
        tmp_expression_value_32 = var_qat_convbn;
        tmp_assattr_target_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[10]);
        if (tmp_assattr_target_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_7);

            exception_lineno = 216;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[76], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_target_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dc6ba744c6e7e8be795b64a85496c9f0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dc6ba744c6e7e8be795b64a85496c9f0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dc6ba744c6e7e8be795b64a85496c9f0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dc6ba744c6e7e8be795b64a85496c9f0,
        type_description_1,
        par_cls,
        par_mod,
        var_qconfig,
        var_conv,
        var_bn,
        var_qat_convbn
    );


    // Release cached frame if used for exception.
    if (frame_dc6ba744c6e7e8be795b64a85496c9f0 == cache_frame_dc6ba744c6e7e8be795b64a85496c9f0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dc6ba744c6e7e8be795b64a85496c9f0);
        cache_frame_dc6ba744c6e7e8be795b64a85496c9f0 = NULL;
    }

    assertFrameObject(frame_dc6ba744c6e7e8be795b64a85496c9f0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_qat_convbn);
    tmp_return_value = var_qat_convbn;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_qconfig);
    Py_DECREF(var_qconfig);
    var_qconfig = NULL;
    CHECK_OBJECT(var_conv);
    Py_DECREF(var_conv);
    var_conv = NULL;
    CHECK_OBJECT(var_bn);
    Py_DECREF(var_bn);
    var_bn = NULL;
    CHECK_OBJECT(var_qat_convbn);
    Py_DECREF(var_qat_convbn);
    var_qat_convbn = NULL;
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

    Py_XDECREF(var_qconfig);
    var_qconfig = NULL;
    Py_XDECREF(var_conv);
    var_conv = NULL;
    Py_XDECREF(var_bn);
    var_bn = NULL;
    Py_XDECREF(var_qat_convbn);
    var_qat_convbn = NULL;
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
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_mod);
    Py_DECREF(par_mod);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_mod);
    Py_DECREF(par_mod);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__13_to_float(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_modules = NULL;
    PyObject *var_cls = NULL;
    PyObject *var_conv = NULL;
    PyObject *var_bn = NULL;
    PyObject *var_relu = NULL;
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_7f06d5abe85d3cb97ac6f9403bb8e7ca;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_7f06d5abe85d3cb97ac6f9403bb8e7ca = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_modules == NULL);
        var_modules = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_self);
        tmp_type_arg_1 = par_self;
        tmp_assign_source_2 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_assign_source_2 == NULL));
        assert(var_cls == NULL);
        var_cls = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_7f06d5abe85d3cb97ac6f9403bb8e7ca)) {
        Py_XDECREF(cache_frame_7f06d5abe85d3cb97ac6f9403bb8e7ca);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7f06d5abe85d3cb97ac6f9403bb8e7ca == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7f06d5abe85d3cb97ac6f9403bb8e7ca = MAKE_FUNCTION_FRAME(codeobj_7f06d5abe85d3cb97ac6f9403bb8e7ca, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7f06d5abe85d3cb97ac6f9403bb8e7ca->m_type_description == NULL);
    frame_7f06d5abe85d3cb97ac6f9403bb8e7ca = cache_frame_7f06d5abe85d3cb97ac6f9403bb8e7ca;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7f06d5abe85d3cb97ac6f9403bb8e7ca);
    assert(Py_REFCNT(frame_7f06d5abe85d3cb97ac6f9403bb8e7ca) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(var_cls);
        tmp_expression_value_1 = var_cls;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[78]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[67]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 223;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[41]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 224;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[68]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 225;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[69]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 226;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[70]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 227;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[71]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 228;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[72]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 229;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[16]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 230;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_args_element_value_8 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? Py_True : Py_False;
        Py_DECREF(tmp_cmp_expr_left_1);
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[73]);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 231;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_7f06d5abe85d3cb97ac6f9403bb8e7ca->m_frame.f_lineno = 222;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS9(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_conv == NULL);
        var_conv = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[0]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[13]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[11]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 232;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_7f06d5abe85d3cb97ac6f9403bb8e7ca->m_frame.f_lineno = 232;
        tmp_args_element_value_10 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[79]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 232;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_7f06d5abe85d3cb97ac6f9403bb8e7ca->m_frame.f_lineno = 232;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_conv);
        tmp_assattr_target_1 = var_conv;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[11], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[16]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_assattr_target_2;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[0]);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[13]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_17 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[16]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 234;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_7f06d5abe85d3cb97ac6f9403bb8e7ca->m_frame.f_lineno = 234;
        tmp_args_element_value_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[79]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 234;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_7f06d5abe85d3cb97ac6f9403bb8e7ca->m_frame.f_lineno = 234;
        tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_conv);
        tmp_assattr_target_2 = var_conv;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[16], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        CHECK_OBJECT(var_modules);
        tmp_list_arg_value_1 = var_modules;
        CHECK_OBJECT(var_conv);
        tmp_item_value_1 = var_conv;
        tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_cls);
        tmp_expression_value_18 = var_cls;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[80]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 237;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_expression_value_29;
        CHECK_OBJECT(var_cls);
        tmp_expression_value_19 = var_cls;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[80]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_21 = par_self;
        tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[10]);
        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 239;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[81]);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 239;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_23 = par_self;
        tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[10]);
        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_12);

            exception_lineno = 240;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[34]);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_12);

            exception_lineno = 240;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_25 = par_self;
        tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[10]);
        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 241;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[74]);
        Py_DECREF(tmp_expression_value_24);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 241;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_27 = par_self;
        tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[10]);
        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_14);

            exception_lineno = 242;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[82]);
        Py_DECREF(tmp_expression_value_26);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_14);

            exception_lineno = 242;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_29 = par_self;
        tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[10]);
        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_15);

            exception_lineno = 243;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[83]);
        Py_DECREF(tmp_expression_value_28);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_15);

            exception_lineno = 243;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_7f06d5abe85d3cb97ac6f9403bb8e7ca->m_frame.f_lineno = 238;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_bn == NULL);
        var_bn = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_assattr_target_3;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_31 = par_self;
        tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[10]);
        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[11]);
        Py_DECREF(tmp_expression_value_30);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_7f06d5abe85d3cb97ac6f9403bb8e7ca->m_frame.f_lineno = 244;
        tmp_args_element_value_17 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[79]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_7f06d5abe85d3cb97ac6f9403bb8e7ca->m_frame.f_lineno = 244;
        tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_17);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bn);
        tmp_assattr_target_3 = var_bn;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[11], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_33 = par_self;
        tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[10]);
        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[82]);
        Py_DECREF(tmp_expression_value_32);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 245;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_assattr_target_4;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_35 = par_self;
        tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[10]);
        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[16]);
        Py_DECREF(tmp_expression_value_34);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_7f06d5abe85d3cb97ac6f9403bb8e7ca->m_frame.f_lineno = 246;
        tmp_args_element_value_18 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[79]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_7f06d5abe85d3cb97ac6f9403bb8e7ca->m_frame.f_lineno = 246;
        tmp_assattr_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_18);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bn);
        tmp_assattr_target_4 = var_bn;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[16], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_3:;
    {
        PyObject *tmp_list_arg_value_2;
        PyObject *tmp_item_value_2;
        CHECK_OBJECT(var_modules);
        tmp_list_arg_value_2 = var_modules;
        CHECK_OBJECT(var_bn);
        tmp_item_value_2 = var_bn;
        tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_2);
        assert(!(tmp_result == false));
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_attribute_value_3;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_cls);
        tmp_expression_value_36 = var_cls;
        tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[84]);
        if (tmp_attribute_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_3);

            exception_lineno = 249;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_3);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(var_cls);
        tmp_called_instance_5 = var_cls;
        frame_7f06d5abe85d3cb97ac6f9403bb8e7ca->m_frame.f_lineno = 250;
        tmp_assign_source_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[84]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_relu == NULL);
        var_relu = tmp_assign_source_5;
    }
    {
        PyObject *tmp_list_arg_value_3;
        PyObject *tmp_item_value_3;
        CHECK_OBJECT(var_modules);
        tmp_list_arg_value_3 = var_modules;
        CHECK_OBJECT(var_relu);
        tmp_item_value_3 = var_relu;
        tmp_result = LIST_APPEND0(tmp_list_arg_value_3, tmp_item_value_3);
        assert(!(tmp_result == false));
    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_dircall_arg2_1;
        CHECK_OBJECT(var_cls);
        tmp_expression_value_37 = var_cls;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[61]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_modules);
        tmp_dircall_arg2_1 = var_modules;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_6 = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_expression_value_39;
        CHECK_OBJECT(var_result);
        tmp_expression_value_38 = var_result;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[49]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_39 = par_self;
        tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[7]);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 254;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_7f06d5abe85d3cb97ac6f9403bb8e7ca->m_frame.f_lineno = 254;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_19);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7f06d5abe85d3cb97ac6f9403bb8e7ca, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7f06d5abe85d3cb97ac6f9403bb8e7ca->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7f06d5abe85d3cb97ac6f9403bb8e7ca, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7f06d5abe85d3cb97ac6f9403bb8e7ca,
        type_description_1,
        par_self,
        var_modules,
        var_cls,
        var_conv,
        var_bn,
        var_relu,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_7f06d5abe85d3cb97ac6f9403bb8e7ca == cache_frame_7f06d5abe85d3cb97ac6f9403bb8e7ca) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7f06d5abe85d3cb97ac6f9403bb8e7ca);
        cache_frame_7f06d5abe85d3cb97ac6f9403bb8e7ca = NULL;
    }

    assertFrameObject(frame_7f06d5abe85d3cb97ac6f9403bb8e7ca);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_result);
    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_modules);
    Py_DECREF(var_modules);
    var_modules = NULL;
    CHECK_OBJECT(var_cls);
    Py_DECREF(var_cls);
    var_cls = NULL;
    CHECK_OBJECT(var_conv);
    Py_DECREF(var_conv);
    var_conv = NULL;
    Py_XDECREF(var_bn);
    var_bn = NULL;
    Py_XDECREF(var_relu);
    var_relu = NULL;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
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

    CHECK_OBJECT(var_modules);
    Py_DECREF(var_modules);
    var_modules = NULL;
    CHECK_OBJECT(var_cls);
    Py_DECREF(var_cls);
    var_cls = NULL;
    Py_XDECREF(var_conv);
    var_conv = NULL;
    Py_XDECREF(var_bn);
    var_bn = NULL;
    Py_XDECREF(var_relu);
    var_relu = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
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


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__14___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_in_channels = python_pars[1];
    PyObject *par_out_channels = python_pars[2];
    PyObject *par_kernel_size = python_pars[3];
    PyObject *par_stride = python_pars[4];
    PyObject *par_padding = python_pars[5];
    PyObject *par_dilation = python_pars[6];
    PyObject *par_groups = python_pars[7];
    PyObject *par_bias = python_pars[8];
    PyObject *par_padding_mode = python_pars[9];
    PyObject *par_eps = python_pars[10];
    PyObject *par_momentum = python_pars[11];
    PyObject *par_freeze_bn = python_pars[12];
    PyObject *par_qconfig = python_pars[13];
    struct Nuitka_FrameObject *frame_ec212b85b3d1c15011f22535973ebc10;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ec212b85b3d1c15011f22535973ebc10 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ec212b85b3d1c15011f22535973ebc10)) {
        Py_XDECREF(cache_frame_ec212b85b3d1c15011f22535973ebc10);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ec212b85b3d1c15011f22535973ebc10 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ec212b85b3d1c15011f22535973ebc10 = MAKE_FUNCTION_FRAME(codeobj_ec212b85b3d1c15011f22535973ebc10, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ec212b85b3d1c15011f22535973ebc10->m_type_description == NULL);
    frame_ec212b85b3d1c15011f22535973ebc10 = cache_frame_ec212b85b3d1c15011f22535973ebc10;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ec212b85b3d1c15011f22535973ebc10);
    assert(Py_REFCNT(frame_ec212b85b3d1c15011f22535973ebc10) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kernel_size);
        tmp_args_element_value_1 = par_kernel_size;
        frame_ec212b85b3d1c15011f22535973ebc10->m_frame.f_lineno = 293;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_kernel_size;
            assert(old != NULL);
            par_kernel_size = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stride);
        tmp_args_element_value_2 = par_stride;
        frame_ec212b85b3d1c15011f22535973ebc10->m_frame.f_lineno = 294;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_stride;
            assert(old != NULL);
            par_stride = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_padding);
        tmp_args_element_value_3 = par_padding;
        frame_ec212b85b3d1c15011f22535973ebc10->m_frame.f_lineno = 295;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_padding;
            assert(old != NULL);
            par_padding = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dilation);
        tmp_args_element_value_4 = par_dilation;
        frame_ec212b85b3d1c15011f22535973ebc10->m_frame.f_lineno = 296;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dilation;
            assert(old != NULL);
            par_dilation = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_tuple_element_1 = par_self;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(16);
        {
            PyObject *tmp_called_value_6;
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_in_channels);
            tmp_tuple_element_1 = par_in_channels;
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_out_channels);
            tmp_tuple_element_1 = par_out_channels;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_kernel_size);
            tmp_tuple_element_1 = par_kernel_size;
            PyTuple_SET_ITEM0(tmp_args_value_1, 3, tmp_tuple_element_1);
            CHECK_OBJECT(par_stride);
            tmp_tuple_element_1 = par_stride;
            PyTuple_SET_ITEM0(tmp_args_value_1, 4, tmp_tuple_element_1);
            CHECK_OBJECT(par_padding);
            tmp_tuple_element_1 = par_padding;
            PyTuple_SET_ITEM0(tmp_args_value_1, 5, tmp_tuple_element_1);
            CHECK_OBJECT(par_dilation);
            tmp_tuple_element_1 = par_dilation;
            PyTuple_SET_ITEM0(tmp_args_value_1, 6, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_False;
            PyTuple_SET_ITEM0(tmp_args_value_1, 7, tmp_tuple_element_1);
            tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[85]);

            if (unlikely(tmp_called_value_6 == NULL)) {
                tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_1;
            }
            frame_ec212b85b3d1c15011f22535973ebc10->m_frame.f_lineno = 298;
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_6, mod_consts[86]);

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_value_1, 8, tmp_tuple_element_1);
            CHECK_OBJECT(par_groups);
            tmp_tuple_element_1 = par_groups;
            PyTuple_SET_ITEM0(tmp_args_value_1, 9, tmp_tuple_element_1);
            CHECK_OBJECT(par_bias);
            tmp_tuple_element_1 = par_bias;
            PyTuple_SET_ITEM0(tmp_args_value_1, 10, tmp_tuple_element_1);
            CHECK_OBJECT(par_padding_mode);
            tmp_tuple_element_1 = par_padding_mode;
            PyTuple_SET_ITEM0(tmp_args_value_1, 11, tmp_tuple_element_1);
            CHECK_OBJECT(par_eps);
            tmp_tuple_element_1 = par_eps;
            PyTuple_SET_ITEM0(tmp_args_value_1, 12, tmp_tuple_element_1);
            CHECK_OBJECT(par_momentum);
            tmp_tuple_element_1 = par_momentum;
            PyTuple_SET_ITEM0(tmp_args_value_1, 13, tmp_tuple_element_1);
            CHECK_OBJECT(par_freeze_bn);
            tmp_tuple_element_1 = par_freeze_bn;
            PyTuple_SET_ITEM0(tmp_args_value_1, 14, tmp_tuple_element_1);
            CHECK_OBJECT(par_qconfig);
            tmp_tuple_element_1 = par_qconfig;
            PyTuple_SET_ITEM0(tmp_args_value_1, 15, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[87]);
        frame_ec212b85b3d1c15011f22535973ebc10->m_frame.f_lineno = 297;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ec212b85b3d1c15011f22535973ebc10, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ec212b85b3d1c15011f22535973ebc10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ec212b85b3d1c15011f22535973ebc10, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ec212b85b3d1c15011f22535973ebc10,
        type_description_1,
        par_self,
        par_in_channels,
        par_out_channels,
        par_kernel_size,
        par_stride,
        par_padding,
        par_dilation,
        par_groups,
        par_bias,
        par_padding_mode,
        par_eps,
        par_momentum,
        par_freeze_bn,
        par_qconfig
    );


    // Release cached frame if used for exception.
    if (frame_ec212b85b3d1c15011f22535973ebc10 == cache_frame_ec212b85b3d1c15011f22535973ebc10) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ec212b85b3d1c15011f22535973ebc10);
        cache_frame_ec212b85b3d1c15011f22535973ebc10 = NULL;
    }

    assertFrameObject(frame_ec212b85b3d1c15011f22535973ebc10);

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
    CHECK_OBJECT(par_kernel_size);
    Py_DECREF(par_kernel_size);
    par_kernel_size = NULL;
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    par_stride = NULL;
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    par_padding = NULL;
    CHECK_OBJECT(par_dilation);
    Py_DECREF(par_dilation);
    par_dilation = NULL;
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

    Py_XDECREF(par_kernel_size);
    par_kernel_size = NULL;
    Py_XDECREF(par_stride);
    par_stride = NULL;
    Py_XDECREF(par_padding);
    par_padding = NULL;
    Py_XDECREF(par_dilation);
    par_dilation = NULL;
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
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_out_channels);
    Py_DECREF(par_out_channels);
    CHECK_OBJECT(par_groups);
    Py_DECREF(par_groups);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);
    CHECK_OBJECT(par_padding_mode);
    Py_DECREF(par_padding_mode);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    CHECK_OBJECT(par_momentum);
    Py_DECREF(par_momentum);
    CHECK_OBJECT(par_freeze_bn);
    Py_DECREF(par_freeze_bn);
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_out_channels);
    Py_DECREF(par_out_channels);
    CHECK_OBJECT(par_groups);
    Py_DECREF(par_groups);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);
    CHECK_OBJECT(par_padding_mode);
    Py_DECREF(par_padding_mode);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    CHECK_OBJECT(par_momentum);
    Py_DECREF(par_momentum);
    CHECK_OBJECT(par_freeze_bn);
    Py_DECREF(par_freeze_bn);
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__15___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_in_channels = python_pars[1];
    PyObject *par_out_channels = python_pars[2];
    PyObject *par_kernel_size = python_pars[3];
    PyObject *par_stride = python_pars[4];
    PyObject *par_padding = python_pars[5];
    PyObject *par_dilation = python_pars[6];
    PyObject *par_groups = python_pars[7];
    PyObject *par_bias = python_pars[8];
    PyObject *par_padding_mode = python_pars[9];
    PyObject *par_eps = python_pars[10];
    PyObject *par_momentum = python_pars[11];
    PyObject *par_freeze_bn = python_pars[12];
    PyObject *par_qconfig = python_pars[13];
    struct Nuitka_FrameObject *frame_e7c862916681ba66acf3566abbdc8053;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e7c862916681ba66acf3566abbdc8053 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e7c862916681ba66acf3566abbdc8053)) {
        Py_XDECREF(cache_frame_e7c862916681ba66acf3566abbdc8053);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e7c862916681ba66acf3566abbdc8053 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e7c862916681ba66acf3566abbdc8053 = MAKE_FUNCTION_FRAME(codeobj_e7c862916681ba66acf3566abbdc8053, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e7c862916681ba66acf3566abbdc8053->m_type_description == NULL);
    frame_e7c862916681ba66acf3566abbdc8053 = cache_frame_e7c862916681ba66acf3566abbdc8053;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e7c862916681ba66acf3566abbdc8053);
    assert(Py_REFCNT(frame_e7c862916681ba66acf3566abbdc8053) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 337;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_in_channels);
        tmp_args_element_value_1 = par_in_channels;
        CHECK_OBJECT(par_out_channels);
        tmp_args_element_value_2 = par_out_channels;
        CHECK_OBJECT(par_kernel_size);
        tmp_args_element_value_3 = par_kernel_size;
        CHECK_OBJECT(par_stride);
        tmp_args_element_value_4 = par_stride;
        CHECK_OBJECT(par_padding);
        tmp_args_element_value_5 = par_padding;
        CHECK_OBJECT(par_dilation);
        tmp_args_element_value_6 = par_dilation;
        CHECK_OBJECT(par_groups);
        tmp_args_element_value_7 = par_groups;
        CHECK_OBJECT(par_bias);
        tmp_args_element_value_8 = par_bias;
        CHECK_OBJECT(par_padding_mode);
        tmp_args_element_value_9 = par_padding_mode;
        CHECK_OBJECT(par_eps);
        tmp_args_element_value_10 = par_eps;
        CHECK_OBJECT(par_momentum);
        tmp_args_element_value_11 = par_momentum;
        CHECK_OBJECT(par_freeze_bn);
        tmp_args_element_value_12 = par_freeze_bn;
        CHECK_OBJECT(par_qconfig);
        tmp_args_element_value_13 = par_qconfig;
        frame_e7c862916681ba66acf3566abbdc8053->m_frame.f_lineno = 337;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS13(
                tmp_called_instance_1,
                mod_consts[4],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ooooooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e7c862916681ba66acf3566abbdc8053, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e7c862916681ba66acf3566abbdc8053->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e7c862916681ba66acf3566abbdc8053, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e7c862916681ba66acf3566abbdc8053,
        type_description_1,
        par_self,
        par_in_channels,
        par_out_channels,
        par_kernel_size,
        par_stride,
        par_padding,
        par_dilation,
        par_groups,
        par_bias,
        par_padding_mode,
        par_eps,
        par_momentum,
        par_freeze_bn,
        par_qconfig,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_e7c862916681ba66acf3566abbdc8053 == cache_frame_e7c862916681ba66acf3566abbdc8053) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e7c862916681ba66acf3566abbdc8053);
        cache_frame_e7c862916681ba66acf3566abbdc8053 = NULL;
    }

    assertFrameObject(frame_e7c862916681ba66acf3566abbdc8053);

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
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_out_channels);
    Py_DECREF(par_out_channels);
    CHECK_OBJECT(par_kernel_size);
    Py_DECREF(par_kernel_size);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    CHECK_OBJECT(par_dilation);
    Py_DECREF(par_dilation);
    CHECK_OBJECT(par_groups);
    Py_DECREF(par_groups);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);
    CHECK_OBJECT(par_padding_mode);
    Py_DECREF(par_padding_mode);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    CHECK_OBJECT(par_momentum);
    Py_DECREF(par_momentum);
    CHECK_OBJECT(par_freeze_bn);
    Py_DECREF(par_freeze_bn);
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_out_channels);
    Py_DECREF(par_out_channels);
    CHECK_OBJECT(par_kernel_size);
    Py_DECREF(par_kernel_size);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    CHECK_OBJECT(par_dilation);
    Py_DECREF(par_dilation);
    CHECK_OBJECT(par_groups);
    Py_DECREF(par_groups);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);
    CHECK_OBJECT(par_padding_mode);
    Py_DECREF(par_padding_mode);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    CHECK_OBJECT(par_momentum);
    Py_DECREF(par_momentum);
    CHECK_OBJECT(par_freeze_bn);
    Py_DECREF(par_freeze_bn);
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__16_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_input = python_pars[1];
    struct Nuitka_FrameObject *frame_94dc36f8402a52b94f80b152ed547c8a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_94dc36f8402a52b94f80b152ed547c8a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_94dc36f8402a52b94f80b152ed547c8a)) {
        Py_XDECREF(cache_frame_94dc36f8402a52b94f80b152ed547c8a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_94dc36f8402a52b94f80b152ed547c8a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_94dc36f8402a52b94f80b152ed547c8a = MAKE_FUNCTION_FRAME(codeobj_94dc36f8402a52b94f80b152ed547c8a, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_94dc36f8402a52b94f80b152ed547c8a->m_type_description == NULL);
    frame_94dc36f8402a52b94f80b152ed547c8a = cache_frame_94dc36f8402a52b94f80b152ed547c8a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_94dc36f8402a52b94f80b152ed547c8a);
    assert(Py_REFCNT(frame_94dc36f8402a52b94f80b152ed547c8a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[90]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 344;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        CHECK_OBJECT(par_input);
        tmp_args_element_value_3 = par_input;
        frame_94dc36f8402a52b94f80b152ed547c8a->m_frame.f_lineno = 344;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_args_element_value_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[47],
                call_args
            );
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 344;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_94dc36f8402a52b94f80b152ed547c8a->m_frame.f_lineno = 344;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
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
        exception_tb = MAKE_TRACEBACK(frame_94dc36f8402a52b94f80b152ed547c8a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_94dc36f8402a52b94f80b152ed547c8a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_94dc36f8402a52b94f80b152ed547c8a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_94dc36f8402a52b94f80b152ed547c8a,
        type_description_1,
        par_self,
        par_input
    );


    // Release cached frame if used for exception.
    if (frame_94dc36f8402a52b94f80b152ed547c8a == cache_frame_94dc36f8402a52b94f80b152ed547c8a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_94dc36f8402a52b94f80b152ed547c8a);
        cache_frame_94dc36f8402a52b94f80b152ed547c8a = NULL;
    }

    assertFrameObject(frame_94dc36f8402a52b94f80b152ed547c8a);

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
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__17_from_float(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_mod = python_pars[1];
    struct Nuitka_FrameObject *frame_a84c96b41c6995e726d3252c295bb8b4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a84c96b41c6995e726d3252c295bb8b4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a84c96b41c6995e726d3252c295bb8b4)) {
        Py_XDECREF(cache_frame_a84c96b41c6995e726d3252c295bb8b4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a84c96b41c6995e726d3252c295bb8b4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a84c96b41c6995e726d3252c295bb8b4 = MAKE_FUNCTION_FRAME(codeobj_a84c96b41c6995e726d3252c295bb8b4, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a84c96b41c6995e726d3252c295bb8b4->m_type_description == NULL);
    frame_a84c96b41c6995e726d3252c295bb8b4 = cache_frame_a84c96b41c6995e726d3252c295bb8b4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a84c96b41c6995e726d3252c295bb8b4);
    assert(Py_REFCNT(frame_a84c96b41c6995e726d3252c295bb8b4) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_object_arg_value_1 = par_cls;
        tmp_called_instance_1 = BUILTIN_SUPER2(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_mod);
        tmp_args_element_value_1 = par_mod;
        frame_a84c96b41c6995e726d3252c295bb8b4->m_frame.f_lineno = 348;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[93], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooN";
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
        exception_tb = MAKE_TRACEBACK(frame_a84c96b41c6995e726d3252c295bb8b4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a84c96b41c6995e726d3252c295bb8b4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a84c96b41c6995e726d3252c295bb8b4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a84c96b41c6995e726d3252c295bb8b4,
        type_description_1,
        par_cls,
        par_mod,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_a84c96b41c6995e726d3252c295bb8b4 == cache_frame_a84c96b41c6995e726d3252c295bb8b4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a84c96b41c6995e726d3252c295bb8b4);
        cache_frame_a84c96b41c6995e726d3252c295bb8b4 = NULL;
    }

    assertFrameObject(frame_a84c96b41c6995e726d3252c295bb8b4);

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
    CHECK_OBJECT(par_mod);
    Py_DECREF(par_mod);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_mod);
    Py_DECREF(par_mod);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__18___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_in_channels = python_pars[1];
    PyObject *par_out_channels = python_pars[2];
    PyObject *par_kernel_size = python_pars[3];
    PyObject *par_stride = python_pars[4];
    PyObject *par_padding = python_pars[5];
    PyObject *par_dilation = python_pars[6];
    PyObject *par_groups = python_pars[7];
    PyObject *par_bias = python_pars[8];
    PyObject *par_padding_mode = python_pars[9];
    PyObject *par_eps = python_pars[10];
    PyObject *par_momentum = python_pars[11];
    PyObject *par_freeze_bn = python_pars[12];
    PyObject *par_qconfig = python_pars[13];
    struct Nuitka_FrameObject *frame_578e035b83d380550312598b41098254;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_578e035b83d380550312598b41098254 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_578e035b83d380550312598b41098254)) {
        Py_XDECREF(cache_frame_578e035b83d380550312598b41098254);

#if _DEBUG_REFCOUNTS
        if (cache_frame_578e035b83d380550312598b41098254 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_578e035b83d380550312598b41098254 = MAKE_FUNCTION_FRAME(codeobj_578e035b83d380550312598b41098254, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_578e035b83d380550312598b41098254->m_type_description == NULL);
    frame_578e035b83d380550312598b41098254 = cache_frame_578e035b83d380550312598b41098254;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_578e035b83d380550312598b41098254);
    assert(Py_REFCNT(frame_578e035b83d380550312598b41098254) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kernel_size);
        tmp_args_element_value_1 = par_kernel_size;
        frame_578e035b83d380550312598b41098254->m_frame.f_lineno = 386;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_kernel_size;
            assert(old != NULL);
            par_kernel_size = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stride);
        tmp_args_element_value_2 = par_stride;
        frame_578e035b83d380550312598b41098254->m_frame.f_lineno = 387;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_stride;
            assert(old != NULL);
            par_stride = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_padding);
        tmp_args_element_value_3 = par_padding;
        frame_578e035b83d380550312598b41098254->m_frame.f_lineno = 388;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_padding;
            assert(old != NULL);
            par_padding = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dilation);
        tmp_args_element_value_4 = par_dilation;
        frame_578e035b83d380550312598b41098254->m_frame.f_lineno = 389;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dilation;
            assert(old != NULL);
            par_dilation = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_tuple_element_1 = par_self;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(16);
        {
            PyObject *tmp_called_value_6;
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_in_channels);
            tmp_tuple_element_1 = par_in_channels;
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_out_channels);
            tmp_tuple_element_1 = par_out_channels;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_kernel_size);
            tmp_tuple_element_1 = par_kernel_size;
            PyTuple_SET_ITEM0(tmp_args_value_1, 3, tmp_tuple_element_1);
            CHECK_OBJECT(par_stride);
            tmp_tuple_element_1 = par_stride;
            PyTuple_SET_ITEM0(tmp_args_value_1, 4, tmp_tuple_element_1);
            CHECK_OBJECT(par_padding);
            tmp_tuple_element_1 = par_padding;
            PyTuple_SET_ITEM0(tmp_args_value_1, 5, tmp_tuple_element_1);
            CHECK_OBJECT(par_dilation);
            tmp_tuple_element_1 = par_dilation;
            PyTuple_SET_ITEM0(tmp_args_value_1, 6, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_False;
            PyTuple_SET_ITEM0(tmp_args_value_1, 7, tmp_tuple_element_1);
            tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[94]);

            if (unlikely(tmp_called_value_6 == NULL)) {
                tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_1;
            }
            frame_578e035b83d380550312598b41098254->m_frame.f_lineno = 391;
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_6, mod_consts[86]);

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_value_1, 8, tmp_tuple_element_1);
            CHECK_OBJECT(par_groups);
            tmp_tuple_element_1 = par_groups;
            PyTuple_SET_ITEM0(tmp_args_value_1, 9, tmp_tuple_element_1);
            CHECK_OBJECT(par_bias);
            tmp_tuple_element_1 = par_bias;
            PyTuple_SET_ITEM0(tmp_args_value_1, 10, tmp_tuple_element_1);
            CHECK_OBJECT(par_padding_mode);
            tmp_tuple_element_1 = par_padding_mode;
            PyTuple_SET_ITEM0(tmp_args_value_1, 11, tmp_tuple_element_1);
            CHECK_OBJECT(par_eps);
            tmp_tuple_element_1 = par_eps;
            PyTuple_SET_ITEM0(tmp_args_value_1, 12, tmp_tuple_element_1);
            CHECK_OBJECT(par_momentum);
            tmp_tuple_element_1 = par_momentum;
            PyTuple_SET_ITEM0(tmp_args_value_1, 13, tmp_tuple_element_1);
            CHECK_OBJECT(par_freeze_bn);
            tmp_tuple_element_1 = par_freeze_bn;
            PyTuple_SET_ITEM0(tmp_args_value_1, 14, tmp_tuple_element_1);
            CHECK_OBJECT(par_qconfig);
            tmp_tuple_element_1 = par_qconfig;
            PyTuple_SET_ITEM0(tmp_args_value_1, 15, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[95]);
        frame_578e035b83d380550312598b41098254->m_frame.f_lineno = 390;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_578e035b83d380550312598b41098254, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_578e035b83d380550312598b41098254->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_578e035b83d380550312598b41098254, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_578e035b83d380550312598b41098254,
        type_description_1,
        par_self,
        par_in_channels,
        par_out_channels,
        par_kernel_size,
        par_stride,
        par_padding,
        par_dilation,
        par_groups,
        par_bias,
        par_padding_mode,
        par_eps,
        par_momentum,
        par_freeze_bn,
        par_qconfig
    );


    // Release cached frame if used for exception.
    if (frame_578e035b83d380550312598b41098254 == cache_frame_578e035b83d380550312598b41098254) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_578e035b83d380550312598b41098254);
        cache_frame_578e035b83d380550312598b41098254 = NULL;
    }

    assertFrameObject(frame_578e035b83d380550312598b41098254);

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
    CHECK_OBJECT(par_kernel_size);
    Py_DECREF(par_kernel_size);
    par_kernel_size = NULL;
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    par_stride = NULL;
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    par_padding = NULL;
    CHECK_OBJECT(par_dilation);
    Py_DECREF(par_dilation);
    par_dilation = NULL;
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

    Py_XDECREF(par_kernel_size);
    par_kernel_size = NULL;
    Py_XDECREF(par_stride);
    par_stride = NULL;
    Py_XDECREF(par_padding);
    par_padding = NULL;
    Py_XDECREF(par_dilation);
    par_dilation = NULL;
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
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_out_channels);
    Py_DECREF(par_out_channels);
    CHECK_OBJECT(par_groups);
    Py_DECREF(par_groups);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);
    CHECK_OBJECT(par_padding_mode);
    Py_DECREF(par_padding_mode);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    CHECK_OBJECT(par_momentum);
    Py_DECREF(par_momentum);
    CHECK_OBJECT(par_freeze_bn);
    Py_DECREF(par_freeze_bn);
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_out_channels);
    Py_DECREF(par_out_channels);
    CHECK_OBJECT(par_groups);
    Py_DECREF(par_groups);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);
    CHECK_OBJECT(par_padding_mode);
    Py_DECREF(par_padding_mode);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    CHECK_OBJECT(par_momentum);
    Py_DECREF(par_momentum);
    CHECK_OBJECT(par_freeze_bn);
    Py_DECREF(par_freeze_bn);
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__19___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_in_channels = python_pars[1];
    PyObject *par_out_channels = python_pars[2];
    PyObject *par_kernel_size = python_pars[3];
    PyObject *par_stride = python_pars[4];
    PyObject *par_padding = python_pars[5];
    PyObject *par_dilation = python_pars[6];
    PyObject *par_groups = python_pars[7];
    PyObject *par_bias = python_pars[8];
    PyObject *par_padding_mode = python_pars[9];
    PyObject *par_eps = python_pars[10];
    PyObject *par_momentum = python_pars[11];
    PyObject *par_freeze_bn = python_pars[12];
    PyObject *par_qconfig = python_pars[13];
    struct Nuitka_FrameObject *frame_65dad2a49db0940434db2391de502881;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_65dad2a49db0940434db2391de502881 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_65dad2a49db0940434db2391de502881)) {
        Py_XDECREF(cache_frame_65dad2a49db0940434db2391de502881);

#if _DEBUG_REFCOUNTS
        if (cache_frame_65dad2a49db0940434db2391de502881 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_65dad2a49db0940434db2391de502881 = MAKE_FUNCTION_FRAME(codeobj_65dad2a49db0940434db2391de502881, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_65dad2a49db0940434db2391de502881->m_type_description == NULL);
    frame_65dad2a49db0940434db2391de502881 = cache_frame_65dad2a49db0940434db2391de502881;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_65dad2a49db0940434db2391de502881);
    assert(Py_REFCNT(frame_65dad2a49db0940434db2391de502881) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "ooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER2(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "ooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_in_channels);
        tmp_args_element_value_1 = par_in_channels;
        CHECK_OBJECT(par_out_channels);
        tmp_args_element_value_2 = par_out_channels;
        CHECK_OBJECT(par_kernel_size);
        tmp_args_element_value_3 = par_kernel_size;
        CHECK_OBJECT(par_stride);
        tmp_args_element_value_4 = par_stride;
        CHECK_OBJECT(par_padding);
        tmp_args_element_value_5 = par_padding;
        CHECK_OBJECT(par_dilation);
        tmp_args_element_value_6 = par_dilation;
        CHECK_OBJECT(par_groups);
        tmp_args_element_value_7 = par_groups;
        CHECK_OBJECT(par_bias);
        tmp_args_element_value_8 = par_bias;
        CHECK_OBJECT(par_padding_mode);
        tmp_args_element_value_9 = par_padding_mode;
        CHECK_OBJECT(par_eps);
        tmp_args_element_value_10 = par_eps;
        CHECK_OBJECT(par_momentum);
        tmp_args_element_value_11 = par_momentum;
        CHECK_OBJECT(par_freeze_bn);
        tmp_args_element_value_12 = par_freeze_bn;
        CHECK_OBJECT(par_qconfig);
        tmp_args_element_value_13 = par_qconfig;
        frame_65dad2a49db0940434db2391de502881->m_frame.f_lineno = 430;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS13(
                tmp_called_instance_1,
                mod_consts[4],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "ooooooooooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_65dad2a49db0940434db2391de502881, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_65dad2a49db0940434db2391de502881->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_65dad2a49db0940434db2391de502881, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_65dad2a49db0940434db2391de502881,
        type_description_1,
        par_self,
        par_in_channels,
        par_out_channels,
        par_kernel_size,
        par_stride,
        par_padding,
        par_dilation,
        par_groups,
        par_bias,
        par_padding_mode,
        par_eps,
        par_momentum,
        par_freeze_bn,
        par_qconfig,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_65dad2a49db0940434db2391de502881 == cache_frame_65dad2a49db0940434db2391de502881) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_65dad2a49db0940434db2391de502881);
        cache_frame_65dad2a49db0940434db2391de502881 = NULL;
    }

    assertFrameObject(frame_65dad2a49db0940434db2391de502881);

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
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_out_channels);
    Py_DECREF(par_out_channels);
    CHECK_OBJECT(par_kernel_size);
    Py_DECREF(par_kernel_size);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    CHECK_OBJECT(par_dilation);
    Py_DECREF(par_dilation);
    CHECK_OBJECT(par_groups);
    Py_DECREF(par_groups);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);
    CHECK_OBJECT(par_padding_mode);
    Py_DECREF(par_padding_mode);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    CHECK_OBJECT(par_momentum);
    Py_DECREF(par_momentum);
    CHECK_OBJECT(par_freeze_bn);
    Py_DECREF(par_freeze_bn);
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_out_channels);
    Py_DECREF(par_out_channels);
    CHECK_OBJECT(par_kernel_size);
    Py_DECREF(par_kernel_size);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    CHECK_OBJECT(par_dilation);
    Py_DECREF(par_dilation);
    CHECK_OBJECT(par_groups);
    Py_DECREF(par_groups);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);
    CHECK_OBJECT(par_padding_mode);
    Py_DECREF(par_padding_mode);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    CHECK_OBJECT(par_momentum);
    Py_DECREF(par_momentum);
    CHECK_OBJECT(par_freeze_bn);
    Py_DECREF(par_freeze_bn);
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__20_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_input = python_pars[1];
    struct Nuitka_FrameObject *frame_e72e9a541dcbfbcaa6c845c59cb82bfe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e72e9a541dcbfbcaa6c845c59cb82bfe = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e72e9a541dcbfbcaa6c845c59cb82bfe)) {
        Py_XDECREF(cache_frame_e72e9a541dcbfbcaa6c845c59cb82bfe);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e72e9a541dcbfbcaa6c845c59cb82bfe == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e72e9a541dcbfbcaa6c845c59cb82bfe = MAKE_FUNCTION_FRAME(codeobj_e72e9a541dcbfbcaa6c845c59cb82bfe, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e72e9a541dcbfbcaa6c845c59cb82bfe->m_type_description == NULL);
    frame_e72e9a541dcbfbcaa6c845c59cb82bfe = cache_frame_e72e9a541dcbfbcaa6c845c59cb82bfe;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e72e9a541dcbfbcaa6c845c59cb82bfe);
    assert(Py_REFCNT(frame_e72e9a541dcbfbcaa6c845c59cb82bfe) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[90]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 437;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        CHECK_OBJECT(par_input);
        tmp_args_element_value_3 = par_input;
        frame_e72e9a541dcbfbcaa6c845c59cb82bfe->m_frame.f_lineno = 437;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_args_element_value_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[47],
                call_args
            );
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 437;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e72e9a541dcbfbcaa6c845c59cb82bfe->m_frame.f_lineno = 437;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
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
        exception_tb = MAKE_TRACEBACK(frame_e72e9a541dcbfbcaa6c845c59cb82bfe, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e72e9a541dcbfbcaa6c845c59cb82bfe->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e72e9a541dcbfbcaa6c845c59cb82bfe, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e72e9a541dcbfbcaa6c845c59cb82bfe,
        type_description_1,
        par_self,
        par_input
    );


    // Release cached frame if used for exception.
    if (frame_e72e9a541dcbfbcaa6c845c59cb82bfe == cache_frame_e72e9a541dcbfbcaa6c845c59cb82bfe) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e72e9a541dcbfbcaa6c845c59cb82bfe);
        cache_frame_e72e9a541dcbfbcaa6c845c59cb82bfe = NULL;
    }

    assertFrameObject(frame_e72e9a541dcbfbcaa6c845c59cb82bfe);

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
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__21_from_float(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_mod = python_pars[1];
    struct Nuitka_FrameObject *frame_b5029e7a2fd42278705c56d25dcd252e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b5029e7a2fd42278705c56d25dcd252e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b5029e7a2fd42278705c56d25dcd252e)) {
        Py_XDECREF(cache_frame_b5029e7a2fd42278705c56d25dcd252e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b5029e7a2fd42278705c56d25dcd252e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b5029e7a2fd42278705c56d25dcd252e = MAKE_FUNCTION_FRAME(codeobj_b5029e7a2fd42278705c56d25dcd252e, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b5029e7a2fd42278705c56d25dcd252e->m_type_description == NULL);
    frame_b5029e7a2fd42278705c56d25dcd252e = cache_frame_b5029e7a2fd42278705c56d25dcd252e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b5029e7a2fd42278705c56d25dcd252e);
    assert(Py_REFCNT(frame_b5029e7a2fd42278705c56d25dcd252e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_object_arg_value_1 = par_cls;
        tmp_called_instance_1 = BUILTIN_SUPER2(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_mod);
        tmp_args_element_value_1 = par_mod;
        frame_b5029e7a2fd42278705c56d25dcd252e->m_frame.f_lineno = 441;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[93], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "ooN";
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
        exception_tb = MAKE_TRACEBACK(frame_b5029e7a2fd42278705c56d25dcd252e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b5029e7a2fd42278705c56d25dcd252e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b5029e7a2fd42278705c56d25dcd252e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b5029e7a2fd42278705c56d25dcd252e,
        type_description_1,
        par_cls,
        par_mod,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_b5029e7a2fd42278705c56d25dcd252e == cache_frame_b5029e7a2fd42278705c56d25dcd252e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b5029e7a2fd42278705c56d25dcd252e);
        cache_frame_b5029e7a2fd42278705c56d25dcd252e = NULL;
    }

    assertFrameObject(frame_b5029e7a2fd42278705c56d25dcd252e);

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
    CHECK_OBJECT(par_mod);
    Py_DECREF(par_mod);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_mod);
    Py_DECREF(par_mod);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__22___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_in_channels = python_pars[1];
    PyObject *par_out_channels = python_pars[2];
    PyObject *par_kernel_size = python_pars[3];
    PyObject *par_stride = python_pars[4];
    PyObject *par_padding = python_pars[5];
    PyObject *par_dilation = python_pars[6];
    PyObject *par_groups = python_pars[7];
    PyObject *par_bias = python_pars[8];
    PyObject *par_padding_mode = python_pars[9];
    PyObject *par_qconfig = python_pars[10];
    struct Nuitka_FrameObject *frame_09fb52f5993021669ad8ed5a7a7acbdf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_09fb52f5993021669ad8ed5a7a7acbdf = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_09fb52f5993021669ad8ed5a7a7acbdf)) {
        Py_XDECREF(cache_frame_09fb52f5993021669ad8ed5a7a7acbdf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_09fb52f5993021669ad8ed5a7a7acbdf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_09fb52f5993021669ad8ed5a7a7acbdf = MAKE_FUNCTION_FRAME(codeobj_09fb52f5993021669ad8ed5a7a7acbdf, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_09fb52f5993021669ad8ed5a7a7acbdf->m_type_description == NULL);
    frame_09fb52f5993021669ad8ed5a7a7acbdf = cache_frame_09fb52f5993021669ad8ed5a7a7acbdf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_09fb52f5993021669ad8ed5a7a7acbdf);
    assert(Py_REFCNT(frame_09fb52f5993021669ad8ed5a7a7acbdf) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        PyObject *tmp_kw_call_dict_value_6_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER2(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_in_channels);
        tmp_kw_call_arg_value_0_1 = par_in_channels;
        CHECK_OBJECT(par_out_channels);
        tmp_kw_call_arg_value_1_1 = par_out_channels;
        CHECK_OBJECT(par_kernel_size);
        tmp_kw_call_arg_value_2_1 = par_kernel_size;
        CHECK_OBJECT(par_stride);
        tmp_kw_call_dict_value_0_1 = par_stride;
        CHECK_OBJECT(par_padding);
        tmp_kw_call_dict_value_1_1 = par_padding;
        CHECK_OBJECT(par_dilation);
        tmp_kw_call_dict_value_2_1 = par_dilation;
        CHECK_OBJECT(par_groups);
        tmp_kw_call_dict_value_3_1 = par_groups;
        CHECK_OBJECT(par_bias);
        tmp_kw_call_dict_value_4_1 = par_bias;
        CHECK_OBJECT(par_padding_mode);
        tmp_kw_call_dict_value_5_1 = par_padding_mode;
        CHECK_OBJECT(par_qconfig);
        tmp_kw_call_dict_value_6_1 = par_qconfig;
        frame_09fb52f5993021669ad8ed5a7a7acbdf->m_frame.f_lineno = 464;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[7] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[99]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_qconfig);
        tmp_operand_value_1 = par_qconfig;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "oooooooooooN";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_raise_value_1 = mod_consts[5];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 468;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_qconfig);
        tmp_assattr_value_1 = par_qconfig;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[6], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[6]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        frame_09fb52f5993021669ad8ed5a7a7acbdf->m_frame.f_lineno = 470;
        tmp_assattr_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[11]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[12], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_09fb52f5993021669ad8ed5a7a7acbdf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_09fb52f5993021669ad8ed5a7a7acbdf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_09fb52f5993021669ad8ed5a7a7acbdf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_09fb52f5993021669ad8ed5a7a7acbdf,
        type_description_1,
        par_self,
        par_in_channels,
        par_out_channels,
        par_kernel_size,
        par_stride,
        par_padding,
        par_dilation,
        par_groups,
        par_bias,
        par_padding_mode,
        par_qconfig,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_09fb52f5993021669ad8ed5a7a7acbdf == cache_frame_09fb52f5993021669ad8ed5a7a7acbdf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_09fb52f5993021669ad8ed5a7a7acbdf);
        cache_frame_09fb52f5993021669ad8ed5a7a7acbdf = NULL;
    }

    assertFrameObject(frame_09fb52f5993021669ad8ed5a7a7acbdf);

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
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_out_channels);
    Py_DECREF(par_out_channels);
    CHECK_OBJECT(par_kernel_size);
    Py_DECREF(par_kernel_size);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    CHECK_OBJECT(par_dilation);
    Py_DECREF(par_dilation);
    CHECK_OBJECT(par_groups);
    Py_DECREF(par_groups);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);
    CHECK_OBJECT(par_padding_mode);
    Py_DECREF(par_padding_mode);
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_out_channels);
    Py_DECREF(par_out_channels);
    CHECK_OBJECT(par_kernel_size);
    Py_DECREF(par_kernel_size);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    CHECK_OBJECT(par_dilation);
    Py_DECREF(par_dilation);
    CHECK_OBJECT(par_groups);
    Py_DECREF(par_groups);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);
    CHECK_OBJECT(par_padding_mode);
    Py_DECREF(par_padding_mode);
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__23_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_input = python_pars[1];
    struct Nuitka_FrameObject *frame_83882db7a66ba7bc16cab5b908c97c2c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_83882db7a66ba7bc16cab5b908c97c2c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_83882db7a66ba7bc16cab5b908c97c2c)) {
        Py_XDECREF(cache_frame_83882db7a66ba7bc16cab5b908c97c2c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_83882db7a66ba7bc16cab5b908c97c2c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_83882db7a66ba7bc16cab5b908c97c2c = MAKE_FUNCTION_FRAME(codeobj_83882db7a66ba7bc16cab5b908c97c2c, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_83882db7a66ba7bc16cab5b908c97c2c->m_type_description == NULL);
    frame_83882db7a66ba7bc16cab5b908c97c2c = cache_frame_83882db7a66ba7bc16cab5b908c97c2c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_83882db7a66ba7bc16cab5b908c97c2c);
    assert(Py_REFCNT(frame_83882db7a66ba7bc16cab5b908c97c2c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[90]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[44]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 474;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_input);
        tmp_args_element_value_2 = par_input;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[12]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 474;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[11]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 474;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_83882db7a66ba7bc16cab5b908c97c2c->m_frame.f_lineno = 474;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 474;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[16]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 474;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_83882db7a66ba7bc16cab5b908c97c2c->m_frame.f_lineno = 474;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_5};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 474;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_83882db7a66ba7bc16cab5b908c97c2c->m_frame.f_lineno = 473;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
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
        exception_tb = MAKE_TRACEBACK(frame_83882db7a66ba7bc16cab5b908c97c2c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_83882db7a66ba7bc16cab5b908c97c2c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_83882db7a66ba7bc16cab5b908c97c2c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_83882db7a66ba7bc16cab5b908c97c2c,
        type_description_1,
        par_self,
        par_input
    );


    // Release cached frame if used for exception.
    if (frame_83882db7a66ba7bc16cab5b908c97c2c == cache_frame_83882db7a66ba7bc16cab5b908c97c2c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_83882db7a66ba7bc16cab5b908c97c2c);
        cache_frame_83882db7a66ba7bc16cab5b908c97c2c = NULL;
    }

    assertFrameObject(frame_83882db7a66ba7bc16cab5b908c97c2c);

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
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__24_from_float(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_mod = python_pars[1];
    struct Nuitka_FrameObject *frame_ea28c591a0f1b5921d3b7fed7c7f0caf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ea28c591a0f1b5921d3b7fed7c7f0caf = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ea28c591a0f1b5921d3b7fed7c7f0caf)) {
        Py_XDECREF(cache_frame_ea28c591a0f1b5921d3b7fed7c7f0caf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ea28c591a0f1b5921d3b7fed7c7f0caf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ea28c591a0f1b5921d3b7fed7c7f0caf = MAKE_FUNCTION_FRAME(codeobj_ea28c591a0f1b5921d3b7fed7c7f0caf, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ea28c591a0f1b5921d3b7fed7c7f0caf->m_type_description == NULL);
    frame_ea28c591a0f1b5921d3b7fed7c7f0caf = cache_frame_ea28c591a0f1b5921d3b7fed7c7f0caf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ea28c591a0f1b5921d3b7fed7c7f0caf);
    assert(Py_REFCNT(frame_ea28c591a0f1b5921d3b7fed7c7f0caf) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_object_arg_value_1 = par_cls;
        tmp_called_instance_1 = BUILTIN_SUPER2(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_mod);
        tmp_args_element_value_1 = par_mod;
        frame_ea28c591a0f1b5921d3b7fed7c7f0caf->m_frame.f_lineno = 478;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[93], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "ooN";
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
        exception_tb = MAKE_TRACEBACK(frame_ea28c591a0f1b5921d3b7fed7c7f0caf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ea28c591a0f1b5921d3b7fed7c7f0caf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ea28c591a0f1b5921d3b7fed7c7f0caf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ea28c591a0f1b5921d3b7fed7c7f0caf,
        type_description_1,
        par_cls,
        par_mod,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_ea28c591a0f1b5921d3b7fed7c7f0caf == cache_frame_ea28c591a0f1b5921d3b7fed7c7f0caf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ea28c591a0f1b5921d3b7fed7c7f0caf);
        cache_frame_ea28c591a0f1b5921d3b7fed7c7f0caf = NULL;
    }

    assertFrameObject(frame_ea28c591a0f1b5921d3b7fed7c7f0caf);

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
    CHECK_OBJECT(par_mod);
    Py_DECREF(par_mod);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_mod);
    Py_DECREF(par_mod);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__25___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_in_channels = python_pars[1];
    PyObject *par_out_channels = python_pars[2];
    PyObject *par_kernel_size = python_pars[3];
    PyObject *par_stride = python_pars[4];
    PyObject *par_padding = python_pars[5];
    PyObject *par_dilation = python_pars[6];
    PyObject *par_groups = python_pars[7];
    PyObject *par_bias = python_pars[8];
    PyObject *par_padding_mode = python_pars[9];
    PyObject *par_eps = python_pars[10];
    PyObject *par_momentum = python_pars[11];
    PyObject *par_freeze_bn = python_pars[12];
    PyObject *par_qconfig = python_pars[13];
    struct Nuitka_FrameObject *frame_5c8a3b74b5524ab2e78321e002c3571d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_5c8a3b74b5524ab2e78321e002c3571d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5c8a3b74b5524ab2e78321e002c3571d)) {
        Py_XDECREF(cache_frame_5c8a3b74b5524ab2e78321e002c3571d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5c8a3b74b5524ab2e78321e002c3571d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5c8a3b74b5524ab2e78321e002c3571d = MAKE_FUNCTION_FRAME(codeobj_5c8a3b74b5524ab2e78321e002c3571d, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5c8a3b74b5524ab2e78321e002c3571d->m_type_description == NULL);
    frame_5c8a3b74b5524ab2e78321e002c3571d = cache_frame_5c8a3b74b5524ab2e78321e002c3571d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5c8a3b74b5524ab2e78321e002c3571d);
    assert(Py_REFCNT(frame_5c8a3b74b5524ab2e78321e002c3571d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kernel_size);
        tmp_args_element_value_1 = par_kernel_size;
        frame_5c8a3b74b5524ab2e78321e002c3571d->m_frame.f_lineno = 524;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_kernel_size;
            assert(old != NULL);
            par_kernel_size = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stride);
        tmp_args_element_value_2 = par_stride;
        frame_5c8a3b74b5524ab2e78321e002c3571d->m_frame.f_lineno = 525;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_stride;
            assert(old != NULL);
            par_stride = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_padding);
        tmp_args_element_value_3 = par_padding;
        frame_5c8a3b74b5524ab2e78321e002c3571d->m_frame.f_lineno = 526;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_padding;
            assert(old != NULL);
            par_padding = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dilation);
        tmp_args_element_value_4 = par_dilation;
        frame_5c8a3b74b5524ab2e78321e002c3571d->m_frame.f_lineno = 527;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_dilation;
            assert(old != NULL);
            par_dilation = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_tuple_element_1 = par_self;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(16);
        {
            PyObject *tmp_called_value_6;
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_in_channels);
            tmp_tuple_element_1 = par_in_channels;
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_out_channels);
            tmp_tuple_element_1 = par_out_channels;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_kernel_size);
            tmp_tuple_element_1 = par_kernel_size;
            PyTuple_SET_ITEM0(tmp_args_value_1, 3, tmp_tuple_element_1);
            CHECK_OBJECT(par_stride);
            tmp_tuple_element_1 = par_stride;
            PyTuple_SET_ITEM0(tmp_args_value_1, 4, tmp_tuple_element_1);
            CHECK_OBJECT(par_padding);
            tmp_tuple_element_1 = par_padding;
            PyTuple_SET_ITEM0(tmp_args_value_1, 5, tmp_tuple_element_1);
            CHECK_OBJECT(par_dilation);
            tmp_tuple_element_1 = par_dilation;
            PyTuple_SET_ITEM0(tmp_args_value_1, 6, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_False;
            PyTuple_SET_ITEM0(tmp_args_value_1, 7, tmp_tuple_element_1);
            tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[100]);

            if (unlikely(tmp_called_value_6 == NULL)) {
                tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 537;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_1;
            }
            frame_5c8a3b74b5524ab2e78321e002c3571d->m_frame.f_lineno = 537;
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_6, mod_consts[86]);

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 537;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_value_1, 8, tmp_tuple_element_1);
            CHECK_OBJECT(par_groups);
            tmp_tuple_element_1 = par_groups;
            PyTuple_SET_ITEM0(tmp_args_value_1, 9, tmp_tuple_element_1);
            CHECK_OBJECT(par_bias);
            tmp_tuple_element_1 = par_bias;
            PyTuple_SET_ITEM0(tmp_args_value_1, 10, tmp_tuple_element_1);
            CHECK_OBJECT(par_padding_mode);
            tmp_tuple_element_1 = par_padding_mode;
            PyTuple_SET_ITEM0(tmp_args_value_1, 11, tmp_tuple_element_1);
            CHECK_OBJECT(par_eps);
            tmp_tuple_element_1 = par_eps;
            PyTuple_SET_ITEM0(tmp_args_value_1, 12, tmp_tuple_element_1);
            CHECK_OBJECT(par_momentum);
            tmp_tuple_element_1 = par_momentum;
            PyTuple_SET_ITEM0(tmp_args_value_1, 13, tmp_tuple_element_1);
            CHECK_OBJECT(par_freeze_bn);
            tmp_tuple_element_1 = par_freeze_bn;
            PyTuple_SET_ITEM0(tmp_args_value_1, 14, tmp_tuple_element_1);
            CHECK_OBJECT(par_qconfig);
            tmp_tuple_element_1 = par_qconfig;
            PyTuple_SET_ITEM0(tmp_args_value_1, 15, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[101]);
        frame_5c8a3b74b5524ab2e78321e002c3571d->m_frame.f_lineno = 528;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5c8a3b74b5524ab2e78321e002c3571d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5c8a3b74b5524ab2e78321e002c3571d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5c8a3b74b5524ab2e78321e002c3571d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5c8a3b74b5524ab2e78321e002c3571d,
        type_description_1,
        par_self,
        par_in_channels,
        par_out_channels,
        par_kernel_size,
        par_stride,
        par_padding,
        par_dilation,
        par_groups,
        par_bias,
        par_padding_mode,
        par_eps,
        par_momentum,
        par_freeze_bn,
        par_qconfig
    );


    // Release cached frame if used for exception.
    if (frame_5c8a3b74b5524ab2e78321e002c3571d == cache_frame_5c8a3b74b5524ab2e78321e002c3571d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5c8a3b74b5524ab2e78321e002c3571d);
        cache_frame_5c8a3b74b5524ab2e78321e002c3571d = NULL;
    }

    assertFrameObject(frame_5c8a3b74b5524ab2e78321e002c3571d);

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
    CHECK_OBJECT(par_kernel_size);
    Py_DECREF(par_kernel_size);
    par_kernel_size = NULL;
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    par_stride = NULL;
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    par_padding = NULL;
    CHECK_OBJECT(par_dilation);
    Py_DECREF(par_dilation);
    par_dilation = NULL;
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

    Py_XDECREF(par_kernel_size);
    par_kernel_size = NULL;
    Py_XDECREF(par_stride);
    par_stride = NULL;
    Py_XDECREF(par_padding);
    par_padding = NULL;
    Py_XDECREF(par_dilation);
    par_dilation = NULL;
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
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_out_channels);
    Py_DECREF(par_out_channels);
    CHECK_OBJECT(par_groups);
    Py_DECREF(par_groups);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);
    CHECK_OBJECT(par_padding_mode);
    Py_DECREF(par_padding_mode);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    CHECK_OBJECT(par_momentum);
    Py_DECREF(par_momentum);
    CHECK_OBJECT(par_freeze_bn);
    Py_DECREF(par_freeze_bn);
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_out_channels);
    Py_DECREF(par_out_channels);
    CHECK_OBJECT(par_groups);
    Py_DECREF(par_groups);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);
    CHECK_OBJECT(par_padding_mode);
    Py_DECREF(par_padding_mode);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    CHECK_OBJECT(par_momentum);
    Py_DECREF(par_momentum);
    CHECK_OBJECT(par_freeze_bn);
    Py_DECREF(par_freeze_bn);
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__26___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_in_channels = python_pars[1];
    PyObject *par_out_channels = python_pars[2];
    PyObject *par_kernel_size = python_pars[3];
    PyObject *par_stride = python_pars[4];
    PyObject *par_padding = python_pars[5];
    PyObject *par_dilation = python_pars[6];
    PyObject *par_groups = python_pars[7];
    PyObject *par_bias = python_pars[8];
    PyObject *par_padding_mode = python_pars[9];
    PyObject *par_eps = python_pars[10];
    PyObject *par_momentum = python_pars[11];
    PyObject *par_freeze_bn = python_pars[12];
    PyObject *par_qconfig = python_pars[13];
    struct Nuitka_FrameObject *frame_4f39d5d708a8d3a420f5c4b308a7df1a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4f39d5d708a8d3a420f5c4b308a7df1a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4f39d5d708a8d3a420f5c4b308a7df1a)) {
        Py_XDECREF(cache_frame_4f39d5d708a8d3a420f5c4b308a7df1a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4f39d5d708a8d3a420f5c4b308a7df1a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4f39d5d708a8d3a420f5c4b308a7df1a = MAKE_FUNCTION_FRAME(codeobj_4f39d5d708a8d3a420f5c4b308a7df1a, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4f39d5d708a8d3a420f5c4b308a7df1a->m_type_description == NULL);
    frame_4f39d5d708a8d3a420f5c4b308a7df1a = cache_frame_4f39d5d708a8d3a420f5c4b308a7df1a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4f39d5d708a8d3a420f5c4b308a7df1a);
    assert(Py_REFCNT(frame_4f39d5d708a8d3a420f5c4b308a7df1a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;
            type_description_1 = "ooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER2(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;
            type_description_1 = "ooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_in_channels);
        tmp_args_element_value_1 = par_in_channels;
        CHECK_OBJECT(par_out_channels);
        tmp_args_element_value_2 = par_out_channels;
        CHECK_OBJECT(par_kernel_size);
        tmp_args_element_value_3 = par_kernel_size;
        CHECK_OBJECT(par_stride);
        tmp_args_element_value_4 = par_stride;
        CHECK_OBJECT(par_padding);
        tmp_args_element_value_5 = par_padding;
        CHECK_OBJECT(par_dilation);
        tmp_args_element_value_6 = par_dilation;
        CHECK_OBJECT(par_groups);
        tmp_args_element_value_7 = par_groups;
        CHECK_OBJECT(par_bias);
        tmp_args_element_value_8 = par_bias;
        CHECK_OBJECT(par_padding_mode);
        tmp_args_element_value_9 = par_padding_mode;
        CHECK_OBJECT(par_eps);
        tmp_args_element_value_10 = par_eps;
        CHECK_OBJECT(par_momentum);
        tmp_args_element_value_11 = par_momentum;
        CHECK_OBJECT(par_freeze_bn);
        tmp_args_element_value_12 = par_freeze_bn;
        CHECK_OBJECT(par_qconfig);
        tmp_args_element_value_13 = par_qconfig;
        frame_4f39d5d708a8d3a420f5c4b308a7df1a->m_frame.f_lineno = 591;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS13(
                tmp_called_instance_1,
                mod_consts[4],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;
            type_description_1 = "ooooooooooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4f39d5d708a8d3a420f5c4b308a7df1a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4f39d5d708a8d3a420f5c4b308a7df1a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4f39d5d708a8d3a420f5c4b308a7df1a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4f39d5d708a8d3a420f5c4b308a7df1a,
        type_description_1,
        par_self,
        par_in_channels,
        par_out_channels,
        par_kernel_size,
        par_stride,
        par_padding,
        par_dilation,
        par_groups,
        par_bias,
        par_padding_mode,
        par_eps,
        par_momentum,
        par_freeze_bn,
        par_qconfig,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_4f39d5d708a8d3a420f5c4b308a7df1a == cache_frame_4f39d5d708a8d3a420f5c4b308a7df1a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4f39d5d708a8d3a420f5c4b308a7df1a);
        cache_frame_4f39d5d708a8d3a420f5c4b308a7df1a = NULL;
    }

    assertFrameObject(frame_4f39d5d708a8d3a420f5c4b308a7df1a);

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
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_out_channels);
    Py_DECREF(par_out_channels);
    CHECK_OBJECT(par_kernel_size);
    Py_DECREF(par_kernel_size);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    CHECK_OBJECT(par_dilation);
    Py_DECREF(par_dilation);
    CHECK_OBJECT(par_groups);
    Py_DECREF(par_groups);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);
    CHECK_OBJECT(par_padding_mode);
    Py_DECREF(par_padding_mode);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    CHECK_OBJECT(par_momentum);
    Py_DECREF(par_momentum);
    CHECK_OBJECT(par_freeze_bn);
    Py_DECREF(par_freeze_bn);
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_out_channels);
    Py_DECREF(par_out_channels);
    CHECK_OBJECT(par_kernel_size);
    Py_DECREF(par_kernel_size);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    CHECK_OBJECT(par_dilation);
    Py_DECREF(par_dilation);
    CHECK_OBJECT(par_groups);
    Py_DECREF(par_groups);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);
    CHECK_OBJECT(par_padding_mode);
    Py_DECREF(par_padding_mode);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    CHECK_OBJECT(par_momentum);
    Py_DECREF(par_momentum);
    CHECK_OBJECT(par_freeze_bn);
    Py_DECREF(par_freeze_bn);
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__27_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_input = python_pars[1];
    struct Nuitka_FrameObject *frame_ed8e43e3c218aaa28723f7b4ddcdb442;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ed8e43e3c218aaa28723f7b4ddcdb442 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ed8e43e3c218aaa28723f7b4ddcdb442)) {
        Py_XDECREF(cache_frame_ed8e43e3c218aaa28723f7b4ddcdb442);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ed8e43e3c218aaa28723f7b4ddcdb442 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ed8e43e3c218aaa28723f7b4ddcdb442 = MAKE_FUNCTION_FRAME(codeobj_ed8e43e3c218aaa28723f7b4ddcdb442, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ed8e43e3c218aaa28723f7b4ddcdb442->m_type_description == NULL);
    frame_ed8e43e3c218aaa28723f7b4ddcdb442 = cache_frame_ed8e43e3c218aaa28723f7b4ddcdb442;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ed8e43e3c218aaa28723f7b4ddcdb442);
    assert(Py_REFCNT(frame_ed8e43e3c218aaa28723f7b4ddcdb442) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 608;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[90]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 608;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 608;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        CHECK_OBJECT(par_input);
        tmp_args_element_value_3 = par_input;
        frame_ed8e43e3c218aaa28723f7b4ddcdb442->m_frame.f_lineno = 608;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_args_element_value_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[47],
                call_args
            );
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 608;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_ed8e43e3c218aaa28723f7b4ddcdb442->m_frame.f_lineno = 608;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 608;
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
        exception_tb = MAKE_TRACEBACK(frame_ed8e43e3c218aaa28723f7b4ddcdb442, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ed8e43e3c218aaa28723f7b4ddcdb442->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ed8e43e3c218aaa28723f7b4ddcdb442, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ed8e43e3c218aaa28723f7b4ddcdb442,
        type_description_1,
        par_self,
        par_input
    );


    // Release cached frame if used for exception.
    if (frame_ed8e43e3c218aaa28723f7b4ddcdb442 == cache_frame_ed8e43e3c218aaa28723f7b4ddcdb442) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ed8e43e3c218aaa28723f7b4ddcdb442);
        cache_frame_ed8e43e3c218aaa28723f7b4ddcdb442 = NULL;
    }

    assertFrameObject(frame_ed8e43e3c218aaa28723f7b4ddcdb442);

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
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__28_from_float(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_mod = python_pars[1];
    struct Nuitka_FrameObject *frame_c16df0252bf54330fa22204c5856d653;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c16df0252bf54330fa22204c5856d653 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c16df0252bf54330fa22204c5856d653)) {
        Py_XDECREF(cache_frame_c16df0252bf54330fa22204c5856d653);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c16df0252bf54330fa22204c5856d653 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c16df0252bf54330fa22204c5856d653 = MAKE_FUNCTION_FRAME(codeobj_c16df0252bf54330fa22204c5856d653, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c16df0252bf54330fa22204c5856d653->m_type_description == NULL);
    frame_c16df0252bf54330fa22204c5856d653 = cache_frame_c16df0252bf54330fa22204c5856d653;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c16df0252bf54330fa22204c5856d653);
    assert(Py_REFCNT(frame_c16df0252bf54330fa22204c5856d653) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 612;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_object_arg_value_1 = par_cls;
        tmp_called_instance_1 = BUILTIN_SUPER2(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 612;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_mod);
        tmp_args_element_value_1 = par_mod;
        frame_c16df0252bf54330fa22204c5856d653->m_frame.f_lineno = 612;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[93], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 612;
            type_description_1 = "ooN";
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
        exception_tb = MAKE_TRACEBACK(frame_c16df0252bf54330fa22204c5856d653, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c16df0252bf54330fa22204c5856d653->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c16df0252bf54330fa22204c5856d653, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c16df0252bf54330fa22204c5856d653,
        type_description_1,
        par_cls,
        par_mod,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_c16df0252bf54330fa22204c5856d653 == cache_frame_c16df0252bf54330fa22204c5856d653) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c16df0252bf54330fa22204c5856d653);
        cache_frame_c16df0252bf54330fa22204c5856d653 = NULL;
    }

    assertFrameObject(frame_c16df0252bf54330fa22204c5856d653);

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
    CHECK_OBJECT(par_mod);
    Py_DECREF(par_mod);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_mod);
    Py_DECREF(par_mod);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__29___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_in_channels = python_pars[1];
    PyObject *par_out_channels = python_pars[2];
    PyObject *par_kernel_size = python_pars[3];
    PyObject *par_stride = python_pars[4];
    PyObject *par_padding = python_pars[5];
    PyObject *par_dilation = python_pars[6];
    PyObject *par_groups = python_pars[7];
    PyObject *par_bias = python_pars[8];
    PyObject *par_padding_mode = python_pars[9];
    PyObject *par_qconfig = python_pars[10];
    struct Nuitka_FrameObject *frame_461a3a6c69162c5fa5ad465bac2c50b5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_461a3a6c69162c5fa5ad465bac2c50b5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_461a3a6c69162c5fa5ad465bac2c50b5)) {
        Py_XDECREF(cache_frame_461a3a6c69162c5fa5ad465bac2c50b5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_461a3a6c69162c5fa5ad465bac2c50b5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_461a3a6c69162c5fa5ad465bac2c50b5 = MAKE_FUNCTION_FRAME(codeobj_461a3a6c69162c5fa5ad465bac2c50b5, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_461a3a6c69162c5fa5ad465bac2c50b5->m_type_description == NULL);
    frame_461a3a6c69162c5fa5ad465bac2c50b5 = cache_frame_461a3a6c69162c5fa5ad465bac2c50b5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_461a3a6c69162c5fa5ad465bac2c50b5);
    assert(Py_REFCNT(frame_461a3a6c69162c5fa5ad465bac2c50b5) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        PyObject *tmp_kw_call_dict_value_6_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 644;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER2(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 644;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 644;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_in_channels);
        tmp_kw_call_arg_value_0_1 = par_in_channels;
        CHECK_OBJECT(par_out_channels);
        tmp_kw_call_arg_value_1_1 = par_out_channels;
        CHECK_OBJECT(par_kernel_size);
        tmp_kw_call_arg_value_2_1 = par_kernel_size;
        CHECK_OBJECT(par_stride);
        tmp_kw_call_dict_value_0_1 = par_stride;
        CHECK_OBJECT(par_padding);
        tmp_kw_call_dict_value_1_1 = par_padding;
        CHECK_OBJECT(par_dilation);
        tmp_kw_call_dict_value_2_1 = par_dilation;
        CHECK_OBJECT(par_groups);
        tmp_kw_call_dict_value_3_1 = par_groups;
        CHECK_OBJECT(par_bias);
        tmp_kw_call_dict_value_4_1 = par_bias;
        CHECK_OBJECT(par_padding_mode);
        tmp_kw_call_dict_value_5_1 = par_padding_mode;
        CHECK_OBJECT(par_qconfig);
        tmp_kw_call_dict_value_6_1 = par_qconfig;
        frame_461a3a6c69162c5fa5ad465bac2c50b5->m_frame.f_lineno = 644;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[7] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[99]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 644;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_qconfig);
        tmp_operand_value_1 = par_qconfig;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 656;
            type_description_1 = "oooooooooooN";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_raise_value_1 = mod_consts[5];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 656;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_qconfig);
        tmp_assattr_value_1 = par_qconfig;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[6], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 657;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[6]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 658;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        frame_461a3a6c69162c5fa5ad465bac2c50b5->m_frame.f_lineno = 658;
        tmp_assattr_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[11]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 658;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[12], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 658;
            type_description_1 = "oooooooooooN";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_461a3a6c69162c5fa5ad465bac2c50b5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_461a3a6c69162c5fa5ad465bac2c50b5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_461a3a6c69162c5fa5ad465bac2c50b5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_461a3a6c69162c5fa5ad465bac2c50b5,
        type_description_1,
        par_self,
        par_in_channels,
        par_out_channels,
        par_kernel_size,
        par_stride,
        par_padding,
        par_dilation,
        par_groups,
        par_bias,
        par_padding_mode,
        par_qconfig,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_461a3a6c69162c5fa5ad465bac2c50b5 == cache_frame_461a3a6c69162c5fa5ad465bac2c50b5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_461a3a6c69162c5fa5ad465bac2c50b5);
        cache_frame_461a3a6c69162c5fa5ad465bac2c50b5 = NULL;
    }

    assertFrameObject(frame_461a3a6c69162c5fa5ad465bac2c50b5);

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
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_out_channels);
    Py_DECREF(par_out_channels);
    CHECK_OBJECT(par_kernel_size);
    Py_DECREF(par_kernel_size);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    CHECK_OBJECT(par_dilation);
    Py_DECREF(par_dilation);
    CHECK_OBJECT(par_groups);
    Py_DECREF(par_groups);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);
    CHECK_OBJECT(par_padding_mode);
    Py_DECREF(par_padding_mode);
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_in_channels);
    Py_DECREF(par_in_channels);
    CHECK_OBJECT(par_out_channels);
    Py_DECREF(par_out_channels);
    CHECK_OBJECT(par_kernel_size);
    Py_DECREF(par_kernel_size);
    CHECK_OBJECT(par_stride);
    Py_DECREF(par_stride);
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    CHECK_OBJECT(par_dilation);
    Py_DECREF(par_dilation);
    CHECK_OBJECT(par_groups);
    Py_DECREF(par_groups);
    CHECK_OBJECT(par_bias);
    Py_DECREF(par_bias);
    CHECK_OBJECT(par_padding_mode);
    Py_DECREF(par_padding_mode);
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__30_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_input = python_pars[1];
    struct Nuitka_FrameObject *frame_fa41a634e0508c802d5f80192a570ded;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fa41a634e0508c802d5f80192a570ded = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fa41a634e0508c802d5f80192a570ded)) {
        Py_XDECREF(cache_frame_fa41a634e0508c802d5f80192a570ded);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fa41a634e0508c802d5f80192a570ded == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fa41a634e0508c802d5f80192a570ded = MAKE_FUNCTION_FRAME(codeobj_fa41a634e0508c802d5f80192a570ded, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fa41a634e0508c802d5f80192a570ded->m_type_description == NULL);
    frame_fa41a634e0508c802d5f80192a570ded = cache_frame_fa41a634e0508c802d5f80192a570ded;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fa41a634e0508c802d5f80192a570ded);
    assert(Py_REFCNT(frame_fa41a634e0508c802d5f80192a570ded) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 661;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[90]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 661;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[44]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 662;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_input);
        tmp_args_element_value_2 = par_input;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[12]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 662;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[11]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 662;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_fa41a634e0508c802d5f80192a570ded->m_frame.f_lineno = 662;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 662;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[16]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 662;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_fa41a634e0508c802d5f80192a570ded->m_frame.f_lineno = 662;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_5};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 662;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_fa41a634e0508c802d5f80192a570ded->m_frame.f_lineno = 661;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 661;
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
        exception_tb = MAKE_TRACEBACK(frame_fa41a634e0508c802d5f80192a570ded, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fa41a634e0508c802d5f80192a570ded->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fa41a634e0508c802d5f80192a570ded, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fa41a634e0508c802d5f80192a570ded,
        type_description_1,
        par_self,
        par_input
    );


    // Release cached frame if used for exception.
    if (frame_fa41a634e0508c802d5f80192a570ded == cache_frame_fa41a634e0508c802d5f80192a570ded) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fa41a634e0508c802d5f80192a570ded);
        cache_frame_fa41a634e0508c802d5f80192a570ded = NULL;
    }

    assertFrameObject(frame_fa41a634e0508c802d5f80192a570ded);

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
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__31_from_float(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_mod = python_pars[1];
    struct Nuitka_FrameObject *frame_120ce4d8125c1fbe7a7415b54ef40704;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_120ce4d8125c1fbe7a7415b54ef40704 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_120ce4d8125c1fbe7a7415b54ef40704)) {
        Py_XDECREF(cache_frame_120ce4d8125c1fbe7a7415b54ef40704);

#if _DEBUG_REFCOUNTS
        if (cache_frame_120ce4d8125c1fbe7a7415b54ef40704 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_120ce4d8125c1fbe7a7415b54ef40704 = MAKE_FUNCTION_FRAME(codeobj_120ce4d8125c1fbe7a7415b54ef40704, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_120ce4d8125c1fbe7a7415b54ef40704->m_type_description == NULL);
    frame_120ce4d8125c1fbe7a7415b54ef40704 = cache_frame_120ce4d8125c1fbe7a7415b54ef40704;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_120ce4d8125c1fbe7a7415b54ef40704);
    assert(Py_REFCNT(frame_120ce4d8125c1fbe7a7415b54ef40704) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_object_arg_value_1 = par_cls;
        tmp_called_instance_1 = BUILTIN_SUPER2(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_mod);
        tmp_args_element_value_1 = par_mod;
        frame_120ce4d8125c1fbe7a7415b54ef40704->m_frame.f_lineno = 667;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[93], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;
            type_description_1 = "ooN";
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
        exception_tb = MAKE_TRACEBACK(frame_120ce4d8125c1fbe7a7415b54ef40704, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_120ce4d8125c1fbe7a7415b54ef40704->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_120ce4d8125c1fbe7a7415b54ef40704, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_120ce4d8125c1fbe7a7415b54ef40704,
        type_description_1,
        par_cls,
        par_mod,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_120ce4d8125c1fbe7a7415b54ef40704 == cache_frame_120ce4d8125c1fbe7a7415b54ef40704) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_120ce4d8125c1fbe7a7415b54ef40704);
        cache_frame_120ce4d8125c1fbe7a7415b54ef40704 = NULL;
    }

    assertFrameObject(frame_120ce4d8125c1fbe7a7415b54ef40704);

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
    CHECK_OBJECT(par_mod);
    Py_DECREF(par_mod);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_mod);
    Py_DECREF(par_mod);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__32_update_bn_stats(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mod = python_pars[0];
    struct Nuitka_FrameObject *frame_bb02ec65cb3be4f872cf2eb482b2804a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_bb02ec65cb3be4f872cf2eb482b2804a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bb02ec65cb3be4f872cf2eb482b2804a)) {
        Py_XDECREF(cache_frame_bb02ec65cb3be4f872cf2eb482b2804a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bb02ec65cb3be4f872cf2eb482b2804a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bb02ec65cb3be4f872cf2eb482b2804a = MAKE_FUNCTION_FRAME(codeobj_bb02ec65cb3be4f872cf2eb482b2804a, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bb02ec65cb3be4f872cf2eb482b2804a->m_type_description == NULL);
    frame_bb02ec65cb3be4f872cf2eb482b2804a = cache_frame_bb02ec65cb3be4f872cf2eb482b2804a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bb02ec65cb3be4f872cf2eb482b2804a);
    assert(Py_REFCNT(frame_bb02ec65cb3be4f872cf2eb482b2804a) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(par_mod);
        tmp_type_arg_1 = par_mod;
        tmp_cmp_expr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_cmp_expr_left_1 == NULL));
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 671;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_set_arg_1 = MAKE_LIST_EMPTY(6);
        PyList_SET_ITEM0(tmp_set_arg_1, 0, tmp_list_element_1);
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 671;
            type_description_1 = "o";
            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_set_arg_1, 1, tmp_list_element_1);
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 671;
            type_description_1 = "o";
            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_set_arg_1, 2, tmp_list_element_1);
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 671;
            type_description_1 = "o";
            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_set_arg_1, 3, tmp_list_element_1);
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 671;
            type_description_1 = "o";
            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_set_arg_1, 4, tmp_list_element_1);
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 671;
            type_description_1 = "o";
            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_set_arg_1, 5, tmp_list_element_1);
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_set_arg_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_cmp_expr_right_1 = PySet_New(tmp_set_arg_1);
        Py_DECREF(tmp_set_arg_1);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 670;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 670;
            type_description_1 = "o";
            goto frame_exception_exit_1;
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_mod);
        tmp_called_instance_1 = par_mod;
        frame_bb02ec65cb3be4f872cf2eb482b2804a->m_frame.f_lineno = 673;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[21]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 673;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_bb02ec65cb3be4f872cf2eb482b2804a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bb02ec65cb3be4f872cf2eb482b2804a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bb02ec65cb3be4f872cf2eb482b2804a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bb02ec65cb3be4f872cf2eb482b2804a,
        type_description_1,
        par_mod
    );


    // Release cached frame if used for exception.
    if (frame_bb02ec65cb3be4f872cf2eb482b2804a == cache_frame_bb02ec65cb3be4f872cf2eb482b2804a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bb02ec65cb3be4f872cf2eb482b2804a);
        cache_frame_bb02ec65cb3be4f872cf2eb482b2804a = NULL;
    }

    assertFrameObject(frame_bb02ec65cb3be4f872cf2eb482b2804a);

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
    CHECK_OBJECT(par_mod);
    Py_DECREF(par_mod);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_mod);
    Py_DECREF(par_mod);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__33_freeze_bn_stats(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mod = python_pars[0];
    struct Nuitka_FrameObject *frame_d5fa26fd2380ef08adeaebf0923895a2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d5fa26fd2380ef08adeaebf0923895a2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d5fa26fd2380ef08adeaebf0923895a2)) {
        Py_XDECREF(cache_frame_d5fa26fd2380ef08adeaebf0923895a2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d5fa26fd2380ef08adeaebf0923895a2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d5fa26fd2380ef08adeaebf0923895a2 = MAKE_FUNCTION_FRAME(codeobj_d5fa26fd2380ef08adeaebf0923895a2, module_torch$nn$intrinsic$qat$modules$conv_fused, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d5fa26fd2380ef08adeaebf0923895a2->m_type_description == NULL);
    frame_d5fa26fd2380ef08adeaebf0923895a2 = cache_frame_d5fa26fd2380ef08adeaebf0923895a2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d5fa26fd2380ef08adeaebf0923895a2);
    assert(Py_REFCNT(frame_d5fa26fd2380ef08adeaebf0923895a2) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(par_mod);
        tmp_type_arg_1 = par_mod;
        tmp_cmp_expr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_cmp_expr_left_1 == NULL));
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 677;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_set_arg_1 = MAKE_LIST_EMPTY(6);
        PyList_SET_ITEM0(tmp_set_arg_1, 0, tmp_list_element_1);
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 677;
            type_description_1 = "o";
            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_set_arg_1, 1, tmp_list_element_1);
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 677;
            type_description_1 = "o";
            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_set_arg_1, 2, tmp_list_element_1);
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 677;
            type_description_1 = "o";
            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_set_arg_1, 3, tmp_list_element_1);
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 677;
            type_description_1 = "o";
            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_set_arg_1, 4, tmp_list_element_1);
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 677;
            type_description_1 = "o";
            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_set_arg_1, 5, tmp_list_element_1);
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_set_arg_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_cmp_expr_right_1 = PySet_New(tmp_set_arg_1);
        Py_DECREF(tmp_set_arg_1);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 676;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 676;
            type_description_1 = "o";
            goto frame_exception_exit_1;
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_mod);
        tmp_called_instance_1 = par_mod;
        frame_d5fa26fd2380ef08adeaebf0923895a2->m_frame.f_lineno = 679;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[20]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 679;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_d5fa26fd2380ef08adeaebf0923895a2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d5fa26fd2380ef08adeaebf0923895a2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d5fa26fd2380ef08adeaebf0923895a2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d5fa26fd2380ef08adeaebf0923895a2,
        type_description_1,
        par_mod
    );


    // Release cached frame if used for exception.
    if (frame_d5fa26fd2380ef08adeaebf0923895a2 == cache_frame_d5fa26fd2380ef08adeaebf0923895a2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d5fa26fd2380ef08adeaebf0923895a2);
        cache_frame_d5fa26fd2380ef08adeaebf0923895a2 = NULL;
    }

    assertFrameObject(frame_d5fa26fd2380ef08adeaebf0923895a2);

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
    CHECK_OBJECT(par_mod);
    Py_DECREF(par_mod);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_mod);
    Py_DECREF(par_mod);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__10_train(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__10_train,
        mod_consts[49],
#if PYTHON_VERSION >= 0x300
        mod_consts[155],
#endif
        codeobj_6401b01198d598d0b461f5fce1192be6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        mod_consts[51],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__11__load_from_state_dict() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__11__load_from_state_dict,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        mod_consts[156],
#endif
        codeobj_6c04402bfb07b8ee7107417af94d1a4b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__12_from_float() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__12_from_float,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        mod_consts[158],
#endif
        codeobj_dc6ba744c6e7e8be795b64a85496c9f0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        mod_consts[77],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__13_to_float() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__13_to_float,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        mod_consts[160],
#endif
        codeobj_7f06d5abe85d3cb97ac6f9403bb8e7ca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__14___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__14___init__,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[165],
#endif
        codeobj_ec212b85b3d1c15011f22535973ebc10,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__15___init__(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__15___init__,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[168],
#endif
        codeobj_e7c862916681ba66acf3566abbdc8053,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__16_forward() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__16_forward,
        mod_consts[152],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_94dc36f8402a52b94f80b152ed547c8a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__17_from_float() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__17_from_float,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        mod_consts[170],
#endif
        codeobj_a84c96b41c6995e726d3252c295bb8b4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__18___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__18___init__,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_578e035b83d380550312598b41098254,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__19___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__19___init__,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[175],
#endif
        codeobj_65dad2a49db0940434db2391de502881,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__1___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__1___init__,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_4aaa24291461810fff62166e2954eaaf,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__20_forward() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__20_forward,
        mod_consts[152],
#if PYTHON_VERSION >= 0x300
        mod_consts[176],
#endif
        codeobj_e72e9a541dcbfbcaa6c845c59cb82bfe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__21_from_float() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__21_from_float,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_b5029e7a2fd42278705c56d25dcd252e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__22___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__22___init__,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[180],
#endif
        codeobj_09fb52f5993021669ad8ed5a7a7acbdf,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__23_forward() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__23_forward,
        mod_consts[152],
#if PYTHON_VERSION >= 0x300
        mod_consts[181],
#endif
        codeobj_83882db7a66ba7bc16cab5b908c97c2c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__24_from_float() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__24_from_float,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        mod_consts[182],
#endif
        codeobj_ea28c591a0f1b5921d3b7fed7c7f0caf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__25___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__25___init__,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[185],
#endif
        codeobj_5c8a3b74b5524ab2e78321e002c3571d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__26___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__26___init__,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[187],
#endif
        codeobj_4f39d5d708a8d3a420f5c4b308a7df1a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__27_forward() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__27_forward,
        mod_consts[152],
#if PYTHON_VERSION >= 0x300
        mod_consts[188],
#endif
        codeobj_ed8e43e3c218aaa28723f7b4ddcdb442,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__28_from_float() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__28_from_float,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        mod_consts[189],
#endif
        codeobj_c16df0252bf54330fa22204c5856d653,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__29___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__29___init__,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[191],
#endif
        codeobj_461a3a6c69162c5fa5ad465bac2c50b5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__2_reset_running_stats() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__2_reset_running_stats,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[145],
#endif
        codeobj_ebdc54e31a3e03cf255ece4d7dbcaf2f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__30_forward() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__30_forward,
        mod_consts[152],
#if PYTHON_VERSION >= 0x300
        mod_consts[192],
#endif
        codeobj_fa41a634e0508c802d5f80192a570ded,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__31_from_float() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__31_from_float,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        mod_consts[193],
#endif
        codeobj_120ce4d8125c1fbe7a7415b54ef40704,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__32_update_bn_stats() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__32_update_bn_stats,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bb02ec65cb3be4f872cf2eb482b2804a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__33_freeze_bn_stats() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__33_freeze_bn_stats,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d5fa26fd2380ef08adeaebf0923895a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__3_reset_bn_parameters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__3_reset_bn_parameters,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[146],
#endif
        codeobj_2d757c96e6c206421f6fa918df72bfa6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__4_reset_parameters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__4_reset_parameters,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[147],
#endif
        codeobj_51790826b23a64a2a1c777ccfcb64ec2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__5_update_bn_stats() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__5_update_bn_stats,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_da676ec8d2637d264b9ad2e157de67fc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__6_freeze_bn_stats() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__6_freeze_bn_stats,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[149],
#endif
        codeobj_907cc9a9d0865c3241e4b1a548b8dab3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__7__forward() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__7__forward,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        mod_consts[150],
#endif
        codeobj_d215a544449a6755732689d73e310f5b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__8_extra_repr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__8_extra_repr,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        mod_consts[151],
#endif
        codeobj_5528306fb7094adfcad00e3efbbe38f5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__9_forward() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__9_forward,
        mod_consts[152],
#if PYTHON_VERSION >= 0x300
        mod_consts[153],
#endif
        codeobj_510d4d7c966542941e0424d03e769e8f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$nn$intrinsic$qat$modules$conv_fused,
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

function_impl_code functable_torch$nn$intrinsic$qat$modules$conv_fused[] = {
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__1___init__,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__2_reset_running_stats,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__3_reset_bn_parameters,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__4_reset_parameters,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__5_update_bn_stats,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__6_freeze_bn_stats,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__7__forward,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__8_extra_repr,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__9_forward,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__10_train,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__11__load_from_state_dict,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__12_from_float,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__13_to_float,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__14___init__,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__15___init__,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__16_forward,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__17_from_float,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__18___init__,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__19___init__,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__20_forward,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__21_from_float,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__22___init__,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__23_forward,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__24_from_float,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__25___init__,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__26___init__,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__27_forward,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__28_from_float,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__29___init__,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__30_forward,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__31_from_float,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__32_update_bn_stats,
    impl_torch$nn$intrinsic$qat$modules$conv_fused$$$function__33_freeze_bn_stats,
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

    function_impl_code *current = functable_torch$nn$intrinsic$qat$modules$conv_fused;
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

    if (offset > sizeof(functable_torch$nn$intrinsic$qat$modules$conv_fused) || offset < 0) {
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
        functable_torch$nn$intrinsic$qat$modules$conv_fused[offset],
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
        module_torch$nn$intrinsic$qat$modules$conv_fused,
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
PyObject *modulecode_torch$nn$intrinsic$qat$modules$conv_fused(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch.nn.intrinsic.qat.modules.conv_fused");

    // Store the module for future use.
    module_torch$nn$intrinsic$qat$modules$conv_fused = module;

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
        PRINT_STRING("torch.nn.intrinsic.qat.modules.conv_fused: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.nn.intrinsic.qat.modules.conv_fused: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.nn.intrinsic.qat.modules.conv_fused: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$nn$intrinsic$qat$modules$conv_fused\n");

    moduledict_torch$nn$intrinsic$qat$modules$conv_fused = MODULE_DICT(module_torch$nn$intrinsic$qat$modules$conv_fused);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$nn$intrinsic$qat$modules$conv_fused,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$nn$intrinsic$qat$modules$conv_fused,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[212]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$nn$intrinsic$qat$modules$conv_fused,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$nn$intrinsic$qat$modules$conv_fused,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$nn$intrinsic$qat$modules$conv_fused,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$nn$intrinsic$qat$modules$conv_fused);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$nn$intrinsic$qat$modules$conv_fused);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    struct Nuitka_CellObject *outline_2_var___class__ = Nuitka_Cell_Empty();
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
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
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__bases_orig = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__bases_orig = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__bases_orig = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_290db10fbad5acc303c0554377bb0833;
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
    int tmp_res;
    PyObject *locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__1__ConvBnNd_22 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_5be57df756bd864d34b205d7a5a1929d_2;
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
    PyObject *locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__2_ConvBn1d_257 = NULL;
    struct Nuitka_FrameObject *frame_10bcd231e4fba4b14b61044d07558270_3;
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
    PyObject *locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__3_ConvBnReLU1d_301 = NULL;
    struct Nuitka_FrameObject *frame_0f92b38e6cca379f6267f939e94bf40a_4;
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
    PyObject *locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__4_ConvBn2d_350 = NULL;
    struct Nuitka_FrameObject *frame_eb1962241b2a746d9f9e594c3a93a0db_5;
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
    PyObject *locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__5_ConvBnReLU2d_394 = NULL;
    struct Nuitka_FrameObject *frame_e9519555d82dc09cff4b11917d1f9238_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
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
    PyObject *locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__6_ConvReLU2d_443 = NULL;
    struct Nuitka_FrameObject *frame_c0da219430acd03559ff4e46413e5bb5_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__7_ConvBn3d_480 = NULL;
    struct Nuitka_FrameObject *frame_b09e0e8d9aa40e06f0d6e6aff9fd8e8d_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__8_ConvBnReLU3d_548 = NULL;
    struct Nuitka_FrameObject *frame_cca297555e12171f1a8dac7ed8fd0a15_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__9_ConvReLU3d_614 = NULL;
    struct Nuitka_FrameObject *frame_b0beb0433cb9dec10753a24f33c2293b_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_2);
    }
    frame_290db10fbad5acc303c0554377bb0833 = MAKE_MODULE_FRAME(codeobj_290db10fbad5acc303c0554377bb0833, module_torch$nn$intrinsic$qat$modules$conv_fused);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_290db10fbad5acc303c0554377bb0833);
    assert(Py_REFCNT(frame_290db10fbad5acc303c0554377bb0833) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[108], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[109], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[29];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$nn$intrinsic$qat$modules$conv_fused;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[37];
        frame_290db10fbad5acc303c0554377bb0833->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[14];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$nn$intrinsic$qat$modules$conv_fused;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[37];
        frame_290db10fbad5acc303c0554377bb0833->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[111];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torch$nn$intrinsic$qat$modules$conv_fused;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[37];
        frame_290db10fbad5acc303c0554377bb0833->m_frame.f_lineno = 3;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$nn$intrinsic$qat$modules$conv_fused,
                mod_consts[0],
                mod_consts[37]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[112];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torch$nn$intrinsic$qat$modules$conv_fused;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[37];
        frame_290db10fbad5acc303c0554377bb0833->m_frame.f_lineno = 4;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_import_name_from_2 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torch$nn$intrinsic$qat$modules$conv_fused,
                mod_consts[0],
                mod_consts[37]
            );
        } else {
            tmp_import_name_from_2 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torch$nn$intrinsic$qat$modules$conv_fused,
                mod_consts[113],
                mod_consts[37]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[113]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[115];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_torch$nn$intrinsic$qat$modules$conv_fused;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = mod_consts[37];
        frame_290db10fbad5acc303c0554377bb0833->m_frame.f_lineno = 5;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_import_name_from_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_torch$nn$intrinsic$qat$modules$conv_fused,
                mod_consts[0],
                mod_consts[37]
            );
        } else {
            tmp_import_name_from_4 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_torch$nn$intrinsic$qat$modules$conv_fused,
                mod_consts[116],
                mod_consts[37]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[116]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[118];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_torch$nn$intrinsic$qat$modules$conv_fused;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = mod_consts[37];
        frame_290db10fbad5acc303c0554377bb0833->m_frame.f_lineno = 6;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_import_name_from_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_torch$nn$intrinsic$qat$modules$conv_fused,
                mod_consts[0],
                mod_consts[37]
            );
        } else {
            tmp_import_name_from_6 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_torch$nn$intrinsic$qat$modules$conv_fused,
                mod_consts[119],
                mod_consts[37]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[119]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[111];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_torch$nn$intrinsic$qat$modules$conv_fused;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[120];
        tmp_level_value_7 = mod_consts[37];
        frame_290db10fbad5acc303c0554377bb0833->m_frame.f_lineno = 7;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_torch$nn$intrinsic$qat$modules$conv_fused,
                mod_consts[23],
                mod_consts[37]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[23]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[121];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_torch$nn$intrinsic$qat$modules$conv_fused;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[122];
        tmp_level_value_8 = mod_consts[37];
        frame_290db10fbad5acc303c0554377bb0833->m_frame.f_lineno = 8;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_torch$nn$intrinsic$qat$modules$conv_fused,
                mod_consts[85],
                mod_consts[37]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[85]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_10 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_torch$nn$intrinsic$qat$modules$conv_fused,
                mod_consts[94],
                mod_consts[37]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[94]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_11 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_torch$nn$intrinsic$qat$modules$conv_fused,
                mod_consts[100],
                mod_consts[37]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[100]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_14);
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
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[123];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_torch$nn$intrinsic$qat$modules$conv_fused;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[124];
        tmp_level_value_9 = mod_consts[37];
        frame_290db10fbad5acc303c0554377bb0833->m_frame.f_lineno = 9;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_torch$nn$intrinsic$qat$modules$conv_fused,
                mod_consts[13],
                mod_consts[37]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[13]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_13;
        tmp_import_name_from_13 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_13 == NULL));
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_torch$nn$intrinsic$qat$modules$conv_fused,
                mod_consts[125],
                mod_consts[37]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[125]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        tmp_dict_key_1 = mod_consts[28];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[126]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[127];
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[128]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[129];
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[130]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_17);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[1]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[2]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[3]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        frame_290db10fbad5acc303c0554377bb0833->m_frame.f_lineno = 19;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_assign_source_18 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_1, mod_consts[131], kw_values, mod_consts[132]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_18);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[1]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[2]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[3]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        tmp_assign_source_19 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyTuple_SET_ITEM(tmp_assign_source_19, 0, tmp_tuple_element_1);
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[114]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[134]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_19, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_19);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_20 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_11 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[37];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_22 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_22;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_12 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_12, mod_consts[135]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_13 = tmp_class_creation_1__metaclass;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[135]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[31];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_290db10fbad5acc303c0554377bb0833->m_frame.f_lineno = 22;
        tmp_assign_source_23 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_23;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_14 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_14, mod_consts[136]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
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
        tmp_mod_expr_left_1 = mod_consts[137];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[63];
        tmp_getattr_default_1 = mod_consts[138];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_15;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_15 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_15 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[63]);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 22;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_24;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_25;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__1__ConvBnNd_22 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[139];
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__1__ConvBnNd_22, mod_consts[140], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__1__ConvBnNd_22, mod_consts[141], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_4;
        }
        frame_5be57df756bd864d34b205d7a5a1929d_2 = MAKE_CLASS_FRAME(codeobj_5be57df756bd864d34b205d7a5a1929d, module_torch$nn$intrinsic$qat$modules$conv_fused, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_5be57df756bd864d34b205d7a5a1929d_2);
        assert(Py_REFCNT(frame_5be57df756bd864d34b205d7a5a1929d_2) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[127];
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__1__ConvBnNd_22, mod_consts[142], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__1__ConvBnNd_22, mod_consts[133]);

        if (tmp_dictset_value == NULL) {
            if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                tmp_dictset_value = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[133]);

                if (unlikely(tmp_dictset_value == NULL)) {
                    tmp_dictset_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[133]);
                }

                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 25;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }
                Py_INCREF(tmp_dictset_value);
            } else {
                goto frame_exception_exit_2;
            }
        }

        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__1__ConvBnNd_22, mod_consts[61], tmp_dictset_value);
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
            tmp_defaults_1 = mod_consts[143];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__1___init__(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__1__ConvBnNd_22, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__2_reset_running_stats();

        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__1__ConvBnNd_22, mod_consts[22], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__3_reset_bn_parameters();

        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__1__ConvBnNd_22, mod_consts[19], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__4_reset_parameters();

        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__1__ConvBnNd_22, mod_consts[32], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__5_update_bn_stats();

        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__1__ConvBnNd_22, mod_consts[21], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__6_freeze_bn_stats();

        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__1__ConvBnNd_22, mod_consts[20], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__7__forward();

        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__1__ConvBnNd_22, mod_consts[47], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__8_extra_repr();

        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__1__ConvBnNd_22, mod_consts[46], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__9_forward();

        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__1__ConvBnNd_22, mod_consts[152], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[154];
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__10_train(tmp_defaults_2);

            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__1__ConvBnNd_22, mod_consts[49], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__11__load_from_state_dict();

        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__1__ConvBnNd_22, mod_consts[60], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_classmethod_arg_1;
            tmp_res = MAPPING_HAS_ITEM(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__1__ConvBnNd_22, mod_consts[157]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_4 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_value_3 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__1__ConvBnNd_22, mod_consts[157]);

            if (unlikely(tmp_called_value_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[157]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 187;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__12_from_float();

            frame_5be57df756bd864d34b205d7a5a1929d_2->m_frame.f_lineno = 187;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;


            tmp_classmethod_arg_1 = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__12_from_float();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__1__ConvBnNd_22, mod_consts[93], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__13_to_float();

        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__1__ConvBnNd_22, mod_consts[159], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5be57df756bd864d34b205d7a5a1929d_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5be57df756bd864d34b205d7a5a1929d_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5be57df756bd864d34b205d7a5a1929d_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5be57df756bd864d34b205d7a5a1929d_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_5be57df756bd864d34b205d7a5a1929d_2);

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
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__1__ConvBnNd_22, mod_consts[161], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_4;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_4 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[31];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__1__ConvBnNd_22;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_290db10fbad5acc303c0554377bb0833->m_frame.f_lineno = 22;
            tmp_assign_source_26 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_26;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_25 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_25);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__1__ConvBnNd_22);
        locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__1__ConvBnNd_22 = NULL;
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

        Py_DECREF(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__1__ConvBnNd_22);
        locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__1__ConvBnNd_22 = NULL;
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
        exception_lineno = 22;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_25);
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_5;
        }
        tmp_assign_source_27 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_16;
            PyTuple_SET_ITEM0(tmp_assign_source_27, 0, tmp_tuple_element_5);
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[162]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_27, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_assign_source_27);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_28 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_5;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_17 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[37];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_17, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_5;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_5;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_30 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_30;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_18 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_18, mod_consts[135]);
        tmp_condition_result_7 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_19 = tmp_class_creation_2__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[135]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_5;
        }
        tmp_tuple_element_6 = mod_consts[91];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_290db10fbad5acc303c0554377bb0833->m_frame.f_lineno = 257;
        tmp_assign_source_31 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_31;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_20 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_20, mod_consts[136]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_5;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
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
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[137];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[63];
        tmp_getattr_default_2 = mod_consts[138];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_5;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_21;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_21 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_21 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[63]);
            Py_DECREF(tmp_expression_value_21);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 257;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_32;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_33;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__2_ConvBn1d_257 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[139];
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__2_ConvBn1d_257, mod_consts[140], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[163];
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__2_ConvBn1d_257, mod_consts[105], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[91];
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__2_ConvBn1d_257, mod_consts[141], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_7;
        }
        frame_10bcd231e4fba4b14b61044d07558270_3 = MAKE_CLASS_FRAME(codeobj_10bcd231e4fba4b14b61044d07558270, module_torch$nn$intrinsic$qat$modules$conv_fused, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_10bcd231e4fba4b14b61044d07558270_3);
        assert(Py_REFCNT(frame_10bcd231e4fba4b14b61044d07558270_3) == 2);

        // Framed code:
        {
            PyObject *tmp_expression_value_22;
            tmp_expression_value_22 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__2_ConvBn1d_257, mod_consts[0]);

            if (tmp_expression_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_22 == NULL)) {
                        tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 274;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_22);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[126]);
            Py_DECREF(tmp_expression_value_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__2_ConvBn1d_257, mod_consts[80], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__2_ConvBn1d_257, mod_consts[84], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_expression_value_23;
            tmp_expression_value_23 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__2_ConvBn1d_257, mod_consts[114]);

            if (tmp_expression_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[114]);

                    if (unlikely(tmp_expression_value_23 == NULL)) {
                        tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
                    }

                    if (tmp_expression_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 276;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_23);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[91]);
            Py_DECREF(tmp_expression_value_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__2_ConvBn1d_257, mod_consts[61], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_expression_value_24;
            tmp_expression_value_24 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__2_ConvBn1d_257, mod_consts[0]);

            if (tmp_expression_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_24 == NULL)) {
                        tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 277;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_24);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[162]);
            Py_DECREF(tmp_expression_value_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__2_ConvBn1d_257, mod_consts[78], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[164];
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__14___init__(tmp_defaults_3);

            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__2_ConvBn1d_257, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_10bcd231e4fba4b14b61044d07558270_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_10bcd231e4fba4b14b61044d07558270_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_10bcd231e4fba4b14b61044d07558270_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_10bcd231e4fba4b14b61044d07558270_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_10bcd231e4fba4b14b61044d07558270_3);

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
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;

                goto try_except_handler_7;
            }
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__2_ConvBn1d_257, mod_consts[161], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_7;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_6 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[91];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__2_ConvBn1d_257;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_290db10fbad5acc303c0554377bb0833->m_frame.f_lineno = 257;
            tmp_assign_source_34 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_34;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_33 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_33);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__2_ConvBn1d_257);
        locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__2_ConvBn1d_257 = NULL;
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

        Py_DECREF(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__2_ConvBn1d_257);
        locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__2_ConvBn1d_257 = NULL;
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
        exception_lineno = 257;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_33);
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
        PyObject *tmp_assign_source_35;
        PyObject *tmp_tuple_element_9;
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto try_except_handler_8;
        }
        tmp_assign_source_35 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_35, 0, tmp_tuple_element_9);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_36 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto try_except_handler_8;
        }
        tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_25 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[37];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_25, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto try_except_handler_8;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto try_except_handler_8;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_38 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_38;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_26 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_26, mod_consts[135]);
        tmp_condition_result_11 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_27 = tmp_class_creation_3__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[135]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto try_except_handler_8;
        }
        tmp_tuple_element_10 = mod_consts[92];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_10 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_290db10fbad5acc303c0554377bb0833->m_frame.f_lineno = 301;
        tmp_assign_source_39 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_39;
    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_28;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_28 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_28, mod_consts[136]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto try_except_handler_8;
        }
        tmp_condition_result_12 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_12 != false) {
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
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[137];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[63];
        tmp_getattr_default_3 = mod_consts[138];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto try_except_handler_8;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_29;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_29 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_29 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[63]);
            Py_DECREF(tmp_expression_value_29);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 301;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 301;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_40;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_41;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__3_ConvBnReLU1d_301 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[139];
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__3_ConvBnReLU1d_301, mod_consts[140], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[166];
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__3_ConvBnReLU1d_301, mod_consts[105], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[92];
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__3_ConvBnReLU1d_301, mod_consts[141], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto try_except_handler_10;
        }
        frame_0f92b38e6cca379f6267f939e94bf40a_4 = MAKE_CLASS_FRAME(codeobj_0f92b38e6cca379f6267f939e94bf40a, module_torch$nn$intrinsic$qat$modules$conv_fused, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_0f92b38e6cca379f6267f939e94bf40a_4);
        assert(Py_REFCNT(frame_0f92b38e6cca379f6267f939e94bf40a_4) == 2);

        // Framed code:
        {
            PyObject *tmp_expression_value_30;
            tmp_expression_value_30 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__3_ConvBnReLU1d_301, mod_consts[114]);

            if (tmp_expression_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[114]);

                    if (unlikely(tmp_expression_value_30 == NULL)) {
                        tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
                    }

                    if (tmp_expression_value_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 318;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_30);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[92]);
            Py_DECREF(tmp_expression_value_30);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__3_ConvBnReLU1d_301, mod_consts[61], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_expression_value_31;
            tmp_expression_value_31 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__3_ConvBnReLU1d_301, mod_consts[0]);

            if (tmp_expression_value_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_31 == NULL)) {
                        tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 319;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_31);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[162]);
            Py_DECREF(tmp_expression_value_31);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__3_ConvBnReLU1d_301, mod_consts[78], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_expression_value_32;
            tmp_expression_value_32 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__3_ConvBnReLU1d_301, mod_consts[0]);

            if (tmp_expression_value_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_32 == NULL)) {
                        tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 320;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_32);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[126]);
            Py_DECREF(tmp_expression_value_32);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__3_ConvBnReLU1d_301, mod_consts[80], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_expression_value_33;
            tmp_expression_value_33 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__3_ConvBnReLU1d_301, mod_consts[0]);

            if (tmp_expression_value_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_33 == NULL)) {
                        tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 321;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_33);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[167]);
            Py_DECREF(tmp_expression_value_33);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__3_ConvBnReLU1d_301, mod_consts[84], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_defaults_4;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_defaults_4 = mod_consts[164];
            Py_INCREF(tmp_defaults_4);

            tmp_closure_1[0] = outline_2_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__15___init__(tmp_defaults_4, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__3_ConvBnReLU1d_301, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 323;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__16_forward();

        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__3_ConvBnReLU1d_301, mod_consts[152], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_2 = "c";
            goto frame_exception_exit_4;
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_classmethod_arg_2;
            tmp_res = MAPPING_HAS_ITEM(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__3_ConvBnReLU1d_301, mod_consts[157]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_13 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_value_8 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__3_ConvBnReLU1d_301, mod_consts[157]);

            if (unlikely(tmp_called_value_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[157]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 346;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_2 = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__17_from_float();

            frame_0f92b38e6cca379f6267f939e94bf40a_4->m_frame.f_lineno = 346;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_5;
            condexpr_false_5:;


            tmp_classmethod_arg_2 = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__17_from_float();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_2);
            Py_DECREF(tmp_classmethod_arg_2);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__3_ConvBnReLU1d_301, mod_consts[93], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0f92b38e6cca379f6267f939e94bf40a_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0f92b38e6cca379f6267f939e94bf40a_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0f92b38e6cca379f6267f939e94bf40a_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0f92b38e6cca379f6267f939e94bf40a_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_0f92b38e6cca379f6267f939e94bf40a_4);

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
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_14 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 301;

                goto try_except_handler_10;
            }
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__3_ConvBnReLU1d_301, mod_consts[161], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto try_except_handler_10;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_9 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_12 = mod_consts[92];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_12 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__3_ConvBnReLU1d_301;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_290db10fbad5acc303c0554377bb0833->m_frame.f_lineno = 301;
            tmp_assign_source_42 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 301;

                goto try_except_handler_10;
            }
            assert(Nuitka_Cell_GET(outline_2_var___class__) == NULL);
            PyCell_SET(outline_2_var___class__, tmp_assign_source_42);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_2_var___class__));
        tmp_assign_source_41 = Nuitka_Cell_GET(outline_2_var___class__);
        Py_INCREF(tmp_assign_source_41);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__3_ConvBnReLU1d_301);
        locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__3_ConvBnReLU1d_301 = NULL;
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

        Py_DECREF(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__3_ConvBnReLU1d_301);
        locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__3_ConvBnReLU1d_301 = NULL;
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
        exception_lineno = 301;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_41);
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
        PyObject *tmp_assign_source_43;
        PyObject *tmp_tuple_element_13;
        tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_tuple_element_13 == NULL)) {
            tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto try_except_handler_11;
        }
        tmp_assign_source_43 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_34;
            PyTuple_SET_ITEM0(tmp_assign_source_43, 0, tmp_tuple_element_13);
            tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_34 == NULL)) {
                tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 350;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[171]);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 350;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_43, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_assign_source_43);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_44 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_15;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto try_except_handler_11;
        }
        tmp_condition_result_15 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_35 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[37];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_35, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto try_except_handler_11;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto try_except_handler_11;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_46 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_46;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_expression_value_36;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_36 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_36, mod_consts[135]);
        tmp_condition_result_16 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_37 = tmp_class_creation_4__metaclass;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[135]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto try_except_handler_11;
        }
        tmp_tuple_element_14 = mod_consts[97];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_14);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_14 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_14);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_290db10fbad5acc303c0554377bb0833->m_frame.f_lineno = 350;
        tmp_assign_source_47 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_47;
    }
    {
        bool tmp_condition_result_17;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_38;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_38 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_38, mod_consts[136]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto try_except_handler_11;
        }
        tmp_condition_result_17 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[137];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_4 = mod_consts[63];
        tmp_getattr_default_4 = mod_consts[138];
        tmp_tuple_element_15 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto try_except_handler_11;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_39;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_39 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_39 == NULL));
            tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[63]);
            Py_DECREF(tmp_expression_value_39);
            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 350;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto try_except_handler_11;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 350;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_11;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_48;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_49;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__4_ConvBn2d_350 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[139];
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__4_ConvBn2d_350, mod_consts[140], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[172];
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__4_ConvBn2d_350, mod_consts[105], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[97];
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__4_ConvBn2d_350, mod_consts[141], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto try_except_handler_13;
        }
        frame_eb1962241b2a746d9f9e594c3a93a0db_5 = MAKE_CLASS_FRAME(codeobj_eb1962241b2a746d9f9e594c3a93a0db, module_torch$nn$intrinsic$qat$modules$conv_fused, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_eb1962241b2a746d9f9e594c3a93a0db_5);
        assert(Py_REFCNT(frame_eb1962241b2a746d9f9e594c3a93a0db_5) == 2);

        // Framed code:
        {
            PyObject *tmp_expression_value_40;
            tmp_expression_value_40 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__4_ConvBn2d_350, mod_consts[114]);

            if (tmp_expression_value_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[114]);

                    if (unlikely(tmp_expression_value_40 == NULL)) {
                        tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
                    }

                    if (tmp_expression_value_40 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 367;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_40);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[97]);
            Py_DECREF(tmp_expression_value_40);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__4_ConvBn2d_350, mod_consts[61], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_expression_value_41;
            tmp_expression_value_41 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__4_ConvBn2d_350, mod_consts[0]);

            if (tmp_expression_value_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_41 == NULL)) {
                        tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 368;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_41);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[171]);
            Py_DECREF(tmp_expression_value_41);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 368;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__4_ConvBn2d_350, mod_consts[78], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 368;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_expression_value_42;
            tmp_expression_value_42 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__4_ConvBn2d_350, mod_consts[0]);

            if (tmp_expression_value_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_42 == NULL)) {
                        tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_42 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 369;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_42);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[128]);
            Py_DECREF(tmp_expression_value_42);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 369;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__4_ConvBn2d_350, mod_consts[80], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 369;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__4_ConvBn2d_350, mod_consts[84], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = mod_consts[164];
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__18___init__(tmp_defaults_5);

            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__4_ConvBn2d_350, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_eb1962241b2a746d9f9e594c3a93a0db_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_eb1962241b2a746d9f9e594c3a93a0db_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_eb1962241b2a746d9f9e594c3a93a0db_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_eb1962241b2a746d9f9e594c3a93a0db_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_eb1962241b2a746d9f9e594c3a93a0db_5);

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
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_18 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 350;

                goto try_except_handler_13;
            }
            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__4_ConvBn2d_350, mod_consts[161], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto try_except_handler_13;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_11 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_16 = mod_consts[97];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_16 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__4_ConvBn2d_350;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_290db10fbad5acc303c0554377bb0833->m_frame.f_lineno = 350;
            tmp_assign_source_50 = CALL_FUNCTION(tmp_called_value_11, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 350;

                goto try_except_handler_13;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_50;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_49 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_49);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__4_ConvBn2d_350);
        locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__4_ConvBn2d_350 = NULL;
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

        Py_DECREF(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__4_ConvBn2d_350);
        locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__4_ConvBn2d_350 = NULL;
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
        exception_lineno = 350;
        goto try_except_handler_11;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_49);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_tuple_element_17;
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_tuple_element_17 == NULL)) {
            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto try_except_handler_14;
        }
        tmp_assign_source_51 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_51, 0, tmp_tuple_element_17);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_52 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_19;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto try_except_handler_14;
        }
        tmp_condition_result_19 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_43 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[37];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_43, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto try_except_handler_14;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto try_except_handler_14;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_54 = SELECT_METACLASS(tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_54;
    }
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_expression_value_44;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_44 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_44, mod_consts[135]);
        tmp_condition_result_20 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_45 = tmp_class_creation_5__metaclass;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[135]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto try_except_handler_14;
        }
        tmp_tuple_element_18 = mod_consts[96];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_18 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_290db10fbad5acc303c0554377bb0833->m_frame.f_lineno = 394;
        tmp_assign_source_55 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_55;
    }
    {
        bool tmp_condition_result_21;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_46;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_46 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_46, mod_consts[136]);
        tmp_operand_value_5 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto try_except_handler_14;
        }
        tmp_condition_result_21 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_21 != false) {
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
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_getattr_target_5;
        PyObject *tmp_getattr_attr_5;
        PyObject *tmp_getattr_default_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[137];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_5 = mod_consts[63];
        tmp_getattr_default_5 = mod_consts[138];
        tmp_tuple_element_19 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto try_except_handler_14;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_47;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_47 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_47 == NULL));
            tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[63]);
            Py_DECREF(tmp_expression_value_47);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_14;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto try_except_handler_14;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 394;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_14;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_56;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_57;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__5_ConvBnReLU2d_394 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[139];
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__5_ConvBnReLU2d_394, mod_consts[140], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto try_except_handler_16;
        }
        tmp_dictset_value = mod_consts[174];
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__5_ConvBnReLU2d_394, mod_consts[105], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto try_except_handler_16;
        }
        tmp_dictset_value = mod_consts[96];
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__5_ConvBnReLU2d_394, mod_consts[141], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto try_except_handler_16;
        }
        frame_e9519555d82dc09cff4b11917d1f9238_6 = MAKE_CLASS_FRAME(codeobj_e9519555d82dc09cff4b11917d1f9238, module_torch$nn$intrinsic$qat$modules$conv_fused, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_e9519555d82dc09cff4b11917d1f9238_6);
        assert(Py_REFCNT(frame_e9519555d82dc09cff4b11917d1f9238_6) == 2);

        // Framed code:
        {
            PyObject *tmp_expression_value_48;
            tmp_expression_value_48 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__5_ConvBnReLU2d_394, mod_consts[114]);

            if (tmp_expression_value_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[114]);

                    if (unlikely(tmp_expression_value_48 == NULL)) {
                        tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
                    }

                    if (tmp_expression_value_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 411;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_48);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[96]);
            Py_DECREF(tmp_expression_value_48);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__5_ConvBnReLU2d_394, mod_consts[61], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_expression_value_49;
            tmp_expression_value_49 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__5_ConvBnReLU2d_394, mod_consts[0]);

            if (tmp_expression_value_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_49 == NULL)) {
                        tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 412;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_49);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[171]);
            Py_DECREF(tmp_expression_value_49);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 412;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__5_ConvBnReLU2d_394, mod_consts[78], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 412;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_expression_value_50;
            tmp_expression_value_50 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__5_ConvBnReLU2d_394, mod_consts[0]);

            if (tmp_expression_value_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_50 == NULL)) {
                        tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_50 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 413;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_50);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[128]);
            Py_DECREF(tmp_expression_value_50);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 413;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__5_ConvBnReLU2d_394, mod_consts[80], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 413;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_expression_value_51;
            tmp_expression_value_51 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__5_ConvBnReLU2d_394, mod_consts[0]);

            if (tmp_expression_value_51 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_51 == NULL)) {
                        tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_51 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 414;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_51);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[167]);
            Py_DECREF(tmp_expression_value_51);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 414;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__5_ConvBnReLU2d_394, mod_consts[84], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 414;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = mod_consts[164];
            Py_INCREF(tmp_defaults_6);


            tmp_dictset_value = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__19___init__(tmp_defaults_6);

            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__5_ConvBnReLU2d_394, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__20_forward();

        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__5_ConvBnReLU2d_394, mod_consts[152], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        {
            nuitka_bool tmp_condition_result_22;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_classmethod_arg_3;
            tmp_res = MAPPING_HAS_ITEM(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__5_ConvBnReLU2d_394, mod_consts[157]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 439;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_condition_result_22 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            tmp_called_value_13 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__5_ConvBnReLU2d_394, mod_consts[157]);

            if (unlikely(tmp_called_value_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[157]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 439;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 439;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }


            tmp_args_element_value_3 = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__21_from_float();

            frame_e9519555d82dc09cff4b11917d1f9238_6->m_frame.f_lineno = 439;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 439;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            goto condexpr_end_8;
            condexpr_false_8:;


            tmp_classmethod_arg_3 = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__21_from_float();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_3);
            Py_DECREF(tmp_classmethod_arg_3);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__5_ConvBnReLU2d_394, mod_consts[93], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 439;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e9519555d82dc09cff4b11917d1f9238_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e9519555d82dc09cff4b11917d1f9238_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e9519555d82dc09cff4b11917d1f9238_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e9519555d82dc09cff4b11917d1f9238_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_e9519555d82dc09cff4b11917d1f9238_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_16;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_23;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_23 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_23 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;

                goto try_except_handler_16;
            }
            if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__5_ConvBnReLU2d_394, mod_consts[161], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto try_except_handler_16;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_14 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_20 = mod_consts[96];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_20 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_20);
            tmp_tuple_element_20 = locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__5_ConvBnReLU2d_394;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_290db10fbad5acc303c0554377bb0833->m_frame.f_lineno = 394;
            tmp_assign_source_58 = CALL_FUNCTION(tmp_called_value_14, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;

                goto try_except_handler_16;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_58;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_57 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_57);
        goto try_return_handler_16;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__5_ConvBnReLU2d_394);
        locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__5_ConvBnReLU2d_394 = NULL;
        goto try_return_handler_15;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__5_ConvBnReLU2d_394);
        locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__5_ConvBnReLU2d_394 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto try_except_handler_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 394;
        goto try_except_handler_14;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_57);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_expression_value_52;
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto try_except_handler_17;
        }
        tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[171]);
        if (tmp_tuple_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto try_except_handler_17;
        }
        tmp_assign_source_59 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_53;
            PyTuple_SET_ITEM(tmp_assign_source_59, 0, tmp_tuple_element_21);
            tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[114]);

            if (unlikely(tmp_expression_value_53 == NULL)) {
                tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
            }

            if (tmp_expression_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 443;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[134]);
            if (tmp_tuple_element_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 443;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_59, 1, tmp_tuple_element_21);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_assign_source_59);
        goto try_except_handler_17;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_60 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_metaclass_value_6;
        nuitka_bool tmp_condition_result_24;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto try_except_handler_17;
        }
        tmp_condition_result_24 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_54 = tmp_class_creation_6__bases;
        tmp_subscript_value_6 = mod_consts[37];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_54, tmp_subscript_value_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto try_except_handler_17;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto try_except_handler_17;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_62 = SELECT_METACLASS(tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_62;
    }
    {
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_expression_value_55;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_55 = tmp_class_creation_6__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_55, mod_consts[135]);
        tmp_condition_result_25 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_56 = tmp_class_creation_6__metaclass;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[135]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto try_except_handler_17;
        }
        tmp_tuple_element_22 = mod_consts[98];
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_22 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_290db10fbad5acc303c0554377bb0833->m_frame.f_lineno = 443;
        tmp_assign_source_63 = CALL_FUNCTION(tmp_called_value_15, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_63;
    }
    {
        bool tmp_condition_result_26;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_57;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_57 = tmp_class_creation_6__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_57, mod_consts[136]);
        tmp_operand_value_6 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto try_except_handler_17;
        }
        tmp_condition_result_26 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_26 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_getattr_target_6;
        PyObject *tmp_getattr_attr_6;
        PyObject *tmp_getattr_default_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[137];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_getattr_target_6 = tmp_class_creation_6__metaclass;
        tmp_getattr_attr_6 = mod_consts[63];
        tmp_getattr_default_6 = mod_consts[138];
        tmp_tuple_element_23 = BUILTIN_GETATTR(tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6);
        if (tmp_tuple_element_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto try_except_handler_17;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_58;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_value_58 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_58 == NULL));
            tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[63]);
            Py_DECREF(tmp_expression_value_58);
            if (tmp_tuple_element_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 443;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_23);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_17;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto try_except_handler_17;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 443;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_17;
    }
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_64;
    }
    branch_end_16:;
    {
        PyObject *tmp_assign_source_65;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__6_ConvReLU2d_443 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[139];
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__6_ConvReLU2d_443, mod_consts[140], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto try_except_handler_19;
        }
        tmp_dictset_value = mod_consts[178];
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__6_ConvReLU2d_443, mod_consts[105], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto try_except_handler_19;
        }
        tmp_dictset_value = mod_consts[98];
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__6_ConvReLU2d_443, mod_consts[141], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto try_except_handler_19;
        }
        frame_c0da219430acd03559ff4e46413e5bb5_7 = MAKE_CLASS_FRAME(codeobj_c0da219430acd03559ff4e46413e5bb5, module_torch$nn$intrinsic$qat$modules$conv_fused, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c0da219430acd03559ff4e46413e5bb5_7);
        assert(Py_REFCNT(frame_c0da219430acd03559ff4e46413e5bb5_7) == 2);

        // Framed code:
        {
            PyObject *tmp_expression_value_59;
            tmp_expression_value_59 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__6_ConvReLU2d_443, mod_consts[114]);

            if (tmp_expression_value_59 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[114]);

                    if (unlikely(tmp_expression_value_59 == NULL)) {
                        tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
                    }

                    if (tmp_expression_value_59 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 455;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_59);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[98]);
            Py_DECREF(tmp_expression_value_59);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 455;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__6_ConvReLU2d_443, mod_consts[61], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 455;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_expression_value_60;
            tmp_expression_value_60 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__6_ConvReLU2d_443, mod_consts[0]);

            if (tmp_expression_value_60 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_60 == NULL)) {
                        tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_60 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 456;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_60);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[171]);
            Py_DECREF(tmp_expression_value_60);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 456;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__6_ConvReLU2d_443, mod_consts[78], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 456;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__6_ConvReLU2d_443, mod_consts[80], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }
        {
            PyObject *tmp_expression_value_61;
            tmp_expression_value_61 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__6_ConvReLU2d_443, mod_consts[0]);

            if (tmp_expression_value_61 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_61 == NULL)) {
                        tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_61 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 458;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_61);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[167]);
            Py_DECREF(tmp_expression_value_61);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 458;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__6_ConvReLU2d_443, mod_consts[84], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 458;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_defaults_7;
            tmp_defaults_7 = mod_consts[179];
            Py_INCREF(tmp_defaults_7);


            tmp_dictset_value = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__22___init__(tmp_defaults_7);

            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__6_ConvReLU2d_443, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 460;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__23_forward();

        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__6_ConvReLU2d_443, mod_consts[152], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }
        {
            nuitka_bool tmp_condition_result_27;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_classmethod_arg_4;
            tmp_res = MAPPING_HAS_ITEM(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__6_ConvReLU2d_443, mod_consts[157]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_condition_result_27 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_10;
            } else {
                goto condexpr_false_10;
            }
            condexpr_true_10:;
            tmp_called_value_16 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__6_ConvReLU2d_443, mod_consts[157]);

            if (unlikely(tmp_called_value_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[157]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 476;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }

            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }


            tmp_args_element_value_4 = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__24_from_float();

            frame_c0da219430acd03559ff4e46413e5bb5_7->m_frame.f_lineno = 476;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            goto condexpr_end_10;
            condexpr_false_10:;


            tmp_classmethod_arg_4 = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__24_from_float();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_4);
            Py_DECREF(tmp_classmethod_arg_4);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_10:;
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__6_ConvReLU2d_443, mod_consts[93], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c0da219430acd03559ff4e46413e5bb5_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c0da219430acd03559ff4e46413e5bb5_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c0da219430acd03559ff4e46413e5bb5_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c0da219430acd03559ff4e46413e5bb5_7,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_c0da219430acd03559ff4e46413e5bb5_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_19;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_28;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 443;

                goto try_except_handler_19;
            }
            if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__6_ConvReLU2d_443, mod_consts[161], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto try_except_handler_19;
        }
        branch_no_18:;
        {
            PyObject *tmp_assign_source_66;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_17 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_24 = mod_consts[98];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_24 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_24);
            tmp_tuple_element_24 = locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__6_ConvReLU2d_443;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
            frame_290db10fbad5acc303c0554377bb0833->m_frame.f_lineno = 443;
            tmp_assign_source_66 = CALL_FUNCTION(tmp_called_value_17, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 443;

                goto try_except_handler_19;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_66;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_65 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_65);
        goto try_return_handler_19;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        Py_DECREF(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__6_ConvReLU2d_443);
        locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__6_ConvReLU2d_443 = NULL;
        goto try_return_handler_18;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__6_ConvReLU2d_443);
        locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__6_ConvReLU2d_443 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto try_except_handler_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 443;
        goto try_except_handler_17;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_65);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_6__bases_orig);
    Py_DECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_6__bases);
    Py_DECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_tuple_element_25;
        tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_tuple_element_25 == NULL)) {
            tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_tuple_element_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto try_except_handler_20;
        }
        tmp_assign_source_67 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_62;
            PyTuple_SET_ITEM0(tmp_assign_source_67, 0, tmp_tuple_element_25);
            tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_62 == NULL)) {
                tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 480;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[183]);
            if (tmp_tuple_element_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 480;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_assign_source_67, 1, tmp_tuple_element_25);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_assign_source_67);
        goto try_except_handler_20;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_67;
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_68 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_68;
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_metaclass_value_7;
        nuitka_bool tmp_condition_result_29;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_7;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto try_except_handler_20;
        }
        tmp_condition_result_29 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_11;
        } else {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_value_63 = tmp_class_creation_7__bases;
        tmp_subscript_value_7 = mod_consts[37];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_63, tmp_subscript_value_7, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto try_except_handler_20;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto try_except_handler_20;
        }
        goto condexpr_end_11;
        condexpr_false_11:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_11:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_7 = tmp_class_creation_7__bases;
        tmp_assign_source_70 = SELECT_METACLASS(tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_70;
    }
    {
        nuitka_bool tmp_condition_result_30;
        PyObject *tmp_expression_value_64;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_64 = tmp_class_creation_7__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_64, mod_consts[135]);
        tmp_condition_result_30 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_args_value_13;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_kwargs_value_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_65 = tmp_class_creation_7__metaclass;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[135]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto try_except_handler_20;
        }
        tmp_tuple_element_26 = mod_consts[103];
        tmp_args_value_13 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_26);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_26 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_26);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
        frame_290db10fbad5acc303c0554377bb0833->m_frame.f_lineno = 480;
        tmp_assign_source_71 = CALL_FUNCTION(tmp_called_value_18, tmp_args_value_13, tmp_kwargs_value_13);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_value_13);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_71;
    }
    {
        bool tmp_condition_result_31;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_66;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_66 = tmp_class_creation_7__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_66, mod_consts[136]);
        tmp_operand_value_7 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto try_except_handler_20;
        }
        tmp_condition_result_31 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        PyObject *tmp_tuple_element_27;
        PyObject *tmp_getattr_target_7;
        PyObject *tmp_getattr_attr_7;
        PyObject *tmp_getattr_default_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[137];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_getattr_target_7 = tmp_class_creation_7__metaclass;
        tmp_getattr_attr_7 = mod_consts[63];
        tmp_getattr_default_7 = mod_consts[138];
        tmp_tuple_element_27 = BUILTIN_GETATTR(tmp_getattr_target_7, tmp_getattr_attr_7, tmp_getattr_default_7);
        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto try_except_handler_20;
        }
        tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_67;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_14 = tmp_class_creation_7__prepared;
            tmp_expression_value_67 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_67 == NULL));
            tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[63]);
            Py_DECREF(tmp_expression_value_67);
            if (tmp_tuple_element_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 480;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_27);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_20;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto try_except_handler_20;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 480;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_20;
    }
    branch_no_20:;
    goto branch_end_19;
    branch_no_19:;
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_72;
    }
    branch_end_19:;
    {
        PyObject *tmp_assign_source_73;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__7_ConvBn3d_480 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[139];
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__7_ConvBn3d_480, mod_consts[140], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto try_except_handler_22;
        }
        tmp_dictset_value = mod_consts[184];
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__7_ConvBn3d_480, mod_consts[105], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto try_except_handler_22;
        }
        tmp_dictset_value = mod_consts[103];
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__7_ConvBn3d_480, mod_consts[141], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto try_except_handler_22;
        }
        frame_b09e0e8d9aa40e06f0d6e6aff9fd8e8d_8 = MAKE_CLASS_FRAME(codeobj_b09e0e8d9aa40e06f0d6e6aff9fd8e8d, module_torch$nn$intrinsic$qat$modules$conv_fused, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_b09e0e8d9aa40e06f0d6e6aff9fd8e8d_8);
        assert(Py_REFCNT(frame_b09e0e8d9aa40e06f0d6e6aff9fd8e8d_8) == 2);

        // Framed code:
        {
            PyObject *tmp_expression_value_68;
            tmp_expression_value_68 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__7_ConvBn3d_480, mod_consts[114]);

            if (tmp_expression_value_68 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[114]);

                    if (unlikely(tmp_expression_value_68 == NULL)) {
                        tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
                    }

                    if (tmp_expression_value_68 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 497;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_expression_value_68);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[103]);
            Py_DECREF(tmp_expression_value_68);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 497;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__7_ConvBn3d_480, mod_consts[61], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 497;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_expression_value_69;
            tmp_expression_value_69 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__7_ConvBn3d_480, mod_consts[0]);

            if (tmp_expression_value_69 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_69 == NULL)) {
                        tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_69 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 498;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_expression_value_69);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[183]);
            Py_DECREF(tmp_expression_value_69);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 498;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__7_ConvBn3d_480, mod_consts[78], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 498;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_expression_value_70;
            tmp_expression_value_70 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__7_ConvBn3d_480, mod_consts[0]);

            if (tmp_expression_value_70 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_70 == NULL)) {
                        tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_70 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 499;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_expression_value_70);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[130]);
            Py_DECREF(tmp_expression_value_70);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 499;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__7_ConvBn3d_480, mod_consts[80], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 499;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__7_ConvBn3d_480, mod_consts[84], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }
        {
            PyObject *tmp_defaults_8;
            tmp_defaults_8 = mod_consts[164];
            Py_INCREF(tmp_defaults_8);


            tmp_dictset_value = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__25___init__(tmp_defaults_8);

            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__7_ConvBn3d_480, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 502;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b09e0e8d9aa40e06f0d6e6aff9fd8e8d_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b09e0e8d9aa40e06f0d6e6aff9fd8e8d_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b09e0e8d9aa40e06f0d6e6aff9fd8e8d_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b09e0e8d9aa40e06f0d6e6aff9fd8e8d_8,
            type_description_2,
            outline_6_var___class__
        );



        assertFrameObject(frame_b09e0e8d9aa40e06f0d6e6aff9fd8e8d_8);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_22;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_32;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_cmp_expr_left_7 = tmp_class_creation_7__bases;
            CHECK_OBJECT(tmp_class_creation_7__bases_orig);
            tmp_cmp_expr_right_7 = tmp_class_creation_7__bases_orig;
            tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 480;

                goto try_except_handler_22;
            }
            if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
                goto branch_yes_21;
            } else {
                goto branch_no_21;
            }
        }
        branch_yes_21:;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dictset_value = tmp_class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__7_ConvBn3d_480, mod_consts[161], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto try_except_handler_22;
        }
        branch_no_21:;
        {
            PyObject *tmp_assign_source_74;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_28;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_19 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_28 = mod_consts[103];
            tmp_args_value_14 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_28);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_28 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_28);
            tmp_tuple_element_28 = locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__7_ConvBn3d_480;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_28);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_7__class_decl_dict;
            frame_290db10fbad5acc303c0554377bb0833->m_frame.f_lineno = 480;
            tmp_assign_source_74 = CALL_FUNCTION(tmp_called_value_19, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 480;

                goto try_except_handler_22;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_74;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_73 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_73);
        goto try_return_handler_22;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        Py_DECREF(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__7_ConvBn3d_480);
        locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__7_ConvBn3d_480 = NULL;
        goto try_return_handler_21;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__7_ConvBn3d_480);
        locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__7_ConvBn3d_480 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto try_except_handler_21;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 480;
        goto try_except_handler_20;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_73);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_7__bases_orig);
    Py_DECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_7__bases);
    Py_DECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__metaclass);
    Py_DECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_tuple_element_29;
        tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_tuple_element_29 == NULL)) {
            tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
        }

        if (tmp_tuple_element_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto try_except_handler_23;
        }
        tmp_assign_source_75 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_75, 0, tmp_tuple_element_29);
        assert(tmp_class_creation_8__bases_orig == NULL);
        tmp_class_creation_8__bases_orig = tmp_assign_source_75;
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_dircall_arg1_8;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dircall_arg1_8 = tmp_class_creation_8__bases_orig;
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_76 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto try_except_handler_23;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_76;
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_metaclass_value_8;
        nuitka_bool tmp_condition_result_33;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_8;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto try_except_handler_23;
        }
        tmp_condition_result_33 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_12;
        } else {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_expression_value_71 = tmp_class_creation_8__bases;
        tmp_subscript_value_8 = mod_consts[37];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_71, tmp_subscript_value_8, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto try_except_handler_23;
        }
        tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto try_except_handler_23;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_8);
        condexpr_end_12:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_value_8 = tmp_class_creation_8__bases;
        tmp_assign_source_78 = SELECT_METACLASS(tmp_metaclass_value_8, tmp_bases_value_8);
        Py_DECREF(tmp_metaclass_value_8);
        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto try_except_handler_23;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_78;
    }
    {
        nuitka_bool tmp_condition_result_34;
        PyObject *tmp_expression_value_72;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_72 = tmp_class_creation_8__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_72, mod_consts[135]);
        tmp_condition_result_34 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_args_value_15;
        PyObject *tmp_tuple_element_30;
        PyObject *tmp_kwargs_value_15;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_73 = tmp_class_creation_8__metaclass;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[135]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto try_except_handler_23;
        }
        tmp_tuple_element_30 = mod_consts[102];
        tmp_args_value_15 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_30);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_30 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_30);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_15 = tmp_class_creation_8__class_decl_dict;
        frame_290db10fbad5acc303c0554377bb0833->m_frame.f_lineno = 548;
        tmp_assign_source_79 = CALL_FUNCTION(tmp_called_value_20, tmp_args_value_15, tmp_kwargs_value_15);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_value_15);
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto try_except_handler_23;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_79;
    }
    {
        bool tmp_condition_result_35;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_74;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_74 = tmp_class_creation_8__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_74, mod_consts[136]);
        tmp_operand_value_8 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto try_except_handler_23;
        }
        tmp_condition_result_35 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_35 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_mod_expr_left_8;
        PyObject *tmp_mod_expr_right_8;
        PyObject *tmp_tuple_element_31;
        PyObject *tmp_getattr_target_8;
        PyObject *tmp_getattr_attr_8;
        PyObject *tmp_getattr_default_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_mod_expr_left_8 = mod_consts[137];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_getattr_target_8 = tmp_class_creation_8__metaclass;
        tmp_getattr_attr_8 = mod_consts[63];
        tmp_getattr_default_8 = mod_consts[138];
        tmp_tuple_element_31 = BUILTIN_GETATTR(tmp_getattr_target_8, tmp_getattr_attr_8, tmp_getattr_default_8);
        if (tmp_tuple_element_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto try_except_handler_23;
        }
        tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_75;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_16 = tmp_class_creation_8__prepared;
            tmp_expression_value_75 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_value_75 == NULL));
            tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[63]);
            Py_DECREF(tmp_expression_value_75);
            if (tmp_tuple_element_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 548;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_31);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_mod_expr_right_8);
        goto try_except_handler_23;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        Py_DECREF(tmp_mod_expr_right_8);
        if (tmp_raise_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto try_except_handler_23;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 548;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_23;
    }
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_80;
    }
    branch_end_22:;
    {
        PyObject *tmp_assign_source_81;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__8_ConvBnReLU3d_548 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[139];
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__8_ConvBnReLU3d_548, mod_consts[140], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto try_except_handler_25;
        }
        tmp_dictset_value = mod_consts[186];
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__8_ConvBnReLU3d_548, mod_consts[105], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto try_except_handler_25;
        }
        tmp_dictset_value = mod_consts[102];
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__8_ConvBnReLU3d_548, mod_consts[141], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto try_except_handler_25;
        }
        frame_cca297555e12171f1a8dac7ed8fd0a15_9 = MAKE_CLASS_FRAME(codeobj_cca297555e12171f1a8dac7ed8fd0a15, module_torch$nn$intrinsic$qat$modules$conv_fused, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_cca297555e12171f1a8dac7ed8fd0a15_9);
        assert(Py_REFCNT(frame_cca297555e12171f1a8dac7ed8fd0a15_9) == 2);

        // Framed code:
        {
            PyObject *tmp_expression_value_76;
            tmp_expression_value_76 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__8_ConvBnReLU3d_548, mod_consts[114]);

            if (tmp_expression_value_76 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[114]);

                    if (unlikely(tmp_expression_value_76 == NULL)) {
                        tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
                    }

                    if (tmp_expression_value_76 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 564;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_expression_value_76);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[102]);
            Py_DECREF(tmp_expression_value_76);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__8_ConvBnReLU3d_548, mod_consts[61], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 564;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_expression_value_77;
            tmp_expression_value_77 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__8_ConvBnReLU3d_548, mod_consts[0]);

            if (tmp_expression_value_77 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_77 == NULL)) {
                        tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_77 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 565;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_expression_value_77);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[183]);
            Py_DECREF(tmp_expression_value_77);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 565;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__8_ConvBnReLU3d_548, mod_consts[78], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 565;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_expression_value_78;
            tmp_expression_value_78 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__8_ConvBnReLU3d_548, mod_consts[0]);

            if (tmp_expression_value_78 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_78 == NULL)) {
                        tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_78 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 566;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_expression_value_78);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[130]);
            Py_DECREF(tmp_expression_value_78);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 566;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__8_ConvBnReLU3d_548, mod_consts[80], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 566;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_expression_value_79;
            tmp_expression_value_79 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__8_ConvBnReLU3d_548, mod_consts[0]);

            if (tmp_expression_value_79 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_79 == NULL)) {
                        tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_79 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 567;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_expression_value_79);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[167]);
            Py_DECREF(tmp_expression_value_79);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 567;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__8_ConvBnReLU3d_548, mod_consts[84], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 567;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_defaults_9;
            tmp_defaults_9 = mod_consts[164];
            Py_INCREF(tmp_defaults_9);


            tmp_dictset_value = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__26___init__(tmp_defaults_9);

            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__8_ConvBnReLU3d_548, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 569;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__27_forward();

        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__8_ConvBnReLU3d_548, mod_consts[152], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 607;
            type_description_2 = "o";
            goto frame_exception_exit_9;
        }
        {
            nuitka_bool tmp_condition_result_36;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_classmethod_arg_5;
            tmp_res = MAPPING_HAS_ITEM(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__8_ConvBnReLU3d_548, mod_consts[157]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 610;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_condition_result_36 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_13;
            } else {
                goto condexpr_false_13;
            }
            condexpr_true_13:;
            tmp_called_value_21 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__8_ConvBnReLU3d_548, mod_consts[157]);

            if (unlikely(tmp_called_value_21 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[157]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 610;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }

            if (tmp_called_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 610;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }


            tmp_args_element_value_5 = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__28_from_float();

            frame_cca297555e12171f1a8dac7ed8fd0a15_9->m_frame.f_lineno = 610;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 610;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            goto condexpr_end_13;
            condexpr_false_13:;


            tmp_classmethod_arg_5 = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__28_from_float();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_5);
            Py_DECREF(tmp_classmethod_arg_5);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_13:;
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__8_ConvBnReLU3d_548, mod_consts[93], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 610;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_8;
        frame_exception_exit_9:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_cca297555e12171f1a8dac7ed8fd0a15_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_cca297555e12171f1a8dac7ed8fd0a15_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_cca297555e12171f1a8dac7ed8fd0a15_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_cca297555e12171f1a8dac7ed8fd0a15_9,
            type_description_2,
            outline_7_var___class__
        );



        assertFrameObject(frame_cca297555e12171f1a8dac7ed8fd0a15_9);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_8;
        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_25;
        skip_nested_handling_8:;
        {
            nuitka_bool tmp_condition_result_37;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_cmp_expr_left_8 = tmp_class_creation_8__bases;
            CHECK_OBJECT(tmp_class_creation_8__bases_orig);
            tmp_cmp_expr_right_8 = tmp_class_creation_8__bases_orig;
            tmp_condition_result_37 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            if (tmp_condition_result_37 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 548;

                goto try_except_handler_25;
            }
            if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
                goto branch_yes_24;
            } else {
                goto branch_no_24;
            }
        }
        branch_yes_24:;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dictset_value = tmp_class_creation_8__bases_orig;
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__8_ConvBnReLU3d_548, mod_consts[161], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto try_except_handler_25;
        }
        branch_no_24:;
        {
            PyObject *tmp_assign_source_82;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_32;
            PyObject *tmp_kwargs_value_16;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_22 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_32 = mod_consts[102];
            tmp_args_value_16 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_32 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_32);
            tmp_tuple_element_32 = locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__8_ConvBnReLU3d_548;
            PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_16 = tmp_class_creation_8__class_decl_dict;
            frame_290db10fbad5acc303c0554377bb0833->m_frame.f_lineno = 548;
            tmp_assign_source_82 = CALL_FUNCTION(tmp_called_value_22, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_args_value_16);
            if (tmp_assign_source_82 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 548;

                goto try_except_handler_25;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_82;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_81 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_81);
        goto try_return_handler_25;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        Py_DECREF(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__8_ConvBnReLU3d_548);
        locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__8_ConvBnReLU3d_548 = NULL;
        goto try_return_handler_24;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__8_ConvBnReLU3d_548);
        locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__8_ConvBnReLU3d_548 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto try_except_handler_24;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 548;
        goto try_except_handler_23;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_81);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_8__bases_orig);
    Py_DECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_8__bases);
    Py_DECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__metaclass);
    Py_DECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_tuple_element_33;
        PyObject *tmp_expression_value_80;
        tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_expression_value_80 == NULL)) {
            tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
        }

        if (tmp_expression_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;

            goto try_except_handler_26;
        }
        tmp_tuple_element_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[183]);
        if (tmp_tuple_element_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;

            goto try_except_handler_26;
        }
        tmp_assign_source_83 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_81;
            PyTuple_SET_ITEM(tmp_assign_source_83, 0, tmp_tuple_element_33);
            tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[114]);

            if (unlikely(tmp_expression_value_81 == NULL)) {
                tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
            }

            if (tmp_expression_value_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 614;

                goto tuple_build_exception_14;
            }
            tmp_tuple_element_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[134]);
            if (tmp_tuple_element_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 614;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_assign_source_83, 1, tmp_tuple_element_33);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_assign_source_83);
        goto try_except_handler_26;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        assert(tmp_class_creation_9__bases_orig == NULL);
        tmp_class_creation_9__bases_orig = tmp_assign_source_83;
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_dircall_arg1_9;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dircall_arg1_9 = tmp_class_creation_9__bases_orig;
        Py_INCREF(tmp_dircall_arg1_9);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
            tmp_assign_source_84 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;

            goto try_except_handler_26;
        }
        assert(tmp_class_creation_9__bases == NULL);
        tmp_class_creation_9__bases = tmp_assign_source_84;
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_85;
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_metaclass_value_9;
        nuitka_bool tmp_condition_result_38;
        int tmp_truth_name_9;
        PyObject *tmp_type_arg_17;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_bases_value_9;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_creation_9__bases);
        if (tmp_truth_name_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;

            goto try_except_handler_26;
        }
        tmp_condition_result_38 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_14;
        } else {
            goto condexpr_false_14;
        }
        condexpr_true_14:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_expression_value_82 = tmp_class_creation_9__bases;
        tmp_subscript_value_9 = mod_consts[37];
        tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_82, tmp_subscript_value_9, 0);
        if (tmp_type_arg_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;

            goto try_except_handler_26;
        }
        tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
        Py_DECREF(tmp_type_arg_17);
        if (tmp_metaclass_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;

            goto try_except_handler_26;
        }
        goto condexpr_end_14;
        condexpr_false_14:;
        tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_9);
        condexpr_end_14:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_bases_value_9 = tmp_class_creation_9__bases;
        tmp_assign_source_86 = SELECT_METACLASS(tmp_metaclass_value_9, tmp_bases_value_9);
        Py_DECREF(tmp_metaclass_value_9);
        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;

            goto try_except_handler_26;
        }
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_86;
    }
    {
        nuitka_bool tmp_condition_result_39;
        PyObject *tmp_expression_value_83;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_83 = tmp_class_creation_9__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_83, mod_consts[135]);
        tmp_condition_result_39 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_39 == NUITKA_BOOL_TRUE) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_args_value_17;
        PyObject *tmp_tuple_element_34;
        PyObject *tmp_kwargs_value_17;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_84 = tmp_class_creation_9__metaclass;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[135]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;

            goto try_except_handler_26;
        }
        tmp_tuple_element_34 = mod_consts[104];
        tmp_args_value_17 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_34);
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_tuple_element_34 = tmp_class_creation_9__bases;
        PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_34);
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_kwargs_value_17 = tmp_class_creation_9__class_decl_dict;
        frame_290db10fbad5acc303c0554377bb0833->m_frame.f_lineno = 614;
        tmp_assign_source_87 = CALL_FUNCTION(tmp_called_value_23, tmp_args_value_17, tmp_kwargs_value_17);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_value_17);
        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;

            goto try_except_handler_26;
        }
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_87;
    }
    {
        bool tmp_condition_result_40;
        PyObject *tmp_operand_value_9;
        PyObject *tmp_expression_value_85;
        CHECK_OBJECT(tmp_class_creation_9__prepared);
        tmp_expression_value_85 = tmp_class_creation_9__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_85, mod_consts[136]);
        tmp_operand_value_9 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;

            goto try_except_handler_26;
        }
        tmp_condition_result_40 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_40 != false) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_raise_value_9;
        PyObject *tmp_mod_expr_left_9;
        PyObject *tmp_mod_expr_right_9;
        PyObject *tmp_tuple_element_35;
        PyObject *tmp_getattr_target_9;
        PyObject *tmp_getattr_attr_9;
        PyObject *tmp_getattr_default_9;
        tmp_raise_type_9 = PyExc_TypeError;
        tmp_mod_expr_left_9 = mod_consts[137];
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_getattr_target_9 = tmp_class_creation_9__metaclass;
        tmp_getattr_attr_9 = mod_consts[63];
        tmp_getattr_default_9 = mod_consts[138];
        tmp_tuple_element_35 = BUILTIN_GETATTR(tmp_getattr_target_9, tmp_getattr_attr_9, tmp_getattr_default_9);
        if (tmp_tuple_element_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;

            goto try_except_handler_26;
        }
        tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_86;
            PyObject *tmp_type_arg_18;
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_35);
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_type_arg_18 = tmp_class_creation_9__prepared;
            tmp_expression_value_86 = BUILTIN_TYPE1(tmp_type_arg_18);
            assert(!(tmp_expression_value_86 == NULL));
            tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[63]);
            Py_DECREF(tmp_expression_value_86);
            if (tmp_tuple_element_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 614;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_35);
        }
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_mod_expr_right_9);
        goto try_except_handler_26;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
        Py_DECREF(tmp_mod_expr_right_9);
        if (tmp_raise_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;

            goto try_except_handler_26;
        }
        exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        exception_value = tmp_raise_value_9;
        exception_lineno = 614;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_26;
    }
    branch_no_26:;
    goto branch_end_25;
    branch_no_25:;
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_88;
    }
    branch_end_25:;
    {
        PyObject *tmp_assign_source_89;
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__9_ConvReLU3d_614 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[139];
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__9_ConvReLU3d_614, mod_consts[140], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;

            goto try_except_handler_28;
        }
        tmp_dictset_value = mod_consts[190];
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__9_ConvReLU3d_614, mod_consts[105], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;

            goto try_except_handler_28;
        }
        tmp_dictset_value = mod_consts[104];
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__9_ConvReLU3d_614, mod_consts[141], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;

            goto try_except_handler_28;
        }
        frame_b0beb0433cb9dec10753a24f33c2293b_10 = MAKE_CLASS_FRAME(codeobj_b0beb0433cb9dec10753a24f33c2293b, module_torch$nn$intrinsic$qat$modules$conv_fused, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_b0beb0433cb9dec10753a24f33c2293b_10);
        assert(Py_REFCNT(frame_b0beb0433cb9dec10753a24f33c2293b_10) == 2);

        // Framed code:
        {
            PyObject *tmp_expression_value_87;
            tmp_expression_value_87 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__9_ConvReLU3d_614, mod_consts[114]);

            if (tmp_expression_value_87 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[114]);

                    if (unlikely(tmp_expression_value_87 == NULL)) {
                        tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
                    }

                    if (tmp_expression_value_87 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 626;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_expression_value_87);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[104]);
            Py_DECREF(tmp_expression_value_87);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 626;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__9_ConvReLU3d_614, mod_consts[61], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 626;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }
        {
            PyObject *tmp_expression_value_88;
            tmp_expression_value_88 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__9_ConvReLU3d_614, mod_consts[0]);

            if (tmp_expression_value_88 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_88 == NULL)) {
                        tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_88 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 627;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_expression_value_88);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[183]);
            Py_DECREF(tmp_expression_value_88);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 627;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__9_ConvReLU3d_614, mod_consts[78], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 627;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__9_ConvReLU3d_614, mod_consts[80], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 628;
            type_description_2 = "o";
            goto frame_exception_exit_10;
        }
        {
            PyObject *tmp_expression_value_89;
            tmp_expression_value_89 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__9_ConvReLU3d_614, mod_consts[0]);

            if (tmp_expression_value_89 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_89 == NULL)) {
                        tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_89 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 629;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_expression_value_89);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[167]);
            Py_DECREF(tmp_expression_value_89);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 629;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__9_ConvReLU3d_614, mod_consts[84], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 629;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }
        {
            PyObject *tmp_defaults_10;
            tmp_defaults_10 = mod_consts[179];
            Py_INCREF(tmp_defaults_10);


            tmp_dictset_value = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__29___init__(tmp_defaults_10);

            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__9_ConvReLU3d_614, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 631;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__30_forward();

        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__9_ConvReLU3d_614, mod_consts[152], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 660;
            type_description_2 = "o";
            goto frame_exception_exit_10;
        }
        {
            nuitka_bool tmp_condition_result_41;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_classmethod_arg_6;
            tmp_res = MAPPING_HAS_ITEM(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__9_ConvReLU3d_614, mod_consts[157]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 665;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_condition_result_41 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_15;
            } else {
                goto condexpr_false_15;
            }
            condexpr_true_15:;
            tmp_called_value_24 = PyObject_GetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__9_ConvReLU3d_614, mod_consts[157]);

            if (unlikely(tmp_called_value_24 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[157]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 665;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }

            if (tmp_called_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 665;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }


            tmp_args_element_value_6 = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__31_from_float();

            frame_b0beb0433cb9dec10753a24f33c2293b_10->m_frame.f_lineno = 665;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 665;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            goto condexpr_end_15;
            condexpr_false_15:;


            tmp_classmethod_arg_6 = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__31_from_float();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_6);
            Py_DECREF(tmp_classmethod_arg_6);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_15:;
            tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__9_ConvReLU3d_614, mod_consts[93], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 665;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_9;
        frame_exception_exit_10:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b0beb0433cb9dec10753a24f33c2293b_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b0beb0433cb9dec10753a24f33c2293b_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b0beb0433cb9dec10753a24f33c2293b_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b0beb0433cb9dec10753a24f33c2293b_10,
            type_description_2,
            outline_8_var___class__
        );



        assertFrameObject(frame_b0beb0433cb9dec10753a24f33c2293b_10);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_9;
        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;

        goto try_except_handler_28;
        skip_nested_handling_9:;
        {
            nuitka_bool tmp_condition_result_42;
            PyObject *tmp_cmp_expr_left_9;
            PyObject *tmp_cmp_expr_right_9;
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_cmp_expr_left_9 = tmp_class_creation_9__bases;
            CHECK_OBJECT(tmp_class_creation_9__bases_orig);
            tmp_cmp_expr_right_9 = tmp_class_creation_9__bases_orig;
            tmp_condition_result_42 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
            if (tmp_condition_result_42 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 614;

                goto try_except_handler_28;
            }
            if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
                goto branch_yes_27;
            } else {
                goto branch_no_27;
            }
        }
        branch_yes_27:;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dictset_value = tmp_class_creation_9__bases_orig;
        tmp_res = PyObject_SetItem(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__9_ConvReLU3d_614, mod_consts[161], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;

            goto try_except_handler_28;
        }
        branch_no_27:;
        {
            PyObject *tmp_assign_source_90;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_value_18;
            PyObject *tmp_tuple_element_36;
            PyObject *tmp_kwargs_value_18;
            CHECK_OBJECT(tmp_class_creation_9__metaclass);
            tmp_called_value_25 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_36 = mod_consts[104];
            tmp_args_value_18 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_36);
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_tuple_element_36 = tmp_class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_36);
            tmp_tuple_element_36 = locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__9_ConvReLU3d_614;
            PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_36);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_value_18 = tmp_class_creation_9__class_decl_dict;
            frame_290db10fbad5acc303c0554377bb0833->m_frame.f_lineno = 614;
            tmp_assign_source_90 = CALL_FUNCTION(tmp_called_value_25, tmp_args_value_18, tmp_kwargs_value_18);
            Py_DECREF(tmp_args_value_18);
            if (tmp_assign_source_90 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 614;

                goto try_except_handler_28;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_90;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_assign_source_89 = outline_8_var___class__;
        Py_INCREF(tmp_assign_source_89);
        goto try_return_handler_28;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_28:;
        Py_DECREF(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__9_ConvReLU3d_614);
        locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__9_ConvReLU3d_614 = NULL;
        goto try_return_handler_27;
        // Exception handler code:
        try_except_handler_28:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__9_ConvReLU3d_614);
        locals_torch$nn$intrinsic$qat$modules$conv_fused$$$class__9_ConvReLU3d_614 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto try_except_handler_27;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        CHECK_OBJECT(outline_8_var___class__);
        Py_DECREF(outline_8_var___class__);
        outline_8_var___class__ = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_27 = exception_type;
        exception_keeper_value_27 = exception_value;
        exception_keeper_tb_27 = exception_tb;
        exception_keeper_lineno_27 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_27;
        exception_value = exception_keeper_value_27;
        exception_tb = exception_keeper_tb_27;
        exception_lineno = exception_keeper_lineno_27;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 614;
        goto try_except_handler_26;
        outline_result_9:;
        UPDATE_STRING_DICT1(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_89);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    Py_XDECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_10;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_290db10fbad5acc303c0554377bb0833, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_290db10fbad5acc303c0554377bb0833->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_290db10fbad5acc303c0554377bb0833, exception_lineno);
    }



    assertFrameObject(frame_290db10fbad5acc303c0554377bb0833);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_10:;
    CHECK_OBJECT(tmp_class_creation_9__bases_orig);
    Py_DECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_9__bases);
    Py_DECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    Py_DECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_9__metaclass);
    Py_DECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_9__prepared);
    Py_DECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    {
        PyObject *tmp_assign_source_91;


        tmp_assign_source_91 = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__32_update_bn_stats();

        UPDATE_STRING_DICT1(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;


        tmp_assign_source_92 = MAKE_FUNCTION_torch$nn$intrinsic$qat$modules$conv_fused$$$function__33_freeze_bn_stats();

        UPDATE_STRING_DICT1(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_92);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch.nn.intrinsic.qat.modules.conv_fused", false);

    Py_INCREF(module_torch$nn$intrinsic$qat$modules$conv_fused);
    return module_torch$nn$intrinsic$qat$modules$conv_fused;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$nn$intrinsic$qat$modules$conv_fused, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$nn$intrinsic$qat$modules$conv_fused", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
