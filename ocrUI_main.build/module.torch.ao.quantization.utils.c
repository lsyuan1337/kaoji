/* Generated code for Python module 'torch.ao.quantization.utils'
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

/* The "module_torch$ao$quantization$utils" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$ao$quantization$utils;
PyDictObject *moduledict_torch$ao$quantization$utils;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[166];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[166];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch.ao.quantization.utils"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 166; i++) {
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
void checkModuleConstants_torch$ao$quantization$utils(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 166; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_ebbf111e9996ca46efd11e762df9876d;
static PyCodeObject *codeobj_9b8c0f18688165c2d2cf2b9f7d0c55ae;
static PyCodeObject *codeobj_d42cb18acba32f1714ded503cd2b06e5;
static PyCodeObject *codeobj_6f4cf4fa9a0f83c06d1b88c958dffa3d;
static PyCodeObject *codeobj_8f82a69982b9a4b24de61edd3e1852d7;
static PyCodeObject *codeobj_178cd6122a9de20e69148dd82b0e9fd6;
static PyCodeObject *codeobj_bc48057364e2e79c5ffbcb7199f75a5a;
static PyCodeObject *codeobj_4c16df4fa9c2f72d9c58dee5666ed83d;
static PyCodeObject *codeobj_600126626c3a41493a675834801d54e6;
static PyCodeObject *codeobj_ea97f5d936e295445b9de4eccabed52c;
static PyCodeObject *codeobj_24c95b047280ef965e51efc99af3dd53;
static PyCodeObject *codeobj_5dc61a61e50dfa3d31a4d178f620b1c7;
static PyCodeObject *codeobj_51674c464dfcde6814e2aef8bc22de5c;
static PyCodeObject *codeobj_6fd8a265f97830d2be971d0090c59ae8;
static PyCodeObject *codeobj_fda4ae8c108bb79177ff3116831328a5;
static PyCodeObject *codeobj_d3025705769c0ab3465d7e3a80ace1d8;
static PyCodeObject *codeobj_814068e81954f24652f97d194be7f032;
static PyCodeObject *codeobj_855bea607339008494fac1e64cfd510d;
static PyCodeObject *codeobj_f29e7e06e328eb1c7444ba774a69d69d;
static PyCodeObject *codeobj_514acb2cf0cb5ca689abb6c906e03ee2;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[149]); CHECK_OBJECT(module_filename_obj);
    codeobj_ebbf111e9996ca46efd11e762df9876d = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[150], mod_consts[150], NULL, NULL, 0, 0, 0);
    codeobj_9b8c0f18688165c2d2cf2b9f7d0c55ae = MAKE_CODE_OBJECT(module_filename_obj, 274, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[148], mod_consts[148], mod_consts[151], NULL, 1, 0, 0);
    codeobj_d42cb18acba32f1714ded503cd2b06e5 = MAKE_CODE_OBJECT(module_filename_obj, 118, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[42], mod_consts[42], mod_consts[152], NULL, 1, 0, 0);
    codeobj_6f4cf4fa9a0f83c06d1b88c958dffa3d = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[134], mod_consts[134], mod_consts[153], NULL, 1, 0, 0);
    codeobj_8f82a69982b9a4b24de61edd3e1852d7 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[133], mod_consts[133], mod_consts[153], NULL, 1, 0, 0);
    codeobj_178cd6122a9de20e69148dd82b0e9fd6 = MAKE_CODE_OBJECT(module_filename_obj, 228, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[147], mod_consts[147], mod_consts[154], NULL, 5, 0, 0);
    codeobj_bc48057364e2e79c5ffbcb7199f75a5a = MAKE_CODE_OBJECT(module_filename_obj, 197, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[141], mod_consts[141], mod_consts[155], NULL, 2, 0, 0);
    codeobj_4c16df4fa9c2f72d9c58dee5666ed83d = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[125], mod_consts[125], mod_consts[156], NULL, 2, 0, 0);
    codeobj_600126626c3a41493a675834801d54e6 = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[126], mod_consts[126], mod_consts[157], NULL, 2, 0, 0);
    codeobj_ea97f5d936e295445b9de4eccabed52c = MAKE_CODE_OBJECT(module_filename_obj, 165, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[51], mod_consts[51], mod_consts[158], NULL, 1, 0, 0);
    codeobj_24c95b047280ef965e51efc99af3dd53 = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[131], mod_consts[131], mod_consts[159], NULL, 1, 0, 0);
    codeobj_5dc61a61e50dfa3d31a4d178f620b1c7 = MAKE_CODE_OBJECT(module_filename_obj, 175, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], mod_consts[35], mod_consts[160], NULL, 1, 0, 0);
    codeobj_51674c464dfcde6814e2aef8bc22de5c = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[132], mod_consts[132], mod_consts[161], NULL, 3, 0, 0);
    codeobj_6fd8a265f97830d2be971d0090c59ae8 = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[130], mod_consts[130], mod_consts[162], NULL, 2, 0, 0);
    codeobj_fda4ae8c108bb79177ff3116831328a5 = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[163], NULL, 1, 0, 0);
    codeobj_d3025705769c0ab3465d7e3a80ace1d8 = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[24], mod_consts[163], NULL, 1, 0, 0);
    codeobj_814068e81954f24652f97d194be7f032 = MAKE_CODE_OBJECT(module_filename_obj, 152, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[138], mod_consts[138], mod_consts[164], NULL, 1, 0, 0);
    codeobj_855bea607339008494fac1e64cfd510d = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[48], mod_consts[48], mod_consts[165], NULL, 1, 0, 0);
    codeobj_f29e7e06e328eb1c7444ba774a69d69d = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[135], mod_consts[135], mod_consts[153], NULL, 1, 0, 0);
    codeobj_514acb2cf0cb5ca689abb6c906e03ee2 = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[136], mod_consts[136], mod_consts[153], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__10_activation_is_statically_quantized();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__11_activation_is_int8_quantized();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__12_weight_is_quantized();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__13_weight_is_statically_quantized();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__14_op_is_int8_dynamically_quantized(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__15_get_qconfig_dtypes();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__16_get_quant_type();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__17_check_min_max_valid(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__18_calculate_qmin_qmax(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__19__parent_name();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__1_check_node();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__2_get_combined_dict();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__3_is_per_tensor();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__4_is_per_channel();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__5_getattr_from_fqn(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__6_get_qparam_dict();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__7_get_swapped_custom_module_class();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__8_activation_dtype();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__9_weight_dtype();


// The module function definitions.
static PyObject *impl_torch$ao$quantization$utils$$$function__1_check_node(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_node = python_pars[0];
    PyObject *par_modules = python_pars[1];
    PyObject *var_is_call_function = NULL;
    PyObject *var_is_call_method = NULL;
    PyObject *var_is_call_module = NULL;
    struct Nuitka_FrameObject *frame_4c16df4fa9c2f72d9c58dee5666ed83d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4c16df4fa9c2f72d9c58dee5666ed83d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4c16df4fa9c2f72d9c58dee5666ed83d)) {
        Py_XDECREF(cache_frame_4c16df4fa9c2f72d9c58dee5666ed83d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4c16df4fa9c2f72d9c58dee5666ed83d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4c16df4fa9c2f72d9c58dee5666ed83d = MAKE_FUNCTION_FRAME(codeobj_4c16df4fa9c2f72d9c58dee5666ed83d, module_torch$ao$quantization$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4c16df4fa9c2f72d9c58dee5666ed83d->m_type_description == NULL);
    frame_4c16df4fa9c2f72d9c58dee5666ed83d = cache_frame_4c16df4fa9c2f72d9c58dee5666ed83d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4c16df4fa9c2f72d9c58dee5666ed83d);
    assert(Py_REFCNT(frame_4c16df4fa9c2f72d9c58dee5666ed83d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_node);
        tmp_expression_value_1 = par_node;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[1];
        tmp_and_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_and_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 46;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF(tmp_and_left_value_1);
        CHECK_OBJECT(par_node);
        tmp_expression_value_2 = par_node;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 46;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_and_right_value_1);
        tmp_assign_source_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_assign_source_1 = tmp_and_left_value_1;
        and_end_1:;
        assert(var_is_call_function == NULL);
        var_is_call_function = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_node);
        tmp_expression_value_3 = par_node;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[0]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = mod_consts[4];
        tmp_and_left_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_and_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_2);

            exception_lineno = 47;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        Py_DECREF(tmp_and_left_value_2);
        CHECK_OBJECT(par_node);
        tmp_expression_value_4 = par_node;
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[2]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
            tmp_cmp_expr_right_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);

            exception_lineno = 47;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = (tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_and_right_value_2);
        tmp_assign_source_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_assign_source_2 = tmp_and_left_value_2;
        and_end_2:;
        assert(var_is_call_method == NULL);
        var_is_call_method = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        int tmp_and_left_truth_3;
        PyObject *tmp_and_left_value_3;
        PyObject *tmp_and_right_value_3;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_node);
        tmp_expression_value_5 = par_node;
        tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[0]);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = mod_consts[6];
        tmp_and_left_value_3 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_and_left_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_3 = CHECK_IF_TRUE(tmp_and_left_value_3);
        if (tmp_and_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_3);

            exception_lineno = 48;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        Py_DECREF(tmp_and_left_value_3);
        CHECK_OBJECT(par_modules);
        tmp_expression_value_6 = par_modules;
        CHECK_OBJECT(par_node);
        tmp_expression_value_7 = par_node;
        tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[2]);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_6 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_cmp_expr_right_6 == NULL)) {
            tmp_cmp_expr_right_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_cmp_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_6);

            exception_lineno = 48;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = (tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_and_right_value_3);
        tmp_assign_source_3 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_assign_source_3 = tmp_and_left_value_3;
        and_end_3:;
        assert(var_is_call_module == NULL);
        var_is_call_module = tmp_assign_source_3;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4c16df4fa9c2f72d9c58dee5666ed83d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4c16df4fa9c2f72d9c58dee5666ed83d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4c16df4fa9c2f72d9c58dee5666ed83d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4c16df4fa9c2f72d9c58dee5666ed83d,
        type_description_1,
        par_node,
        par_modules,
        var_is_call_function,
        var_is_call_method,
        var_is_call_module
    );


    // Release cached frame if used for exception.
    if (frame_4c16df4fa9c2f72d9c58dee5666ed83d == cache_frame_4c16df4fa9c2f72d9c58dee5666ed83d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4c16df4fa9c2f72d9c58dee5666ed83d);
        cache_frame_4c16df4fa9c2f72d9c58dee5666ed83d = NULL;
    }

    assertFrameObject(frame_4c16df4fa9c2f72d9c58dee5666ed83d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_is_call_function);
        tmp_tuple_element_1 = var_is_call_function;
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_is_call_method);
        tmp_tuple_element_1 = var_is_call_method;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_is_call_module);
        tmp_tuple_element_1 = var_is_call_module;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_is_call_function);
    Py_DECREF(var_is_call_function);
    var_is_call_function = NULL;
    CHECK_OBJECT(var_is_call_method);
    Py_DECREF(var_is_call_method);
    var_is_call_method = NULL;
    CHECK_OBJECT(var_is_call_module);
    Py_DECREF(var_is_call_module);
    var_is_call_module = NULL;
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

    Py_XDECREF(var_is_call_function);
    var_is_call_function = NULL;
    Py_XDECREF(var_is_call_method);
    var_is_call_method = NULL;
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
    CHECK_OBJECT(par_node);
    Py_DECREF(par_node);
    CHECK_OBJECT(par_modules);
    Py_DECREF(par_modules);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_node);
    Py_DECREF(par_node);
    CHECK_OBJECT(par_modules);
    Py_DECREF(par_modules);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$utils$$$function__2_get_combined_dict(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_default_dict = python_pars[0];
    PyObject *par_additional_dict = python_pars[1];
    PyObject *var_d = NULL;
    struct Nuitka_FrameObject *frame_600126626c3a41493a675834801d54e6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_600126626c3a41493a675834801d54e6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_600126626c3a41493a675834801d54e6)) {
        Py_XDECREF(cache_frame_600126626c3a41493a675834801d54e6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_600126626c3a41493a675834801d54e6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_600126626c3a41493a675834801d54e6 = MAKE_FUNCTION_FRAME(codeobj_600126626c3a41493a675834801d54e6, module_torch$ao$quantization$utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_600126626c3a41493a675834801d54e6->m_type_description == NULL);
    frame_600126626c3a41493a675834801d54e6 = cache_frame_600126626c3a41493a675834801d54e6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_600126626c3a41493a675834801d54e6);
    assert(Py_REFCNT(frame_600126626c3a41493a675834801d54e6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_default_dict);
        tmp_expression_value_1 = par_default_dict;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_600126626c3a41493a675834801d54e6->m_frame.f_lineno = 52;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_d == NULL);
        var_d = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_d);
        tmp_expression_value_2 = var_d;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[9]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_additional_dict);
        tmp_args_element_value_1 = par_additional_dict;
        frame_600126626c3a41493a675834801d54e6->m_frame.f_lineno = 53;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_600126626c3a41493a675834801d54e6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_600126626c3a41493a675834801d54e6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_600126626c3a41493a675834801d54e6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_600126626c3a41493a675834801d54e6,
        type_description_1,
        par_default_dict,
        par_additional_dict,
        var_d
    );


    // Release cached frame if used for exception.
    if (frame_600126626c3a41493a675834801d54e6 == cache_frame_600126626c3a41493a675834801d54e6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_600126626c3a41493a675834801d54e6);
        cache_frame_600126626c3a41493a675834801d54e6 = NULL;
    }

    assertFrameObject(frame_600126626c3a41493a675834801d54e6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_d);
    tmp_return_value = var_d;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_d);
    Py_DECREF(var_d);
    var_d = NULL;
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

    Py_XDECREF(var_d);
    var_d = NULL;
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
    CHECK_OBJECT(par_default_dict);
    Py_DECREF(par_default_dict);
    CHECK_OBJECT(par_additional_dict);
    Py_DECREF(par_additional_dict);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_default_dict);
    Py_DECREF(par_default_dict);
    CHECK_OBJECT(par_additional_dict);
    Py_DECREF(par_additional_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$utils$$$function__3_is_per_tensor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_qscheme = python_pars[0];
    struct Nuitka_FrameObject *frame_d3025705769c0ab3465d7e3a80ace1d8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d3025705769c0ab3465d7e3a80ace1d8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d3025705769c0ab3465d7e3a80ace1d8)) {
        Py_XDECREF(cache_frame_d3025705769c0ab3465d7e3a80ace1d8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d3025705769c0ab3465d7e3a80ace1d8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d3025705769c0ab3465d7e3a80ace1d8 = MAKE_FUNCTION_FRAME(codeobj_d3025705769c0ab3465d7e3a80ace1d8, module_torch$ao$quantization$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d3025705769c0ab3465d7e3a80ace1d8->m_type_description == NULL);
    frame_d3025705769c0ab3465d7e3a80ace1d8 = cache_frame_d3025705769c0ab3465d7e3a80ace1d8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d3025705769c0ab3465d7e3a80ace1d8);
    assert(Py_REFCNT(frame_d3025705769c0ab3465d7e3a80ace1d8) == 2);

    // Framed code:
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_qscheme);
        tmp_cmp_expr_left_1 = par_qscheme;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        CHECK_OBJECT(par_qscheme);
        tmp_cmp_expr_left_2 = par_qscheme;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[12]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_d3025705769c0ab3465d7e3a80ace1d8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d3025705769c0ab3465d7e3a80ace1d8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d3025705769c0ab3465d7e3a80ace1d8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d3025705769c0ab3465d7e3a80ace1d8,
        type_description_1,
        par_qscheme
    );


    // Release cached frame if used for exception.
    if (frame_d3025705769c0ab3465d7e3a80ace1d8 == cache_frame_d3025705769c0ab3465d7e3a80ace1d8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d3025705769c0ab3465d7e3a80ace1d8);
        cache_frame_d3025705769c0ab3465d7e3a80ace1d8 = NULL;
    }

    assertFrameObject(frame_d3025705769c0ab3465d7e3a80ace1d8);

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


static PyObject *impl_torch$ao$quantization$utils$$$function__4_is_per_channel(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_qscheme = python_pars[0];
    struct Nuitka_FrameObject *frame_fda4ae8c108bb79177ff3116831328a5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_fda4ae8c108bb79177ff3116831328a5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fda4ae8c108bb79177ff3116831328a5)) {
        Py_XDECREF(cache_frame_fda4ae8c108bb79177ff3116831328a5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fda4ae8c108bb79177ff3116831328a5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fda4ae8c108bb79177ff3116831328a5 = MAKE_FUNCTION_FRAME(codeobj_fda4ae8c108bb79177ff3116831328a5, module_torch$ao$quantization$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fda4ae8c108bb79177ff3116831328a5->m_type_description == NULL);
    frame_fda4ae8c108bb79177ff3116831328a5 = cache_frame_fda4ae8c108bb79177ff3116831328a5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fda4ae8c108bb79177ff3116831328a5);
    assert(Py_REFCNT(frame_fda4ae8c108bb79177ff3116831328a5) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_qscheme);
        tmp_cmp_expr_left_1 = par_qscheme;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[13]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyList_SET_ITEM(tmp_cmp_expr_right_1, 0, tmp_list_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_cmp_expr_right_1, 1, tmp_list_element_1);
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[15]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
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


            exception_lineno = 61;
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
        exception_tb = MAKE_TRACEBACK(frame_fda4ae8c108bb79177ff3116831328a5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fda4ae8c108bb79177ff3116831328a5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fda4ae8c108bb79177ff3116831328a5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fda4ae8c108bb79177ff3116831328a5,
        type_description_1,
        par_qscheme
    );


    // Release cached frame if used for exception.
    if (frame_fda4ae8c108bb79177ff3116831328a5 == cache_frame_fda4ae8c108bb79177ff3116831328a5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fda4ae8c108bb79177ff3116831328a5);
        cache_frame_fda4ae8c108bb79177ff3116831328a5 = NULL;
    }

    assertFrameObject(frame_fda4ae8c108bb79177ff3116831328a5);

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


static PyObject *impl_torch$ao$quantization$utils$$$function__5_getattr_from_fqn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    PyObject *par_fqn = python_pars[1];
    struct Nuitka_FrameObject *frame_6fd8a265f97830d2be971d0090c59ae8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6fd8a265f97830d2be971d0090c59ae8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6fd8a265f97830d2be971d0090c59ae8)) {
        Py_XDECREF(cache_frame_6fd8a265f97830d2be971d0090c59ae8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6fd8a265f97830d2be971d0090c59ae8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6fd8a265f97830d2be971d0090c59ae8 = MAKE_FUNCTION_FRAME(codeobj_6fd8a265f97830d2be971d0090c59ae8, module_torch$ao$quantization$utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6fd8a265f97830d2be971d0090c59ae8->m_type_description == NULL);
    frame_6fd8a265f97830d2be971d0090c59ae8 = cache_frame_6fd8a265f97830d2be971d0090c59ae8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6fd8a265f97830d2be971d0090c59ae8);
    assert(Py_REFCNT(frame_6fd8a265f97830d2be971d0090c59ae8) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[17]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_BUILTIN(mod_consts[18]);
        assert(tmp_args_element_value_1 != NULL);
        CHECK_OBJECT(par_fqn);
        tmp_expression_value_2 = par_fqn;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[19]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_6fd8a265f97830d2be971d0090c59ae8->m_frame.f_lineno = 69;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[20]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_obj);
        tmp_args_element_value_3 = par_obj;
        frame_6fd8a265f97830d2be971d0090c59ae8->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
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
        exception_tb = MAKE_TRACEBACK(frame_6fd8a265f97830d2be971d0090c59ae8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6fd8a265f97830d2be971d0090c59ae8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6fd8a265f97830d2be971d0090c59ae8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6fd8a265f97830d2be971d0090c59ae8,
        type_description_1,
        par_obj,
        par_fqn
    );


    // Release cached frame if used for exception.
    if (frame_6fd8a265f97830d2be971d0090c59ae8 == cache_frame_6fd8a265f97830d2be971d0090c59ae8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6fd8a265f97830d2be971d0090c59ae8);
        cache_frame_6fd8a265f97830d2be971d0090c59ae8 = NULL;
    }

    assertFrameObject(frame_6fd8a265f97830d2be971d0090c59ae8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_fqn);
    Py_DECREF(par_fqn);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_fqn);
    Py_DECREF(par_fqn);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$utils$$$function__6_get_qparam_dict(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_observer_or_fake_quant = python_pars[0];
    PyObject *var_qscheme = NULL;
    PyObject *var_dtype = NULL;
    PyObject *var_qparams = NULL;
    PyObject *var_scale = NULL;
    PyObject *var_zero_point = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_24c95b047280ef965e51efc99af3dd53;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
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
    static struct Nuitka_FrameObject *cache_frame_24c95b047280ef965e51efc99af3dd53 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_24c95b047280ef965e51efc99af3dd53)) {
        Py_XDECREF(cache_frame_24c95b047280ef965e51efc99af3dd53);

#if _DEBUG_REFCOUNTS
        if (cache_frame_24c95b047280ef965e51efc99af3dd53 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_24c95b047280ef965e51efc99af3dd53 = MAKE_FUNCTION_FRAME(codeobj_24c95b047280ef965e51efc99af3dd53, module_torch$ao$quantization$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_24c95b047280ef965e51efc99af3dd53->m_type_description == NULL);
    frame_24c95b047280ef965e51efc99af3dd53 = cache_frame_24c95b047280ef965e51efc99af3dd53;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_24c95b047280ef965e51efc99af3dd53);
    assert(Py_REFCNT(frame_24c95b047280ef965e51efc99af3dd53) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_observer_or_fake_quant);
        tmp_expression_value_1 = par_observer_or_fake_quant;
        tmp_attribute_value_1 = mod_consts[22];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_observer_or_fake_quant);
        tmp_expression_value_2 = par_observer_or_fake_quant;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[22]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_1 = Py_None;
        Py_INCREF(tmp_assign_source_1);
        condexpr_end_1:;
        assert(var_qscheme == NULL);
        var_qscheme = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_observer_or_fake_quant);
        tmp_expression_value_3 = par_observer_or_fake_quant;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[23]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dtype == NULL);
        var_dtype = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[22];
        CHECK_OBJECT(var_qscheme);
        tmp_dict_value_1 = var_qscheme;
        tmp_assign_source_3 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[23];
        CHECK_OBJECT(var_dtype);
        tmp_dict_value_1 = var_dtype;
        tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        assert(var_qparams == NULL);
        var_qparams = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_qscheme);
        tmp_operand_value_1 = var_qscheme;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(var_qparams);
    tmp_return_value = var_qparams;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_qscheme);
        tmp_args_element_value_1 = var_qscheme;
        frame_24c95b047280ef965e51efc99af3dd53->m_frame.f_lineno = 79;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 79;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[11]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_qscheme;
            assert(old != NULL);
            var_qscheme = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        int tmp_truth_name_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_qscheme);
        tmp_args_element_value_2 = var_qscheme;
        frame_24c95b047280ef965e51efc99af3dd53->m_frame.f_lineno = 81;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 81;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_qscheme);
        tmp_cmp_expr_left_1 = var_qscheme;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[15]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[13]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_qscheme;
            assert(old != NULL);
            var_qscheme = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    {
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_observer_or_fake_quant);
        tmp_expression_value_7 = par_observer_or_fake_quant;
        tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[26]);
        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_qparams);
        tmp_dictset_dict = var_qparams;
        tmp_dictset_key = mod_consts[27];
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[28];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_qscheme);
            tmp_format_value_1 = var_qscheme;
            tmp_format_spec_1 = mod_consts[29];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[29], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_24c95b047280ef965e51efc99af3dd53->m_frame.f_lineno = 88;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 88;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_end_3:;
    branch_end_2:;
    if (var_qscheme == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 91;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dictset_value = var_qscheme;
    if (var_qparams == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 91;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dictset_dict = var_qparams;
    tmp_dictset_key = mod_consts[22];
    assert(PyDict_CheckExact(tmp_dictset_dict));
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

    assert(!(tmp_res != 0));
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_observer_or_fake_quant);
        tmp_called_instance_1 = par_observer_or_fake_quant;
        frame_24c95b047280ef965e51efc99af3dd53->m_frame.f_lineno = 93;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[31]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 93;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 93;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
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
                    exception_lineno = 93;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[32];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooo";
            exception_lineno = 93;
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
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
        assert(var_scale == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_scale = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
        assert(var_zero_point == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_zero_point = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_scale);
        tmp_ass_subvalue_1 = var_scale;
        if (var_qparams == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 94;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = var_qparams;
        tmp_ass_subscript_1 = mod_consts[33];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(var_zero_point);
        tmp_ass_subvalue_2 = var_zero_point;
        if (var_qparams == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_2 = var_qparams;
        tmp_ass_subscript_2 = mod_consts[34];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    if (var_qparams == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 97;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_qparams;
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
        exception_tb = MAKE_TRACEBACK(frame_24c95b047280ef965e51efc99af3dd53, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_24c95b047280ef965e51efc99af3dd53->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_24c95b047280ef965e51efc99af3dd53, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_24c95b047280ef965e51efc99af3dd53,
        type_description_1,
        par_observer_or_fake_quant,
        var_qscheme,
        var_dtype,
        var_qparams,
        var_scale,
        var_zero_point
    );


    // Release cached frame if used for exception.
    if (frame_24c95b047280ef965e51efc99af3dd53 == cache_frame_24c95b047280ef965e51efc99af3dd53) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_24c95b047280ef965e51efc99af3dd53);
        cache_frame_24c95b047280ef965e51efc99af3dd53 = NULL;
    }

    assertFrameObject(frame_24c95b047280ef965e51efc99af3dd53);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_qscheme);
    var_qscheme = NULL;
    CHECK_OBJECT(var_dtype);
    Py_DECREF(var_dtype);
    var_dtype = NULL;
    Py_XDECREF(var_qparams);
    var_qparams = NULL;
    Py_XDECREF(var_scale);
    var_scale = NULL;
    Py_XDECREF(var_zero_point);
    var_zero_point = NULL;
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

    Py_XDECREF(var_qscheme);
    var_qscheme = NULL;
    Py_XDECREF(var_dtype);
    var_dtype = NULL;
    Py_XDECREF(var_qparams);
    var_qparams = NULL;
    Py_XDECREF(var_scale);
    var_scale = NULL;
    Py_XDECREF(var_zero_point);
    var_zero_point = NULL;
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
    CHECK_OBJECT(par_observer_or_fake_quant);
    Py_DECREF(par_observer_or_fake_quant);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_observer_or_fake_quant);
    Py_DECREF(par_observer_or_fake_quant);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$utils$$$function__7_get_swapped_custom_module_class(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_custom_module = python_pars[0];
    PyObject *par_custom_module_class_mapping = python_pars[1];
    PyObject *par_qconfig = python_pars[2];
    PyObject *var_quant_type = NULL;
    PyObject *var_quant_type_str = NULL;
    PyObject *var_class_mapping = NULL;
    struct Nuitka_FrameObject *frame_51674c464dfcde6814e2aef8bc22de5c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_51674c464dfcde6814e2aef8bc22de5c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_51674c464dfcde6814e2aef8bc22de5c)) {
        Py_XDECREF(cache_frame_51674c464dfcde6814e2aef8bc22de5c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_51674c464dfcde6814e2aef8bc22de5c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_51674c464dfcde6814e2aef8bc22de5c = MAKE_FUNCTION_FRAME(codeobj_51674c464dfcde6814e2aef8bc22de5c, module_torch$ao$quantization$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_51674c464dfcde6814e2aef8bc22de5c->m_type_description == NULL);
    frame_51674c464dfcde6814e2aef8bc22de5c = cache_frame_51674c464dfcde6814e2aef8bc22de5c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_51674c464dfcde6814e2aef8bc22de5c);
    assert(Py_REFCNT(frame_51674c464dfcde6814e2aef8bc22de5c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_qconfig);
        tmp_args_element_value_1 = par_qconfig;
        frame_51674c464dfcde6814e2aef8bc22de5c->m_frame.f_lineno = 111;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_quant_type == NULL);
        var_quant_type = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_quant_type);
        tmp_args_element_value_2 = var_quant_type;
        frame_51674c464dfcde6814e2aef8bc22de5c->m_frame.f_lineno = 112;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_quant_type_str == NULL);
        var_quant_type_str = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_custom_module_class_mapping);
        tmp_expression_value_1 = par_custom_module_class_mapping;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[37]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_quant_type_str);
        tmp_args_element_value_3 = var_quant_type_str;
        tmp_args_element_value_4 = MAKE_DICT_EMPTY();
        frame_51674c464dfcde6814e2aef8bc22de5c->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_class_mapping == NULL);
        var_class_mapping = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_custom_module);
        tmp_type_arg_1 = par_custom_module;
        tmp_cmp_expr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_cmp_expr_left_1 == NULL));
        CHECK_OBJECT(var_class_mapping);
        tmp_cmp_expr_right_1 = var_class_mapping;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
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
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_type_arg_2;
        PyObject *tmp_kw_call_arg_value_2_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_kw_call_arg_value_0_1 = mod_consts[38];
        CHECK_OBJECT(par_custom_module);
        tmp_type_arg_2 = par_custom_module;
        tmp_kw_call_arg_value_1_1 = BUILTIN_TYPE1(tmp_type_arg_2);
        assert(!(tmp_kw_call_arg_value_1_1 == NULL));
        CHECK_OBJECT(var_class_mapping);
        tmp_kw_call_arg_value_2_1 = var_class_mapping;
        frame_51674c464dfcde6814e2aef8bc22de5c->m_frame.f_lineno = 114;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_raise_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_raise_value_1, 0, tmp_tuple_element_1);
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 114;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_type_arg_3;
        CHECK_OBJECT(var_class_mapping);
        tmp_expression_value_2 = var_class_mapping;
        CHECK_OBJECT(par_custom_module);
        tmp_type_arg_3 = par_custom_module;
        tmp_subscript_value_1 = BUILTIN_TYPE1(tmp_type_arg_3);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_51674c464dfcde6814e2aef8bc22de5c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_51674c464dfcde6814e2aef8bc22de5c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_51674c464dfcde6814e2aef8bc22de5c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_51674c464dfcde6814e2aef8bc22de5c,
        type_description_1,
        par_custom_module,
        par_custom_module_class_mapping,
        par_qconfig,
        var_quant_type,
        var_quant_type_str,
        var_class_mapping
    );


    // Release cached frame if used for exception.
    if (frame_51674c464dfcde6814e2aef8bc22de5c == cache_frame_51674c464dfcde6814e2aef8bc22de5c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_51674c464dfcde6814e2aef8bc22de5c);
        cache_frame_51674c464dfcde6814e2aef8bc22de5c = NULL;
    }

    assertFrameObject(frame_51674c464dfcde6814e2aef8bc22de5c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_quant_type);
    Py_DECREF(var_quant_type);
    var_quant_type = NULL;
    CHECK_OBJECT(var_quant_type_str);
    Py_DECREF(var_quant_type_str);
    var_quant_type_str = NULL;
    CHECK_OBJECT(var_class_mapping);
    Py_DECREF(var_class_mapping);
    var_class_mapping = NULL;
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

    Py_XDECREF(var_quant_type);
    var_quant_type = NULL;
    Py_XDECREF(var_quant_type_str);
    var_quant_type_str = NULL;
    Py_XDECREF(var_class_mapping);
    var_class_mapping = NULL;
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
    CHECK_OBJECT(par_custom_module);
    Py_DECREF(par_custom_module);
    CHECK_OBJECT(par_custom_module_class_mapping);
    Py_DECREF(par_custom_module_class_mapping);
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_custom_module);
    Py_DECREF(par_custom_module);
    CHECK_OBJECT(par_custom_module_class_mapping);
    Py_DECREF(par_custom_module_class_mapping);
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$utils$$$function__8_activation_dtype(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_qconfig = python_pars[0];
    PyObject *var_activation = NULL;
    struct Nuitka_FrameObject *frame_d42cb18acba32f1714ded503cd2b06e5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d42cb18acba32f1714ded503cd2b06e5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d42cb18acba32f1714ded503cd2b06e5)) {
        Py_XDECREF(cache_frame_d42cb18acba32f1714ded503cd2b06e5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d42cb18acba32f1714ded503cd2b06e5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d42cb18acba32f1714ded503cd2b06e5 = MAKE_FUNCTION_FRAME(codeobj_d42cb18acba32f1714ded503cd2b06e5, module_torch$ao$quantization$utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d42cb18acba32f1714ded503cd2b06e5->m_type_description == NULL);
    frame_d42cb18acba32f1714ded503cd2b06e5 = cache_frame_d42cb18acba32f1714ded503cd2b06e5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d42cb18acba32f1714ded503cd2b06e5);
    assert(Py_REFCNT(frame_d42cb18acba32f1714ded503cd2b06e5) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_qconfig);
        tmp_cmp_expr_left_1 = par_qconfig;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
        exception_lineno = 119;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_qconfig);
        tmp_called_instance_1 = par_qconfig;
        frame_d42cb18acba32f1714ded503cd2b06e5->m_frame.f_lineno = 120;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[40]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_activation == NULL);
        var_activation = tmp_assign_source_1;
    }
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_activation);
        tmp_expression_value_1 = var_activation;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
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
        exception_tb = MAKE_TRACEBACK(frame_d42cb18acba32f1714ded503cd2b06e5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d42cb18acba32f1714ded503cd2b06e5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d42cb18acba32f1714ded503cd2b06e5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d42cb18acba32f1714ded503cd2b06e5,
        type_description_1,
        par_qconfig,
        var_activation
    );


    // Release cached frame if used for exception.
    if (frame_d42cb18acba32f1714ded503cd2b06e5 == cache_frame_d42cb18acba32f1714ded503cd2b06e5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d42cb18acba32f1714ded503cd2b06e5);
        cache_frame_d42cb18acba32f1714ded503cd2b06e5 = NULL;
    }

    assertFrameObject(frame_d42cb18acba32f1714ded503cd2b06e5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_activation);
    Py_DECREF(var_activation);
    var_activation = NULL;
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

    Py_XDECREF(var_activation);
    var_activation = NULL;
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
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$utils$$$function__9_weight_dtype(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_qconfig = python_pars[0];
    PyObject *var_weight = NULL;
    struct Nuitka_FrameObject *frame_855bea607339008494fac1e64cfd510d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_855bea607339008494fac1e64cfd510d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_855bea607339008494fac1e64cfd510d)) {
        Py_XDECREF(cache_frame_855bea607339008494fac1e64cfd510d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_855bea607339008494fac1e64cfd510d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_855bea607339008494fac1e64cfd510d = MAKE_FUNCTION_FRAME(codeobj_855bea607339008494fac1e64cfd510d, module_torch$ao$quantization$utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_855bea607339008494fac1e64cfd510d->m_type_description == NULL);
    frame_855bea607339008494fac1e64cfd510d = cache_frame_855bea607339008494fac1e64cfd510d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_855bea607339008494fac1e64cfd510d);
    assert(Py_REFCNT(frame_855bea607339008494fac1e64cfd510d) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_qconfig);
        tmp_cmp_expr_left_1 = par_qconfig;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
        exception_lineno = 124;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_qconfig);
        tmp_called_instance_1 = par_qconfig;
        frame_855bea607339008494fac1e64cfd510d->m_frame.f_lineno = 125;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[41]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_weight == NULL);
        var_weight = tmp_assign_source_1;
    }
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_weight);
        tmp_expression_value_1 = var_weight;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
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
        exception_tb = MAKE_TRACEBACK(frame_855bea607339008494fac1e64cfd510d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_855bea607339008494fac1e64cfd510d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_855bea607339008494fac1e64cfd510d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_855bea607339008494fac1e64cfd510d,
        type_description_1,
        par_qconfig,
        var_weight
    );


    // Release cached frame if used for exception.
    if (frame_855bea607339008494fac1e64cfd510d == cache_frame_855bea607339008494fac1e64cfd510d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_855bea607339008494fac1e64cfd510d);
        cache_frame_855bea607339008494fac1e64cfd510d = NULL;
    }

    assertFrameObject(frame_855bea607339008494fac1e64cfd510d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_weight);
    Py_DECREF(var_weight);
    var_weight = NULL;
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

    Py_XDECREF(var_weight);
    var_weight = NULL;
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
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$utils$$$function__10_activation_is_statically_quantized(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_qconfig = python_pars[0];
    struct Nuitka_FrameObject *frame_8f82a69982b9a4b24de61edd3e1852d7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8f82a69982b9a4b24de61edd3e1852d7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8f82a69982b9a4b24de61edd3e1852d7)) {
        Py_XDECREF(cache_frame_8f82a69982b9a4b24de61edd3e1852d7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8f82a69982b9a4b24de61edd3e1852d7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8f82a69982b9a4b24de61edd3e1852d7 = MAKE_FUNCTION_FRAME(codeobj_8f82a69982b9a4b24de61edd3e1852d7, module_torch$ao$quantization$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8f82a69982b9a4b24de61edd3e1852d7->m_type_description == NULL);
    frame_8f82a69982b9a4b24de61edd3e1852d7 = cache_frame_8f82a69982b9a4b24de61edd3e1852d7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8f82a69982b9a4b24de61edd3e1852d7);
    assert(Py_REFCNT(frame_8f82a69982b9a4b24de61edd3e1852d7) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_qconfig);
        tmp_args_element_value_1 = par_qconfig;
        frame_8f82a69982b9a4b24de61edd3e1852d7->m_frame.f_lineno = 132;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 132;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[43]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 132;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyList_SET_ITEM(tmp_cmp_expr_right_1, 0, tmp_list_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[44]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_cmp_expr_right_1, 1, tmp_list_element_1);
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[45]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_cmp_expr_right_1, 2, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
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
        exception_tb = MAKE_TRACEBACK(frame_8f82a69982b9a4b24de61edd3e1852d7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8f82a69982b9a4b24de61edd3e1852d7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8f82a69982b9a4b24de61edd3e1852d7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8f82a69982b9a4b24de61edd3e1852d7,
        type_description_1,
        par_qconfig
    );


    // Release cached frame if used for exception.
    if (frame_8f82a69982b9a4b24de61edd3e1852d7 == cache_frame_8f82a69982b9a4b24de61edd3e1852d7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8f82a69982b9a4b24de61edd3e1852d7);
        cache_frame_8f82a69982b9a4b24de61edd3e1852d7 = NULL;
    }

    assertFrameObject(frame_8f82a69982b9a4b24de61edd3e1852d7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$utils$$$function__11_activation_is_int8_quantized(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_qconfig = python_pars[0];
    struct Nuitka_FrameObject *frame_6f4cf4fa9a0f83c06d1b88c958dffa3d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_6f4cf4fa9a0f83c06d1b88c958dffa3d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6f4cf4fa9a0f83c06d1b88c958dffa3d)) {
        Py_XDECREF(cache_frame_6f4cf4fa9a0f83c06d1b88c958dffa3d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6f4cf4fa9a0f83c06d1b88c958dffa3d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6f4cf4fa9a0f83c06d1b88c958dffa3d = MAKE_FUNCTION_FRAME(codeobj_6f4cf4fa9a0f83c06d1b88c958dffa3d, module_torch$ao$quantization$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6f4cf4fa9a0f83c06d1b88c958dffa3d->m_type_description == NULL);
    frame_6f4cf4fa9a0f83c06d1b88c958dffa3d = cache_frame_6f4cf4fa9a0f83c06d1b88c958dffa3d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6f4cf4fa9a0f83c06d1b88c958dffa3d);
    assert(Py_REFCNT(frame_6f4cf4fa9a0f83c06d1b88c958dffa3d) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_qconfig);
        tmp_args_element_value_1 = par_qconfig;
        frame_6f4cf4fa9a0f83c06d1b88c958dffa3d->m_frame.f_lineno = 138;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 138;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[43]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 138;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_expression_value_2;
            PyList_SET_ITEM(tmp_cmp_expr_right_1, 0, tmp_list_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[44]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_cmp_expr_right_1, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
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
        exception_tb = MAKE_TRACEBACK(frame_6f4cf4fa9a0f83c06d1b88c958dffa3d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6f4cf4fa9a0f83c06d1b88c958dffa3d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6f4cf4fa9a0f83c06d1b88c958dffa3d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6f4cf4fa9a0f83c06d1b88c958dffa3d,
        type_description_1,
        par_qconfig
    );


    // Release cached frame if used for exception.
    if (frame_6f4cf4fa9a0f83c06d1b88c958dffa3d == cache_frame_6f4cf4fa9a0f83c06d1b88c958dffa3d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6f4cf4fa9a0f83c06d1b88c958dffa3d);
        cache_frame_6f4cf4fa9a0f83c06d1b88c958dffa3d = NULL;
    }

    assertFrameObject(frame_6f4cf4fa9a0f83c06d1b88c958dffa3d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$utils$$$function__12_weight_is_quantized(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_qconfig = python_pars[0];
    struct Nuitka_FrameObject *frame_f29e7e06e328eb1c7444ba774a69d69d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f29e7e06e328eb1c7444ba774a69d69d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f29e7e06e328eb1c7444ba774a69d69d)) {
        Py_XDECREF(cache_frame_f29e7e06e328eb1c7444ba774a69d69d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f29e7e06e328eb1c7444ba774a69d69d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f29e7e06e328eb1c7444ba774a69d69d = MAKE_FUNCTION_FRAME(codeobj_f29e7e06e328eb1c7444ba774a69d69d, module_torch$ao$quantization$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f29e7e06e328eb1c7444ba774a69d69d->m_type_description == NULL);
    frame_f29e7e06e328eb1c7444ba774a69d69d = cache_frame_f29e7e06e328eb1c7444ba774a69d69d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f29e7e06e328eb1c7444ba774a69d69d);
    assert(Py_REFCNT(frame_f29e7e06e328eb1c7444ba774a69d69d) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_qconfig);
        tmp_args_element_value_1 = par_qconfig;
        frame_f29e7e06e328eb1c7444ba774a69d69d->m_frame.f_lineno = 144;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 144;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[43]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 144;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyList_SET_ITEM(tmp_cmp_expr_right_1, 0, tmp_list_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[44]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_cmp_expr_right_1, 1, tmp_list_element_1);
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[45]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_cmp_expr_right_1, 2, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
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
        exception_tb = MAKE_TRACEBACK(frame_f29e7e06e328eb1c7444ba774a69d69d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f29e7e06e328eb1c7444ba774a69d69d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f29e7e06e328eb1c7444ba774a69d69d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f29e7e06e328eb1c7444ba774a69d69d,
        type_description_1,
        par_qconfig
    );


    // Release cached frame if used for exception.
    if (frame_f29e7e06e328eb1c7444ba774a69d69d == cache_frame_f29e7e06e328eb1c7444ba774a69d69d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f29e7e06e328eb1c7444ba774a69d69d);
        cache_frame_f29e7e06e328eb1c7444ba774a69d69d = NULL;
    }

    assertFrameObject(frame_f29e7e06e328eb1c7444ba774a69d69d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$utils$$$function__13_weight_is_statically_quantized(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_qconfig = python_pars[0];
    struct Nuitka_FrameObject *frame_514acb2cf0cb5ca689abb6c906e03ee2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_514acb2cf0cb5ca689abb6c906e03ee2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_514acb2cf0cb5ca689abb6c906e03ee2)) {
        Py_XDECREF(cache_frame_514acb2cf0cb5ca689abb6c906e03ee2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_514acb2cf0cb5ca689abb6c906e03ee2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_514acb2cf0cb5ca689abb6c906e03ee2 = MAKE_FUNCTION_FRAME(codeobj_514acb2cf0cb5ca689abb6c906e03ee2, module_torch$ao$quantization$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_514acb2cf0cb5ca689abb6c906e03ee2->m_type_description == NULL);
    frame_514acb2cf0cb5ca689abb6c906e03ee2 = cache_frame_514acb2cf0cb5ca689abb6c906e03ee2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_514acb2cf0cb5ca689abb6c906e03ee2);
    assert(Py_REFCNT(frame_514acb2cf0cb5ca689abb6c906e03ee2) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_qconfig);
        tmp_args_element_value_1 = par_qconfig;
        frame_514acb2cf0cb5ca689abb6c906e03ee2->m_frame.f_lineno = 150;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 150;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[43]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 150;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_expression_value_2;
            PyList_SET_ITEM(tmp_cmp_expr_right_1, 0, tmp_list_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[44]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_cmp_expr_right_1, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
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
        exception_tb = MAKE_TRACEBACK(frame_514acb2cf0cb5ca689abb6c906e03ee2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_514acb2cf0cb5ca689abb6c906e03ee2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_514acb2cf0cb5ca689abb6c906e03ee2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_514acb2cf0cb5ca689abb6c906e03ee2,
        type_description_1,
        par_qconfig
    );


    // Release cached frame if used for exception.
    if (frame_514acb2cf0cb5ca689abb6c906e03ee2 == cache_frame_514acb2cf0cb5ca689abb6c906e03ee2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_514acb2cf0cb5ca689abb6c906e03ee2);
        cache_frame_514acb2cf0cb5ca689abb6c906e03ee2 = NULL;
    }

    assertFrameObject(frame_514acb2cf0cb5ca689abb6c906e03ee2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$utils$$$function__14_op_is_int8_dynamically_quantized(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_qconfig = python_pars[0];
    PyObject *var_activation_dtype = NULL;
    PyObject *var_weight_dtype = NULL;
    PyObject *var_activation_compute_dtype = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_814068e81954f24652f97d194be7f032;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_814068e81954f24652f97d194be7f032 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_814068e81954f24652f97d194be7f032)) {
        Py_XDECREF(cache_frame_814068e81954f24652f97d194be7f032);

#if _DEBUG_REFCOUNTS
        if (cache_frame_814068e81954f24652f97d194be7f032 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_814068e81954f24652f97d194be7f032 = MAKE_FUNCTION_FRAME(codeobj_814068e81954f24652f97d194be7f032, module_torch$ao$quantization$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_814068e81954f24652f97d194be7f032->m_type_description == NULL);
    frame_814068e81954f24652f97d194be7f032 = cache_frame_814068e81954f24652f97d194be7f032;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_814068e81954f24652f97d194be7f032);
    assert(Py_REFCNT(frame_814068e81954f24652f97d194be7f032) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_qconfig);
        tmp_args_element_value_1 = par_qconfig;
        frame_814068e81954f24652f97d194be7f032->m_frame.f_lineno = 157;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
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
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
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
            exception_lineno = 156;
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
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
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
            exception_lineno = 156;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 156;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
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
                    exception_lineno = 156;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[52];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooo";
            exception_lineno = 156;
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
        assert(var_activation_dtype == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_activation_dtype = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_weight_dtype == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_weight_dtype = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
        assert(var_activation_compute_dtype == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_activation_compute_dtype = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_activation_dtype);
        tmp_cmp_expr_left_1 = var_activation_dtype;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[53]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
        Py_DECREF(tmp_cmp_expr_right_1);
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_weight_dtype);
        tmp_cmp_expr_left_2 = var_weight_dtype;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[44]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? Py_True : Py_False;
        Py_DECREF(tmp_cmp_expr_right_2);
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_activation_compute_dtype);
        tmp_cmp_expr_left_3 = var_activation_compute_dtype;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[43]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? Py_True : Py_False;
        Py_DECREF(tmp_cmp_expr_right_3);
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_814068e81954f24652f97d194be7f032, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_814068e81954f24652f97d194be7f032->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_814068e81954f24652f97d194be7f032, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_814068e81954f24652f97d194be7f032,
        type_description_1,
        par_qconfig,
        var_activation_dtype,
        var_weight_dtype,
        var_activation_compute_dtype
    );


    // Release cached frame if used for exception.
    if (frame_814068e81954f24652f97d194be7f032 == cache_frame_814068e81954f24652f97d194be7f032) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_814068e81954f24652f97d194be7f032);
        cache_frame_814068e81954f24652f97d194be7f032 = NULL;
    }

    assertFrameObject(frame_814068e81954f24652f97d194be7f032);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_activation_dtype);
    Py_DECREF(var_activation_dtype);
    var_activation_dtype = NULL;
    CHECK_OBJECT(var_weight_dtype);
    Py_DECREF(var_weight_dtype);
    var_weight_dtype = NULL;
    CHECK_OBJECT(var_activation_compute_dtype);
    Py_DECREF(var_activation_compute_dtype);
    var_activation_compute_dtype = NULL;
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

    Py_XDECREF(var_activation_dtype);
    var_activation_dtype = NULL;
    Py_XDECREF(var_weight_dtype);
    var_weight_dtype = NULL;
    Py_XDECREF(var_activation_compute_dtype);
    var_activation_compute_dtype = NULL;
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
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$utils$$$function__15_get_qconfig_dtypes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_qconfig = python_pars[0];
    PyObject *var_activation = NULL;
    PyObject *var_weight = NULL;
    PyObject *var_compute_dtype = NULL;
    struct Nuitka_FrameObject *frame_ea97f5d936e295445b9de4eccabed52c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ea97f5d936e295445b9de4eccabed52c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ea97f5d936e295445b9de4eccabed52c)) {
        Py_XDECREF(cache_frame_ea97f5d936e295445b9de4eccabed52c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ea97f5d936e295445b9de4eccabed52c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ea97f5d936e295445b9de4eccabed52c = MAKE_FUNCTION_FRAME(codeobj_ea97f5d936e295445b9de4eccabed52c, module_torch$ao$quantization$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ea97f5d936e295445b9de4eccabed52c->m_type_description == NULL);
    frame_ea97f5d936e295445b9de4eccabed52c = cache_frame_ea97f5d936e295445b9de4eccabed52c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ea97f5d936e295445b9de4eccabed52c);
    assert(Py_REFCNT(frame_ea97f5d936e295445b9de4eccabed52c) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_qconfig);
        tmp_cmp_expr_left_1 = par_qconfig;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
        exception_lineno = 169;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_qconfig);
        tmp_called_instance_1 = par_qconfig;
        frame_ea97f5d936e295445b9de4eccabed52c->m_frame.f_lineno = 170;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[40]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_activation == NULL);
        var_activation = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_qconfig);
        tmp_called_instance_2 = par_qconfig;
        frame_ea97f5d936e295445b9de4eccabed52c->m_frame.f_lineno = 171;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[41]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_weight == NULL);
        var_weight = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_activation);
        tmp_expression_value_1 = var_activation;
        tmp_attribute_value_1 = mod_consts[55];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_activation);
        tmp_expression_value_2 = var_activation;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[55]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_3 = Py_None;
        Py_INCREF(tmp_assign_source_3);
        condexpr_end_1:;
        assert(var_compute_dtype == NULL);
        var_compute_dtype = tmp_assign_source_3;
    }
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_activation);
        tmp_expression_value_3 = var_activation;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[23]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_4;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_weight);
            tmp_expression_value_4 = var_weight;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[23]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_compute_dtype);
            tmp_tuple_element_1 = var_compute_dtype;
            PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ea97f5d936e295445b9de4eccabed52c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ea97f5d936e295445b9de4eccabed52c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ea97f5d936e295445b9de4eccabed52c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ea97f5d936e295445b9de4eccabed52c,
        type_description_1,
        par_qconfig,
        var_activation,
        var_weight,
        var_compute_dtype
    );


    // Release cached frame if used for exception.
    if (frame_ea97f5d936e295445b9de4eccabed52c == cache_frame_ea97f5d936e295445b9de4eccabed52c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ea97f5d936e295445b9de4eccabed52c);
        cache_frame_ea97f5d936e295445b9de4eccabed52c = NULL;
    }

    assertFrameObject(frame_ea97f5d936e295445b9de4eccabed52c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_activation);
    Py_DECREF(var_activation);
    var_activation = NULL;
    CHECK_OBJECT(var_weight);
    Py_DECREF(var_weight);
    var_weight = NULL;
    CHECK_OBJECT(var_compute_dtype);
    Py_DECREF(var_compute_dtype);
    var_compute_dtype = NULL;
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

    Py_XDECREF(var_activation);
    var_activation = NULL;
    Py_XDECREF(var_weight);
    var_weight = NULL;
    Py_XDECREF(var_compute_dtype);
    var_compute_dtype = NULL;
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
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$utils$$$function__16_get_quant_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_qconfig = python_pars[0];
    PyObject *var_activation = NULL;
    PyObject *var_weight = NULL;
    PyObject *var_static_dtypes = NULL;
    struct Nuitka_FrameObject *frame_5dc61a61e50dfa3d31a4d178f620b1c7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5dc61a61e50dfa3d31a4d178f620b1c7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5dc61a61e50dfa3d31a4d178f620b1c7)) {
        Py_XDECREF(cache_frame_5dc61a61e50dfa3d31a4d178f620b1c7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5dc61a61e50dfa3d31a4d178f620b1c7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5dc61a61e50dfa3d31a4d178f620b1c7 = MAKE_FUNCTION_FRAME(codeobj_5dc61a61e50dfa3d31a4d178f620b1c7, module_torch$ao$quantization$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5dc61a61e50dfa3d31a4d178f620b1c7->m_type_description == NULL);
    frame_5dc61a61e50dfa3d31a4d178f620b1c7 = cache_frame_5dc61a61e50dfa3d31a4d178f620b1c7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5dc61a61e50dfa3d31a4d178f620b1c7);
    assert(Py_REFCNT(frame_5dc61a61e50dfa3d31a4d178f620b1c7) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_qconfig);
        tmp_cmp_expr_left_1 = par_qconfig;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
        exception_lineno = 176;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_qconfig);
        tmp_called_instance_1 = par_qconfig;
        frame_5dc61a61e50dfa3d31a4d178f620b1c7->m_frame.f_lineno = 177;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[40]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_activation == NULL);
        var_activation = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_qconfig);
        tmp_called_instance_2 = par_qconfig;
        frame_5dc61a61e50dfa3d31a4d178f620b1c7->m_frame.f_lineno = 178;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[41]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_weight == NULL);
        var_weight = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[43]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_expression_value_2;
            PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_1 = "oooo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[44]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_1 = "oooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        assert(var_static_dtypes == NULL);
        var_static_dtypes = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_weight);
        tmp_expression_value_3 = var_weight;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[23]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_static_dtypes);
        tmp_cmp_expr_right_2 = var_static_dtypes;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooo";
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
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_activation);
        tmp_expression_value_4 = var_activation;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[23]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_static_dtypes);
        tmp_cmp_expr_right_3 = var_static_dtypes;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
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
        PyObject *tmp_expression_value_5;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[58]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_attribute_value_1;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_activation);
        tmp_expression_value_6 = var_activation;
        tmp_attribute_value_1 = mod_consts[55];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_6, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_activation);
        tmp_expression_value_7 = var_activation;
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[55]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_static_dtypes);
        tmp_cmp_expr_right_4 = var_static_dtypes;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_4 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_4 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_expression_value_8;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[59]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_expression_value_9;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[60]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_4:;
    branch_end_3:;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(var_weight);
        tmp_expression_value_10 = var_weight;
        tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[23]);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_5);

            exception_lineno = 188;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[45]);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_5);

            exception_lineno = 188;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooo";
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
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(var_activation);
        tmp_expression_value_12 = var_activation;
        tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[23]);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_6);

            exception_lineno = 189;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[53]);
        if (tmp_cmp_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_6);

            exception_lineno = 189;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        Py_DECREF(tmp_cmp_expr_right_6);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooo";
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
        PyObject *tmp_expression_value_14;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[59]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(var_activation);
        tmp_expression_value_15 = var_activation;
        tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[23]);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_7);

            exception_lineno = 191;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[45]);
        if (tmp_cmp_expr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_7);

            exception_lineno = 191;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_left_7);
        Py_DECREF(tmp_cmp_expr_right_7);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooo";
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
        PyObject *tmp_expression_value_17;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[58]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_7:;
    branch_end_6:;
    branch_no_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_expression_value_19;
        tmp_kw_call_arg_value_0_1 = mod_consts[61];
        if (var_activation == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 195;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_18 = var_activation;
        tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[23]);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_weight);
        tmp_expression_value_19 = var_weight;
        tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[23]);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 195;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_5dc61a61e50dfa3d31a4d178f620b1c7->m_frame.f_lineno = 194;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_arg_value_2_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_5dc61a61e50dfa3d31a4d178f620b1c7->m_frame.f_lineno = 194;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_Exception, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 194;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_5dc61a61e50dfa3d31a4d178f620b1c7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5dc61a61e50dfa3d31a4d178f620b1c7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5dc61a61e50dfa3d31a4d178f620b1c7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5dc61a61e50dfa3d31a4d178f620b1c7,
        type_description_1,
        par_qconfig,
        var_activation,
        var_weight,
        var_static_dtypes
    );


    // Release cached frame if used for exception.
    if (frame_5dc61a61e50dfa3d31a4d178f620b1c7 == cache_frame_5dc61a61e50dfa3d31a4d178f620b1c7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5dc61a61e50dfa3d31a4d178f620b1c7);
        cache_frame_5dc61a61e50dfa3d31a4d178f620b1c7 = NULL;
    }

    assertFrameObject(frame_5dc61a61e50dfa3d31a4d178f620b1c7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_activation);
    var_activation = NULL;
    CHECK_OBJECT(var_weight);
    Py_DECREF(var_weight);
    var_weight = NULL;
    CHECK_OBJECT(var_static_dtypes);
    Py_DECREF(var_static_dtypes);
    var_static_dtypes = NULL;
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

    Py_XDECREF(var_activation);
    var_activation = NULL;
    Py_XDECREF(var_weight);
    var_weight = NULL;
    Py_XDECREF(var_static_dtypes);
    var_static_dtypes = NULL;
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
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$utils$$$function__17_check_min_max_valid(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_min_val = python_pars[0];
    PyObject *par_max_val = python_pars[1];
    struct Nuitka_FrameObject *frame_bc48057364e2e79c5ffbcb7199f75a5a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_bc48057364e2e79c5ffbcb7199f75a5a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bc48057364e2e79c5ffbcb7199f75a5a)) {
        Py_XDECREF(cache_frame_bc48057364e2e79c5ffbcb7199f75a5a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bc48057364e2e79c5ffbcb7199f75a5a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bc48057364e2e79c5ffbcb7199f75a5a = MAKE_FUNCTION_FRAME(codeobj_bc48057364e2e79c5ffbcb7199f75a5a, module_torch$ao$quantization$utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bc48057364e2e79c5ffbcb7199f75a5a->m_type_description == NULL);
    frame_bc48057364e2e79c5ffbcb7199f75a5a = cache_frame_bc48057364e2e79c5ffbcb7199f75a5a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bc48057364e2e79c5ffbcb7199f75a5a);
    assert(Py_REFCNT(frame_bc48057364e2e79c5ffbcb7199f75a5a) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_min_val);
        tmp_called_instance_1 = par_min_val;
        frame_bc48057364e2e79c5ffbcb7199f75a5a->m_frame.f_lineno = 201;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[62]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[63];
        tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_max_val);
        tmp_called_instance_2 = par_max_val;
        frame_bc48057364e2e79c5ffbcb7199f75a5a->m_frame.f_lineno = 201;
        tmp_cmp_expr_left_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[62]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[63];
        tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oo";
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
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_bc48057364e2e79c5ffbcb7199f75a5a->m_frame.f_lineno = 202;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[65],
            PyTuple_GET_ITEM(mod_consts[66], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(par_min_val);
        tmp_called_instance_4 = par_min_val;
        frame_bc48057364e2e79c5ffbcb7199f75a5a->m_frame.f_lineno = 208;
        tmp_cmp_expr_left_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[67]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = mod_consts[63];
        tmp_or_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        if (par_max_val == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 208;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = par_max_val;
        frame_bc48057364e2e79c5ffbcb7199f75a5a->m_frame.f_lineno = 208;
        tmp_cmp_expr_left_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[67]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = mod_consts[63];
        tmp_or_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_2 = tmp_or_left_value_2;
        or_end_2:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(par_min_val);
        tmp_cmp_expr_left_5 = par_min_val;
        tmp_cmp_expr_right_5 = mod_consts[69];
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (par_max_val == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 209;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_6 = par_max_val;
        tmp_cmp_expr_right_6 = mod_consts[70];
        tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_2;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_bc48057364e2e79c5ffbcb7199f75a5a->m_frame.f_lineno = 210;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_6,
            mod_consts[65],
            PyTuple_GET_ITEM(mod_consts[66], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(par_min_val);
        tmp_cmp_expr_left_7 = par_min_val;
        if (par_max_val == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 217;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_7 = par_max_val;
        tmp_operand_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_kw_call_arg_value_0_1 = mod_consts[71];
        CHECK_OBJECT(par_min_val);
        tmp_kw_call_arg_value_1_1 = par_min_val;
        if (par_max_val == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 218;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_2_1 = par_max_val;
        frame_bc48057364e2e79c5ffbcb7199f75a5a->m_frame.f_lineno = 217;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_raise_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_raise_value_1, 0, tmp_tuple_element_1);
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 217;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[72]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_min_val);
        tmp_cmp_expr_left_8 = par_min_val;
        if (par_max_val == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_8 = par_max_val;
        tmp_args_element_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_bc48057364e2e79c5ffbcb7199f75a5a->m_frame.f_lineno = 221;
        tmp_operand_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oo";
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
        PyObject *tmp_raise_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_arg_value_2_2;
        tmp_raise_type_2 = PyExc_AssertionError;
        tmp_kw_call_arg_value_0_2 = mod_consts[71];
        CHECK_OBJECT(par_min_val);
        tmp_kw_call_arg_value_1_2 = par_min_val;
        if (par_max_val == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 223;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_2_2 = par_max_val;
        frame_bc48057364e2e79c5ffbcb7199f75a5a->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2};
            tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_raise_value_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_raise_value_2, 0, tmp_tuple_element_2);
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 221;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bc48057364e2e79c5ffbcb7199f75a5a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bc48057364e2e79c5ffbcb7199f75a5a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bc48057364e2e79c5ffbcb7199f75a5a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bc48057364e2e79c5ffbcb7199f75a5a,
        type_description_1,
        par_min_val,
        par_max_val
    );


    // Release cached frame if used for exception.
    if (frame_bc48057364e2e79c5ffbcb7199f75a5a == cache_frame_bc48057364e2e79c5ffbcb7199f75a5a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bc48057364e2e79c5ffbcb7199f75a5a);
        cache_frame_bc48057364e2e79c5ffbcb7199f75a5a = NULL;
    }

    assertFrameObject(frame_bc48057364e2e79c5ffbcb7199f75a5a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_min_val);
    Py_DECREF(par_min_val);
    CHECK_OBJECT(par_max_val);
    Py_DECREF(par_max_val);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_min_val);
    Py_DECREF(par_min_val);
    CHECK_OBJECT(par_max_val);
    Py_DECREF(par_max_val);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$utils$$$function__18_calculate_qmin_qmax(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_quant_min = python_pars[0];
    PyObject *par_quant_max = python_pars[1];
    PyObject *par_has_customized_qrange = python_pars[2];
    PyObject *par_dtype = python_pars[3];
    PyObject *par_reduce_range = python_pars[4];
    PyObject *var_initial_quant_min = NULL;
    PyObject *var_initial_quant_max = NULL;
    PyObject *var_custom_quant_min = NULL;
    PyObject *var_custom_quant_max = NULL;
    PyObject *var_qrange_len = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_tuple_unpack_10__element_1 = NULL;
    PyObject *tmp_tuple_unpack_10__element_2 = NULL;
    PyObject *tmp_tuple_unpack_10__source_iter = NULL;
    PyObject *tmp_tuple_unpack_11__element_1 = NULL;
    PyObject *tmp_tuple_unpack_11__element_2 = NULL;
    PyObject *tmp_tuple_unpack_11__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    PyObject *tmp_tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_tuple_unpack_6__source_iter = NULL;
    PyObject *tmp_tuple_unpack_7__element_1 = NULL;
    PyObject *tmp_tuple_unpack_7__element_2 = NULL;
    PyObject *tmp_tuple_unpack_7__source_iter = NULL;
    PyObject *tmp_tuple_unpack_8__element_1 = NULL;
    PyObject *tmp_tuple_unpack_8__element_2 = NULL;
    PyObject *tmp_tuple_unpack_8__source_iter = NULL;
    PyObject *tmp_tuple_unpack_9__element_1 = NULL;
    PyObject *tmp_tuple_unpack_9__element_2 = NULL;
    PyObject *tmp_tuple_unpack_9__source_iter = NULL;
    struct Nuitka_FrameObject *frame_178cd6122a9de20e69148dd82b0e9fd6;
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
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    int tmp_res;
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
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
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
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    static struct Nuitka_FrameObject *cache_frame_178cd6122a9de20e69148dd82b0e9fd6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_178cd6122a9de20e69148dd82b0e9fd6)) {
        Py_XDECREF(cache_frame_178cd6122a9de20e69148dd82b0e9fd6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_178cd6122a9de20e69148dd82b0e9fd6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_178cd6122a9de20e69148dd82b0e9fd6 = MAKE_FUNCTION_FRAME(codeobj_178cd6122a9de20e69148dd82b0e9fd6, module_torch$ao$quantization$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_178cd6122a9de20e69148dd82b0e9fd6->m_type_description == NULL);
    frame_178cd6122a9de20e69148dd82b0e9fd6 = cache_frame_178cd6122a9de20e69148dd82b0e9fd6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_178cd6122a9de20e69148dd82b0e9fd6);
    assert(Py_REFCNT(frame_178cd6122a9de20e69148dd82b0e9fd6) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_has_customized_qrange);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_has_customized_qrange);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = mod_consts[74];
        tmp_assign_source_1 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
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


            type_description_1 = "oooooooooo";
            exception_lineno = 237;
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


            type_description_1 = "oooooooooo";
            exception_lineno = 237;
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

                    type_description_1 = "oooooooooo";
                    exception_lineno = 237;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[32];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 237;
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
        assert(var_initial_quant_min == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_initial_quant_min = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_initial_quant_max == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_initial_quant_max = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_quant_min);
        tmp_tuple_element_1 = par_quant_min;
        tmp_iter_arg_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_iter_arg_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_quant_max);
        tmp_tuple_element_1 = par_quant_max;
        PyTuple_SET_ITEM0(tmp_iter_arg_2, 1, tmp_tuple_element_1);
        tmp_assign_source_6 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        assert(!(tmp_assign_source_6 == NULL));
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_6;
    }
    // Tried code:
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


            type_description_1 = "oooooooooo";
            exception_lineno = 240;
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


            type_description_1 = "oooooooooo";
            exception_lineno = 240;
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

                    type_description_1 = "oooooooooo";
                    exception_lineno = 240;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[32];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 240;
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
        assert(var_custom_quant_min == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_custom_quant_min = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_10 = tmp_tuple_unpack_2__element_2;
        assert(var_custom_quant_max == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_custom_quant_max = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_custom_quant_min);
        tmp_cmp_expr_left_1 = var_custom_quant_min;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_custom_quant_max);
        tmp_cmp_expr_left_2 = var_custom_quant_max;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_custom_quant_min);
        tmp_tuple_element_2 = var_custom_quant_min;
        tmp_iter_arg_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_iter_arg_3, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_custom_quant_max);
        tmp_tuple_element_2 = var_custom_quant_max;
        PyTuple_SET_ITEM0(tmp_iter_arg_3, 1, tmp_tuple_element_2);
        tmp_assign_source_11 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        assert(!(tmp_assign_source_11 == NULL));
        assert(tmp_tuple_unpack_3__source_iter == NULL);
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_11;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_5, 0, 2);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 242;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_1 == NULL);
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_6, 1, 2);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 242;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_2 == NULL);
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_13;
    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooo";
                    exception_lineno = 242;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[32];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 242;
            goto try_except_handler_7;
        }
    }
    goto try_end_5;
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

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    goto try_end_6;
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

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_14 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_initial_quant_min;
            assert(old != NULL);
            var_initial_quant_min = tmp_assign_source_14;
            Py_INCREF(var_initial_quant_min);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_15 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_initial_quant_max;
            assert(old != NULL);
            var_initial_quant_max = tmp_assign_source_15;
            Py_INCREF(var_initial_quant_max);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    branch_no_2:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        CHECK_OBJECT(var_initial_quant_max);
        tmp_sub_expr_left_1 = var_initial_quant_max;
        CHECK_OBJECT(var_initial_quant_min);
        tmp_sub_expr_right_1 = var_initial_quant_min;
        tmp_add_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[75];
        tmp_assign_source_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_qrange_len == NULL);
        var_qrange_len = tmp_assign_source_16;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT(var_qrange_len);
            tmp_assign_source_17 = var_qrange_len;
            assert(tmp_comparison_chain_1__operand_2 == NULL);
            Py_INCREF(tmp_assign_source_17);
            tmp_comparison_chain_1__operand_2 = tmp_assign_source_17;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            tmp_cmp_expr_left_3 = mod_consts[63];
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_right_3 = tmp_comparison_chain_1__operand_2;
            tmp_assign_source_18 = RICH_COMPARE_LT_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_assign_source_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_1 = "oooooooooo";
                goto try_except_handler_8;
            }
            assert(tmp_comparison_chain_1__comparison_result == NULL);
            tmp_comparison_chain_1__comparison_result = tmp_assign_source_18;
        }
        {
            bool tmp_condition_result_4;
            PyObject *tmp_operand_value_2;
            CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
            tmp_operand_value_2 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_1 = "oooooooooo";
                goto try_except_handler_8;
            }
            tmp_condition_result_4 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_4 != false) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        tmp_operand_value_1 = tmp_comparison_chain_1__comparison_result;
        Py_INCREF(tmp_operand_value_1);
        goto try_return_handler_8;
        branch_no_4:;
        {
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_left_4 = tmp_comparison_chain_1__operand_2;
            tmp_cmp_expr_right_4 = mod_consts[76];
            tmp_operand_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_operand_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_1 = "oooooooooo";
                goto try_except_handler_8;
            }
            goto try_return_handler_8;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        Py_DECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        Py_XDECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_raise_value_1 = mod_consts[77];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 248;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_dtype);
        tmp_cmp_expr_left_5 = par_dtype;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[44]);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_floordiv_expr_left_1;
        PyObject *tmp_floordiv_expr_right_1;
        PyObject *tmp_operand_value_3;
        CHECK_OBJECT(var_qrange_len);
        tmp_operand_value_3 = var_qrange_len;
        tmp_floordiv_expr_left_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_3);
        if (tmp_floordiv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooooo";
            goto try_except_handler_9;
        }
        tmp_floordiv_expr_right_1 = mod_consts[78];
        tmp_tuple_element_3 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
        Py_DECREF(tmp_floordiv_expr_left_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooooo";
            goto try_except_handler_9;
        }
        tmp_iter_arg_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_sub_expr_left_2;
            PyObject *tmp_sub_expr_right_2;
            PyObject *tmp_floordiv_expr_left_2;
            PyObject *tmp_floordiv_expr_right_2;
            PyTuple_SET_ITEM(tmp_iter_arg_4, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_qrange_len);
            tmp_floordiv_expr_left_2 = var_qrange_len;
            tmp_floordiv_expr_right_2 = mod_consts[78];
            tmp_sub_expr_left_2 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_2, tmp_floordiv_expr_right_2);
            if (tmp_sub_expr_left_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_sub_expr_right_2 = mod_consts[75];
            tmp_tuple_element_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
            Py_DECREF(tmp_sub_expr_left_2);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_4, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_4);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_19 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        assert(!(tmp_assign_source_19 == NULL));
        assert(tmp_tuple_unpack_4__source_iter == NULL);
        tmp_tuple_unpack_4__source_iter = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_20 = UNPACK_NEXT(tmp_unpack_7, 0, 2);
        if (tmp_assign_source_20 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 252;
            goto try_except_handler_10;
        }
        assert(tmp_tuple_unpack_4__element_1 == NULL);
        tmp_tuple_unpack_4__element_1 = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_21 = UNPACK_NEXT(tmp_unpack_8, 1, 2);
        if (tmp_assign_source_21 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 252;
            goto try_except_handler_10;
        }
        assert(tmp_tuple_unpack_4__element_2 == NULL);
        tmp_tuple_unpack_4__element_2 = tmp_assign_source_21;
    }
    {
        PyObject *tmp_iterator_name_4;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_4); assert(HAS_ITERNEXT(tmp_iterator_name_4));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_4)->tp_iternext)(tmp_iterator_name_4);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooo";
                    exception_lineno = 252;
                    goto try_except_handler_10;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[32];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 252;
            goto try_except_handler_10;
        }
    }
    goto try_end_7;
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

    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_9;
    // End of try:
    try_end_7:;
    goto try_end_8;
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

    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
        tmp_assign_source_22 = tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = par_quant_min;
            assert(old != NULL);
            par_quant_min = tmp_assign_source_22;
            Py_INCREF(par_quant_min);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
        tmp_assign_source_23 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = par_quant_max;
            assert(old != NULL);
            par_quant_max = tmp_assign_source_23;
            Py_INCREF(par_quant_max);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;

    goto branch_end_5;
    branch_no_5:;
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_tuple_element_4;
        tmp_tuple_element_4 = mod_consts[63];
        tmp_iter_arg_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_sub_expr_left_3;
            PyObject *tmp_sub_expr_right_3;
            PyTuple_SET_ITEM0(tmp_iter_arg_5, 0, tmp_tuple_element_4);
            CHECK_OBJECT(var_qrange_len);
            tmp_sub_expr_left_3 = var_qrange_len;
            tmp_sub_expr_right_3 = mod_consts[75];
            tmp_tuple_element_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_5, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_iter_arg_5);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_24 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        assert(!(tmp_assign_source_24 == NULL));
        assert(tmp_tuple_unpack_5__source_iter == NULL);
        tmp_tuple_unpack_5__source_iter = tmp_assign_source_24;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_25 = UNPACK_NEXT(tmp_unpack_9, 0, 2);
        if (tmp_assign_source_25 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 254;
            goto try_except_handler_12;
        }
        assert(tmp_tuple_unpack_5__element_1 == NULL);
        tmp_tuple_unpack_5__element_1 = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_26 = UNPACK_NEXT(tmp_unpack_10, 1, 2);
        if (tmp_assign_source_26 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 254;
            goto try_except_handler_12;
        }
        assert(tmp_tuple_unpack_5__element_2 == NULL);
        tmp_tuple_unpack_5__element_2 = tmp_assign_source_26;
    }
    {
        PyObject *tmp_iterator_name_5;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_5); assert(HAS_ITERNEXT(tmp_iterator_name_5));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_5)->tp_iternext)(tmp_iterator_name_5);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooo";
                    exception_lineno = 254;
                    goto try_except_handler_12;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[32];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 254;
            goto try_except_handler_12;
        }
    }
    goto try_end_9;
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

    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_11;
    // End of try:
    try_end_9:;
    goto try_end_10;
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

    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
        tmp_assign_source_27 = tmp_tuple_unpack_5__element_1;
        {
            PyObject *old = par_quant_min;
            assert(old != NULL);
            par_quant_min = tmp_assign_source_27;
            Py_INCREF(par_quant_min);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
        tmp_assign_source_28 = tmp_tuple_unpack_5__element_2;
        {
            PyObject *old = par_quant_max;
            assert(old != NULL);
            par_quant_max = tmp_assign_source_28;
            Py_INCREF(par_quant_max);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;

    branch_end_5:;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_reduce_range);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_reduce_range);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_floordiv_expr_left_3;
        PyObject *tmp_floordiv_expr_right_3;
        CHECK_OBJECT(par_quant_min);
        tmp_floordiv_expr_left_3 = par_quant_min;
        tmp_floordiv_expr_right_3 = mod_consts[78];
        tmp_tuple_element_5 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_3, tmp_floordiv_expr_right_3);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooooooo";
            goto try_except_handler_13;
        }
        tmp_iter_arg_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_floordiv_expr_left_4;
            PyObject *tmp_floordiv_expr_right_4;
            PyTuple_SET_ITEM(tmp_iter_arg_6, 0, tmp_tuple_element_5);
            CHECK_OBJECT(par_quant_max);
            tmp_floordiv_expr_left_4 = par_quant_max;
            tmp_floordiv_expr_right_4 = mod_consts[78];
            tmp_tuple_element_5 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_4, tmp_floordiv_expr_right_4);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_6, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_iter_arg_6);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_assign_source_29 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_6);
        Py_DECREF(tmp_iter_arg_6);
        assert(!(tmp_assign_source_29 == NULL));
        assert(tmp_tuple_unpack_6__source_iter == NULL);
        tmp_tuple_unpack_6__source_iter = tmp_assign_source_29;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_11 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_30 = UNPACK_NEXT(tmp_unpack_11, 0, 2);
        if (tmp_assign_source_30 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 256;
            goto try_except_handler_14;
        }
        assert(tmp_tuple_unpack_6__element_1 == NULL);
        tmp_tuple_unpack_6__element_1 = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_12 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_31 = UNPACK_NEXT(tmp_unpack_12, 1, 2);
        if (tmp_assign_source_31 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 256;
            goto try_except_handler_14;
        }
        assert(tmp_tuple_unpack_6__element_2 == NULL);
        tmp_tuple_unpack_6__element_2 = tmp_assign_source_31;
    }
    {
        PyObject *tmp_iterator_name_6;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_iterator_name_6 = tmp_tuple_unpack_6__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_6); assert(HAS_ITERNEXT(tmp_iterator_name_6));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_6)->tp_iternext)(tmp_iterator_name_6);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooo";
                    exception_lineno = 256;
                    goto try_except_handler_14;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[32];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 256;
            goto try_except_handler_14;
        }
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
    Py_DECREF(tmp_tuple_unpack_6__source_iter);
    tmp_tuple_unpack_6__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_13;
    // End of try:
    try_end_11:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_6__element_1);
    tmp_tuple_unpack_6__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_6__element_2);
    tmp_tuple_unpack_6__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
    Py_DECREF(tmp_tuple_unpack_6__source_iter);
    tmp_tuple_unpack_6__source_iter = NULL;
    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_1);
        tmp_assign_source_32 = tmp_tuple_unpack_6__element_1;
        {
            PyObject *old = par_quant_min;
            assert(old != NULL);
            par_quant_min = tmp_assign_source_32;
            Py_INCREF(par_quant_min);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_6__element_1);
    tmp_tuple_unpack_6__element_1 = NULL;

    {
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_2);
        tmp_assign_source_33 = tmp_tuple_unpack_6__element_2;
        {
            PyObject *old = par_quant_max;
            assert(old != NULL);
            par_quant_max = tmp_assign_source_33;
            Py_INCREF(par_quant_max);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_6__element_2);
    tmp_tuple_unpack_6__element_2 = NULL;

    branch_no_6:;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_dtype);
        tmp_cmp_expr_left_6 = par_dtype;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[44]);
        if (tmp_cmp_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_right_6);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooooooo";
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
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_reduce_range);
        tmp_truth_name_3 = CHECK_IF_TRUE(par_reduce_range);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_iter_arg_7;
        tmp_iter_arg_7 = mod_consts[79];
        tmp_assign_source_34 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_7);
        assert(!(tmp_assign_source_34 == NULL));
        assert(tmp_tuple_unpack_7__source_iter == NULL);
        tmp_tuple_unpack_7__source_iter = tmp_assign_source_34;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_unpack_13 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_35 = UNPACK_NEXT(tmp_unpack_13, 0, 2);
        if (tmp_assign_source_35 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 261;
            goto try_except_handler_16;
        }
        assert(tmp_tuple_unpack_7__element_1 == NULL);
        tmp_tuple_unpack_7__element_1 = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_unpack_14;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_unpack_14 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_36 = UNPACK_NEXT(tmp_unpack_14, 1, 2);
        if (tmp_assign_source_36 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 261;
            goto try_except_handler_16;
        }
        assert(tmp_tuple_unpack_7__element_2 == NULL);
        tmp_tuple_unpack_7__element_2 = tmp_assign_source_36;
    }
    {
        PyObject *tmp_iterator_name_7;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_iterator_name_7 = tmp_tuple_unpack_7__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_7); assert(HAS_ITERNEXT(tmp_iterator_name_7));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_7)->tp_iternext)(tmp_iterator_name_7);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooo";
                    exception_lineno = 261;
                    goto try_except_handler_16;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[32];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 261;
            goto try_except_handler_16;
        }
    }
    goto try_end_13;
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

    CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
    Py_DECREF(tmp_tuple_unpack_7__source_iter);
    tmp_tuple_unpack_7__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_15;
    // End of try:
    try_end_13:;
    goto try_end_14;
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

    Py_XDECREF(tmp_tuple_unpack_7__element_1);
    tmp_tuple_unpack_7__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_7__element_2);
    tmp_tuple_unpack_7__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
    Py_DECREF(tmp_tuple_unpack_7__source_iter);
    tmp_tuple_unpack_7__source_iter = NULL;
    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_1);
        tmp_assign_source_37 = tmp_tuple_unpack_7__element_1;
        {
            PyObject *old = par_quant_min;
            assert(old != NULL);
            par_quant_min = tmp_assign_source_37;
            Py_INCREF(par_quant_min);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_7__element_1);
    tmp_tuple_unpack_7__element_1 = NULL;

    {
        PyObject *tmp_assign_source_38;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_2);
        tmp_assign_source_38 = tmp_tuple_unpack_7__element_2;
        {
            PyObject *old = par_quant_max;
            assert(old != NULL);
            par_quant_max = tmp_assign_source_38;
            Py_INCREF(par_quant_max);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_7__element_2);
    tmp_tuple_unpack_7__element_2 = NULL;

    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_iter_arg_8;
        tmp_iter_arg_8 = mod_consts[80];
        tmp_assign_source_39 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_8);
        assert(!(tmp_assign_source_39 == NULL));
        assert(tmp_tuple_unpack_8__source_iter == NULL);
        tmp_tuple_unpack_8__source_iter = tmp_assign_source_39;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_unpack_15;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_15 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_40 = UNPACK_NEXT(tmp_unpack_15, 0, 2);
        if (tmp_assign_source_40 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 263;
            goto try_except_handler_18;
        }
        assert(tmp_tuple_unpack_8__element_1 == NULL);
        tmp_tuple_unpack_8__element_1 = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_unpack_16;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_16 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_41 = UNPACK_NEXT(tmp_unpack_16, 1, 2);
        if (tmp_assign_source_41 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 263;
            goto try_except_handler_18;
        }
        assert(tmp_tuple_unpack_8__element_2 == NULL);
        tmp_tuple_unpack_8__element_2 = tmp_assign_source_41;
    }
    {
        PyObject *tmp_iterator_name_8;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_iterator_name_8 = tmp_tuple_unpack_8__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_8); assert(HAS_ITERNEXT(tmp_iterator_name_8));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_8)->tp_iternext)(tmp_iterator_name_8);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooo";
                    exception_lineno = 263;
                    goto try_except_handler_18;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[32];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 263;
            goto try_except_handler_18;
        }
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
    Py_DECREF(tmp_tuple_unpack_8__source_iter);
    tmp_tuple_unpack_8__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_17;
    // End of try:
    try_end_15:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_8__element_1);
    tmp_tuple_unpack_8__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_8__element_2);
    tmp_tuple_unpack_8__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
    Py_DECREF(tmp_tuple_unpack_8__source_iter);
    tmp_tuple_unpack_8__source_iter = NULL;
    {
        PyObject *tmp_assign_source_42;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_1);
        tmp_assign_source_42 = tmp_tuple_unpack_8__element_1;
        {
            PyObject *old = par_quant_min;
            assert(old != NULL);
            par_quant_min = tmp_assign_source_42;
            Py_INCREF(par_quant_min);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_8__element_1);
    tmp_tuple_unpack_8__element_1 = NULL;

    {
        PyObject *tmp_assign_source_43;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_2);
        tmp_assign_source_43 = tmp_tuple_unpack_8__element_2;
        {
            PyObject *old = par_quant_max;
            assert(old != NULL);
            par_quant_max = tmp_assign_source_43;
            Py_INCREF(par_quant_max);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_8__element_2);
    tmp_tuple_unpack_8__element_2 = NULL;

    branch_end_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_dtype);
        tmp_cmp_expr_left_7 = par_dtype;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[43]);
        if (tmp_cmp_expr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_right_7);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooooooooo";
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
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_4;
        CHECK_OBJECT(par_reduce_range);
        tmp_truth_name_4 = CHECK_IF_TRUE(par_reduce_range);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_iter_arg_9;
        tmp_iter_arg_9 = mod_consts[81];
        tmp_assign_source_44 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_9);
        assert(!(tmp_assign_source_44 == NULL));
        assert(tmp_tuple_unpack_9__source_iter == NULL);
        tmp_tuple_unpack_9__source_iter = tmp_assign_source_44;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_unpack_17;
        CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
        tmp_unpack_17 = tmp_tuple_unpack_9__source_iter;
        tmp_assign_source_45 = UNPACK_NEXT(tmp_unpack_17, 0, 2);
        if (tmp_assign_source_45 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 266;
            goto try_except_handler_20;
        }
        assert(tmp_tuple_unpack_9__element_1 == NULL);
        tmp_tuple_unpack_9__element_1 = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_unpack_18;
        CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
        tmp_unpack_18 = tmp_tuple_unpack_9__source_iter;
        tmp_assign_source_46 = UNPACK_NEXT(tmp_unpack_18, 1, 2);
        if (tmp_assign_source_46 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 266;
            goto try_except_handler_20;
        }
        assert(tmp_tuple_unpack_9__element_2 == NULL);
        tmp_tuple_unpack_9__element_2 = tmp_assign_source_46;
    }
    {
        PyObject *tmp_iterator_name_9;
        CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
        tmp_iterator_name_9 = tmp_tuple_unpack_9__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_9); assert(HAS_ITERNEXT(tmp_iterator_name_9));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_9)->tp_iternext)(tmp_iterator_name_9);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooo";
                    exception_lineno = 266;
                    goto try_except_handler_20;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[32];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 266;
            goto try_except_handler_20;
        }
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
    Py_DECREF(tmp_tuple_unpack_9__source_iter);
    tmp_tuple_unpack_9__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto try_except_handler_19;
    // End of try:
    try_end_17:;
    goto try_end_18;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_9__element_1);
    tmp_tuple_unpack_9__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_9__element_2);
    tmp_tuple_unpack_9__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
    Py_DECREF(tmp_tuple_unpack_9__source_iter);
    tmp_tuple_unpack_9__source_iter = NULL;
    {
        PyObject *tmp_assign_source_47;
        CHECK_OBJECT(tmp_tuple_unpack_9__element_1);
        tmp_assign_source_47 = tmp_tuple_unpack_9__element_1;
        {
            PyObject *old = par_quant_min;
            assert(old != NULL);
            par_quant_min = tmp_assign_source_47;
            Py_INCREF(par_quant_min);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_9__element_1);
    tmp_tuple_unpack_9__element_1 = NULL;

    {
        PyObject *tmp_assign_source_48;
        CHECK_OBJECT(tmp_tuple_unpack_9__element_2);
        tmp_assign_source_48 = tmp_tuple_unpack_9__element_2;
        {
            PyObject *old = par_quant_max;
            assert(old != NULL);
            par_quant_max = tmp_assign_source_48;
            Py_INCREF(par_quant_max);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_9__element_2);
    tmp_tuple_unpack_9__element_2 = NULL;

    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_iter_arg_10;
        tmp_iter_arg_10 = mod_consts[74];
        tmp_assign_source_49 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_10);
        assert(!(tmp_assign_source_49 == NULL));
        assert(tmp_tuple_unpack_10__source_iter == NULL);
        tmp_tuple_unpack_10__source_iter = tmp_assign_source_49;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_unpack_19;
        CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
        tmp_unpack_19 = tmp_tuple_unpack_10__source_iter;
        tmp_assign_source_50 = UNPACK_NEXT(tmp_unpack_19, 0, 2);
        if (tmp_assign_source_50 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 268;
            goto try_except_handler_22;
        }
        assert(tmp_tuple_unpack_10__element_1 == NULL);
        tmp_tuple_unpack_10__element_1 = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_unpack_20;
        CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
        tmp_unpack_20 = tmp_tuple_unpack_10__source_iter;
        tmp_assign_source_51 = UNPACK_NEXT(tmp_unpack_20, 1, 2);
        if (tmp_assign_source_51 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 268;
            goto try_except_handler_22;
        }
        assert(tmp_tuple_unpack_10__element_2 == NULL);
        tmp_tuple_unpack_10__element_2 = tmp_assign_source_51;
    }
    {
        PyObject *tmp_iterator_name_10;
        CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
        tmp_iterator_name_10 = tmp_tuple_unpack_10__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_10); assert(HAS_ITERNEXT(tmp_iterator_name_10));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_10)->tp_iternext)(tmp_iterator_name_10);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooo";
                    exception_lineno = 268;
                    goto try_except_handler_22;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[32];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 268;
            goto try_except_handler_22;
        }
    }
    goto try_end_19;
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

    CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
    Py_DECREF(tmp_tuple_unpack_10__source_iter);
    tmp_tuple_unpack_10__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_21;
    // End of try:
    try_end_19:;
    goto try_end_20;
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

    Py_XDECREF(tmp_tuple_unpack_10__element_1);
    tmp_tuple_unpack_10__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_10__element_2);
    tmp_tuple_unpack_10__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
    Py_DECREF(tmp_tuple_unpack_10__source_iter);
    tmp_tuple_unpack_10__source_iter = NULL;
    {
        PyObject *tmp_assign_source_52;
        CHECK_OBJECT(tmp_tuple_unpack_10__element_1);
        tmp_assign_source_52 = tmp_tuple_unpack_10__element_1;
        {
            PyObject *old = par_quant_min;
            assert(old != NULL);
            par_quant_min = tmp_assign_source_52;
            Py_INCREF(par_quant_min);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_10__element_1);
    tmp_tuple_unpack_10__element_1 = NULL;

    {
        PyObject *tmp_assign_source_53;
        CHECK_OBJECT(tmp_tuple_unpack_10__element_2);
        tmp_assign_source_53 = tmp_tuple_unpack_10__element_2;
        {
            PyObject *old = par_quant_max;
            assert(old != NULL);
            par_quant_max = tmp_assign_source_53;
            Py_INCREF(par_quant_max);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_10__element_2);
    tmp_tuple_unpack_10__element_2 = NULL;

    branch_end_10:;
    goto branch_end_9;
    branch_no_9:;
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_iter_arg_11;
        tmp_iter_arg_11 = mod_consts[82];
        tmp_assign_source_54 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_11);
        assert(!(tmp_assign_source_54 == NULL));
        assert(tmp_tuple_unpack_11__source_iter == NULL);
        tmp_tuple_unpack_11__source_iter = tmp_assign_source_54;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_unpack_21;
        CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
        tmp_unpack_21 = tmp_tuple_unpack_11__source_iter;
        tmp_assign_source_55 = UNPACK_NEXT(tmp_unpack_21, 0, 2);
        if (tmp_assign_source_55 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 270;
            goto try_except_handler_24;
        }
        assert(tmp_tuple_unpack_11__element_1 == NULL);
        tmp_tuple_unpack_11__element_1 = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_unpack_22;
        CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
        tmp_unpack_22 = tmp_tuple_unpack_11__source_iter;
        tmp_assign_source_56 = UNPACK_NEXT(tmp_unpack_22, 1, 2);
        if (tmp_assign_source_56 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 270;
            goto try_except_handler_24;
        }
        assert(tmp_tuple_unpack_11__element_2 == NULL);
        tmp_tuple_unpack_11__element_2 = tmp_assign_source_56;
    }
    {
        PyObject *tmp_iterator_name_11;
        CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
        tmp_iterator_name_11 = tmp_tuple_unpack_11__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_11); assert(HAS_ITERNEXT(tmp_iterator_name_11));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_11)->tp_iternext)(tmp_iterator_name_11);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooo";
                    exception_lineno = 270;
                    goto try_except_handler_24;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[32];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 270;
            goto try_except_handler_24;
        }
    }
    goto try_end_21;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
    Py_DECREF(tmp_tuple_unpack_11__source_iter);
    tmp_tuple_unpack_11__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto try_except_handler_23;
    // End of try:
    try_end_21:;
    goto try_end_22;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_11__element_1);
    tmp_tuple_unpack_11__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_11__element_2);
    tmp_tuple_unpack_11__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
    Py_DECREF(tmp_tuple_unpack_11__source_iter);
    tmp_tuple_unpack_11__source_iter = NULL;
    {
        PyObject *tmp_assign_source_57;
        CHECK_OBJECT(tmp_tuple_unpack_11__element_1);
        tmp_assign_source_57 = tmp_tuple_unpack_11__element_1;
        {
            PyObject *old = par_quant_min;
            assert(old != NULL);
            par_quant_min = tmp_assign_source_57;
            Py_INCREF(par_quant_min);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_11__element_1);
    tmp_tuple_unpack_11__element_1 = NULL;

    {
        PyObject *tmp_assign_source_58;
        CHECK_OBJECT(tmp_tuple_unpack_11__element_2);
        tmp_assign_source_58 = tmp_tuple_unpack_11__element_2;
        {
            PyObject *old = par_quant_max;
            assert(old != NULL);
            par_quant_max = tmp_assign_source_58;
            Py_INCREF(par_quant_max);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_11__element_2);
    tmp_tuple_unpack_11__element_2 = NULL;

    branch_end_9:;
    branch_end_7:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_178cd6122a9de20e69148dd82b0e9fd6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_178cd6122a9de20e69148dd82b0e9fd6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_178cd6122a9de20e69148dd82b0e9fd6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_178cd6122a9de20e69148dd82b0e9fd6,
        type_description_1,
        par_quant_min,
        par_quant_max,
        par_has_customized_qrange,
        par_dtype,
        par_reduce_range,
        var_initial_quant_min,
        var_initial_quant_max,
        var_custom_quant_min,
        var_custom_quant_max,
        var_qrange_len
    );


    // Release cached frame if used for exception.
    if (frame_178cd6122a9de20e69148dd82b0e9fd6 == cache_frame_178cd6122a9de20e69148dd82b0e9fd6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_178cd6122a9de20e69148dd82b0e9fd6);
        cache_frame_178cd6122a9de20e69148dd82b0e9fd6 = NULL;
    }

    assertFrameObject(frame_178cd6122a9de20e69148dd82b0e9fd6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_6;
        CHECK_OBJECT(par_quant_min);
        tmp_tuple_element_6 = par_quant_min;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_6);
        CHECK_OBJECT(par_quant_max);
        tmp_tuple_element_6 = par_quant_max;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_6);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_quant_min);
    Py_DECREF(par_quant_min);
    par_quant_min = NULL;
    CHECK_OBJECT(par_quant_max);
    Py_DECREF(par_quant_max);
    par_quant_max = NULL;
    Py_XDECREF(var_initial_quant_min);
    var_initial_quant_min = NULL;
    Py_XDECREF(var_initial_quant_max);
    var_initial_quant_max = NULL;
    Py_XDECREF(var_custom_quant_min);
    var_custom_quant_min = NULL;
    Py_XDECREF(var_custom_quant_max);
    var_custom_quant_max = NULL;
    Py_XDECREF(var_qrange_len);
    var_qrange_len = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_quant_min);
    par_quant_min = NULL;
    Py_XDECREF(par_quant_max);
    par_quant_max = NULL;
    Py_XDECREF(var_initial_quant_min);
    var_initial_quant_min = NULL;
    Py_XDECREF(var_initial_quant_max);
    var_initial_quant_max = NULL;
    Py_XDECREF(var_custom_quant_min);
    var_custom_quant_min = NULL;
    Py_XDECREF(var_custom_quant_max);
    var_custom_quant_max = NULL;
    Py_XDECREF(var_qrange_len);
    var_qrange_len = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_has_customized_qrange);
    Py_DECREF(par_has_customized_qrange);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_reduce_range);
    Py_DECREF(par_reduce_range);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_has_customized_qrange);
    Py_DECREF(par_has_customized_qrange);
    CHECK_OBJECT(par_dtype);
    Py_DECREF(par_dtype);
    CHECK_OBJECT(par_reduce_range);
    Py_DECREF(par_reduce_range);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$utils$$$function__19__parent_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_target = python_pars[0];
    PyObject *var_r = NULL;
    struct Nuitka_FrameObject *frame_9b8c0f18688165c2d2cf2b9f7d0c55ae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9b8c0f18688165c2d2cf2b9f7d0c55ae = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9b8c0f18688165c2d2cf2b9f7d0c55ae)) {
        Py_XDECREF(cache_frame_9b8c0f18688165c2d2cf2b9f7d0c55ae);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9b8c0f18688165c2d2cf2b9f7d0c55ae == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9b8c0f18688165c2d2cf2b9f7d0c55ae = MAKE_FUNCTION_FRAME(codeobj_9b8c0f18688165c2d2cf2b9f7d0c55ae, module_torch$ao$quantization$utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9b8c0f18688165c2d2cf2b9f7d0c55ae->m_type_description == NULL);
    frame_9b8c0f18688165c2d2cf2b9f7d0c55ae = cache_frame_9b8c0f18688165c2d2cf2b9f7d0c55ae;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9b8c0f18688165c2d2cf2b9f7d0c55ae);
    assert(Py_REFCNT(frame_9b8c0f18688165c2d2cf2b9f7d0c55ae) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_target);
        tmp_expression_value_1 = par_target;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[84]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9b8c0f18688165c2d2cf2b9f7d0c55ae->m_frame.f_lineno = 278;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[85]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_r == NULL);
        var_r = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_r);
        tmp_len_arg_1 = var_r;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 1;
        tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[29];
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_1;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_r);
            tmp_expression_value_2 = var_r;
            tmp_subscript_value_1 = mod_consts[63];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;
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
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_r);
        tmp_expression_value_3 = var_r;
        tmp_subscript_value_2 = mod_consts[63];
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_2, 0);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_3;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_r);
            tmp_expression_value_4 = var_r;
            tmp_subscript_value_3 = mod_consts[75];
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_3, 1);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;
                type_description_1 = "oo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_9b8c0f18688165c2d2cf2b9f7d0c55ae, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9b8c0f18688165c2d2cf2b9f7d0c55ae->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9b8c0f18688165c2d2cf2b9f7d0c55ae, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9b8c0f18688165c2d2cf2b9f7d0c55ae,
        type_description_1,
        par_target,
        var_r
    );


    // Release cached frame if used for exception.
    if (frame_9b8c0f18688165c2d2cf2b9f7d0c55ae == cache_frame_9b8c0f18688165c2d2cf2b9f7d0c55ae) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9b8c0f18688165c2d2cf2b9f7d0c55ae);
        cache_frame_9b8c0f18688165c2d2cf2b9f7d0c55ae = NULL;
    }

    assertFrameObject(frame_9b8c0f18688165c2d2cf2b9f7d0c55ae);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_r);
    Py_DECREF(var_r);
    var_r = NULL;
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

    Py_XDECREF(var_r);
    var_r = NULL;
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
    CHECK_OBJECT(par_target);
    Py_DECREF(par_target);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_target);
    Py_DECREF(par_target);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__10_activation_is_statically_quantized() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$utils$$$function__10_activation_is_statically_quantized,
        mod_consts[133],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8f82a69982b9a4b24de61edd3e1852d7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$utils,
        mod_consts[46],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__11_activation_is_int8_quantized() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$utils$$$function__11_activation_is_int8_quantized,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6f4cf4fa9a0f83c06d1b88c958dffa3d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$utils,
        mod_consts[47],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__12_weight_is_quantized() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$utils$$$function__12_weight_is_quantized,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f29e7e06e328eb1c7444ba774a69d69d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$utils,
        mod_consts[49],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__13_weight_is_statically_quantized() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$utils$$$function__13_weight_is_statically_quantized,
        mod_consts[136],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_514acb2cf0cb5ca689abb6c906e03ee2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$utils,
        mod_consts[50],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__14_op_is_int8_dynamically_quantized(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$utils$$$function__14_op_is_int8_dynamically_quantized,
        mod_consts[138],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_814068e81954f24652f97d194be7f032,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$utils,
        mod_consts[54],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__15_get_qconfig_dtypes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$utils$$$function__15_get_qconfig_dtypes,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ea97f5d936e295445b9de4eccabed52c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$utils,
        mod_consts[56],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__16_get_quant_type() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$utils$$$function__16_get_quant_type,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5dc61a61e50dfa3d31a4d178f620b1c7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__17_check_min_max_valid(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$utils$$$function__17_check_min_max_valid,
        mod_consts[141],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bc48057364e2e79c5ffbcb7199f75a5a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$utils,
        mod_consts[73],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__18_calculate_qmin_qmax(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$utils$$$function__18_calculate_qmin_qmax,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_178cd6122a9de20e69148dd82b0e9fd6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$utils,
        mod_consts[83],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__19__parent_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$utils$$$function__19__parent_name,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9b8c0f18688165c2d2cf2b9f7d0c55ae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$utils,
        mod_consts[86],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__1_check_node() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$utils$$$function__1_check_node,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4c16df4fa9c2f72d9c58dee5666ed83d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__2_get_combined_dict() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$utils$$$function__2_get_combined_dict,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_600126626c3a41493a675834801d54e6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__3_is_per_tensor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$utils$$$function__3_is_per_tensor,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d3025705769c0ab3465d7e3a80ace1d8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__4_is_per_channel() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$utils$$$function__4_is_per_channel,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fda4ae8c108bb79177ff3116831328a5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__5_getattr_from_fqn(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$utils$$$function__5_getattr_from_fqn,
        mod_consts[130],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6fd8a265f97830d2be971d0090c59ae8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$utils,
        mod_consts[21],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__6_get_qparam_dict() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$utils$$$function__6_get_qparam_dict,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_24c95b047280ef965e51efc99af3dd53,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__7_get_swapped_custom_module_class() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$utils$$$function__7_get_swapped_custom_module_class,
        mod_consts[132],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_51674c464dfcde6814e2aef8bc22de5c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$utils,
        mod_consts[39],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__8_activation_dtype() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$utils$$$function__8_activation_dtype,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d42cb18acba32f1714ded503cd2b06e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$utils$$$function__9_weight_dtype() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$utils$$$function__9_weight_dtype,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_855bea607339008494fac1e64cfd510d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$utils,
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

function_impl_code functable_torch$ao$quantization$utils[] = {
    impl_torch$ao$quantization$utils$$$function__1_check_node,
    impl_torch$ao$quantization$utils$$$function__2_get_combined_dict,
    impl_torch$ao$quantization$utils$$$function__3_is_per_tensor,
    impl_torch$ao$quantization$utils$$$function__4_is_per_channel,
    impl_torch$ao$quantization$utils$$$function__5_getattr_from_fqn,
    impl_torch$ao$quantization$utils$$$function__6_get_qparam_dict,
    impl_torch$ao$quantization$utils$$$function__7_get_swapped_custom_module_class,
    impl_torch$ao$quantization$utils$$$function__8_activation_dtype,
    impl_torch$ao$quantization$utils$$$function__9_weight_dtype,
    impl_torch$ao$quantization$utils$$$function__10_activation_is_statically_quantized,
    impl_torch$ao$quantization$utils$$$function__11_activation_is_int8_quantized,
    impl_torch$ao$quantization$utils$$$function__12_weight_is_quantized,
    impl_torch$ao$quantization$utils$$$function__13_weight_is_statically_quantized,
    impl_torch$ao$quantization$utils$$$function__14_op_is_int8_dynamically_quantized,
    impl_torch$ao$quantization$utils$$$function__15_get_qconfig_dtypes,
    impl_torch$ao$quantization$utils$$$function__16_get_quant_type,
    impl_torch$ao$quantization$utils$$$function__17_check_min_max_valid,
    impl_torch$ao$quantization$utils$$$function__18_calculate_qmin_qmax,
    impl_torch$ao$quantization$utils$$$function__19__parent_name,
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

    function_impl_code *current = functable_torch$ao$quantization$utils;
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

    if (offset > sizeof(functable_torch$ao$quantization$utils) || offset < 0) {
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
        functable_torch$ao$quantization$utils[offset],
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
        module_torch$ao$quantization$utils,
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
PyObject *modulecode_torch$ao$quantization$utils(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch.ao.quantization.utils");

    // Store the module for future use.
    module_torch$ao$quantization$utils = module;

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
        PRINT_STRING("torch.ao.quantization.utils: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.ao.quantization.utils: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.ao.quantization.utils: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$ao$quantization$utils\n");

    moduledict_torch$ao$quantization$utils = MODULE_DICT(module_torch$ao$quantization$utils);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$ao$quantization$utils,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$ao$quantization$utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[29]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$ao$quantization$utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$ao$quantization$utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$ao$quantization$utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$ao$quantization$utils);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$ao$quantization$utils);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_ebbf111e9996ca46efd11e762df9876d;
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
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[87];
        UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_2);
    }
    frame_ebbf111e9996ca46efd11e762df9876d = MAKE_MODULE_FRAME(codeobj_ebbf111e9996ca46efd11e762df9876d, module_torch$ao$quantization$utils);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ebbf111e9996ca46efd11e762df9876d);
    assert(Py_REFCNT(frame_ebbf111e9996ca46efd11e762df9876d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[91], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[92], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[64];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$ao$quantization$utils;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[63];
        frame_ebbf111e9996ca46efd11e762df9876d->m_frame.f_lineno = 4;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_FUNCTOOLS();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[10];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$ao$quantization$utils;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[63];
        frame_ebbf111e9996ca46efd11e762df9876d->m_frame.f_lineno = 6;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[94];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torch$ao$quantization$utils;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[95];
        tmp_level_value_3 = mod_consts[63];
        frame_ebbf111e9996ca46efd11e762df9876d->m_frame.f_lineno = 7;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$ao$quantization$utils,
                mod_consts[57],
                mod_consts[63]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[57]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torch$ao$quantization$utils,
                mod_consts[36],
                mod_consts[63]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[36]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_9);
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
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_10 == NULL));
        assert(tmp_import_from_2__module == NULL);
        Py_INCREF(tmp_assign_source_10);
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_3 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torch$ao$quantization$utils,
                mod_consts[96],
                mod_consts[63]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[96]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_torch$ao$quantization$utils,
                mod_consts[97],
                mod_consts[63]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[97]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_torch$ao$quantization$utils,
                mod_consts[98],
                mod_consts[63]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[98]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_torch$ao$quantization$utils,
                mod_consts[99],
                mod_consts[63]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[99]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_14);
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
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_tuple_element_3;
            PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[96]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
            }

            assert(!(tmp_expression_value_2 == NULL));
            tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[99]);

            if (unlikely(tmp_tuple_element_2 == NULL)) {
                tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
            }

            assert(!(tmp_tuple_element_2 == NULL));
            tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[99]);

            if (unlikely(tmp_tuple_element_2 == NULL)) {
                tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
            }

            assert(!(tmp_tuple_element_2 == NULL));
            PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
            Py_DECREF(tmp_subscript_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_1);
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[96]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[99]);

            if (unlikely(tmp_tuple_element_3 == NULL)) {
                tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
            }

            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;

                goto tuple_build_exception_1;
            }
            tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_4;
                PyObject *tmp_subscript_value_4;
                PyObject *tmp_tuple_element_4;
                PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_3);
                tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[96]);

                if (unlikely(tmp_expression_value_4 == NULL)) {
                    tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                }

                if (tmp_expression_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 13;

                    goto tuple_build_exception_2;
                }
                tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[99]);

                if (unlikely(tmp_tuple_element_4 == NULL)) {
                    tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
                }

                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 13;

                    goto tuple_build_exception_2;
                }
                tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_subscript_value_4, 0, tmp_tuple_element_4);
                tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[99]);

                if (unlikely(tmp_tuple_element_4 == NULL)) {
                    tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
                }

                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 13;

                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_4, 1, tmp_tuple_element_4);
                goto tuple_build_noexception_1;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_3:;
                Py_DECREF(tmp_subscript_value_4);
                goto tuple_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_1:;
                tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
                Py_DECREF(tmp_subscript_value_4);
                if (tmp_tuple_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 13;

                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_3, 1, tmp_tuple_element_3);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_subscript_value_3);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
            Py_DECREF(tmp_subscript_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_tuple_element_1 == NULL)) {
                tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
            }

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_subscript_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_set_element_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_expression_value_26;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[101]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_set_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[102]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_set_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = PySet_New(NULL);
        assert(tmp_assign_source_16);
        tmp_res = PySet_Add(tmp_assign_source_16, tmp_set_element_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_set_element_1);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_1);
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[101]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_set_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[103]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_set_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_16, tmp_set_element_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);
            Py_DECREF(tmp_set_element_1);

            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_1);
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[101]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_set_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[104]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_set_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_16, tmp_set_element_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);
            Py_DECREF(tmp_set_element_1);

            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_1);
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[101]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_set_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[105]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_set_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_16, tmp_set_element_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);
            Py_DECREF(tmp_set_element_1);

            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_1);
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[101]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_set_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[106]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_set_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_16, tmp_set_element_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);
            Py_DECREF(tmp_set_element_1);

            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_1);
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[101]);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_set_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[107]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_set_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_16, tmp_set_element_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);
            Py_DECREF(tmp_set_element_1);

            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_1);
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[101]);
        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_set_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[108]);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_set_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_16, tmp_set_element_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);
            Py_DECREF(tmp_set_element_1);

            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_1);
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[101]);
        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_set_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[109]);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_set_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_16, tmp_set_element_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);
            Py_DECREF(tmp_set_element_1);

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_1);
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[101]);
        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_set_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[110]);
        Py_DECREF(tmp_expression_value_21);
        if (tmp_set_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_16, tmp_set_element_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);
            Py_DECREF(tmp_set_element_1);

            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_1);
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[101]);
        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_set_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[111]);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_set_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_16, tmp_set_element_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);
            Py_DECREF(tmp_set_element_1);

            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_1);
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[101]);
        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_set_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[112]);
        Py_DECREF(tmp_expression_value_25);
        if (tmp_set_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_16, tmp_set_element_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_16);
            Py_DECREF(tmp_set_element_1);

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_1);
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_set_element_2;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_expression_value_53;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[101]);
        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[113]);
        Py_DECREF(tmp_expression_value_28);
        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_set_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[114]);
        Py_DECREF(tmp_expression_value_27);
        if (tmp_set_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = PySet_New(NULL);
        assert(tmp_assign_source_17);
        tmp_res = PySet_Add(tmp_assign_source_17, tmp_set_element_2);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_set_element_2);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_2);
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[101]);
        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[113]);
        Py_DECREF(tmp_expression_value_31);
        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_set_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[115]);
        Py_DECREF(tmp_expression_value_30);
        if (tmp_set_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_17, tmp_set_element_2);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);
            Py_DECREF(tmp_set_element_2);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_2);
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[101]);
        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[113]);
        Py_DECREF(tmp_expression_value_34);
        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_set_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[116]);
        Py_DECREF(tmp_expression_value_33);
        if (tmp_set_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_17, tmp_set_element_2);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);
            Py_DECREF(tmp_set_element_2);

            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_2);
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[101]);
        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[113]);
        Py_DECREF(tmp_expression_value_37);
        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_set_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[117]);
        Py_DECREF(tmp_expression_value_36);
        if (tmp_set_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_17, tmp_set_element_2);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);
            Py_DECREF(tmp_set_element_2);

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_2);
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[101]);
        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[113]);
        Py_DECREF(tmp_expression_value_40);
        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_set_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[118]);
        Py_DECREF(tmp_expression_value_39);
        if (tmp_set_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_17, tmp_set_element_2);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);
            Py_DECREF(tmp_set_element_2);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_2);
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[101]);
        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[113]);
        Py_DECREF(tmp_expression_value_43);
        if (tmp_expression_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_set_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[119]);
        Py_DECREF(tmp_expression_value_42);
        if (tmp_set_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_17, tmp_set_element_2);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);
            Py_DECREF(tmp_set_element_2);

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_2);
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[101]);
        if (tmp_expression_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[113]);
        Py_DECREF(tmp_expression_value_46);
        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_set_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[120]);
        Py_DECREF(tmp_expression_value_45);
        if (tmp_set_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_17, tmp_set_element_2);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);
            Py_DECREF(tmp_set_element_2);

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_2);
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[101]);
        if (tmp_expression_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[113]);
        Py_DECREF(tmp_expression_value_49);
        if (tmp_expression_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_set_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[121]);
        Py_DECREF(tmp_expression_value_48);
        if (tmp_set_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_17, tmp_set_element_2);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);
            Py_DECREF(tmp_set_element_2);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_2);
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[101]);
        if (tmp_expression_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[113]);
        Py_DECREF(tmp_expression_value_52);
        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_set_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[122]);
        Py_DECREF(tmp_expression_value_51);
        if (tmp_set_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_assign_source_17, tmp_set_element_2);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);
            Py_DECREF(tmp_set_element_2);

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_2);
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_set_element_3;
        PyObject *tmp_expression_value_54;
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_set_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[123]);
        if (tmp_set_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = PySet_New(NULL);
        assert(tmp_assign_source_18);
        tmp_res = PySet_Add(tmp_assign_source_18, tmp_set_element_3);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_set_element_3);
            Py_DECREF(tmp_assign_source_18);

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_3);
        tmp_set_element_3 = mod_consts[120];
        tmp_res = PySet_Add(tmp_assign_source_18, tmp_set_element_3);
        assert(!(tmp_res != 0));
        tmp_set_element_3 = mod_consts[124];
        tmp_res = PySet_Add(tmp_assign_source_18, tmp_set_element_3);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_torch$ao$quantization$utils$$$function__1_check_node();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_torch$ao$quantization$utils$$$function__2_get_combined_dict();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_torch$ao$quantization$utils$$$function__3_is_per_tensor();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_torch$ao$quantization$utils$$$function__4_is_per_channel();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[127];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[128];
        tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[129];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_assign_source_23 = MAKE_FUNCTION_torch$ao$quantization$utils$$$function__5_getattr_from_fqn(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_torch$ao$quantization$utils$$$function__6_get_qparam_dict();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_torch$ao$quantization$utils$$$function__7_get_swapped_custom_module_class();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;


        tmp_assign_source_26 = MAKE_FUNCTION_torch$ao$quantization$utils$$$function__8_activation_dtype();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_torch$ao$quantization$utils$$$function__9_weight_dtype();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;


        tmp_assign_source_28 = MAKE_FUNCTION_torch$ao$quantization$utils$$$function__10_activation_is_statically_quantized();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_torch$ao$quantization$utils$$$function__11_activation_is_int8_quantized();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;


        tmp_assign_source_30 = MAKE_FUNCTION_torch$ao$quantization$utils$$$function__12_weight_is_quantized();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;


        tmp_assign_source_31 = MAKE_FUNCTION_torch$ao$quantization$utils$$$function__13_weight_is_statically_quantized();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_annotations_2;
        tmp_annotations_2 = DICT_COPY(mod_consts[137]);


        tmp_assign_source_32 = MAKE_FUNCTION_torch$ao$quantization$utils$$$function__14_op_is_int8_dynamically_quantized(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;


        tmp_assign_source_33 = MAKE_FUNCTION_torch$ao$quantization$utils$$$function__15_get_qconfig_dtypes();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;


        tmp_assign_source_34 = MAKE_FUNCTION_torch$ao$quantization$utils$$$function__16_get_quant_type();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_55;
        tmp_dict_key_2 = mod_consts[139];
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[140]);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_56;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[68];
            tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_expression_value_56 == NULL)) {
                tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_expression_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[140]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[129];
            tmp_dict_value_2 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_annotations_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;


        tmp_assign_source_35 = MAKE_FUNCTION_torch$ao$quantization$utils$$$function__17_check_min_max_valid(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_dict_key_3 = mod_consts[142];
        tmp_dict_value_3 = (PyObject *)&PyLong_Type;
        tmp_annotations_4 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_expression_value_57;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_subscript_value_5;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[143];
            tmp_dict_value_3 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[144];
            tmp_dict_value_3 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[23];
            tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_expression_value_57 == NULL)) {
                tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_expression_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[23]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[145];
            tmp_dict_value_3 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[129];
            tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[96]);

            if (unlikely(tmp_expression_value_58 == NULL)) {
                tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
            }

            if (tmp_expression_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_5 = mod_consts[146];
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_58, tmp_subscript_value_5);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_annotations_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;


        tmp_assign_source_36 = MAKE_FUNCTION_torch$ao$quantization$utils$$$function__18_calculate_qmin_qmax(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_36);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ebbf111e9996ca46efd11e762df9876d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ebbf111e9996ca46efd11e762df9876d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ebbf111e9996ca46efd11e762df9876d, exception_lineno);
    }



    assertFrameObject(frame_ebbf111e9996ca46efd11e762df9876d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_37;


        tmp_assign_source_37 = MAKE_FUNCTION_torch$ao$quantization$utils$$$function__19__parent_name();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_37);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch.ao.quantization.utils", false);

    Py_INCREF(module_torch$ao$quantization$utils);
    return module_torch$ao$quantization$utils;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$utils, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$ao$quantization$utils", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
