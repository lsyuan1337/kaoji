/* Generated code for Python module 'torch.ao.quantization.fake_quantize'
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

/* The "module_torch$ao$quantization$fake_quantize" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$ao$quantization$fake_quantize;
PyDictObject *moduledict_torch$ao$quantization$fake_quantize;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[223];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[223];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch.ao.quantization.fake_quantize"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 223; i++) {
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
void checkModuleConstants_torch$ao$quantization$fake_quantize(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 223; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_e19096a038f814a00b37b63de7e7d714;
static PyCodeObject *codeobj_f088a332e20d6d78312006e0e56b37c9;
static PyCodeObject *codeobj_e2459108768809d4523a91ba2b65ee67;
static PyCodeObject *codeobj_91f9690ae2bb42715ec1109cae89371e;
static PyCodeObject *codeobj_c4eadfdd3f6717d1f2fa9d56b194d4a2;
static PyCodeObject *codeobj_aba4e3570ab6127b12914ad4621d5fa8;
static PyCodeObject *codeobj_33a18918974d9a7146f4761b48d3c3a7;
static PyCodeObject *codeobj_2ed70925d477776a1c13073376420504;
static PyCodeObject *codeobj_ff068aa7fd6c374d6d1800a64422b772;
static PyCodeObject *codeobj_7bce817f5fc8e74587f1d7d4ffd9d696;
static PyCodeObject *codeobj_bd62a75c3026732a82ab759cb45c5101;
static PyCodeObject *codeobj_a0de742f91bbb3cc61f863e9b03cba8a;
static PyCodeObject *codeobj_fecb2ca3c1226a37ce9c149523baebb2;
static PyCodeObject *codeobj_7b745e4c2ca375feaf7c7cc1055bbea5;
static PyCodeObject *codeobj_bcfe0c70f52abdd29b0c7e3c61b61012;
static PyCodeObject *codeobj_4d5604033d6dfd6d85b9eec27477452e;
static PyCodeObject *codeobj_10a7411fb84e0de9f1b5ea25d8280eb4;
static PyCodeObject *codeobj_b3e6268f888b35ee3d3375c1c8c1b81e;
static PyCodeObject *codeobj_ad9cb3dab0dd5a208c951e7319bf559e;
static PyCodeObject *codeobj_1cdef6484d0f597d4807b0e5f7f058c2;
static PyCodeObject *codeobj_45ff0906a6b06600289232f5b453af9e;
static PyCodeObject *codeobj_5ee2b59368513d4a13034676cd1c1a85;
static PyCodeObject *codeobj_4e95690782beb7861f97ecb678f837b8;
static PyCodeObject *codeobj_9b89024b184123e4c2cc223d6adb84ce;
static PyCodeObject *codeobj_3d7d082ed752e4e9f921da6ac866a4a9;
static PyCodeObject *codeobj_387c1017f002a7eaab45eb51256ecad2;
static PyCodeObject *codeobj_3f2ac6e08086e5ff211834c20bf81604;
static PyCodeObject *codeobj_a0e2c6281530a873f47b292ba22e8a8a;
static PyCodeObject *codeobj_5419fe771b2e94c227d2cd406cdb706a;
static PyCodeObject *codeobj_a0f1932043fd8bc1c236ead6e868b01d;
static PyCodeObject *codeobj_7a9a4442b2a8d8f0b8846642898a1a2c;
static PyCodeObject *codeobj_f2d21e9205f8d781e03b3b04009f7e42;
static PyCodeObject *codeobj_c60539972d904adeb2f3d3f9cc79055d;
static PyCodeObject *codeobj_264b621402ef41fcf87f78ed32c172ea;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[205]); CHECK_OBJECT(module_filename_obj);
    codeobj_e19096a038f814a00b37b63de7e7d714 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[206], mod_consts[206], NULL, NULL, 0, 0, 0);
    codeobj_f088a332e20d6d78312006e0e56b37c9 = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_NOFREE, mod_consts[57], mod_consts[57], mod_consts[207], NULL, 0, 0, 0);
    codeobj_e2459108768809d4523a91ba2b65ee67 = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_NOFREE, mod_consts[98], mod_consts[98], mod_consts[207], NULL, 0, 0, 0);
    codeobj_91f9690ae2bb42715ec1109cae89371e = MAKE_CODE_OBJECT(module_filename_obj, 225, CO_NOFREE, mod_consts[167], mod_consts[167], mod_consts[207], NULL, 0, 0, 0);
    codeobj_c4eadfdd3f6717d1f2fa9d56b194d4a2 = MAKE_CODE_OBJECT(module_filename_obj, 256, CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[207], NULL, 0, 0, 0);
    codeobj_aba4e3570ab6127b12914ad4621d5fa8 = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[7], mod_consts[7], mod_consts[208], mod_consts[207], 1, 0, 0);
    codeobj_33a18918974d9a7146f4761b48d3c3a7 = MAKE_CODE_OBJECT(module_filename_obj, 231, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[7], mod_consts[7], mod_consts[209], mod_consts[207], 2, 0, 0);
    codeobj_2ed70925d477776a1c13073376420504 = MAKE_CODE_OBJECT(module_filename_obj, 272, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[7], mod_consts[7], mod_consts[210], mod_consts[207], 4, 0, 0);
    codeobj_ff068aa7fd6c374d6d1800a64422b772 = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[7], mod_consts[7], mod_consts[211], mod_consts[207], 4, 0, 0);
    codeobj_7bce817f5fc8e74587f1d7d4ffd9d696 = MAKE_CODE_OBJECT(module_filename_obj, 414, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[99], mod_consts[99], mod_consts[212], NULL, 1, 0, 0);
    codeobj_bd62a75c3026732a82ab759cb45c5101 = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[30], mod_consts[30], mod_consts[213], NULL, 1, 0, 0);
    codeobj_a0de742f91bbb3cc61f863e9b03cba8a = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[40], mod_consts[40], mod_consts[213], NULL, 1, 0, 0);
    codeobj_fecb2ca3c1226a37ce9c149523baebb2 = MAKE_CODE_OBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[41], mod_consts[41], mod_consts[213], NULL, 1, 0, 0);
    codeobj_7b745e4c2ca375feaf7c7cc1055bbea5 = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[213], NULL, 1, 0, 0);
    codeobj_bcfe0c70f52abdd29b0c7e3c61b61012 = MAKE_CODE_OBJECT(module_filename_obj, 193, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[66], mod_consts[66], mod_consts[214], NULL, 8, 0, 0);
    codeobj_4d5604033d6dfd6d85b9eec27477452e = MAKE_CODE_OBJECT(module_filename_obj, 186, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[58], mod_consts[58], mod_consts[215], NULL, 4, 0, 0);
    codeobj_10a7411fb84e0de9f1b5ea25d8280eb4 = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[44], mod_consts[44], mod_consts[216], NULL, 1, 0, 0);
    codeobj_b3e6268f888b35ee3d3375c1c8c1b81e = MAKE_CODE_OBJECT(module_filename_obj, 243, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[44], mod_consts[44], mod_consts[216], NULL, 1, 0, 0);
    codeobj_ad9cb3dab0dd5a208c951e7319bf559e = MAKE_CODE_OBJECT(module_filename_obj, 290, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[44], mod_consts[44], mod_consts[216], NULL, 1, 0, 0);
    codeobj_1cdef6484d0f597d4807b0e5f7f058c2 = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_VARKEYWORDS | CO_NOFREE, mod_consts[44], mod_consts[44], mod_consts[217], NULL, 1, 0, 0);
    codeobj_45ff0906a6b06600289232f5b453af9e = MAKE_CODE_OBJECT(module_filename_obj, 425, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[101], mod_consts[101], mod_consts[218], NULL, 1, 0, 0);
    codeobj_5ee2b59368513d4a13034676cd1c1a85 = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[101], mod_consts[101], mod_consts[216], NULL, 1, 0, 0);
    codeobj_4e95690782beb7861f97ecb678f837b8 = MAKE_CODE_OBJECT(module_filename_obj, 447, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[104], mod_consts[104], mod_consts[218], NULL, 1, 0, 0);
    codeobj_9b89024b184123e4c2cc223d6adb84ce = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[104], mod_consts[104], mod_consts[216], NULL, 1, 0, 0);
    codeobj_3d7d082ed752e4e9f921da6ac866a4a9 = MAKE_CODE_OBJECT(module_filename_obj, 436, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[218], NULL, 1, 0, 0);
    codeobj_387c1017f002a7eaab45eb51256ecad2 = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[219], NULL, 2, 0, 0);
    codeobj_3f2ac6e08086e5ff211834c20bf81604 = MAKE_CODE_OBJECT(module_filename_obj, 458, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[19], mod_consts[218], NULL, 1, 0, 0);
    codeobj_a0e2c6281530a873f47b292ba22e8a8a = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[19], mod_consts[219], NULL, 2, 0, 0);
    codeobj_5419fe771b2e94c227d2cd406cdb706a = MAKE_CODE_OBJECT(module_filename_obj, 177, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[163], mod_consts[163], mod_consts[216], NULL, 1, 0, 0);
    codeobj_a0f1932043fd8bc1c236ead6e868b01d = MAKE_CODE_OBJECT(module_filename_obj, 247, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[163], mod_consts[163], mod_consts[216], NULL, 1, 0, 0);
    codeobj_7a9a4442b2a8d8f0b8846642898a1a2c = MAKE_CODE_OBJECT(module_filename_obj, 294, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[163], mod_consts[163], mod_consts[216], NULL, 1, 0, 0);
    codeobj_f2d21e9205f8d781e03b3b04009f7e42 = MAKE_CODE_OBJECT(module_filename_obj, 311, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], mod_consts[143], mod_consts[220], NULL, 2, 0, 0);
    codeobj_c60539972d904adeb2f3d3f9cc79055d = MAKE_CODE_OBJECT(module_filename_obj, 155, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], mod_consts[143], mod_consts[221], NULL, 2, 0, 0);
    codeobj_264b621402ef41fcf87f78ed32c172ea = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_NOFREE, mod_consts[143], mod_consts[143], mod_consts[222], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__8_complex_call_helper_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__7_complex_call_helper_pos_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__10_enable_observer(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__11_disable_observer();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__12___init__(PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__13_calculate_qparams();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__14_forward();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__15_extra_repr();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__16__save_to_state_dict();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__17__load_from_state_dict();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__18___init__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__19_calculate_qparams();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__1__is_per_channel(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__20_extra_repr();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__21___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__22_calculate_qparams(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__23_extra_repr(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__24_forward(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__25__is_fake_quant_script_module();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__26_disable_fake_quant();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__27_enable_fake_quant();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__28_disable_observer();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__29_enable_observer();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__2__is_per_tensor(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__3__is_symmetric_quant(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__4__is_float_qparams(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__5___init__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__6_forward();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__7_calculate_qparams();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__8_enable_fake_quant(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__9_disable_fake_quant();


// The module function definitions.
static PyObject *impl_torch$ao$quantization$fake_quantize$$$function__1__is_per_channel(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_qscheme = python_pars[0];
    struct Nuitka_FrameObject *frame_a0de742f91bbb3cc61f863e9b03cba8a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a0de742f91bbb3cc61f863e9b03cba8a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a0de742f91bbb3cc61f863e9b03cba8a)) {
        Py_XDECREF(cache_frame_a0de742f91bbb3cc61f863e9b03cba8a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a0de742f91bbb3cc61f863e9b03cba8a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a0de742f91bbb3cc61f863e9b03cba8a = MAKE_FUNCTION_FRAME(codeobj_a0de742f91bbb3cc61f863e9b03cba8a, module_torch$ao$quantization$fake_quantize, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a0de742f91bbb3cc61f863e9b03cba8a->m_type_description == NULL);
    frame_a0de742f91bbb3cc61f863e9b03cba8a = cache_frame_a0de742f91bbb3cc61f863e9b03cba8a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a0de742f91bbb3cc61f863e9b03cba8a);
    assert(Py_REFCNT(frame_a0de742f91bbb3cc61f863e9b03cba8a) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_qscheme);
        tmp_cmp_expr_left_1 = par_qscheme;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyList_SET_ITEM(tmp_cmp_expr_right_1, 0, tmp_list_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_cmp_expr_right_1, 1, tmp_list_element_1);
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[3]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_cmp_expr_right_1, 2, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_a0de742f91bbb3cc61f863e9b03cba8a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a0de742f91bbb3cc61f863e9b03cba8a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a0de742f91bbb3cc61f863e9b03cba8a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a0de742f91bbb3cc61f863e9b03cba8a,
        type_description_1,
        par_qscheme
    );


    // Release cached frame if used for exception.
    if (frame_a0de742f91bbb3cc61f863e9b03cba8a == cache_frame_a0de742f91bbb3cc61f863e9b03cba8a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a0de742f91bbb3cc61f863e9b03cba8a);
        cache_frame_a0de742f91bbb3cc61f863e9b03cba8a = NULL;
    }

    assertFrameObject(frame_a0de742f91bbb3cc61f863e9b03cba8a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_qscheme);
    Py_DECREF(par_qscheme);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_qscheme);
    Py_DECREF(par_qscheme);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$fake_quantize$$$function__2__is_per_tensor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_qscheme = python_pars[0];
    struct Nuitka_FrameObject *frame_fecb2ca3c1226a37ce9c149523baebb2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_fecb2ca3c1226a37ce9c149523baebb2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fecb2ca3c1226a37ce9c149523baebb2)) {
        Py_XDECREF(cache_frame_fecb2ca3c1226a37ce9c149523baebb2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fecb2ca3c1226a37ce9c149523baebb2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fecb2ca3c1226a37ce9c149523baebb2 = MAKE_FUNCTION_FRAME(codeobj_fecb2ca3c1226a37ce9c149523baebb2, module_torch$ao$quantization$fake_quantize, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fecb2ca3c1226a37ce9c149523baebb2->m_type_description == NULL);
    frame_fecb2ca3c1226a37ce9c149523baebb2 = cache_frame_fecb2ca3c1226a37ce9c149523baebb2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fecb2ca3c1226a37ce9c149523baebb2);
    assert(Py_REFCNT(frame_fecb2ca3c1226a37ce9c149523baebb2) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_qscheme);
        tmp_cmp_expr_left_1 = par_qscheme;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_expression_value_2;
            PyList_SET_ITEM(tmp_cmp_expr_right_1, 0, tmp_list_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_cmp_expr_right_1, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_fecb2ca3c1226a37ce9c149523baebb2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fecb2ca3c1226a37ce9c149523baebb2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fecb2ca3c1226a37ce9c149523baebb2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fecb2ca3c1226a37ce9c149523baebb2,
        type_description_1,
        par_qscheme
    );


    // Release cached frame if used for exception.
    if (frame_fecb2ca3c1226a37ce9c149523baebb2 == cache_frame_fecb2ca3c1226a37ce9c149523baebb2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fecb2ca3c1226a37ce9c149523baebb2);
        cache_frame_fecb2ca3c1226a37ce9c149523baebb2 = NULL;
    }

    assertFrameObject(frame_fecb2ca3c1226a37ce9c149523baebb2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_qscheme);
    Py_DECREF(par_qscheme);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_qscheme);
    Py_DECREF(par_qscheme);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$fake_quantize$$$function__3__is_symmetric_quant(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_qscheme = python_pars[0];
    struct Nuitka_FrameObject *frame_7b745e4c2ca375feaf7c7cc1055bbea5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7b745e4c2ca375feaf7c7cc1055bbea5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7b745e4c2ca375feaf7c7cc1055bbea5)) {
        Py_XDECREF(cache_frame_7b745e4c2ca375feaf7c7cc1055bbea5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7b745e4c2ca375feaf7c7cc1055bbea5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7b745e4c2ca375feaf7c7cc1055bbea5 = MAKE_FUNCTION_FRAME(codeobj_7b745e4c2ca375feaf7c7cc1055bbea5, module_torch$ao$quantization$fake_quantize, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7b745e4c2ca375feaf7c7cc1055bbea5->m_type_description == NULL);
    frame_7b745e4c2ca375feaf7c7cc1055bbea5 = cache_frame_7b745e4c2ca375feaf7c7cc1055bbea5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7b745e4c2ca375feaf7c7cc1055bbea5);
    assert(Py_REFCNT(frame_7b745e4c2ca375feaf7c7cc1055bbea5) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_qscheme);
        tmp_cmp_expr_left_1 = par_qscheme;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_expression_value_2;
            PyList_SET_ITEM(tmp_cmp_expr_right_1, 0, tmp_list_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_cmp_expr_right_1, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_7b745e4c2ca375feaf7c7cc1055bbea5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7b745e4c2ca375feaf7c7cc1055bbea5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7b745e4c2ca375feaf7c7cc1055bbea5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7b745e4c2ca375feaf7c7cc1055bbea5,
        type_description_1,
        par_qscheme
    );


    // Release cached frame if used for exception.
    if (frame_7b745e4c2ca375feaf7c7cc1055bbea5 == cache_frame_7b745e4c2ca375feaf7c7cc1055bbea5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7b745e4c2ca375feaf7c7cc1055bbea5);
        cache_frame_7b745e4c2ca375feaf7c7cc1055bbea5 = NULL;
    }

    assertFrameObject(frame_7b745e4c2ca375feaf7c7cc1055bbea5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_qscheme);
    Py_DECREF(par_qscheme);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_qscheme);
    Py_DECREF(par_qscheme);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$fake_quantize$$$function__4__is_float_qparams(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_qscheme = python_pars[0];
    struct Nuitka_FrameObject *frame_bd62a75c3026732a82ab759cb45c5101;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_bd62a75c3026732a82ab759cb45c5101 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bd62a75c3026732a82ab759cb45c5101)) {
        Py_XDECREF(cache_frame_bd62a75c3026732a82ab759cb45c5101);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bd62a75c3026732a82ab759cb45c5101 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bd62a75c3026732a82ab759cb45c5101 = MAKE_FUNCTION_FRAME(codeobj_bd62a75c3026732a82ab759cb45c5101, module_torch$ao$quantization$fake_quantize, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bd62a75c3026732a82ab759cb45c5101->m_type_description == NULL);
    frame_bd62a75c3026732a82ab759cb45c5101 = cache_frame_bd62a75c3026732a82ab759cb45c5101;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bd62a75c3026732a82ab759cb45c5101);
    assert(Py_REFCNT(frame_bd62a75c3026732a82ab759cb45c5101) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_qscheme);
        tmp_cmp_expr_left_1 = par_qscheme;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_cmp_expr_right_1, 0, tmp_list_element_1);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_bd62a75c3026732a82ab759cb45c5101, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bd62a75c3026732a82ab759cb45c5101->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bd62a75c3026732a82ab759cb45c5101, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bd62a75c3026732a82ab759cb45c5101,
        type_description_1,
        par_qscheme
    );


    // Release cached frame if used for exception.
    if (frame_bd62a75c3026732a82ab759cb45c5101 == cache_frame_bd62a75c3026732a82ab759cb45c5101) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bd62a75c3026732a82ab759cb45c5101);
        cache_frame_bd62a75c3026732a82ab759cb45c5101 = NULL;
    }

    assertFrameObject(frame_bd62a75c3026732a82ab759cb45c5101);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_qscheme);
    Py_DECREF(par_qscheme);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_qscheme);
    Py_DECREF(par_qscheme);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$fake_quantize$$$function__5___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_aba4e3570ab6127b12914ad4621d5fa8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_aba4e3570ab6127b12914ad4621d5fa8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_aba4e3570ab6127b12914ad4621d5fa8)) {
        Py_XDECREF(cache_frame_aba4e3570ab6127b12914ad4621d5fa8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aba4e3570ab6127b12914ad4621d5fa8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aba4e3570ab6127b12914ad4621d5fa8 = MAKE_FUNCTION_FRAME(codeobj_aba4e3570ab6127b12914ad4621d5fa8, module_torch$ao$quantization$fake_quantize, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_aba4e3570ab6127b12914ad4621d5fa8->m_type_description == NULL);
    frame_aba4e3570ab6127b12914ad4621d5fa8 = cache_frame_aba4e3570ab6127b12914ad4621d5fa8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_aba4e3570ab6127b12914ad4621d5fa8);
    assert(Py_REFCNT(frame_aba4e3570ab6127b12914ad4621d5fa8) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 50;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torch$ao$quantization$fake_quantize, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_aba4e3570ab6127b12914ad4621d5fa8->m_frame.f_lineno = 50;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[7]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_posargs_values_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[9];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 54;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[10]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 54;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 54;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[11]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 54;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_call_posargs_values_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[12], "l");
        frame_aba4e3570ab6127b12914ad4621d5fa8->m_frame.f_lineno = 54;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_2, tmp_call_posargs_values_1, kw_values, mod_consts[13]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_call_posargs_values_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 54;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_aba4e3570ab6127b12914ad4621d5fa8->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_posargs_values_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[8]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[14];
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 55;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[10]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 55;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 55;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[11]);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 55;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_call_posargs_values_2 = DEEP_COPY_TUPLE_GUIDED(mod_consts[12], "l");
        frame_aba4e3570ab6127b12914ad4621d5fa8->m_frame.f_lineno = 55;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_4, tmp_call_posargs_values_2, kw_values, mod_consts[13]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_call_posargs_values_2);
        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 55;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_aba4e3570ab6127b12914ad4621d5fa8->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_aba4e3570ab6127b12914ad4621d5fa8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aba4e3570ab6127b12914ad4621d5fa8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aba4e3570ab6127b12914ad4621d5fa8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aba4e3570ab6127b12914ad4621d5fa8,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_aba4e3570ab6127b12914ad4621d5fa8 == cache_frame_aba4e3570ab6127b12914ad4621d5fa8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_aba4e3570ab6127b12914ad4621d5fa8);
        cache_frame_aba4e3570ab6127b12914ad4621d5fa8 = NULL;
    }

    assertFrameObject(frame_aba4e3570ab6127b12914ad4621d5fa8);

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


static PyObject *impl_torch$ao$quantization$fake_quantize$$$function__8_enable_fake_quant(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_enabled = python_pars[1];
    struct Nuitka_FrameObject *frame_387c1017f002a7eaab45eb51256ecad2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_387c1017f002a7eaab45eb51256ecad2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_387c1017f002a7eaab45eb51256ecad2)) {
        Py_XDECREF(cache_frame_387c1017f002a7eaab45eb51256ecad2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_387c1017f002a7eaab45eb51256ecad2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_387c1017f002a7eaab45eb51256ecad2 = MAKE_FUNCTION_FRAME(codeobj_387c1017f002a7eaab45eb51256ecad2, module_torch$ao$quantization$fake_quantize, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_387c1017f002a7eaab45eb51256ecad2->m_type_description == NULL);
    frame_387c1017f002a7eaab45eb51256ecad2 = cache_frame_387c1017f002a7eaab45eb51256ecad2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_387c1017f002a7eaab45eb51256ecad2);
    assert(Py_REFCNT(frame_387c1017f002a7eaab45eb51256ecad2) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT(par_enabled);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_enabled);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_ass_subvalue_1 = mod_consts[15];
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_ass_subvalue_1 = mod_consts[16];
        condexpr_end_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[16];
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_ass_subscript_res_1 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_387c1017f002a7eaab45eb51256ecad2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_387c1017f002a7eaab45eb51256ecad2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_387c1017f002a7eaab45eb51256ecad2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_387c1017f002a7eaab45eb51256ecad2,
        type_description_1,
        par_self,
        par_enabled
    );


    // Release cached frame if used for exception.
    if (frame_387c1017f002a7eaab45eb51256ecad2 == cache_frame_387c1017f002a7eaab45eb51256ecad2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_387c1017f002a7eaab45eb51256ecad2);
        cache_frame_387c1017f002a7eaab45eb51256ecad2 = NULL;
    }

    assertFrameObject(frame_387c1017f002a7eaab45eb51256ecad2);

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
    CHECK_OBJECT(par_enabled);
    Py_DECREF(par_enabled);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_enabled);
    Py_DECREF(par_enabled);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$fake_quantize$$$function__9_disable_fake_quant(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5ee2b59368513d4a13034676cd1c1a85;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5ee2b59368513d4a13034676cd1c1a85 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5ee2b59368513d4a13034676cd1c1a85)) {
        Py_XDECREF(cache_frame_5ee2b59368513d4a13034676cd1c1a85);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5ee2b59368513d4a13034676cd1c1a85 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5ee2b59368513d4a13034676cd1c1a85 = MAKE_FUNCTION_FRAME(codeobj_5ee2b59368513d4a13034676cd1c1a85, module_torch$ao$quantization$fake_quantize, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5ee2b59368513d4a13034676cd1c1a85->m_type_description == NULL);
    frame_5ee2b59368513d4a13034676cd1c1a85 = cache_frame_5ee2b59368513d4a13034676cd1c1a85;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5ee2b59368513d4a13034676cd1c1a85);
    assert(Py_REFCNT(frame_5ee2b59368513d4a13034676cd1c1a85) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_5ee2b59368513d4a13034676cd1c1a85->m_frame.f_lineno = 71;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[17],
            PyTuple_GET_ITEM(mod_consts[18], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
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
        exception_tb = MAKE_TRACEBACK(frame_5ee2b59368513d4a13034676cd1c1a85, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5ee2b59368513d4a13034676cd1c1a85->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5ee2b59368513d4a13034676cd1c1a85, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5ee2b59368513d4a13034676cd1c1a85,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_5ee2b59368513d4a13034676cd1c1a85 == cache_frame_5ee2b59368513d4a13034676cd1c1a85) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5ee2b59368513d4a13034676cd1c1a85);
        cache_frame_5ee2b59368513d4a13034676cd1c1a85 = NULL;
    }

    assertFrameObject(frame_5ee2b59368513d4a13034676cd1c1a85);

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


static PyObject *impl_torch$ao$quantization$fake_quantize$$$function__10_enable_observer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_enabled = python_pars[1];
    struct Nuitka_FrameObject *frame_a0e2c6281530a873f47b292ba22e8a8a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a0e2c6281530a873f47b292ba22e8a8a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a0e2c6281530a873f47b292ba22e8a8a)) {
        Py_XDECREF(cache_frame_a0e2c6281530a873f47b292ba22e8a8a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a0e2c6281530a873f47b292ba22e8a8a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a0e2c6281530a873f47b292ba22e8a8a = MAKE_FUNCTION_FRAME(codeobj_a0e2c6281530a873f47b292ba22e8a8a, module_torch$ao$quantization$fake_quantize, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a0e2c6281530a873f47b292ba22e8a8a->m_type_description == NULL);
    frame_a0e2c6281530a873f47b292ba22e8a8a = cache_frame_a0e2c6281530a873f47b292ba22e8a8a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a0e2c6281530a873f47b292ba22e8a8a);
    assert(Py_REFCNT(frame_a0e2c6281530a873f47b292ba22e8a8a) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT(par_enabled);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_enabled);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_ass_subvalue_1 = mod_consts[15];
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_ass_subvalue_1 = mod_consts[16];
        condexpr_end_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[16];
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_ass_subscript_res_1 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a0e2c6281530a873f47b292ba22e8a8a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a0e2c6281530a873f47b292ba22e8a8a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a0e2c6281530a873f47b292ba22e8a8a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a0e2c6281530a873f47b292ba22e8a8a,
        type_description_1,
        par_self,
        par_enabled
    );


    // Release cached frame if used for exception.
    if (frame_a0e2c6281530a873f47b292ba22e8a8a == cache_frame_a0e2c6281530a873f47b292ba22e8a8a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a0e2c6281530a873f47b292ba22e8a8a);
        cache_frame_a0e2c6281530a873f47b292ba22e8a8a = NULL;
    }

    assertFrameObject(frame_a0e2c6281530a873f47b292ba22e8a8a);

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
    CHECK_OBJECT(par_enabled);
    Py_DECREF(par_enabled);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_enabled);
    Py_DECREF(par_enabled);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$fake_quantize$$$function__11_disable_observer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9b89024b184123e4c2cc223d6adb84ce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9b89024b184123e4c2cc223d6adb84ce = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9b89024b184123e4c2cc223d6adb84ce)) {
        Py_XDECREF(cache_frame_9b89024b184123e4c2cc223d6adb84ce);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9b89024b184123e4c2cc223d6adb84ce == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9b89024b184123e4c2cc223d6adb84ce = MAKE_FUNCTION_FRAME(codeobj_9b89024b184123e4c2cc223d6adb84ce, module_torch$ao$quantization$fake_quantize, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9b89024b184123e4c2cc223d6adb84ce->m_type_description == NULL);
    frame_9b89024b184123e4c2cc223d6adb84ce = cache_frame_9b89024b184123e4c2cc223d6adb84ce;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9b89024b184123e4c2cc223d6adb84ce);
    assert(Py_REFCNT(frame_9b89024b184123e4c2cc223d6adb84ce) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_9b89024b184123e4c2cc223d6adb84ce->m_frame.f_lineno = 79;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[19],
            PyTuple_GET_ITEM(mod_consts[18], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
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
        exception_tb = MAKE_TRACEBACK(frame_9b89024b184123e4c2cc223d6adb84ce, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9b89024b184123e4c2cc223d6adb84ce->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9b89024b184123e4c2cc223d6adb84ce, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9b89024b184123e4c2cc223d6adb84ce,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9b89024b184123e4c2cc223d6adb84ce == cache_frame_9b89024b184123e4c2cc223d6adb84ce) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9b89024b184123e4c2cc223d6adb84ce);
        cache_frame_9b89024b184123e4c2cc223d6adb84ce = NULL;
    }

    assertFrameObject(frame_9b89024b184123e4c2cc223d6adb84ce);

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


static PyObject *impl_torch$ao$quantization$fake_quantize$$$function__12___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_observer = python_pars[1];
    PyObject *par_quant_min = python_pars[2];
    PyObject *par_quant_max = python_pars[3];
    PyObject *par_observer_kwargs = python_pars[4];
    PyObject *var_zero_point_dtype = NULL;
    struct Nuitka_FrameObject *frame_ff068aa7fd6c374d6d1800a64422b772;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_ff068aa7fd6c374d6d1800a64422b772 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ff068aa7fd6c374d6d1800a64422b772)) {
        Py_XDECREF(cache_frame_ff068aa7fd6c374d6d1800a64422b772);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ff068aa7fd6c374d6d1800a64422b772 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ff068aa7fd6c374d6d1800a64422b772 = MAKE_FUNCTION_FRAME(codeobj_ff068aa7fd6c374d6d1800a64422b772, module_torch$ao$quantization$fake_quantize, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ff068aa7fd6c374d6d1800a64422b772->m_type_description == NULL);
    frame_ff068aa7fd6c374d6d1800a64422b772 = cache_frame_ff068aa7fd6c374d6d1800a64422b772;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ff068aa7fd6c374d6d1800a64422b772);
    assert(Py_REFCNT(frame_ff068aa7fd6c374d6d1800a64422b772) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 127;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torch$ao$quantization$fake_quantize, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        frame_ff068aa7fd6c374d6d1800a64422b772->m_frame.f_lineno = 127;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[7]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_quant_min);
        tmp_cmp_expr_left_1 = par_quant_min;
        CHECK_OBJECT(par_quant_max);
        tmp_cmp_expr_right_1 = par_quant_max;
        tmp_operand_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooc";
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
        tmp_raise_value_1 = mod_consts[20];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 128;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooc";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_quant_min);
        tmp_assattr_value_1 = par_quant_min;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[21], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_quant_max);
        tmp_assattr_value_2 = par_quant_max;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[22], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_observer);
        tmp_dircall_arg1_1 = par_observer;
        CHECK_OBJECT(par_observer_kwargs);
        tmp_dircall_arg2_1 = par_observer_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assattr_value_3 = impl___main__$$$function__8_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[23], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[24]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[23]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 133;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[25]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 133;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        frame_ff068aa7fd6c374d6d1800a64422b772->m_frame.f_lineno = 133;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[26]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_quant_min);
        tmp_cmp_expr_right_2 = par_quant_min;
        tmp_operand_value_2 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooc";
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
        tmp_raise_value_2 = mod_consts[27];
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        Py_INCREF(tmp_raise_value_2);
        exception_lineno = 133;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooc";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_quant_max);
        tmp_cmp_expr_left_3 = par_quant_max;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[24]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[23]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 134;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[25]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 134;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        frame_ff068aa7fd6c374d6d1800a64422b772->m_frame.f_lineno = 134;
        tmp_expression_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[28]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_3 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooc";
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
        tmp_raise_value_3 = mod_consts[29];
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        Py_INCREF(tmp_raise_value_3);
        exception_lineno = 134;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooc";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        int tmp_truth_name_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[23]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[31]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        frame_ff068aa7fd6c374d6d1800a64422b772->m_frame.f_lineno = 135;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 135;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_11;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[32]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_zero_point_dtype == NULL);
        var_zero_point_dtype = tmp_assign_source_1;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_12;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[33]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_zero_point_dtype == NULL);
        var_zero_point_dtype = tmp_assign_source_2;
    }
    branch_end_4:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_posargs_values_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[8]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[34];
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 139;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[10]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 139;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 139;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[32]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 139;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_call_posargs_values_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[35], "l");
        frame_ff068aa7fd6c374d6d1800a64422b772->m_frame.f_lineno = 139;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_args_element_value_5 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_5, tmp_call_posargs_values_1, kw_values, mod_consts[13]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_call_posargs_values_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 139;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        frame_ff068aa7fd6c374d6d1800a64422b772->m_frame.f_lineno = 139;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_call_posargs_values_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[8]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = mod_consts[36];
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 140;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[10]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 140;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_zero_point_dtype);
        tmp_kw_call_value_0_2 = var_zero_point_dtype;
        tmp_call_posargs_values_2 = DEEP_COPY_TUPLE_GUIDED(mod_consts[37], "l");
        frame_ff068aa7fd6c374d6d1800a64422b772->m_frame.f_lineno = 140;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
            tmp_args_element_value_7 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_7, tmp_call_posargs_values_2, kw_values, mod_consts[13]);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_call_posargs_values_2);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 140;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        frame_ff068aa7fd6c374d6d1800a64422b772->m_frame.f_lineno = 140;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_19 = par_self;
        tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[23]);
        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[25]);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[25], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_21 = par_self;
        tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[23]);
        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[31]);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[31], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_attribute_value_1;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_23 = par_self;
        tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[23]);
        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = mod_consts[38];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_22, tmp_attribute_value_1);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_25 = par_self;
        tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[23]);
        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[38]);
        Py_DECREF(tmp_expression_value_24);
        if (tmp_assattr_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assattr_value_6 = mod_consts[39];
        Py_INCREF(tmp_assattr_value_6);
        condexpr_end_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[38], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_4;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_27;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_26 = par_self;
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[31]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        frame_ff068aa7fd6c374d6d1800a64422b772->m_frame.f_lineno = 145;
        tmp_or_left_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 145;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_27 = par_self;
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[31]);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        frame_ff068aa7fd6c374d6d1800a64422b772->m_frame.f_lineno = 146;
        tmp_or_right_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_4 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_operand_value_4 = tmp_or_left_value_1;
        or_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_expression_value_28;
        tmp_raise_type_4 = PyExc_AssertionError;
        tmp_add_expr_left_1 = mod_consts[42];
        CHECK_OBJECT(par_self);
        tmp_expression_value_28 = par_self;
        tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[31]);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_raise_value_4 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_raise_value_4, 0, tmp_tuple_element_1);
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 145;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooc";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_assattr_target_7;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_29 = par_self;
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[31]);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        frame_ff068aa7fd6c374d6d1800a64422b772->m_frame.f_lineno = 149;
        tmp_assattr_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_assattr_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[43], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ff068aa7fd6c374d6d1800a64422b772, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ff068aa7fd6c374d6d1800a64422b772->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ff068aa7fd6c374d6d1800a64422b772, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ff068aa7fd6c374d6d1800a64422b772,
        type_description_1,
        par_self,
        par_observer,
        par_quant_min,
        par_quant_max,
        par_observer_kwargs,
        var_zero_point_dtype,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_ff068aa7fd6c374d6d1800a64422b772 == cache_frame_ff068aa7fd6c374d6d1800a64422b772) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ff068aa7fd6c374d6d1800a64422b772);
        cache_frame_ff068aa7fd6c374d6d1800a64422b772 = NULL;
    }

    assertFrameObject(frame_ff068aa7fd6c374d6d1800a64422b772);

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
    CHECK_OBJECT(var_zero_point_dtype);
    Py_DECREF(var_zero_point_dtype);
    var_zero_point_dtype = NULL;
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

    Py_XDECREF(var_zero_point_dtype);
    var_zero_point_dtype = NULL;
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
    CHECK_OBJECT(par_observer);
    Py_DECREF(par_observer);
    CHECK_OBJECT(par_quant_min);
    Py_DECREF(par_quant_min);
    CHECK_OBJECT(par_quant_max);
    Py_DECREF(par_quant_max);
    CHECK_OBJECT(par_observer_kwargs);
    Py_DECREF(par_observer_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_observer);
    Py_DECREF(par_observer);
    CHECK_OBJECT(par_quant_min);
    Py_DECREF(par_quant_min);
    CHECK_OBJECT(par_quant_max);
    Py_DECREF(par_quant_max);
    CHECK_OBJECT(par_observer_kwargs);
    Py_DECREF(par_observer_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$fake_quantize$$$function__13_calculate_qparams(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_10a7411fb84e0de9f1b5ea25d8280eb4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_10a7411fb84e0de9f1b5ea25d8280eb4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_10a7411fb84e0de9f1b5ea25d8280eb4)) {
        Py_XDECREF(cache_frame_10a7411fb84e0de9f1b5ea25d8280eb4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_10a7411fb84e0de9f1b5ea25d8280eb4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_10a7411fb84e0de9f1b5ea25d8280eb4 = MAKE_FUNCTION_FRAME(codeobj_10a7411fb84e0de9f1b5ea25d8280eb4, module_torch$ao$quantization$fake_quantize, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_10a7411fb84e0de9f1b5ea25d8280eb4->m_type_description == NULL);
    frame_10a7411fb84e0de9f1b5ea25d8280eb4 = cache_frame_10a7411fb84e0de9f1b5ea25d8280eb4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_10a7411fb84e0de9f1b5ea25d8280eb4);
    assert(Py_REFCNT(frame_10a7411fb84e0de9f1b5ea25d8280eb4) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_10a7411fb84e0de9f1b5ea25d8280eb4->m_frame.f_lineno = 153;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[44]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
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
        exception_tb = MAKE_TRACEBACK(frame_10a7411fb84e0de9f1b5ea25d8280eb4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_10a7411fb84e0de9f1b5ea25d8280eb4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_10a7411fb84e0de9f1b5ea25d8280eb4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_10a7411fb84e0de9f1b5ea25d8280eb4,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_10a7411fb84e0de9f1b5ea25d8280eb4 == cache_frame_10a7411fb84e0de9f1b5ea25d8280eb4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_10a7411fb84e0de9f1b5ea25d8280eb4);
        cache_frame_10a7411fb84e0de9f1b5ea25d8280eb4 = NULL;
    }

    assertFrameObject(frame_10a7411fb84e0de9f1b5ea25d8280eb4);

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


static PyObject *impl_torch$ao$quantization$fake_quantize$$$function__14_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_X = python_pars[1];
    PyObject *var__scale = NULL;
    PyObject *var__zero_point = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_c60539972d904adeb2f3d3f9cc79055d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_iterator_attempt;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c60539972d904adeb2f3d3f9cc79055d = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c60539972d904adeb2f3d3f9cc79055d)) {
        Py_XDECREF(cache_frame_c60539972d904adeb2f3d3f9cc79055d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c60539972d904adeb2f3d3f9cc79055d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c60539972d904adeb2f3d3f9cc79055d = MAKE_FUNCTION_FRAME(codeobj_c60539972d904adeb2f3d3f9cc79055d, module_torch$ao$quantization$fake_quantize, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c60539972d904adeb2f3d3f9cc79055d->m_type_description == NULL);
    frame_c60539972d904adeb2f3d3f9cc79055d = cache_frame_c60539972d904adeb2f3d3f9cc79055d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c60539972d904adeb2f3d3f9cc79055d);
    assert(Py_REFCNT(frame_c60539972d904adeb2f3d3f9cc79055d) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[16];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[15];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooo";
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
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[23]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_X);
        tmp_called_instance_1 = par_X;
        frame_c60539972d904adeb2f3d3f9cc79055d->m_frame.f_lineno = 157;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[45]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 157;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_c60539972d904adeb2f3d3f9cc79055d->m_frame.f_lineno = 157;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_c60539972d904adeb2f3d3f9cc79055d->m_frame.f_lineno = 158;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[44]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
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
            exception_lineno = 158;
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
            exception_lineno = 158;
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
                    exception_lineno = 158;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[46];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooo";
            exception_lineno = 158;
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
        assert(var__scale == NULL);
        Py_INCREF(tmp_assign_source_4);
        var__scale = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var__zero_point == NULL);
        Py_INCREF(tmp_assign_source_5);
        var__zero_point = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var__scale);
        tmp_expression_value_4 = var__scale;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[47]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[34]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 159;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[48]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 159;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        frame_c60539972d904adeb2f3d3f9cc79055d->m_frame.f_lineno = 159;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        tmp_iter_arg_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_expression_value_9;
            PyTuple_SET_ITEM(tmp_iter_arg_2, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var__zero_point);
            tmp_expression_value_7 = var__zero_point;
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[47]);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_self);
            tmp_expression_value_9 = par_self;
            tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[36]);
            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 159;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[48]);
            Py_DECREF(tmp_expression_value_8);
            if (tmp_args_element_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 159;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            frame_c60539972d904adeb2f3d3f9cc79055d->m_frame.f_lineno = 159;
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_2, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_6 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        assert(!(tmp_assign_source_6 == NULL));
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 159;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 159;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_8;
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

                    type_description_1 = "oooo";
                    exception_lineno = 159;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[46];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooo";
            exception_lineno = 159;
            goto try_except_handler_5;
        }
    }
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

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_9 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var__scale;
            assert(old != NULL);
            var__scale = tmp_assign_source_9;
            Py_INCREF(var__scale);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_10 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var__zero_point;
            assert(old != NULL);
            var__zero_point = tmp_assign_source_10;
            Py_INCREF(var__zero_point);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[34]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[49]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__scale);
        tmp_expression_value_12 = var__scale;
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[49]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 160;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooo";
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
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[34]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[50]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__scale);
        tmp_expression_value_15 = var__scale;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[49]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 161;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_c60539972d904adeb2f3d3f9cc79055d->m_frame.f_lineno = 161;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(par_self);
        tmp_expression_value_17 = par_self;
        tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[36]);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[50]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__zero_point);
        tmp_expression_value_18 = var__zero_point;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[49]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 162;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_c60539972d904adeb2f3d3f9cc79055d->m_frame.f_lineno = 162;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_2:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_19 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[34]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__scale);
        tmp_args_element_value_6 = var__scale;
        frame_c60539972d904adeb2f3d3f9cc79055d->m_frame.f_lineno = 163;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[51], tmp_args_element_value_6);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_21 = par_self;
        tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[36]);
        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[51]);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (var__zero_point == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_7 = var__zero_point;
        frame_c60539972d904adeb2f3d3f9cc79055d->m_frame.f_lineno = 164;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_23 = par_self;
        tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[9]);
        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[16];
        tmp_cmp_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_22, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = mod_consts[15];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooo";
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
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_24 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[43]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_30;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[53]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_X == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_8 = par_X;
        CHECK_OBJECT(par_self);
        tmp_expression_value_26 = par_self;
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[34]);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 169;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_27 = par_self;
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[36]);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 169;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_28 = par_self;
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[38]);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);

            exception_lineno = 170;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_29 = par_self;
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[21]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 170;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_30 = par_self;
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[22]);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);

            exception_lineno = 170;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_c60539972d904adeb2f3d3f9cc79055d->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_X;
            par_X = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_expression_value_35;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[55]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_X == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 173;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_14 = par_X;
        CHECK_OBJECT(par_self);
        tmp_expression_value_32 = par_self;
        tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[34]);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 173;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_33 = par_self;
        tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[36]);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_15);

            exception_lineno = 173;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_34 = par_self;
        tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[21]);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);

            exception_lineno = 174;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_35 = par_self;
        tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[22]);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_17);

            exception_lineno = 174;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_c60539972d904adeb2f3d3f9cc79055d->m_frame.f_lineno = 172;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_16);
        Py_DECREF(tmp_args_element_value_17);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_X;
            par_X = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    branch_end_4:;
    branch_no_3:;
    if (par_X == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 175;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_X;
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
        exception_tb = MAKE_TRACEBACK(frame_c60539972d904adeb2f3d3f9cc79055d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c60539972d904adeb2f3d3f9cc79055d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c60539972d904adeb2f3d3f9cc79055d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c60539972d904adeb2f3d3f9cc79055d,
        type_description_1,
        par_self,
        par_X,
        var__scale,
        var__zero_point
    );


    // Release cached frame if used for exception.
    if (frame_c60539972d904adeb2f3d3f9cc79055d == cache_frame_c60539972d904adeb2f3d3f9cc79055d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c60539972d904adeb2f3d3f9cc79055d);
        cache_frame_c60539972d904adeb2f3d3f9cc79055d = NULL;
    }

    assertFrameObject(frame_c60539972d904adeb2f3d3f9cc79055d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_X);
    par_X = NULL;
    Py_XDECREF(var__scale);
    var__scale = NULL;
    Py_XDECREF(var__zero_point);
    var__zero_point = NULL;
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

    Py_XDECREF(par_X);
    par_X = NULL;
    Py_XDECREF(var__scale);
    var__scale = NULL;
    Py_XDECREF(var__zero_point);
    var__zero_point = NULL;
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


static PyObject *impl_torch$ao$quantization$fake_quantize$$$function__15_extra_repr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5419fe771b2e94c227d2cd406cdb706a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5419fe771b2e94c227d2cd406cdb706a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5419fe771b2e94c227d2cd406cdb706a)) {
        Py_XDECREF(cache_frame_5419fe771b2e94c227d2cd406cdb706a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5419fe771b2e94c227d2cd406cdb706a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5419fe771b2e94c227d2cd406cdb706a = MAKE_FUNCTION_FRAME(codeobj_5419fe771b2e94c227d2cd406cdb706a, module_torch$ao$quantization$fake_quantize, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5419fe771b2e94c227d2cd406cdb706a->m_type_description == NULL);
    frame_5419fe771b2e94c227d2cd406cdb706a = cache_frame_5419fe771b2e94c227d2cd406cdb706a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5419fe771b2e94c227d2cd406cdb706a);
    assert(Py_REFCNT(frame_5419fe771b2e94c227d2cd406cdb706a) == 2);

    // Framed code:
    {
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_arg_value_5_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_arg_value_6_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_arg_value_7_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_arg_value_8_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_arg_value_9_1;
        PyObject *tmp_expression_value_9;
        tmp_kw_call_arg_value_0_1 = mod_consts[56];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 182;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_kw_call_arg_value_3_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[21]);
        if (tmp_kw_call_arg_value_3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);

            exception_lineno = 183;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_kw_call_arg_value_4_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[22]);
        if (tmp_kw_call_arg_value_4_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);

            exception_lineno = 183;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_kw_call_arg_value_5_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[25]);
        if (tmp_kw_call_arg_value_5_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);

            exception_lineno = 184;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_kw_call_arg_value_6_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[31]);
        if (tmp_kw_call_arg_value_6_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            Py_DECREF(tmp_kw_call_arg_value_5_1);

            exception_lineno = 184;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_kw_call_arg_value_7_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[38]);
        if (tmp_kw_call_arg_value_7_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            Py_DECREF(tmp_kw_call_arg_value_5_1);
            Py_DECREF(tmp_kw_call_arg_value_6_1);

            exception_lineno = 184;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_kw_call_arg_value_8_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[34]);
        if (tmp_kw_call_arg_value_8_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            Py_DECREF(tmp_kw_call_arg_value_5_1);
            Py_DECREF(tmp_kw_call_arg_value_6_1);
            Py_DECREF(tmp_kw_call_arg_value_7_1);

            exception_lineno = 184;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_kw_call_arg_value_9_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[36]);
        if (tmp_kw_call_arg_value_9_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            Py_DECREF(tmp_kw_call_arg_value_5_1);
            Py_DECREF(tmp_kw_call_arg_value_6_1);
            Py_DECREF(tmp_kw_call_arg_value_7_1);
            Py_DECREF(tmp_kw_call_arg_value_8_1);

            exception_lineno = 184;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5419fe771b2e94c227d2cd406cdb706a->m_frame.f_lineno = 179;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1, tmp_kw_call_arg_value_5_1, tmp_kw_call_arg_value_6_1, tmp_kw_call_arg_value_7_1, tmp_kw_call_arg_value_8_1, tmp_kw_call_arg_value_9_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS10(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_arg_value_2_1);
        Py_DECREF(tmp_kw_call_arg_value_3_1);
        Py_DECREF(tmp_kw_call_arg_value_4_1);
        Py_DECREF(tmp_kw_call_arg_value_5_1);
        Py_DECREF(tmp_kw_call_arg_value_6_1);
        Py_DECREF(tmp_kw_call_arg_value_7_1);
        Py_DECREF(tmp_kw_call_arg_value_8_1);
        Py_DECREF(tmp_kw_call_arg_value_9_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
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
        exception_tb = MAKE_TRACEBACK(frame_5419fe771b2e94c227d2cd406cdb706a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5419fe771b2e94c227d2cd406cdb706a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5419fe771b2e94c227d2cd406cdb706a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5419fe771b2e94c227d2cd406cdb706a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_5419fe771b2e94c227d2cd406cdb706a == cache_frame_5419fe771b2e94c227d2cd406cdb706a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5419fe771b2e94c227d2cd406cdb706a);
        cache_frame_5419fe771b2e94c227d2cd406cdb706a = NULL;
    }

    assertFrameObject(frame_5419fe771b2e94c227d2cd406cdb706a);

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


static PyObject *impl_torch$ao$quantization$fake_quantize$$$function__16__save_to_state_dict(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_destination = python_pars[1];
    PyObject *par_prefix = python_pars[2];
    PyObject *par_keep_vars = python_pars[3];
    struct Nuitka_FrameObject *frame_4d5604033d6dfd6d85b9eec27477452e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_4d5604033d6dfd6d85b9eec27477452e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4d5604033d6dfd6d85b9eec27477452e)) {
        Py_XDECREF(cache_frame_4d5604033d6dfd6d85b9eec27477452e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4d5604033d6dfd6d85b9eec27477452e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4d5604033d6dfd6d85b9eec27477452e = MAKE_FUNCTION_FRAME(codeobj_4d5604033d6dfd6d85b9eec27477452e, module_torch$ao$quantization$fake_quantize, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4d5604033d6dfd6d85b9eec27477452e->m_type_description == NULL);
    frame_4d5604033d6dfd6d85b9eec27477452e = cache_frame_4d5604033d6dfd6d85b9eec27477452e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4d5604033d6dfd6d85b9eec27477452e);
    assert(Py_REFCNT(frame_4d5604033d6dfd6d85b9eec27477452e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER2(moduledict_torch$ao$quantization$fake_quantize, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_destination);
        tmp_args_element_value_1 = par_destination;
        CHECK_OBJECT(par_prefix);
        tmp_args_element_value_2 = par_prefix;
        CHECK_OBJECT(par_keep_vars);
        tmp_args_element_value_3 = par_keep_vars;
        frame_4d5604033d6dfd6d85b9eec27477452e->m_frame.f_lineno = 189;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[58],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[34]);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_destination);
        tmp_ass_subscribed_1 = par_destination;
        CHECK_OBJECT(par_prefix);
        tmp_add_expr_left_1 = par_prefix;
        tmp_add_expr_right_1 = mod_consts[34];
        tmp_ass_subscript_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 190;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[36]);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_destination);
        tmp_ass_subscribed_2 = par_destination;
        CHECK_OBJECT(par_prefix);
        tmp_add_expr_left_2 = par_prefix;
        tmp_add_expr_right_2 = mod_consts[36];
        tmp_ass_subscript_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_ass_subscript_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 191;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4d5604033d6dfd6d85b9eec27477452e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4d5604033d6dfd6d85b9eec27477452e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4d5604033d6dfd6d85b9eec27477452e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4d5604033d6dfd6d85b9eec27477452e,
        type_description_1,
        par_self,
        par_destination,
        par_prefix,
        par_keep_vars,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_4d5604033d6dfd6d85b9eec27477452e == cache_frame_4d5604033d6dfd6d85b9eec27477452e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4d5604033d6dfd6d85b9eec27477452e);
        cache_frame_4d5604033d6dfd6d85b9eec27477452e = NULL;
    }

    assertFrameObject(frame_4d5604033d6dfd6d85b9eec27477452e);

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
    CHECK_OBJECT(par_destination);
    Py_DECREF(par_destination);
    CHECK_OBJECT(par_prefix);
    Py_DECREF(par_prefix);
    CHECK_OBJECT(par_keep_vars);
    Py_DECREF(par_keep_vars);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_destination);
    Py_DECREF(par_destination);
    CHECK_OBJECT(par_prefix);
    Py_DECREF(par_prefix);
    CHECK_OBJECT(par_keep_vars);
    Py_DECREF(par_keep_vars);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$fake_quantize$$$function__17__load_from_state_dict(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
    PyObject *var_local_state = NULL;
    PyObject *var_name = NULL;
    PyObject *var_key = NULL;
    PyObject *var_val = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_bcfe0c70f52abdd29b0c7e3c61b61012;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_bcfe0c70f52abdd29b0c7e3c61b61012 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST2(mod_consts[34],mod_consts[36]);
        assert(var_local_state == NULL);
        var_local_state = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_bcfe0c70f52abdd29b0c7e3c61b61012)) {
        Py_XDECREF(cache_frame_bcfe0c70f52abdd29b0c7e3c61b61012);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bcfe0c70f52abdd29b0c7e3c61b61012 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bcfe0c70f52abdd29b0c7e3c61b61012 = MAKE_FUNCTION_FRAME(codeobj_bcfe0c70f52abdd29b0c7e3c61b61012, module_torch$ao$quantization$fake_quantize, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bcfe0c70f52abdd29b0c7e3c61b61012->m_type_description == NULL);
    frame_bcfe0c70f52abdd29b0c7e3c61b61012 = cache_frame_bcfe0c70f52abdd29b0c7e3c61b61012;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bcfe0c70f52abdd29b0c7e3c61b61012);
    assert(Py_REFCNT(frame_bcfe0c70f52abdd29b0c7e3c61b61012) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_local_state);
        tmp_iter_arg_1 = var_local_state;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooooooooN";
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
                type_description_1 = "ooooooooooooN";
                exception_lineno = 198;
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
            PyObject *old = var_name;
            var_name = tmp_assign_source_4;
            Py_INCREF(var_name);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        if (par_prefix == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 199;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }

        tmp_add_expr_left_1 = par_prefix;
        CHECK_OBJECT(var_name);
        tmp_add_expr_right_1 = var_name;
        tmp_assign_source_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_key;
            var_key = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_key);
        tmp_cmp_expr_left_1 = var_key;
        CHECK_OBJECT(par_state_dict);
        tmp_cmp_expr_right_1 = par_state_dict;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooooooooN";
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
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_state_dict);
        tmp_expression_value_1 = par_state_dict;
        CHECK_OBJECT(var_key);
        tmp_subscript_value_1 = var_key;
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_val;
            var_val = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_name);
        tmp_cmp_expr_left_2 = var_name;
        tmp_cmp_expr_right_2 = mod_consts[34];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 207;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[34]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[50]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_val);
        tmp_expression_value_4 = var_val;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[49]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 207;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        frame_bcfe0c70f52abdd29b0c7e3c61b61012->m_frame.f_lineno = 207;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_name);
        tmp_cmp_expr_left_3 = var_name;
        tmp_cmp_expr_right_3 = mod_consts[36];
        tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
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
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 209;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooN";
        goto try_except_handler_2;
    }
    branch_no_3:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_7;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 210;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }

        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[36]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[50]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_val);
        tmp_expression_value_7 = var_val;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[49]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 210;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        frame_bcfe0c70f52abdd29b0c7e3c61b61012->m_frame.f_lineno = 210;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_end_2:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_3;
        int tmp_truth_name_1;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[61]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        frame_bcfe0c70f52abdd29b0c7e3c61b61012->m_frame.f_lineno = 213;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[62]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 213;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_name);
        tmp_cmp_expr_left_4 = var_name;
        tmp_cmp_expr_right_4 = mod_consts[34];
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 215;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }

        tmp_expression_value_10 = par_self;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[34]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[51]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        if (var_val == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 215;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }

        tmp_args_element_value_3 = var_val;
        frame_bcfe0c70f52abdd29b0c7e3c61b61012->m_frame.f_lineno = 215;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_5;
    branch_no_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_name);
        tmp_cmp_expr_left_5 = var_name;
        tmp_cmp_expr_right_5 = mod_consts[36];
        tmp_operand_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_2;
        tmp_raise_type_2 = PyExc_AssertionError;
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_lineno = 217;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooN";
        goto try_except_handler_2;
    }
    branch_no_6:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 218;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }

        tmp_expression_value_12 = par_self;
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[36]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[51]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        if (var_val == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 218;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }

        tmp_args_element_value_4 = var_val;
        frame_bcfe0c70f52abdd29b0c7e3c61b61012->m_frame.f_lineno = 218;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_end_5:;
    branch_no_4:;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_strict);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_strict);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_5;
        if (par_missing_keys == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 220;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }

        tmp_expression_value_13 = par_missing_keys;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[65]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_key);
        tmp_args_element_value_5 = var_key;
        frame_bcfe0c70f52abdd29b0c7e3c61b61012->m_frame.f_lineno = 220;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooooooooooN";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_7:;
    branch_end_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 198;
        type_description_1 = "ooooooooooooN";
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
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 221;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_14 = BUILTIN_SUPER2(moduledict_torch$ao$quantization$fake_quantize, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[66]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state_dict);
        tmp_args_element_value_6 = par_state_dict;
        if (par_prefix == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 221;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_7 = par_prefix;
        CHECK_OBJECT(par_local_metadata);
        tmp_args_element_value_8 = par_local_metadata;
        CHECK_OBJECT(par_strict);
        tmp_args_element_value_9 = par_strict;
        if (par_missing_keys == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 222;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_10 = par_missing_keys;
        CHECK_OBJECT(par_unexpected_keys);
        tmp_args_element_value_11 = par_unexpected_keys;
        CHECK_OBJECT(par_error_msgs);
        tmp_args_element_value_12 = par_error_msgs;
        frame_bcfe0c70f52abdd29b0c7e3c61b61012->m_frame.f_lineno = 221;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bcfe0c70f52abdd29b0c7e3c61b61012, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bcfe0c70f52abdd29b0c7e3c61b61012->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bcfe0c70f52abdd29b0c7e3c61b61012, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bcfe0c70f52abdd29b0c7e3c61b61012,
        type_description_1,
        par_self,
        par_state_dict,
        par_prefix,
        par_local_metadata,
        par_strict,
        par_missing_keys,
        par_unexpected_keys,
        par_error_msgs,
        var_local_state,
        var_name,
        var_key,
        var_val,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_bcfe0c70f52abdd29b0c7e3c61b61012 == cache_frame_bcfe0c70f52abdd29b0c7e3c61b61012) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bcfe0c70f52abdd29b0c7e3c61b61012);
        cache_frame_bcfe0c70f52abdd29b0c7e3c61b61012 = NULL;
    }

    assertFrameObject(frame_bcfe0c70f52abdd29b0c7e3c61b61012);

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
    CHECK_OBJECT(var_local_state);
    Py_DECREF(var_local_state);
    var_local_state = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_val);
    var_val = NULL;
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

    CHECK_OBJECT(var_local_state);
    Py_DECREF(var_local_state);
    var_local_state = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_val);
    var_val = NULL;
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


static PyObject *impl_torch$ao$quantization$fake_quantize$$$function__18___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_observer = python_pars[1];
    struct Nuitka_FrameObject *frame_33a18918974d9a7146f4761b48d3c3a7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_33a18918974d9a7146f4761b48d3c3a7 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_33a18918974d9a7146f4761b48d3c3a7)) {
        Py_XDECREF(cache_frame_33a18918974d9a7146f4761b48d3c3a7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_33a18918974d9a7146f4761b48d3c3a7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_33a18918974d9a7146f4761b48d3c3a7 = MAKE_FUNCTION_FRAME(codeobj_33a18918974d9a7146f4761b48d3c3a7, module_torch$ao$quantization$fake_quantize, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_33a18918974d9a7146f4761b48d3c3a7->m_type_description == NULL);
    frame_33a18918974d9a7146f4761b48d3c3a7 = cache_frame_33a18918974d9a7146f4761b48d3c3a7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_33a18918974d9a7146f4761b48d3c3a7);
    assert(Py_REFCNT(frame_33a18918974d9a7146f4761b48d3c3a7) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 232;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(moduledict_torch$ao$quantization$fake_quantize, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_observer);
        tmp_kw_call_value_0_1 = par_observer;
        frame_33a18918974d9a7146f4761b48d3c3a7->m_frame.f_lineno = 232;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[67]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_type_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[23]);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 233;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooc";
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
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_mod_expr_left_1 = mod_consts[69];
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_4);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[70]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[68]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_1 = "ooc";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[70]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_1 = "ooc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_tuple_element_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_raise_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_raise_value_1, 0, tmp_tuple_element_1);
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 233;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooc";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_observer);
        tmp_assattr_value_1 = par_observer;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[71], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[23]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[21]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[21], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[23]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[22]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[22], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[23]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[34]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[34], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[23]);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[36]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[36], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_14;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[31]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_33a18918974d9a7146f4761b48d3c3a7->m_frame.f_lineno = 240;
        tmp_operand_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooc";
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
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_expression_value_15;
        tmp_raise_type_2 = PyExc_AssertionError;
        tmp_add_expr_left_1 = mod_consts[72];
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[31]);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_raise_value_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_raise_value_2, 0, tmp_tuple_element_3);
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 240;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooc";
        goto frame_exception_exit_1;
    }
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_33a18918974d9a7146f4761b48d3c3a7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_33a18918974d9a7146f4761b48d3c3a7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_33a18918974d9a7146f4761b48d3c3a7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_33a18918974d9a7146f4761b48d3c3a7,
        type_description_1,
        par_self,
        par_observer,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_33a18918974d9a7146f4761b48d3c3a7 == cache_frame_33a18918974d9a7146f4761b48d3c3a7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_33a18918974d9a7146f4761b48d3c3a7);
        cache_frame_33a18918974d9a7146f4761b48d3c3a7 = NULL;
    }

    assertFrameObject(frame_33a18918974d9a7146f4761b48d3c3a7);

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
    CHECK_OBJECT(par_observer);
    Py_DECREF(par_observer);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_observer);
    Py_DECREF(par_observer);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$fake_quantize$$$function__19_calculate_qparams(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b3e6268f888b35ee3d3375c1c8c1b81e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b3e6268f888b35ee3d3375c1c8c1b81e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b3e6268f888b35ee3d3375c1c8c1b81e)) {
        Py_XDECREF(cache_frame_b3e6268f888b35ee3d3375c1c8c1b81e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b3e6268f888b35ee3d3375c1c8c1b81e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b3e6268f888b35ee3d3375c1c8c1b81e = MAKE_FUNCTION_FRAME(codeobj_b3e6268f888b35ee3d3375c1c8c1b81e, module_torch$ao$quantization$fake_quantize, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b3e6268f888b35ee3d3375c1c8c1b81e->m_type_description == NULL);
    frame_b3e6268f888b35ee3d3375c1c8c1b81e = cache_frame_b3e6268f888b35ee3d3375c1c8c1b81e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b3e6268f888b35ee3d3375c1c8c1b81e);
    assert(Py_REFCNT(frame_b3e6268f888b35ee3d3375c1c8c1b81e) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[34]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_2;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[36]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_b3e6268f888b35ee3d3375c1c8c1b81e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b3e6268f888b35ee3d3375c1c8c1b81e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b3e6268f888b35ee3d3375c1c8c1b81e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b3e6268f888b35ee3d3375c1c8c1b81e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b3e6268f888b35ee3d3375c1c8c1b81e == cache_frame_b3e6268f888b35ee3d3375c1c8c1b81e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b3e6268f888b35ee3d3375c1c8c1b81e);
        cache_frame_b3e6268f888b35ee3d3375c1c8c1b81e = NULL;
    }

    assertFrameObject(frame_b3e6268f888b35ee3d3375c1c8c1b81e);

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


static PyObject *impl_torch$ao$quantization$fake_quantize$$$function__20_extra_repr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a0f1932043fd8bc1c236ead6e868b01d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a0f1932043fd8bc1c236ead6e868b01d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a0f1932043fd8bc1c236ead6e868b01d)) {
        Py_XDECREF(cache_frame_a0f1932043fd8bc1c236ead6e868b01d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a0f1932043fd8bc1c236ead6e868b01d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a0f1932043fd8bc1c236ead6e868b01d = MAKE_FUNCTION_FRAME(codeobj_a0f1932043fd8bc1c236ead6e868b01d, module_torch$ao$quantization$fake_quantize, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a0f1932043fd8bc1c236ead6e868b01d->m_type_description == NULL);
    frame_a0f1932043fd8bc1c236ead6e868b01d = cache_frame_a0f1932043fd8bc1c236ead6e868b01d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a0f1932043fd8bc1c236ead6e868b01d);
    assert(Py_REFCNT(frame_a0f1932043fd8bc1c236ead6e868b01d) == 2);

    // Framed code:
    {
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_arg_value_5_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_arg_value_6_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_arg_value_7_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_arg_value_8_1;
        PyObject *tmp_expression_value_8;
        tmp_kw_call_arg_value_0_1 = mod_consts[73];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 251;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_kw_call_arg_value_3_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[34]);
        if (tmp_kw_call_arg_value_3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);

            exception_lineno = 252;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_kw_call_arg_value_4_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[36]);
        if (tmp_kw_call_arg_value_4_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);

            exception_lineno = 252;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_kw_call_arg_value_5_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[25]);
        if (tmp_kw_call_arg_value_5_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);

            exception_lineno = 252;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_kw_call_arg_value_6_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[21]);
        if (tmp_kw_call_arg_value_6_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            Py_DECREF(tmp_kw_call_arg_value_5_1);

            exception_lineno = 253;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_kw_call_arg_value_7_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[22]);
        if (tmp_kw_call_arg_value_7_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            Py_DECREF(tmp_kw_call_arg_value_5_1);
            Py_DECREF(tmp_kw_call_arg_value_6_1);

            exception_lineno = 253;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_kw_call_arg_value_8_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[31]);
        if (tmp_kw_call_arg_value_8_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            Py_DECREF(tmp_kw_call_arg_value_5_1);
            Py_DECREF(tmp_kw_call_arg_value_6_1);
            Py_DECREF(tmp_kw_call_arg_value_7_1);

            exception_lineno = 253;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a0f1932043fd8bc1c236ead6e868b01d->m_frame.f_lineno = 249;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1, tmp_kw_call_arg_value_5_1, tmp_kw_call_arg_value_6_1, tmp_kw_call_arg_value_7_1, tmp_kw_call_arg_value_8_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS9(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_arg_value_2_1);
        Py_DECREF(tmp_kw_call_arg_value_3_1);
        Py_DECREF(tmp_kw_call_arg_value_4_1);
        Py_DECREF(tmp_kw_call_arg_value_5_1);
        Py_DECREF(tmp_kw_call_arg_value_6_1);
        Py_DECREF(tmp_kw_call_arg_value_7_1);
        Py_DECREF(tmp_kw_call_arg_value_8_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
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
        exception_tb = MAKE_TRACEBACK(frame_a0f1932043fd8bc1c236ead6e868b01d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a0f1932043fd8bc1c236ead6e868b01d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a0f1932043fd8bc1c236ead6e868b01d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a0f1932043fd8bc1c236ead6e868b01d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a0f1932043fd8bc1c236ead6e868b01d == cache_frame_a0f1932043fd8bc1c236ead6e868b01d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a0f1932043fd8bc1c236ead6e868b01d);
        cache_frame_a0f1932043fd8bc1c236ead6e868b01d = NULL;
    }

    assertFrameObject(frame_a0f1932043fd8bc1c236ead6e868b01d);

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


static PyObject *impl_torch$ao$quantization$fake_quantize$$$function__21___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_observer = python_pars[1];
    PyObject *par_quant_min = python_pars[2];
    PyObject *par_quant_max = python_pars[3];
    PyObject *par_observer_kwargs = python_pars[4];
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_2ed70925d477776a1c13073376420504;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
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
    static struct Nuitka_FrameObject *cache_frame_2ed70925d477776a1c13073376420504 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2ed70925d477776a1c13073376420504)) {
        Py_XDECREF(cache_frame_2ed70925d477776a1c13073376420504);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2ed70925d477776a1c13073376420504 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2ed70925d477776a1c13073376420504 = MAKE_FUNCTION_FRAME(codeobj_2ed70925d477776a1c13073376420504, module_torch$ao$quantization$fake_quantize, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2ed70925d477776a1c13073376420504->m_type_description == NULL);
    frame_2ed70925d477776a1c13073376420504 = cache_frame_2ed70925d477776a1c13073376420504;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2ed70925d477776a1c13073376420504);
    assert(Py_REFCNT(frame_2ed70925d477776a1c13073376420504) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 279;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(moduledict_torch$ao$quantization$fake_quantize, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_observer);
        tmp_tuple_element_1 = par_observer;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_quant_min);
        tmp_tuple_element_1 = par_quant_min;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_quant_max);
        tmp_tuple_element_1 = par_quant_max;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_observer_kwargs);
        tmp_dircall_arg3_1 = par_observer_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[23]);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            exception_lineno = 280;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooooc";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 1, tmp_tuple_element_2);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_isinstance_inst_1);
        Py_DECREF(tmp_isinstance_cls_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooooc";
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
        tmp_raise_value_1 = mod_consts[76];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 280;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_quant_min);
        tmp_assattr_value_1 = par_quant_min;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[21], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_quant_max);
        tmp_assattr_value_2 = par_quant_max;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[22], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_posargs_values_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[8]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[9];
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 284;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[10]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 284;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 284;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[77]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 284;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_call_posargs_values_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[12], "l");
        frame_2ed70925d477776a1c13073376420504->m_frame.f_lineno = 284;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_2, tmp_call_posargs_values_1, kw_values, mod_consts[13]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_call_posargs_values_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 284;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        frame_2ed70925d477776a1c13073376420504->m_frame.f_lineno = 284;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_posargs_values_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[8]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[14];
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 285;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[10]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 285;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 285;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[77]);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 285;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_call_posargs_values_2 = DEEP_COPY_TUPLE_GUIDED(mod_consts[12], "l");
        frame_2ed70925d477776a1c13073376420504->m_frame.f_lineno = 285;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_4, tmp_call_posargs_values_2, kw_values, mod_consts[13]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_call_posargs_values_2);
        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 285;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        frame_2ed70925d477776a1c13073376420504->m_frame.f_lineno = 285;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_assattr_target_3;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[23]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[31]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        frame_2ed70925d477776a1c13073376420504->m_frame.f_lineno = 286;
        tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[79], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[23]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooc";
            goto try_except_handler_1;
        }
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[21]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooc";
            goto try_except_handler_1;
        }
        tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_13;
            PyObject *tmp_expression_value_14;
            PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(par_self);
            tmp_expression_value_14 = par_self;
            tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[23]);
            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;
                type_description_1 = "oooooc";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[22]);
            Py_DECREF(tmp_expression_value_13);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;
                type_description_1 = "oooooc";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_iter_arg_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_1 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        assert(!(tmp_assign_source_1 == NULL));
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


            type_description_1 = "oooooc";
            exception_lineno = 288;
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


            type_description_1 = "oooooc";
            exception_lineno = 288;
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

                    type_description_1 = "oooooc";
                    exception_lineno = 288;
                    goto try_except_handler_2;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[46];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooc";
            exception_lineno = 288;
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
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assattr_value_4 = tmp_tuple_unpack_1__element_1;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[21], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooc";
            goto try_except_handler_1;
        }
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assattr_value_5 = tmp_tuple_unpack_1__element_2;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[22], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooc";
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2ed70925d477776a1c13073376420504, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2ed70925d477776a1c13073376420504->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2ed70925d477776a1c13073376420504, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2ed70925d477776a1c13073376420504,
        type_description_1,
        par_self,
        par_observer,
        par_quant_min,
        par_quant_max,
        par_observer_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_2ed70925d477776a1c13073376420504 == cache_frame_2ed70925d477776a1c13073376420504) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2ed70925d477776a1c13073376420504);
        cache_frame_2ed70925d477776a1c13073376420504 = NULL;
    }

    assertFrameObject(frame_2ed70925d477776a1c13073376420504);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_observer);
    Py_DECREF(par_observer);
    CHECK_OBJECT(par_quant_min);
    Py_DECREF(par_quant_min);
    CHECK_OBJECT(par_quant_max);
    Py_DECREF(par_quant_max);
    CHECK_OBJECT(par_observer_kwargs);
    Py_DECREF(par_observer_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_observer);
    Py_DECREF(par_observer);
    CHECK_OBJECT(par_quant_min);
    Py_DECREF(par_quant_min);
    CHECK_OBJECT(par_quant_max);
    Py_DECREF(par_quant_max);
    CHECK_OBJECT(par_observer_kwargs);
    Py_DECREF(par_observer_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$fake_quantize$$$function__22_calculate_qparams(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ad9cb3dab0dd5a208c951e7319bf559e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ad9cb3dab0dd5a208c951e7319bf559e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ad9cb3dab0dd5a208c951e7319bf559e)) {
        Py_XDECREF(cache_frame_ad9cb3dab0dd5a208c951e7319bf559e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ad9cb3dab0dd5a208c951e7319bf559e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ad9cb3dab0dd5a208c951e7319bf559e = MAKE_FUNCTION_FRAME(codeobj_ad9cb3dab0dd5a208c951e7319bf559e, module_torch$ao$quantization$fake_quantize, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ad9cb3dab0dd5a208c951e7319bf559e->m_type_description == NULL);
    frame_ad9cb3dab0dd5a208c951e7319bf559e = cache_frame_ad9cb3dab0dd5a208c951e7319bf559e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ad9cb3dab0dd5a208c951e7319bf559e);
    assert(Py_REFCNT(frame_ad9cb3dab0dd5a208c951e7319bf559e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ad9cb3dab0dd5a208c951e7319bf559e->m_frame.f_lineno = 292;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[44]);
        Py_DECREF(tmp_called_instance_1);
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
        exception_tb = MAKE_TRACEBACK(frame_ad9cb3dab0dd5a208c951e7319bf559e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ad9cb3dab0dd5a208c951e7319bf559e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ad9cb3dab0dd5a208c951e7319bf559e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ad9cb3dab0dd5a208c951e7319bf559e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ad9cb3dab0dd5a208c951e7319bf559e == cache_frame_ad9cb3dab0dd5a208c951e7319bf559e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ad9cb3dab0dd5a208c951e7319bf559e);
        cache_frame_ad9cb3dab0dd5a208c951e7319bf559e = NULL;
    }

    assertFrameObject(frame_ad9cb3dab0dd5a208c951e7319bf559e);

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


static PyObject *impl_torch$ao$quantization$fake_quantize$$$function__23_extra_repr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7a9a4442b2a8d8f0b8846642898a1a2c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7a9a4442b2a8d8f0b8846642898a1a2c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7a9a4442b2a8d8f0b8846642898a1a2c)) {
        Py_XDECREF(cache_frame_7a9a4442b2a8d8f0b8846642898a1a2c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7a9a4442b2a8d8f0b8846642898a1a2c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7a9a4442b2a8d8f0b8846642898a1a2c = MAKE_FUNCTION_FRAME(codeobj_7a9a4442b2a8d8f0b8846642898a1a2c, module_torch$ao$quantization$fake_quantize, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7a9a4442b2a8d8f0b8846642898a1a2c->m_type_description == NULL);
    frame_7a9a4442b2a8d8f0b8846642898a1a2c = cache_frame_7a9a4442b2a8d8f0b8846642898a1a2c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7a9a4442b2a8d8f0b8846642898a1a2c);
    assert(Py_REFCNT(frame_7a9a4442b2a8d8f0b8846642898a1a2c) == 2);

    // Framed code:
    {
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_arg_value_5_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_arg_value_6_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_arg_value_7_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_arg_value_8_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_arg_value_9_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        tmp_kw_call_arg_value_0_1 = mod_consts[80];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 300;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_kw_call_arg_value_3_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[34]);
        if (tmp_kw_call_arg_value_3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);

            exception_lineno = 301;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_kw_call_arg_value_4_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[36]);
        if (tmp_kw_call_arg_value_4_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);

            exception_lineno = 302;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_kw_call_arg_value_5_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[25]);
        if (tmp_kw_call_arg_value_5_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);

            exception_lineno = 303;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_kw_call_arg_value_6_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[21]);
        if (tmp_kw_call_arg_value_6_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            Py_DECREF(tmp_kw_call_arg_value_5_1);

            exception_lineno = 304;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_kw_call_arg_value_7_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[22]);
        if (tmp_kw_call_arg_value_7_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            Py_DECREF(tmp_kw_call_arg_value_5_1);
            Py_DECREF(tmp_kw_call_arg_value_6_1);

            exception_lineno = 305;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_kw_call_arg_value_8_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[31]);
        if (tmp_kw_call_arg_value_8_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            Py_DECREF(tmp_kw_call_arg_value_5_1);
            Py_DECREF(tmp_kw_call_arg_value_6_1);
            Py_DECREF(tmp_kw_call_arg_value_7_1);

            exception_lineno = 306;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[23]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            Py_DECREF(tmp_kw_call_arg_value_5_1);
            Py_DECREF(tmp_kw_call_arg_value_6_1);
            Py_DECREF(tmp_kw_call_arg_value_7_1);
            Py_DECREF(tmp_kw_call_arg_value_8_1);

            exception_lineno = 307;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_9_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[81]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_kw_call_arg_value_9_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            Py_DECREF(tmp_kw_call_arg_value_5_1);
            Py_DECREF(tmp_kw_call_arg_value_6_1);
            Py_DECREF(tmp_kw_call_arg_value_7_1);
            Py_DECREF(tmp_kw_call_arg_value_8_1);

            exception_lineno = 307;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7a9a4442b2a8d8f0b8846642898a1a2c->m_frame.f_lineno = 297;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1, tmp_kw_call_arg_value_5_1, tmp_kw_call_arg_value_6_1, tmp_kw_call_arg_value_7_1, tmp_kw_call_arg_value_8_1, tmp_kw_call_arg_value_9_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS10(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_arg_value_2_1);
        Py_DECREF(tmp_kw_call_arg_value_3_1);
        Py_DECREF(tmp_kw_call_arg_value_4_1);
        Py_DECREF(tmp_kw_call_arg_value_5_1);
        Py_DECREF(tmp_kw_call_arg_value_6_1);
        Py_DECREF(tmp_kw_call_arg_value_7_1);
        Py_DECREF(tmp_kw_call_arg_value_8_1);
        Py_DECREF(tmp_kw_call_arg_value_9_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
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
        exception_tb = MAKE_TRACEBACK(frame_7a9a4442b2a8d8f0b8846642898a1a2c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7a9a4442b2a8d8f0b8846642898a1a2c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7a9a4442b2a8d8f0b8846642898a1a2c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7a9a4442b2a8d8f0b8846642898a1a2c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7a9a4442b2a8d8f0b8846642898a1a2c == cache_frame_7a9a4442b2a8d8f0b8846642898a1a2c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7a9a4442b2a8d8f0b8846642898a1a2c);
        cache_frame_7a9a4442b2a8d8f0b8846642898a1a2c = NULL;
    }

    assertFrameObject(frame_7a9a4442b2a8d8f0b8846642898a1a2c);

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


static PyObject *impl_torch$ao$quantization$fake_quantize$$$function__24_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_X = python_pars[1];
    struct Nuitka_FrameObject *frame_f2d21e9205f8d781e03b3b04009f7e42;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f2d21e9205f8d781e03b3b04009f7e42 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f2d21e9205f8d781e03b3b04009f7e42)) {
        Py_XDECREF(cache_frame_f2d21e9205f8d781e03b3b04009f7e42);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f2d21e9205f8d781e03b3b04009f7e42 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f2d21e9205f8d781e03b3b04009f7e42 = MAKE_FUNCTION_FRAME(codeobj_f2d21e9205f8d781e03b3b04009f7e42, module_torch$ao$quantization$fake_quantize, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f2d21e9205f8d781e03b3b04009f7e42->m_type_description == NULL);
    frame_f2d21e9205f8d781e03b3b04009f7e42 = cache_frame_f2d21e9205f8d781e03b3b04009f7e42;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f2d21e9205f8d781e03b3b04009f7e42);
    assert(Py_REFCNT(frame_f2d21e9205f8d781e03b3b04009f7e42) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_16;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[82]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_X);
        tmp_args_element_value_1 = par_X;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 314;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[9]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 315;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[23]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 316;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[83]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 316;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[23]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 317;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[84]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 317;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[34]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 318;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[36]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 319;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[23]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 320;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[85]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 320;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[21]);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);

            exception_lineno = 321;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[22]);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 322;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[38]);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);

            exception_lineno = 323;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[43]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 324;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[79]);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);

            exception_lineno = 325;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f2d21e9205f8d781e03b3b04009f7e42->m_frame.f_lineno = 312;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS13(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_13);
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f2d21e9205f8d781e03b3b04009f7e42, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f2d21e9205f8d781e03b3b04009f7e42->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f2d21e9205f8d781e03b3b04009f7e42, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f2d21e9205f8d781e03b3b04009f7e42,
        type_description_1,
        par_self,
        par_X
    );


    // Release cached frame if used for exception.
    if (frame_f2d21e9205f8d781e03b3b04009f7e42 == cache_frame_f2d21e9205f8d781e03b3b04009f7e42) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f2d21e9205f8d781e03b3b04009f7e42);
        cache_frame_f2d21e9205f8d781e03b3b04009f7e42 = NULL;
    }

    assertFrameObject(frame_f2d21e9205f8d781e03b3b04009f7e42);

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
    CHECK_OBJECT(par_X);
    Py_DECREF(par_X);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_X);
    Py_DECREF(par_X);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$fake_quantize$$$function__25__is_fake_quant_script_module(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mod = python_pars[0];
    PyObject *var_suffix = NULL;
    PyObject *var_name = NULL;
    struct Nuitka_FrameObject *frame_7bce817f5fc8e74587f1d7d4ffd9d696;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7bce817f5fc8e74587f1d7d4ffd9d696 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7bce817f5fc8e74587f1d7d4ffd9d696)) {
        Py_XDECREF(cache_frame_7bce817f5fc8e74587f1d7d4ffd9d696);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7bce817f5fc8e74587f1d7d4ffd9d696 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7bce817f5fc8e74587f1d7d4ffd9d696 = MAKE_FUNCTION_FRAME(codeobj_7bce817f5fc8e74587f1d7d4ffd9d696, module_torch$ao$quantization$fake_quantize, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7bce817f5fc8e74587f1d7d4ffd9d696->m_type_description == NULL);
    frame_7bce817f5fc8e74587f1d7d4ffd9d696 = cache_frame_7bce817f5fc8e74587f1d7d4ffd9d696;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7bce817f5fc8e74587f1d7d4ffd9d696);
    assert(Py_REFCNT(frame_7bce817f5fc8e74587f1d7d4ffd9d696) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_mod);
        tmp_isinstance_inst_1 = par_mod;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[61]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[86]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_mod);
        tmp_expression_value_6 = par_mod;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[87]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[88]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[89]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_7bce817f5fc8e74587f1d7d4ffd9d696->m_frame.f_lineno = 419;
        tmp_expression_value_3 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[90]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[15];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 1);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_suffix == NULL);
        var_suffix = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[93];
        tmp_args_element_value_2 = mod_consts[94];
        CHECK_OBJECT(var_suffix);
        tmp_args_element_value_3 = var_suffix;
        frame_7bce817f5fc8e74587f1d7d4ffd9d696->m_frame.f_lineno = 420;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[92],
                call_args
            );
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_name == NULL);
        var_name = tmp_assign_source_2;
    }
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_name);
        tmp_cmp_expr_left_1 = var_name;
        tmp_cmp_expr_right_1 = mod_consts[95];
        tmp_or_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 421;
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
        CHECK_OBJECT(var_name);
        tmp_cmp_expr_left_2 = var_name;
        tmp_cmp_expr_right_2 = mod_consts[96];
        tmp_or_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
        goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_7bce817f5fc8e74587f1d7d4ffd9d696, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7bce817f5fc8e74587f1d7d4ffd9d696->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7bce817f5fc8e74587f1d7d4ffd9d696, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7bce817f5fc8e74587f1d7d4ffd9d696,
        type_description_1,
        par_mod,
        var_suffix,
        var_name
    );


    // Release cached frame if used for exception.
    if (frame_7bce817f5fc8e74587f1d7d4ffd9d696 == cache_frame_7bce817f5fc8e74587f1d7d4ffd9d696) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7bce817f5fc8e74587f1d7d4ffd9d696);
        cache_frame_7bce817f5fc8e74587f1d7d4ffd9d696 = NULL;
    }

    assertFrameObject(frame_7bce817f5fc8e74587f1d7d4ffd9d696);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_suffix);
    var_suffix = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
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

    Py_XDECREF(var_suffix);
    var_suffix = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
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


static PyObject *impl_torch$ao$quantization$fake_quantize$$$function__26_disable_fake_quant(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mod = python_pars[0];
    struct Nuitka_FrameObject *frame_45ff0906a6b06600289232f5b453af9e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_45ff0906a6b06600289232f5b453af9e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_45ff0906a6b06600289232f5b453af9e)) {
        Py_XDECREF(cache_frame_45ff0906a6b06600289232f5b453af9e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_45ff0906a6b06600289232f5b453af9e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_45ff0906a6b06600289232f5b453af9e = MAKE_FUNCTION_FRAME(codeobj_45ff0906a6b06600289232f5b453af9e, module_torch$ao$quantization$fake_quantize, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_45ff0906a6b06600289232f5b453af9e->m_type_description == NULL);
    frame_45ff0906a6b06600289232f5b453af9e = cache_frame_45ff0906a6b06600289232f5b453af9e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_45ff0906a6b06600289232f5b453af9e);
    assert(Py_REFCNT(frame_45ff0906a6b06600289232f5b453af9e) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_mod);
        tmp_isinstance_inst_1 = par_mod;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_mod);
        tmp_args_element_value_1 = par_mod;
        frame_45ff0906a6b06600289232f5b453af9e->m_frame.f_lineno = 433;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 433;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        if (par_mod == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 434;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_mod;
        frame_45ff0906a6b06600289232f5b453af9e->m_frame.f_lineno = 434;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[101]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_45ff0906a6b06600289232f5b453af9e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_45ff0906a6b06600289232f5b453af9e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_45ff0906a6b06600289232f5b453af9e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_45ff0906a6b06600289232f5b453af9e,
        type_description_1,
        par_mod
    );


    // Release cached frame if used for exception.
    if (frame_45ff0906a6b06600289232f5b453af9e == cache_frame_45ff0906a6b06600289232f5b453af9e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_45ff0906a6b06600289232f5b453af9e);
        cache_frame_45ff0906a6b06600289232f5b453af9e = NULL;
    }

    assertFrameObject(frame_45ff0906a6b06600289232f5b453af9e);

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


static PyObject *impl_torch$ao$quantization$fake_quantize$$$function__27_enable_fake_quant(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mod = python_pars[0];
    struct Nuitka_FrameObject *frame_3d7d082ed752e4e9f921da6ac866a4a9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_3d7d082ed752e4e9f921da6ac866a4a9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3d7d082ed752e4e9f921da6ac866a4a9)) {
        Py_XDECREF(cache_frame_3d7d082ed752e4e9f921da6ac866a4a9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3d7d082ed752e4e9f921da6ac866a4a9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3d7d082ed752e4e9f921da6ac866a4a9 = MAKE_FUNCTION_FRAME(codeobj_3d7d082ed752e4e9f921da6ac866a4a9, module_torch$ao$quantization$fake_quantize, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3d7d082ed752e4e9f921da6ac866a4a9->m_type_description == NULL);
    frame_3d7d082ed752e4e9f921da6ac866a4a9 = cache_frame_3d7d082ed752e4e9f921da6ac866a4a9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3d7d082ed752e4e9f921da6ac866a4a9);
    assert(Py_REFCNT(frame_3d7d082ed752e4e9f921da6ac866a4a9) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_mod);
        tmp_isinstance_inst_1 = par_mod;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_mod);
        tmp_args_element_value_1 = par_mod;
        frame_3d7d082ed752e4e9f921da6ac866a4a9->m_frame.f_lineno = 444;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 444;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        if (par_mod == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 445;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_mod;
        frame_3d7d082ed752e4e9f921da6ac866a4a9->m_frame.f_lineno = 445;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[17]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_3d7d082ed752e4e9f921da6ac866a4a9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3d7d082ed752e4e9f921da6ac866a4a9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3d7d082ed752e4e9f921da6ac866a4a9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3d7d082ed752e4e9f921da6ac866a4a9,
        type_description_1,
        par_mod
    );


    // Release cached frame if used for exception.
    if (frame_3d7d082ed752e4e9f921da6ac866a4a9 == cache_frame_3d7d082ed752e4e9f921da6ac866a4a9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3d7d082ed752e4e9f921da6ac866a4a9);
        cache_frame_3d7d082ed752e4e9f921da6ac866a4a9 = NULL;
    }

    assertFrameObject(frame_3d7d082ed752e4e9f921da6ac866a4a9);

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


static PyObject *impl_torch$ao$quantization$fake_quantize$$$function__28_disable_observer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mod = python_pars[0];
    struct Nuitka_FrameObject *frame_4e95690782beb7861f97ecb678f837b8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_4e95690782beb7861f97ecb678f837b8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4e95690782beb7861f97ecb678f837b8)) {
        Py_XDECREF(cache_frame_4e95690782beb7861f97ecb678f837b8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4e95690782beb7861f97ecb678f837b8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4e95690782beb7861f97ecb678f837b8 = MAKE_FUNCTION_FRAME(codeobj_4e95690782beb7861f97ecb678f837b8, module_torch$ao$quantization$fake_quantize, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4e95690782beb7861f97ecb678f837b8->m_type_description == NULL);
    frame_4e95690782beb7861f97ecb678f837b8 = cache_frame_4e95690782beb7861f97ecb678f837b8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4e95690782beb7861f97ecb678f837b8);
    assert(Py_REFCNT(frame_4e95690782beb7861f97ecb678f837b8) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_mod);
        tmp_isinstance_inst_1 = par_mod;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_mod);
        tmp_args_element_value_1 = par_mod;
        frame_4e95690782beb7861f97ecb678f837b8->m_frame.f_lineno = 455;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 455;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        if (par_mod == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 456;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_mod;
        frame_4e95690782beb7861f97ecb678f837b8->m_frame.f_lineno = 456;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[104]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_4e95690782beb7861f97ecb678f837b8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4e95690782beb7861f97ecb678f837b8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4e95690782beb7861f97ecb678f837b8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4e95690782beb7861f97ecb678f837b8,
        type_description_1,
        par_mod
    );


    // Release cached frame if used for exception.
    if (frame_4e95690782beb7861f97ecb678f837b8 == cache_frame_4e95690782beb7861f97ecb678f837b8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4e95690782beb7861f97ecb678f837b8);
        cache_frame_4e95690782beb7861f97ecb678f837b8 = NULL;
    }

    assertFrameObject(frame_4e95690782beb7861f97ecb678f837b8);

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


static PyObject *impl_torch$ao$quantization$fake_quantize$$$function__29_enable_observer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mod = python_pars[0];
    struct Nuitka_FrameObject *frame_3f2ac6e08086e5ff211834c20bf81604;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_3f2ac6e08086e5ff211834c20bf81604 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3f2ac6e08086e5ff211834c20bf81604)) {
        Py_XDECREF(cache_frame_3f2ac6e08086e5ff211834c20bf81604);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3f2ac6e08086e5ff211834c20bf81604 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3f2ac6e08086e5ff211834c20bf81604 = MAKE_FUNCTION_FRAME(codeobj_3f2ac6e08086e5ff211834c20bf81604, module_torch$ao$quantization$fake_quantize, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3f2ac6e08086e5ff211834c20bf81604->m_type_description == NULL);
    frame_3f2ac6e08086e5ff211834c20bf81604 = cache_frame_3f2ac6e08086e5ff211834c20bf81604;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3f2ac6e08086e5ff211834c20bf81604);
    assert(Py_REFCNT(frame_3f2ac6e08086e5ff211834c20bf81604) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_mod);
        tmp_isinstance_inst_1 = par_mod;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_mod);
        tmp_args_element_value_1 = par_mod;
        frame_3f2ac6e08086e5ff211834c20bf81604->m_frame.f_lineno = 466;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 466;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        if (par_mod == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 467;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_mod;
        frame_3f2ac6e08086e5ff211834c20bf81604->m_frame.f_lineno = 467;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[19]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_3f2ac6e08086e5ff211834c20bf81604, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3f2ac6e08086e5ff211834c20bf81604->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3f2ac6e08086e5ff211834c20bf81604, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3f2ac6e08086e5ff211834c20bf81604,
        type_description_1,
        par_mod
    );


    // Release cached frame if used for exception.
    if (frame_3f2ac6e08086e5ff211834c20bf81604 == cache_frame_3f2ac6e08086e5ff211834c20bf81604) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3f2ac6e08086e5ff211834c20bf81604);
        cache_frame_3f2ac6e08086e5ff211834c20bf81604 = NULL;
    }

    assertFrameObject(frame_3f2ac6e08086e5ff211834c20bf81604);

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



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__10_enable_observer(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fake_quantize$$$function__10_enable_observer,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[153],
#endif
        codeobj_a0e2c6281530a873f47b292ba22e8a8a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$fake_quantize,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__11_disable_observer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fake_quantize$$$function__11_disable_observer,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        mod_consts[154],
#endif
        codeobj_9b89024b184123e4c2cc223d6adb84ce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fake_quantize,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__12___init__(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fake_quantize$$$function__12___init__,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[160],
#endif
        codeobj_ff068aa7fd6c374d6d1800a64422b772,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fake_quantize,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__13_calculate_qparams() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fake_quantize$$$function__13_calculate_qparams,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        mod_consts[161],
#endif
        codeobj_10a7411fb84e0de9f1b5ea25d8280eb4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fake_quantize,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__14_forward() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fake_quantize$$$function__14_forward,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        mod_consts[162],
#endif
        codeobj_c60539972d904adeb2f3d3f9cc79055d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fake_quantize,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__15_extra_repr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fake_quantize$$$function__15_extra_repr,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        mod_consts[164],
#endif
        codeobj_5419fe771b2e94c227d2cd406cdb706a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fake_quantize,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__16__save_to_state_dict() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fake_quantize$$$function__16__save_to_state_dict,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        mod_consts[165],
#endif
        codeobj_4d5604033d6dfd6d85b9eec27477452e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fake_quantize,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__17__load_from_state_dict() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fake_quantize$$$function__17__load_from_state_dict,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        mod_consts[166],
#endif
        codeobj_bcfe0c70f52abdd29b0c7e3c61b61012,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fake_quantize,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__18___init__(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fake_quantize$$$function__18___init__,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_33a18918974d9a7146f4761b48d3c3a7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fake_quantize,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__19_calculate_qparams() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fake_quantize$$$function__19_calculate_qparams,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        mod_consts[170],
#endif
        codeobj_b3e6268f888b35ee3d3375c1c8c1b81e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fake_quantize,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__1__is_per_channel(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fake_quantize$$$function__1__is_per_channel,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a0de742f91bbb3cc61f863e9b03cba8a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$fake_quantize,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__20_extra_repr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fake_quantize$$$function__20_extra_repr,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        mod_consts[171],
#endif
        codeobj_a0f1932043fd8bc1c236ead6e868b01d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fake_quantize,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__21___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fake_quantize$$$function__21___init__,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[176],
#endif
        codeobj_2ed70925d477776a1c13073376420504,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$fake_quantize,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__22_calculate_qparams(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fake_quantize$$$function__22_calculate_qparams,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_ad9cb3dab0dd5a208c951e7319bf559e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$fake_quantize,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__23_extra_repr(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fake_quantize$$$function__23_extra_repr,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_7a9a4442b2a8d8f0b8846642898a1a2c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$fake_quantize,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__24_forward(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fake_quantize$$$function__24_forward,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        mod_consts[180],
#endif
        codeobj_f2d21e9205f8d781e03b3b04009f7e42,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$fake_quantize,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__25__is_fake_quant_script_module() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fake_quantize$$$function__25__is_fake_quant_script_module,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7bce817f5fc8e74587f1d7d4ffd9d696,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fake_quantize,
        mod_consts[97],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__26_disable_fake_quant() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fake_quantize$$$function__26_disable_fake_quant,
        mod_consts[101],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_45ff0906a6b06600289232f5b453af9e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fake_quantize,
        mod_consts[102],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__27_enable_fake_quant() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fake_quantize$$$function__27_enable_fake_quant,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3d7d082ed752e4e9f921da6ac866a4a9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fake_quantize,
        mod_consts[103],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__28_disable_observer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fake_quantize$$$function__28_disable_observer,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4e95690782beb7861f97ecb678f837b8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fake_quantize,
        mod_consts[105],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__29_enable_observer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fake_quantize$$$function__29_enable_observer,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3f2ac6e08086e5ff211834c20bf81604,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fake_quantize,
        mod_consts[106],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__2__is_per_tensor(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fake_quantize$$$function__2__is_per_tensor,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fecb2ca3c1226a37ce9c149523baebb2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$fake_quantize,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__3__is_symmetric_quant(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fake_quantize$$$function__3__is_symmetric_quant,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7b745e4c2ca375feaf7c7cc1055bbea5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$fake_quantize,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__4__is_float_qparams(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fake_quantize$$$function__4__is_float_qparams,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bd62a75c3026732a82ab759cb45c5101,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$fake_quantize,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__5___init__(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fake_quantize$$$function__5___init__,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[142],
#endif
        codeobj_aba4e3570ab6127b12914ad4621d5fa8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fake_quantize,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__6_forward() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_264b621402ef41fcf87f78ed32c172ea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fake_quantize,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__7_calculate_qparams() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        mod_consts[145],
#endif
        codeobj_1cdef6484d0f597d4807b0e5f7f058c2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fake_quantize,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__8_enable_fake_quant(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fake_quantize$$$function__8_enable_fake_quant,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[151],
#endif
        codeobj_387c1017f002a7eaab45eb51256ecad2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$fake_quantize,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__9_disable_fake_quant() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$fake_quantize$$$function__9_disable_fake_quant,
        mod_consts[101],
#if PYTHON_VERSION >= 0x300
        mod_consts[152],
#endif
        codeobj_5ee2b59368513d4a13034676cd1c1a85,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$fake_quantize,
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

function_impl_code functable_torch$ao$quantization$fake_quantize[] = {
    impl_torch$ao$quantization$fake_quantize$$$function__1__is_per_channel,
    impl_torch$ao$quantization$fake_quantize$$$function__2__is_per_tensor,
    impl_torch$ao$quantization$fake_quantize$$$function__3__is_symmetric_quant,
    impl_torch$ao$quantization$fake_quantize$$$function__4__is_float_qparams,
    impl_torch$ao$quantization$fake_quantize$$$function__5___init__,
    NULL,
    NULL,
    impl_torch$ao$quantization$fake_quantize$$$function__8_enable_fake_quant,
    impl_torch$ao$quantization$fake_quantize$$$function__9_disable_fake_quant,
    impl_torch$ao$quantization$fake_quantize$$$function__10_enable_observer,
    impl_torch$ao$quantization$fake_quantize$$$function__11_disable_observer,
    impl_torch$ao$quantization$fake_quantize$$$function__12___init__,
    impl_torch$ao$quantization$fake_quantize$$$function__13_calculate_qparams,
    impl_torch$ao$quantization$fake_quantize$$$function__14_forward,
    impl_torch$ao$quantization$fake_quantize$$$function__15_extra_repr,
    impl_torch$ao$quantization$fake_quantize$$$function__16__save_to_state_dict,
    impl_torch$ao$quantization$fake_quantize$$$function__17__load_from_state_dict,
    impl_torch$ao$quantization$fake_quantize$$$function__18___init__,
    impl_torch$ao$quantization$fake_quantize$$$function__19_calculate_qparams,
    impl_torch$ao$quantization$fake_quantize$$$function__20_extra_repr,
    impl_torch$ao$quantization$fake_quantize$$$function__21___init__,
    impl_torch$ao$quantization$fake_quantize$$$function__22_calculate_qparams,
    impl_torch$ao$quantization$fake_quantize$$$function__23_extra_repr,
    impl_torch$ao$quantization$fake_quantize$$$function__24_forward,
    impl_torch$ao$quantization$fake_quantize$$$function__25__is_fake_quant_script_module,
    impl_torch$ao$quantization$fake_quantize$$$function__26_disable_fake_quant,
    impl_torch$ao$quantization$fake_quantize$$$function__27_enable_fake_quant,
    impl_torch$ao$quantization$fake_quantize$$$function__28_disable_observer,
    impl_torch$ao$quantization$fake_quantize$$$function__29_enable_observer,
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

    function_impl_code *current = functable_torch$ao$quantization$fake_quantize;
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

    if (offset > sizeof(functable_torch$ao$quantization$fake_quantize) || offset < 0) {
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
        functable_torch$ao$quantization$fake_quantize[offset],
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
        module_torch$ao$quantization$fake_quantize,
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
PyObject *modulecode_torch$ao$quantization$fake_quantize(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch.ao.quantization.fake_quantize");

    // Store the module for future use.
    module_torch$ao$quantization$fake_quantize = module;

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
        PRINT_STRING("torch.ao.quantization.fake_quantize: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.ao.quantization.fake_quantize: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.ao.quantization.fake_quantize: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$ao$quantization$fake_quantize\n");

    moduledict_torch$ao$quantization$fake_quantize = MODULE_DICT(module_torch$ao$quantization$fake_quantize);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$ao$quantization$fake_quantize,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$ao$quantization$fake_quantize,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[94]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$ao$quantization$fake_quantize,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$ao$quantization$fake_quantize,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$ao$quantization$fake_quantize,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$ao$quantization$fake_quantize);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$ao$quantization$fake_quantize);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *outline_1_var___class__ = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *outline_2_var___class__ = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *outline_3_var___class__ = Nuitka_Cell_Empty();
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
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_e19096a038f814a00b37b63de7e7d714;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    int tmp_res;
    PyObject *locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_e2459108768809d4523a91ba2b65ee67_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_torch$ao$quantization$fake_quantize$$$class__2_FakeQuantize_83 = NULL;
    struct Nuitka_FrameObject *frame_f088a332e20d6d78312006e0e56b37c9_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_torch$ao$quantization$fake_quantize$$$class__3_FixedQParamsFakeQuantize_225 = NULL;
    struct Nuitka_FrameObject *frame_91f9690ae2bb42715ec1109cae89371e_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_torch$ao$quantization$fake_quantize$$$class__4_FusedMovingAvgObsFakeQuantize_256 = NULL;
    struct Nuitka_FrameObject *frame_c4eadfdd3f6717d1f2fa9d56b194d4a2_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[107];
        UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_2);
    }
    frame_e19096a038f814a00b37b63de7e7d714 = MAKE_MODULE_FRAME(codeobj_e19096a038f814a00b37b63de7e7d714, module_torch$ao$quantization$fake_quantize);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e19096a038f814a00b37b63de7e7d714);
    assert(Py_REFCNT(frame_e19096a038f814a00b37b63de7e7d714) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[111], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[112], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$ao$quantization$fake_quantize;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[16];
        frame_e19096a038f814a00b37b63de7e7d714->m_frame.f_lineno = 6;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[114];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$ao$quantization$fake_quantize;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[115];
        tmp_level_value_2 = mod_consts[16];
        frame_e19096a038f814a00b37b63de7e7d714->m_frame.f_lineno = 7;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$ao$quantization$fake_quantize,
                mod_consts[116],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[116]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[117];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torch$ao$quantization$fake_quantize;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[118];
        tmp_level_value_3 = mod_consts[16];
        frame_e19096a038f814a00b37b63de7e7d714->m_frame.f_lineno = 8;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

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
                (PyObject *)moduledict_torch$ao$quantization$fake_quantize,
                mod_consts[119],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[119]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torch$ao$quantization$fake_quantize,
                mod_consts[74],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[74]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_torch$ao$quantization$fake_quantize,
                mod_consts[120],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[120]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_torch$ao$quantization$fake_quantize,
                mod_consts[75],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[75]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_torch$ao$quantization$fake_quantize,
                mod_consts[121],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[121]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_torch$ao$quantization$fake_quantize,
                mod_consts[68],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[68]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_torch$ao$quantization$fake_quantize,
                mod_consts[122],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[122]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_torch$ao$quantization$fake_quantize,
                mod_consts[123],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[123]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_10 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_torch$ao$quantization$fake_quantize,
                mod_consts[124],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[124]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_15);
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
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[91];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torch$ao$quantization$fake_quantize;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[16];
        frame_e19096a038f814a00b37b63de7e7d714->m_frame.f_lineno = 19;
        tmp_assign_source_16 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[125];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_torch$ao$quantization$fake_quantize;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[126];
        tmp_level_value_5 = mod_consts[16];
        frame_e19096a038f814a00b37b63de7e7d714->m_frame.f_lineno = 20;
        tmp_assign_source_17 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_17;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_torch$ao$quantization$fake_quantize,
                mod_consts[127],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[127]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_torch$ao$quantization$fake_quantize,
                mod_consts[128],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[128]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_19);
    }
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

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_20 == NULL));
        assert(tmp_import_from_3__module == NULL);
        Py_INCREF(tmp_assign_source_20);
        tmp_import_from_3__module = tmp_assign_source_20;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_13 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_torch$ao$quantization$fake_quantize,
                mod_consts[129],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[129]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_14 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_torch$ao$quantization$fake_quantize,
                mod_consts[130],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[130]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_22);
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = DICT_COPY(mod_consts[131]);


        tmp_assign_source_23 = MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__1__is_per_channel(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_annotations_2;
        tmp_annotations_2 = DICT_COPY(mod_consts[131]);


        tmp_assign_source_24 = MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__2__is_per_tensor(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_annotations_3;
        tmp_annotations_3 = DICT_COPY(mod_consts[131]);


        tmp_assign_source_25 = MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__3__is_symmetric_quant(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_annotations_4;
        tmp_annotations_4 = DICT_COPY(mod_consts[131]);


        tmp_assign_source_26 = MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__4__is_float_qparams(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_26);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[127]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_4;
        }
        tmp_assign_source_27 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_27, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_27, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_27);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_28 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
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


            exception_lineno = 35;

            goto try_except_handler_4;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[16];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_30 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_30;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[132]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[132]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = mod_consts[98];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_e19096a038f814a00b37b63de7e7d714->m_frame.f_lineno = 35;
        tmp_assign_source_31 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_31;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[133]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_4;
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
        tmp_mod_expr_left_1 = mod_consts[134];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[70];
        tmp_getattr_default_1 = mod_consts[135];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[70]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 35;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_32;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_33;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[136];
        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35, mod_consts[137], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[138];
        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35, mod_consts[108], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[98];
        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35, mod_consts[139], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_6;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35, mod_consts[140], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_6;
        }
        frame_e2459108768809d4523a91ba2b65ee67_2 = MAKE_CLASS_FRAME(codeobj_e2459108768809d4523a91ba2b65ee67, module_torch$ao$quantization$fake_quantize, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_e2459108768809d4523a91ba2b65ee67_2);
        assert(Py_REFCNT(frame_e2459108768809d4523a91ba2b65ee67_2) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_expression_value_6 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35, mod_consts[0]);

            if (tmp_expression_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_6 == NULL)) {
                        tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 46;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[141]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_ass_subvalue_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_1 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35, mod_consts[140]);

            if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_1);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[140]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 46;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_1);

                exception_lineno = 46;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_1 = mod_consts[9];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subscribed_1);
            Py_DECREF(tmp_ass_subvalue_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            tmp_expression_value_7 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35, mod_consts[0]);

            if (tmp_expression_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_7 == NULL)) {
                        tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 47;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[141]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_ass_subvalue_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_2 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35, mod_consts[140]);

            if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_2);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[140]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 47;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_2);

                exception_lineno = 47;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_2 = mod_consts[14];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
            Py_DECREF(tmp_ass_subscribed_2);
            Py_DECREF(tmp_ass_subvalue_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__5___init__(tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            tmp_called_value_2 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35, mod_consts[128]);

            if (tmp_called_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[128]);

                    if (unlikely(tmp_called_value_2 == NULL)) {
                        tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
                    }

                    if (tmp_called_value_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 57;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_1 = MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__6_forward();

            frame_e2459108768809d4523a91ba2b65ee67_2->m_frame.f_lineno = 57;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35, mod_consts[143], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            tmp_called_value_3 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35, mod_consts[128]);

            if (tmp_called_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[128]);

                    if (unlikely(tmp_called_value_3 == NULL)) {
                        tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
                    }

                    if (tmp_called_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 61;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_2 = MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__7_calculate_qparams();

            frame_e2459108768809d4523a91ba2b65ee67_2->m_frame.f_lineno = 61;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35, mod_consts[44], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_expression_value_9 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35, mod_consts[0]);

            if (tmp_expression_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_9 == NULL)) {
                        tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 65;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_9);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[61]);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[146]);
            Py_DECREF(tmp_expression_value_8);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_1 = mod_consts[147];
            tmp_dict_key_1 = mod_consts[148];
            tmp_dict_value_1 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35, mod_consts[149]);

            if (tmp_dict_value_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_1 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_5 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[150];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            Py_INCREF(tmp_defaults_1);


            tmp_args_element_value_3 = MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__8_enable_fake_quant(tmp_defaults_1, tmp_annotations_5);

            frame_e2459108768809d4523a91ba2b65ee67_2->m_frame.f_lineno = 65;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_args_element_value_4;
            tmp_expression_value_10 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35, mod_consts[0]);

            if (tmp_expression_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_10 == NULL)) {
                        tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 69;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_10);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[61]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_4 = MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__9_disable_fake_quant();

            frame_e2459108768809d4523a91ba2b65ee67_2->m_frame.f_lineno = 69;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[146], tmp_args_element_value_4);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35, mod_consts[101], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_5;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_expression_value_12 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35, mod_consts[0]);

            if (tmp_expression_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_12 == NULL)) {
                        tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 73;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_12);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[61]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[146]);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_2 = mod_consts[147];
            tmp_dict_key_2 = mod_consts[148];
            tmp_dict_value_2 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35, mod_consts[149]);

            if (tmp_dict_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_2 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_6 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[150];
            tmp_dict_value_2 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            Py_INCREF(tmp_defaults_2);


            tmp_args_element_value_5 = MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__10_enable_observer(tmp_defaults_2, tmp_annotations_6);

            frame_e2459108768809d4523a91ba2b65ee67_2->m_frame.f_lineno = 73;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35, mod_consts[19], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_args_element_value_6;
            tmp_expression_value_13 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35, mod_consts[0]);

            if (tmp_expression_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_13 == NULL)) {
                        tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 77;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_13);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[61]);
            Py_DECREF(tmp_expression_value_13);
            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_6 = MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__11_disable_observer();

            frame_e2459108768809d4523a91ba2b65ee67_2->m_frame.f_lineno = 77;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[146], tmp_args_element_value_6);
            Py_DECREF(tmp_called_instance_2);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35, mod_consts[104], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_classmethod_arg_1;
            tmp_res = MAPPING_HAS_ITEM(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35, mod_consts[155]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_4 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_value_6 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35, mod_consts[155]);

            if (unlikely(tmp_called_value_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[155]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 81;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_7 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35, mod_consts[124]);

            if (tmp_args_element_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[124]);

                    if (unlikely(tmp_args_element_value_7 == NULL)) {
                        tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
                    }

                    if (tmp_args_element_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_6);

                        exception_lineno = 81;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_args_element_value_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_e2459108768809d4523a91ba2b65ee67_2->m_frame.f_lineno = 81;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_classmethod_arg_1 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35, mod_consts[124]);

            if (tmp_classmethod_arg_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_classmethod_arg_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[124]);

                    if (unlikely(tmp_classmethod_arg_1 == NULL)) {
                        tmp_classmethod_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
                    }

                    if (tmp_classmethod_arg_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 81;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_classmethod_arg_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35, mod_consts[156], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e2459108768809d4523a91ba2b65ee67_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e2459108768809d4523a91ba2b65ee67_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e2459108768809d4523a91ba2b65ee67_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e2459108768809d4523a91ba2b65ee67_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_e2459108768809d4523a91ba2b65ee67_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_6;
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


                exception_lineno = 35;

                goto try_except_handler_6;
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
        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35, mod_consts[157], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_6;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_7 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[98];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_e19096a038f814a00b37b63de7e7d714->m_frame.f_lineno = 35;
            tmp_assign_source_34 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto try_except_handler_6;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_34);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_33 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_33);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35);
        locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35 = NULL;
        goto try_return_handler_5;
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

        Py_DECREF(locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35);
        locals_torch$ao$quantization$fake_quantize$$$class__1_FakeQuantizeBase_35 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 35;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_33);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
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
        PyObject *tmp_assign_source_35;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_7;
        }
        tmp_assign_source_35 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_35, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_36 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_7;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_14 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[16];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_14, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_7;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_38 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_38;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_15 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_15, mod_consts[132]);
        tmp_condition_result_7 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_16 = tmp_class_creation_2__metaclass;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[132]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_7;
        }
        tmp_tuple_element_6 = mod_consts[57];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_e19096a038f814a00b37b63de7e7d714->m_frame.f_lineno = 83;
        tmp_assign_source_39 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_39;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_17 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_17, mod_consts[133]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_7;
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
        tmp_mod_expr_left_2 = mod_consts[134];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[70];
        tmp_getattr_default_2 = mod_consts[135];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_18;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_18 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[70]);
            Py_DECREF(tmp_expression_value_18);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 83;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_40;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_41;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_torch$ao$quantization$fake_quantize$$$class__2_FakeQuantize_83 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[136];
        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__2_FakeQuantize_83, mod_consts[137], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[158];
        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__2_FakeQuantize_83, mod_consts[108], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[57];
        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__2_FakeQuantize_83, mod_consts[139], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_9;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__2_FakeQuantize_83, mod_consts[140], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_9;
        }
        frame_f088a332e20d6d78312006e0e56b37c9_3 = MAKE_CLASS_FRAME(codeobj_f088a332e20d6d78312006e0e56b37c9, module_torch$ao$quantization$fake_quantize, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_f088a332e20d6d78312006e0e56b37c9_3);
        assert(Py_REFCNT(frame_f088a332e20d6d78312006e0e56b37c9_3) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            tmp_expression_value_19 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__2_FakeQuantize_83, mod_consts[0]);

            if (tmp_expression_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_19 == NULL)) {
                        tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 123;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_19);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_ass_subvalue_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[141]);
            Py_DECREF(tmp_expression_value_19);
            if (tmp_ass_subvalue_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscribed_3 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__2_FakeQuantize_83, mod_consts[140]);

            if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_3);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[140]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 123;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_3);

                exception_lineno = 123;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_3 = mod_consts[34];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
            Py_DECREF(tmp_ass_subscribed_3);
            Py_DECREF(tmp_ass_subvalue_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_ass_subvalue_4;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_ass_subscribed_4;
            PyObject *tmp_ass_subscript_4;
            tmp_expression_value_20 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__2_FakeQuantize_83, mod_consts[0]);

            if (tmp_expression_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_20 == NULL)) {
                        tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 124;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_20);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_ass_subvalue_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[141]);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_ass_subvalue_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscribed_4 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__2_FakeQuantize_83, mod_consts[140]);

            if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_4);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[140]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 124;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_4);

                exception_lineno = 124;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_4 = mod_consts[36];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
            Py_DECREF(tmp_ass_subscribed_4);
            Py_DECREF(tmp_ass_subvalue_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_tuple_element_8;
            struct Nuitka_CellObject *tmp_closure_2[1];
            tmp_tuple_element_8 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__2_FakeQuantize_83, mod_consts[74]);

            if (tmp_tuple_element_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[74]);

                    if (unlikely(tmp_tuple_element_8 == NULL)) {
                        tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
                    }

                    if (tmp_tuple_element_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 126;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_tuple_element_8);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_defaults_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM(tmp_defaults_3, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[16];
            PyTuple_SET_ITEM0(tmp_defaults_3, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[159];
            PyTuple_SET_ITEM0(tmp_defaults_3, 2, tmp_tuple_element_8);

            tmp_closure_2[0] = outline_1_var___class__;
            Py_INCREF(tmp_closure_2[0]);

            tmp_dictset_value = MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__12___init__(tmp_defaults_3, tmp_closure_2);

            tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__2_FakeQuantize_83, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_args_element_value_8;
            tmp_expression_value_21 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__2_FakeQuantize_83, mod_consts[0]);

            if (tmp_expression_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_21 == NULL)) {
                        tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 151;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_21);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[61]);
            Py_DECREF(tmp_expression_value_21);
            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_8 = MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__13_calculate_qparams();

            frame_f088a332e20d6d78312006e0e56b37c9_3->m_frame.f_lineno = 151;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[146], tmp_args_element_value_8);
            Py_DECREF(tmp_called_instance_3);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__2_FakeQuantize_83, mod_consts[44], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__14_forward();

        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__2_FakeQuantize_83, mod_consts[143], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_2 = "c";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_args_element_value_9;
            tmp_expression_value_22 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__2_FakeQuantize_83, mod_consts[0]);

            if (tmp_expression_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_22 == NULL)) {
                        tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 177;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_22);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[61]);
            Py_DECREF(tmp_expression_value_22);
            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_9 = MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__15_extra_repr();

            frame_f088a332e20d6d78312006e0e56b37c9_3->m_frame.f_lineno = 177;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[146], tmp_args_element_value_9);
            Py_DECREF(tmp_called_instance_4);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__2_FakeQuantize_83, mod_consts[163], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__16__save_to_state_dict();

        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__2_FakeQuantize_83, mod_consts[58], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_2 = "c";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__17__load_from_state_dict();

        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__2_FakeQuantize_83, mod_consts[66], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_2 = "c";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f088a332e20d6d78312006e0e56b37c9_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f088a332e20d6d78312006e0e56b37c9_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f088a332e20d6d78312006e0e56b37c9_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f088a332e20d6d78312006e0e56b37c9_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_f088a332e20d6d78312006e0e56b37c9_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_9;
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


                exception_lineno = 83;

                goto try_except_handler_9;
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
        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__2_FakeQuantize_83, mod_consts[157], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_9;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_9 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_9 = mod_consts[57];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_9 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_torch$ao$quantization$fake_quantize$$$class__2_FakeQuantize_83;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_e19096a038f814a00b37b63de7e7d714->m_frame.f_lineno = 83;
            tmp_assign_source_42 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto try_except_handler_9;
            }
            assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
            PyCell_SET(outline_1_var___class__, tmp_assign_source_42);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
        tmp_assign_source_41 = Nuitka_Cell_GET(outline_1_var___class__);
        Py_INCREF(tmp_assign_source_41);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_torch$ao$quantization$fake_quantize$$$class__2_FakeQuantize_83);
        locals_torch$ao$quantization$fake_quantize$$$class__2_FakeQuantize_83 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_torch$ao$quantization$fake_quantize$$$class__2_FakeQuantize_83);
        locals_torch$ao$quantization$fake_quantize$$$class__2_FakeQuantize_83 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 83;
        goto try_except_handler_7;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_41);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
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
        PyObject *tmp_assign_source_43;
        PyObject *tmp_tuple_element_10;
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_10;
        }
        tmp_assign_source_43 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_43, 0, tmp_tuple_element_10);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_44 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_10;
        }
        tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_23 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[16];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_23, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_10;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_46 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_46;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_24 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_24, mod_consts[132]);
        tmp_condition_result_11 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_25 = tmp_class_creation_3__metaclass;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[132]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_10;
        }
        tmp_tuple_element_11 = mod_consts[167];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_11);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_11 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_11);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_e19096a038f814a00b37b63de7e7d714->m_frame.f_lineno = 225;
        tmp_assign_source_47 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_47;
    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_26 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_26, mod_consts[133]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_10;
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
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[134];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[70];
        tmp_getattr_default_3 = mod_consts[135];
        tmp_tuple_element_12 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_27;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_27 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_27 == NULL));
            tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[70]);
            Py_DECREF(tmp_expression_value_27);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_12);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 225;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_48;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_49;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_torch$ao$quantization$fake_quantize$$$class__3_FixedQParamsFakeQuantize_225 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[136];
        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__3_FixedQParamsFakeQuantize_225, mod_consts[137], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[168];
        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__3_FixedQParamsFakeQuantize_225, mod_consts[108], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[167];
        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__3_FixedQParamsFakeQuantize_225, mod_consts[139], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_12;
        }
        frame_91f9690ae2bb42715ec1109cae89371e_4 = MAKE_CLASS_FRAME(codeobj_91f9690ae2bb42715ec1109cae89371e, module_torch$ao$quantization$fake_quantize, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_91f9690ae2bb42715ec1109cae89371e_4);
        assert(Py_REFCNT(frame_91f9690ae2bb42715ec1109cae89371e_4) == 2);

        // Framed code:
        {
            struct Nuitka_CellObject *tmp_closure_3[1];

            tmp_closure_3[0] = outline_2_var___class__;
            Py_INCREF(tmp_closure_3[0]);

            tmp_dictset_value = MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__18___init__(tmp_closure_3);

            tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__3_FixedQParamsFakeQuantize_225, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_args_element_value_10;
            tmp_expression_value_28 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__3_FixedQParamsFakeQuantize_225, mod_consts[0]);

            if (tmp_expression_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_28 == NULL)) {
                        tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 243;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_28);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[61]);
            Py_DECREF(tmp_expression_value_28);
            if (tmp_called_instance_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_10 = MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__19_calculate_qparams();

            frame_91f9690ae2bb42715ec1109cae89371e_4->m_frame.f_lineno = 243;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[146], tmp_args_element_value_10);
            Py_DECREF(tmp_called_instance_5);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__3_FixedQParamsFakeQuantize_225, mod_consts[44], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_6;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_args_element_value_11;
            tmp_expression_value_29 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__3_FixedQParamsFakeQuantize_225, mod_consts[0]);

            if (tmp_expression_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_29 == NULL)) {
                        tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 247;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_29);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_called_instance_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[61]);
            Py_DECREF(tmp_expression_value_29);
            if (tmp_called_instance_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_11 = MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__20_extra_repr();

            frame_91f9690ae2bb42715ec1109cae89371e_4->m_frame.f_lineno = 247;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[146], tmp_args_element_value_11);
            Py_DECREF(tmp_called_instance_6);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__3_FixedQParamsFakeQuantize_225, mod_consts[163], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_91f9690ae2bb42715ec1109cae89371e_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_91f9690ae2bb42715ec1109cae89371e_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_91f9690ae2bb42715ec1109cae89371e_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_91f9690ae2bb42715ec1109cae89371e_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_91f9690ae2bb42715ec1109cae89371e_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_12;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_13 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto try_except_handler_12;
            }
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__3_FixedQParamsFakeQuantize_225, mod_consts[157], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_12;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_11 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_13 = mod_consts[167];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_13 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = locals_torch$ao$quantization$fake_quantize$$$class__3_FixedQParamsFakeQuantize_225;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_e19096a038f814a00b37b63de7e7d714->m_frame.f_lineno = 225;
            tmp_assign_source_50 = CALL_FUNCTION(tmp_called_value_11, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto try_except_handler_12;
            }
            assert(Nuitka_Cell_GET(outline_2_var___class__) == NULL);
            PyCell_SET(outline_2_var___class__, tmp_assign_source_50);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_2_var___class__));
        tmp_assign_source_49 = Nuitka_Cell_GET(outline_2_var___class__);
        Py_INCREF(tmp_assign_source_49);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_torch$ao$quantization$fake_quantize$$$class__3_FixedQParamsFakeQuantize_225);
        locals_torch$ao$quantization$fake_quantize$$$class__3_FixedQParamsFakeQuantize_225 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_torch$ao$quantization$fake_quantize$$$class__3_FixedQParamsFakeQuantize_225);
        locals_torch$ao$quantization$fake_quantize$$$class__3_FixedQParamsFakeQuantize_225 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 225;
        goto try_except_handler_10;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_49);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
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
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
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
        PyObject *tmp_assign_source_51;
        PyObject *tmp_tuple_element_14;
        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_tuple_element_14 == NULL)) {
            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_13;
        }
        tmp_assign_source_51 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_51, 0, tmp_tuple_element_14);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_52 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_13;
        }
        tmp_condition_result_14 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_30 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[16];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_30, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_13;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_54 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_54;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_expression_value_31;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_31 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_31, mod_consts[132]);
        tmp_condition_result_15 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_32 = tmp_class_creation_4__metaclass;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[132]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_13;
        }
        tmp_tuple_element_15 = mod_consts[172];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_15);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_15 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_15);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_e19096a038f814a00b37b63de7e7d714->m_frame.f_lineno = 256;
        tmp_assign_source_55 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_55;
    }
    {
        bool tmp_condition_result_16;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_33;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_33 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_33, mod_consts[133]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_13;
        }
        tmp_condition_result_16 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_16 != false) {
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
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[134];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_4 = mod_consts[70];
        tmp_getattr_default_4 = mod_consts[135];
        tmp_tuple_element_16 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_34;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_34 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_34 == NULL));
            tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[70]);
            Py_DECREF(tmp_expression_value_34);
            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_16);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 256;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_56;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_57;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_torch$ao$quantization$fake_quantize$$$class__4_FusedMovingAvgObsFakeQuantize_256 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[136];
        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__4_FusedMovingAvgObsFakeQuantize_256, mod_consts[137], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[173];
        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__4_FusedMovingAvgObsFakeQuantize_256, mod_consts[108], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[172];
        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__4_FusedMovingAvgObsFakeQuantize_256, mod_consts[139], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_15;
        }
        frame_c4eadfdd3f6717d1f2fa9d56b194d4a2_5 = MAKE_CLASS_FRAME(codeobj_c4eadfdd3f6717d1f2fa9d56b194d4a2, module_torch$ao$quantization$fake_quantize, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c4eadfdd3f6717d1f2fa9d56b194d4a2_5);
        assert(Py_REFCNT(frame_c4eadfdd3f6717d1f2fa9d56b194d4a2_5) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_4;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            struct Nuitka_CellObject *tmp_closure_4[1];
            tmp_tuple_element_17 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__4_FusedMovingAvgObsFakeQuantize_256, mod_consts[74]);

            if (tmp_tuple_element_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[74]);

                    if (unlikely(tmp_tuple_element_17 == NULL)) {
                        tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
                    }

                    if (tmp_tuple_element_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 274;
                        type_description_2 = "c";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_tuple_element_17);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_defaults_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM(tmp_defaults_4, 0, tmp_tuple_element_17);
            tmp_tuple_element_17 = mod_consts[16];
            PyTuple_SET_ITEM0(tmp_defaults_4, 1, tmp_tuple_element_17);
            tmp_tuple_element_17 = mod_consts[159];
            PyTuple_SET_ITEM0(tmp_defaults_4, 2, tmp_tuple_element_17);
            tmp_dict_key_3 = mod_consts[174];
            tmp_dict_value_3 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__4_FusedMovingAvgObsFakeQuantize_256, mod_consts[129]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[129]);

                    if (unlikely(tmp_dict_value_3 == NULL)) {
                        tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
                    }

                    if (tmp_dict_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_defaults_4);

                        exception_lineno = 274;
                        type_description_2 = "c";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_annotations_7 = _PyDict_NewPresized( 5 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[21];
            tmp_dict_value_3 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__4_FusedMovingAvgObsFakeQuantize_256, mod_consts[33]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto dict_build_exception_1;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[22];
            tmp_dict_value_3 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__4_FusedMovingAvgObsFakeQuantize_256, mod_consts[33]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto dict_build_exception_1;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[175];
            tmp_dict_value_3 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__4_FusedMovingAvgObsFakeQuantize_256, mod_consts[129]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[129]);

                    if (unlikely(tmp_dict_value_3 == NULL)) {
                        tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
                    }

                    if (tmp_dict_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 277;
                        type_description_2 = "c";
                        goto dict_build_exception_1;
                    }
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto dict_build_exception_1;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[150];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_defaults_4);
            Py_DECREF(tmp_annotations_7);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;

            tmp_closure_4[0] = outline_3_var___class__;
            Py_INCREF(tmp_closure_4[0]);

            tmp_dictset_value = MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__21___init__(tmp_defaults_4, tmp_annotations_7, tmp_closure_4);

            tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__4_FusedMovingAvgObsFakeQuantize_256, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_13;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_expression_value_38;
            tmp_expression_value_36 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__4_FusedMovingAvgObsFakeQuantize_256, mod_consts[0]);

            if (tmp_expression_value_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_36 == NULL)) {
                        tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_36 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 290;
                        type_description_2 = "c";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_36);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[61]);
            Py_DECREF(tmp_expression_value_36);
            if (tmp_expression_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
            tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[146]);
            Py_DECREF(tmp_expression_value_35);
            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
            tmp_dict_key_4 = mod_consts[150];
            tmp_expression_value_37 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__4_FusedMovingAvgObsFakeQuantize_256, mod_consts[130]);

            if (tmp_expression_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[130]);

                    if (unlikely(tmp_expression_value_37 == NULL)) {
                        tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[130]);
                    }

                    if (tmp_expression_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_13);

                        exception_lineno = 291;
                        type_description_2 = "c";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_37);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_38 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__4_FusedMovingAvgObsFakeQuantize_256, mod_consts[0]);

            if (tmp_expression_value_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_38 == NULL)) {
                        tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_13);
                        Py_DECREF(tmp_expression_value_37);

                        exception_lineno = 291;
                        type_description_2 = "c";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_38);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[141]);
            Py_DECREF(tmp_expression_value_38);
            if (tmp_tuple_element_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_13);
                Py_DECREF(tmp_expression_value_37);

                exception_lineno = 291;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_39;
                PyTuple_SET_ITEM(tmp_subscript_value_5, 0, tmp_tuple_element_18);
                tmp_expression_value_39 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__4_FusedMovingAvgObsFakeQuantize_256, mod_consts[0]);

                if (tmp_expression_value_39 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

                        if (unlikely(tmp_expression_value_39 == NULL)) {
                            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                        }

                        if (tmp_expression_value_39 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 291;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_39);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[141]);
                Py_DECREF(tmp_expression_value_39);
                if (tmp_tuple_element_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 291;
                    type_description_2 = "c";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_5, 1, tmp_tuple_element_18);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_expression_value_37);
            Py_DECREF(tmp_subscript_value_5);
            goto frame_exception_exit_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_5);
            Py_DECREF(tmp_expression_value_37);
            Py_DECREF(tmp_subscript_value_5);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_13);

                exception_lineno = 291;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_args_element_value_12 = MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__22_calculate_qparams(tmp_annotations_8);

            frame_c4eadfdd3f6717d1f2fa9d56b194d4a2_5->m_frame.f_lineno = 290;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__4_FusedMovingAvgObsFakeQuantize_256, mod_consts[44], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_14;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            tmp_expression_value_41 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__4_FusedMovingAvgObsFakeQuantize_256, mod_consts[0]);

            if (tmp_expression_value_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_41 == NULL)) {
                        tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 294;
                        type_description_2 = "c";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_41);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[61]);
            Py_DECREF(tmp_expression_value_41);
            if (tmp_expression_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
            tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[146]);
            Py_DECREF(tmp_expression_value_40);
            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
            tmp_dict_key_5 = mod_consts[150];
            tmp_dict_value_5 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__4_FusedMovingAvgObsFakeQuantize_256, mod_consts[178]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_5);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_annotations_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_args_element_value_13 = MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__23_extra_repr(tmp_annotations_9);

            frame_c4eadfdd3f6717d1f2fa9d56b194d4a2_5->m_frame.f_lineno = 294;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__4_FusedMovingAvgObsFakeQuantize_256, mod_consts[163], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_value_42;
            tmp_dict_key_6 = mod_consts[54];
            tmp_expression_value_42 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__4_FusedMovingAvgObsFakeQuantize_256, mod_consts[0]);

            if (tmp_expression_value_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_42 == NULL)) {
                        tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_42 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 311;
                        type_description_2 = "c";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_42);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[141]);
            Py_DECREF(tmp_expression_value_42);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
            tmp_annotations_10 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_43;
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[150];
                tmp_expression_value_43 = PyObject_GetItem(locals_torch$ao$quantization$fake_quantize$$$class__4_FusedMovingAvgObsFakeQuantize_256, mod_consts[0]);

                if (tmp_expression_value_43 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

                        if (unlikely(tmp_expression_value_43 == NULL)) {
                            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                        }

                        if (tmp_expression_value_43 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 311;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_43);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[141]);
                Py_DECREF(tmp_expression_value_43);
                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 311;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_annotations_10);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;


            tmp_dictset_value = MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__24_forward(tmp_annotations_10);

            tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__4_FusedMovingAvgObsFakeQuantize_256, mod_consts[143], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c4eadfdd3f6717d1f2fa9d56b194d4a2_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c4eadfdd3f6717d1f2fa9d56b194d4a2_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c4eadfdd3f6717d1f2fa9d56b194d4a2_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c4eadfdd3f6717d1f2fa9d56b194d4a2_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_c4eadfdd3f6717d1f2fa9d56b194d4a2_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_15;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_17 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;

                goto try_except_handler_15;
            }
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$fake_quantize$$$class__4_FusedMovingAvgObsFakeQuantize_256, mod_consts[157], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_15;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_15 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_19 = mod_consts[172];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_19 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_19);
            tmp_tuple_element_19 = locals_torch$ao$quantization$fake_quantize$$$class__4_FusedMovingAvgObsFakeQuantize_256;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_e19096a038f814a00b37b63de7e7d714->m_frame.f_lineno = 256;
            tmp_assign_source_58 = CALL_FUNCTION(tmp_called_value_15, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;

                goto try_except_handler_15;
            }
            assert(Nuitka_Cell_GET(outline_3_var___class__) == NULL);
            PyCell_SET(outline_3_var___class__, tmp_assign_source_58);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_3_var___class__));
        tmp_assign_source_57 = Nuitka_Cell_GET(outline_3_var___class__);
        Py_INCREF(tmp_assign_source_57);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_torch$ao$quantization$fake_quantize$$$class__4_FusedMovingAvgObsFakeQuantize_256);
        locals_torch$ao$quantization$fake_quantize$$$class__4_FusedMovingAvgObsFakeQuantize_256 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_torch$ao$quantization$fake_quantize$$$class__4_FusedMovingAvgObsFakeQuantize_256);
        locals_torch$ao$quantization$fake_quantize$$$class__4_FusedMovingAvgObsFakeQuantize_256 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 256;
        goto try_except_handler_13;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_57);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
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
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
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
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_kw_call_value_5_1;
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[156]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = mod_consts[16];
        tmp_kw_call_value_2_1 = mod_consts[159];
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[181]);
        if (tmp_kw_call_value_3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_kw_call_value_3_1);

            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[5]);
        if (tmp_kw_call_value_4_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_kw_call_value_3_1);

            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_1 = Py_True;
        frame_e19096a038f814a00b37b63de7e7d714->m_frame.f_lineno = 328;
        {
            PyObject *kw_values[6] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1};

            tmp_assign_source_59 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_16, kw_values, mod_consts[182]);
        }

        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_kw_call_value_3_1);
        Py_DECREF(tmp_kw_call_value_4_1);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_kw_call_value_3_2;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_kw_call_value_4_2;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_kw_call_value_5_2;
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[156]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_kw_call_value_0_2 == NULL)) {
            tmp_kw_call_value_0_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_2 = mod_consts[184];
        tmp_kw_call_value_2_2 = mod_consts[185];
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[186]);
        if (tmp_kw_call_value_3_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_kw_call_value_3_2);

            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[4]);
        if (tmp_kw_call_value_4_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_kw_call_value_3_2);

            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_2 = Py_False;
        frame_e19096a038f814a00b37b63de7e7d714->m_frame.f_lineno = 334;
        {
            PyObject *kw_values[6] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2, tmp_kw_call_value_4_2, tmp_kw_call_value_5_2};

            tmp_assign_source_60 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_17, kw_values, mod_consts[182]);
        }

        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_kw_call_value_3_2);
        Py_DECREF(tmp_kw_call_value_4_2);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_kw_call_value_2_3;
        PyObject *tmp_kw_call_value_3_3;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_kw_call_value_4_3;
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[156]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_kw_call_value_0_3 == NULL)) {
            tmp_kw_call_value_0_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
        }

        if (tmp_kw_call_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_3 = mod_consts[16];
        tmp_kw_call_value_2_3 = mod_consts[159];
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 341;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[181]);
        if (tmp_kw_call_value_3_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 341;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_3 = Py_True;
        frame_e19096a038f814a00b37b63de7e7d714->m_frame.f_lineno = 340;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3, tmp_kw_call_value_3_3, tmp_kw_call_value_4_3};

            tmp_assign_source_61 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_18, kw_values, mod_consts[188]);
        }

        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_kw_call_value_3_3);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_kw_call_value_0_4;
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;

            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[156]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_4 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_kw_call_value_0_4 == NULL)) {
            tmp_kw_call_value_0_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_kw_call_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 346;

            goto frame_exception_exit_1;
        }
        frame_e19096a038f814a00b37b63de7e7d714->m_frame.f_lineno = 346;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_4};

            tmp_assign_source_62 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_19, kw_values, mod_consts[67]);
        }

        Py_DECREF(tmp_called_value_19);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_kw_call_value_0_5;
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[156]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_5 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_kw_call_value_0_5 == NULL)) {
            tmp_kw_call_value_0_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_kw_call_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        frame_e19096a038f814a00b37b63de7e7d714->m_frame.f_lineno = 347;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_5};

            tmp_assign_source_63 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_20, kw_values, mod_consts[67]);
        }

        Py_DECREF(tmp_called_value_20);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_kw_call_value_1_4;
        PyObject *tmp_kw_call_value_2_4;
        PyObject *tmp_kw_call_value_3_4;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_kw_call_value_4_4;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_kw_call_value_5_3;
        PyObject *tmp_kw_call_value_6_1;
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[156]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_6 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_kw_call_value_0_6 == NULL)) {
            tmp_kw_call_value_0_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        if (tmp_kw_call_value_0_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_4 = mod_consts[184];
        tmp_kw_call_value_2_4 = mod_consts[185];
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[186]);
        if (tmp_kw_call_value_3_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_56 == NULL)) {
            tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_kw_call_value_3_4);

            exception_lineno = 353;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[1]);
        if (tmp_kw_call_value_4_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_kw_call_value_3_4);

            exception_lineno = 353;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_3 = Py_False;
        tmp_kw_call_value_6_1 = mod_consts[16];
        frame_e19096a038f814a00b37b63de7e7d714->m_frame.f_lineno = 349;
        {
            PyObject *kw_values[7] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_4, tmp_kw_call_value_2_4, tmp_kw_call_value_3_4, tmp_kw_call_value_4_4, tmp_kw_call_value_5_3, tmp_kw_call_value_6_1};

            tmp_assign_source_64 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_21, kw_values, mod_consts[192]);
        }

        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_kw_call_value_3_4);
        Py_DECREF(tmp_kw_call_value_4_4);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_kw_call_value_1_5;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_kw_call_value_2_5;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_kw_call_value_3_5;
        PyObject *tmp_kw_call_value_4_5;
        PyObject *tmp_kw_call_value_5_4;
        PyObject *tmp_kw_call_value_6_2;
        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_expression_value_57 == NULL)) {
            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[156]);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_7 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_kw_call_value_0_7 == NULL)) {
            tmp_kw_call_value_0_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_kw_call_value_0_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_58 == NULL)) {
            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[3]);
        if (tmp_kw_call_value_1_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_59 == NULL)) {
            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_kw_call_value_1_5);

            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[181]);
        if (tmp_kw_call_value_2_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_kw_call_value_1_5);

            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_5 = mod_consts[16];
        tmp_kw_call_value_4_5 = mod_consts[159];
        tmp_kw_call_value_5_4 = mod_consts[16];
        tmp_kw_call_value_6_2 = Py_True;
        frame_e19096a038f814a00b37b63de7e7d714->m_frame.f_lineno = 359;
        {
            PyObject *kw_values[7] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_5, tmp_kw_call_value_2_5, tmp_kw_call_value_3_5, tmp_kw_call_value_4_5, tmp_kw_call_value_5_4, tmp_kw_call_value_6_2};

            tmp_assign_source_65 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_22, kw_values, mod_consts[194]);
        }

        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_kw_call_value_1_5);
        Py_DECREF(tmp_kw_call_value_2_5);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_kw_call_value_0_8;
        PyObject *tmp_kw_call_value_1_6;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_kw_call_value_2_6;
        PyObject *tmp_kw_call_value_3_6;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_kw_call_value_4_6;
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[156]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_8 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_kw_call_value_0_8 == NULL)) {
            tmp_kw_call_value_0_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_kw_call_value_0_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[3]);
        if (tmp_kw_call_value_1_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_6 = mod_consts[16];
        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_62 == NULL)) {
            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_kw_call_value_1_6);

            exception_lineno = 373;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[196]);
        if (tmp_kw_call_value_3_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_kw_call_value_1_6);

            exception_lineno = 373;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_6 = Py_True;
        frame_e19096a038f814a00b37b63de7e7d714->m_frame.f_lineno = 370;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_8, tmp_kw_call_value_1_6, tmp_kw_call_value_2_6, tmp_kw_call_value_3_6, tmp_kw_call_value_4_6};

            tmp_assign_source_66 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_23, kw_values, mod_consts[197]);
        }

        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_kw_call_value_1_6);
        Py_DECREF(tmp_kw_call_value_3_6);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_kw_call_value_0_9;
        PyObject *tmp_kw_call_value_1_7;
        PyObject *tmp_kw_call_value_2_7;
        PyObject *tmp_kw_call_value_3_7;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_kw_call_value_4_7;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_kw_call_value_5_5;
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[156]);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_9 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_kw_call_value_0_9 == NULL)) {
            tmp_kw_call_value_0_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
        }

        if (tmp_kw_call_value_0_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_7 = mod_consts[16];
        tmp_kw_call_value_2_7 = mod_consts[159];
        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_64 == NULL)) {
            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[181]);
        if (tmp_kw_call_value_3_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_kw_call_value_3_7);

            exception_lineno = 380;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[5]);
        if (tmp_kw_call_value_4_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_kw_call_value_3_7);

            exception_lineno = 380;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_5 = Py_True;
        frame_e19096a038f814a00b37b63de7e7d714->m_frame.f_lineno = 376;
        {
            PyObject *kw_values[6] = {tmp_kw_call_value_0_9, tmp_kw_call_value_1_7, tmp_kw_call_value_2_7, tmp_kw_call_value_3_7, tmp_kw_call_value_4_7, tmp_kw_call_value_5_5};

            tmp_assign_source_67 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_24, kw_values, mod_consts[182]);
        }

        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_kw_call_value_3_7);
        Py_DECREF(tmp_kw_call_value_4_7);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_kw_call_value_0_10;
        PyObject *tmp_kw_call_value_1_8;
        PyObject *tmp_kw_call_value_2_8;
        PyObject *tmp_kw_call_value_3_8;
        PyObject *tmp_expression_value_67;
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;

            goto frame_exception_exit_1;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[156]);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_10 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_kw_call_value_0_10 == NULL)) {
            tmp_kw_call_value_0_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_kw_call_value_0_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 387;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_8 = mod_consts[16];
        tmp_kw_call_value_2_8 = mod_consts[159];
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 390;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[181]);
        if (tmp_kw_call_value_3_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 390;

            goto frame_exception_exit_1;
        }
        frame_e19096a038f814a00b37b63de7e7d714->m_frame.f_lineno = 387;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_10, tmp_kw_call_value_1_8, tmp_kw_call_value_2_8, tmp_kw_call_value_3_8};

            tmp_assign_source_68 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_25, kw_values, mod_consts[200]);
        }

        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_kw_call_value_3_8);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_kw_call_value_0_11;
        PyObject *tmp_kw_call_value_1_9;
        PyObject *tmp_kw_call_value_2_9;
        PyObject *tmp_kw_call_value_3_9;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_kw_call_value_4_8;
        PyObject *tmp_expression_value_70;
        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_expression_value_68 == NULL)) {
            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
        }

        if (tmp_expression_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto frame_exception_exit_1;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[156]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_11 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_kw_call_value_0_11 == NULL)) {
            tmp_kw_call_value_0_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_kw_call_value_0_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 396;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_9 = mod_consts[184];
        tmp_kw_call_value_2_9 = mod_consts[185];
        tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_69 == NULL)) {
            tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 399;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[186]);
        if (tmp_kw_call_value_3_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 399;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_70 == NULL)) {
            tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_kw_call_value_3_9);

            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[4]);
        if (tmp_kw_call_value_4_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_kw_call_value_3_9);

            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        frame_e19096a038f814a00b37b63de7e7d714->m_frame.f_lineno = 396;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_11, tmp_kw_call_value_1_9, tmp_kw_call_value_2_9, tmp_kw_call_value_3_9, tmp_kw_call_value_4_8};

            tmp_assign_source_69 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_26, kw_values, mod_consts[202]);
        }

        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_kw_call_value_3_9);
        Py_DECREF(tmp_kw_call_value_4_8);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_kw_call_value_0_12;
        PyObject *tmp_kw_call_value_1_10;
        PyObject *tmp_kw_call_value_2_10;
        PyObject *tmp_kw_call_value_3_10;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_kw_call_value_4_9;
        PyObject *tmp_expression_value_73;
        tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_expression_value_71 == NULL)) {
            tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
        }

        if (tmp_expression_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;

            goto frame_exception_exit_1;
        }
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[156]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_12 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_kw_call_value_0_12 == NULL)) {
            tmp_kw_call_value_0_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        if (tmp_kw_call_value_0_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 405;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_10 = mod_consts[184];
        tmp_kw_call_value_2_10 = mod_consts[185];
        tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_72 == NULL)) {
            tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 408;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_3_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[186]);
        if (tmp_kw_call_value_3_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 408;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_73 == NULL)) {
            tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_kw_call_value_3_10);

            exception_lineno = 409;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[1]);
        if (tmp_kw_call_value_4_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_kw_call_value_3_10);

            exception_lineno = 409;

            goto frame_exception_exit_1;
        }
        frame_e19096a038f814a00b37b63de7e7d714->m_frame.f_lineno = 405;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_12, tmp_kw_call_value_1_10, tmp_kw_call_value_2_10, tmp_kw_call_value_3_10, tmp_kw_call_value_4_9};

            tmp_assign_source_70 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_27, kw_values, mod_consts[202]);
        }

        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_kw_call_value_3_10);
        Py_DECREF(tmp_kw_call_value_4_9);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_70);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_5;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e19096a038f814a00b37b63de7e7d714, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e19096a038f814a00b37b63de7e7d714->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e19096a038f814a00b37b63de7e7d714, exception_lineno);
    }



    assertFrameObject(frame_e19096a038f814a00b37b63de7e7d714);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_5:;
    {
        PyObject *tmp_assign_source_71;


        tmp_assign_source_71 = MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__25__is_fake_quant_script_module();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;


        tmp_assign_source_72 = MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__26_disable_fake_quant();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;


        tmp_assign_source_73 = MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__27_enable_fake_quant();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;


        tmp_assign_source_74 = MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__28_disable_observer();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;


        tmp_assign_source_75 = MAKE_FUNCTION_torch$ao$quantization$fake_quantize$$$function__29_enable_observer();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_75);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch.ao.quantization.fake_quantize", false);

    Py_INCREF(module_torch$ao$quantization$fake_quantize);
    return module_torch$ao$quantization$fake_quantize;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$fake_quantize, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$ao$quantization$fake_quantize", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
