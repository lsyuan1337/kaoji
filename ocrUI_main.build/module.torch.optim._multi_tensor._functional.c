/* Generated code for Python module 'torch.optim._multi_tensor._functional'
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

/* The "module_torch$optim$_multi_tensor$_functional" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$optim$_multi_tensor$_functional;
PyDictObject *moduledict_torch$optim$_multi_tensor$_functional;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[138];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[138];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch.optim._multi_tensor._functional"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 138; i++) {
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
void checkModuleConstants_torch$optim$_multi_tensor$_functional(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 138; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_a442f79ade1b7697494464fa54fbd1ae;
static PyCodeObject *codeobj_f44a79116667f140f7f8629df00fb469;
static PyCodeObject *codeobj_4b7b23bc63466b647a75576ced412aa1;
static PyCodeObject *codeobj_0cfc02cf6a50759aaa2e7b313f5bace6;
static PyCodeObject *codeobj_1d98d992443614b7a8e22610b64a6915;
static PyCodeObject *codeobj_efaf539f300209ff55af1437a75a3d20;
static PyCodeObject *codeobj_0cc2ab3f2f61ec9914a7437f736610e5;
static PyCodeObject *codeobj_be465eb929d220cf4a4298e4cd590469;
static PyCodeObject *codeobj_c265c8c0c1ab9ec78ea9e7d4b321ea1e;
static PyCodeObject *codeobj_4bab1b05fc34719c42214a5e4ad1d6c2;
static PyCodeObject *codeobj_b8c8667f1d555bdee90aac95fd358f70;
static PyCodeObject *codeobj_326818036ffb7808d21a251a1e84c9f8;
static PyCodeObject *codeobj_3c946a83c2492d92c7a73733f7fa4da6;
static PyCodeObject *codeobj_58c79349bfa83c59b68d7cd7d6c9b10d;
static PyCodeObject *codeobj_e80548991e758e132972f773b19eeae0;
static PyCodeObject *codeobj_d85093012338e508e720d9f8bb6c22f9;
static PyCodeObject *codeobj_723d19ab030538327d87fa9104df40b5;
static PyCodeObject *codeobj_a8a82da1626c5994d59833e08e0d3254;
static PyCodeObject *codeobj_9ba8206da6cbbdfa716591d8c85a82b9;
static PyCodeObject *codeobj_ad1ba522feeb2f120a928694b49020fd;
static PyCodeObject *codeobj_b273e8f7d370f9bbbc022de6b18b7961;
static PyCodeObject *codeobj_bafa585833064a6ca82a0af0d1609f07;
static PyCodeObject *codeobj_aa4947f673fd894ce4b4dae3cf0ab24a;
static PyCodeObject *codeobj_dc25342e50d862ada480e377183f63c9;
static PyCodeObject *codeobj_ca055cb8432d1e5bbd915f9c867d09f2;
static PyCodeObject *codeobj_05c859b02f51baa15d2f65c7151e9750;
static PyCodeObject *codeobj_6359f16d3ef077b834fafcc14554c307;
static PyCodeObject *codeobj_c627bf708e54bbdc09ff493e38d93ebe;
static PyCodeObject *codeobj_89878d2b2abb20fa665638e0f470627d;
static PyCodeObject *codeobj_4ba5c1f06d2d21446b65771f28106532;
static PyCodeObject *codeobj_ba10557991628490cf0283edeac7ff54;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[112]); CHECK_OBJECT(module_filename_obj);
    codeobj_a442f79ade1b7697494464fa54fbd1ae = MAKE_CODE_OBJECT(module_filename_obj, 215, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[114], NULL, 1, 0, 0);
    codeobj_f44a79116667f140f7f8629df00fb469 = MAKE_CODE_OBJECT(module_filename_obj, 259, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[114], NULL, 1, 0, 0);
    codeobj_4b7b23bc63466b647a75576ced412aa1 = MAKE_CODE_OBJECT(module_filename_obj, 103, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[115], NULL, 1, 0, 0);
    codeobj_0cfc02cf6a50759aaa2e7b313f5bace6 = MAKE_CODE_OBJECT(module_filename_obj, 220, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[116], NULL, 1, 0, 0);
    codeobj_1d98d992443614b7a8e22610b64a6915 = MAKE_CODE_OBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[117], NULL, 1, 0, 0);
    codeobj_efaf539f300209ff55af1437a75a3d20 = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[117], NULL, 1, 0, 0);
    codeobj_0cc2ab3f2f61ec9914a7437f736610e5 = MAKE_CODE_OBJECT(module_filename_obj, 263, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[118], NULL, 1, 0, 0);
    codeobj_be465eb929d220cf4a4298e4cd590469 = MAKE_CODE_OBJECT(module_filename_obj, 265, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[119], NULL, 1, 0, 0);
    codeobj_c265c8c0c1ab9ec78ea9e7d4b321ea1e = MAKE_CODE_OBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[120], NULL, 1, 0, 0);
    codeobj_4bab1b05fc34719c42214a5e4ad1d6c2 = MAKE_CODE_OBJECT(module_filename_obj, 217, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[121], NULL, 1, 0, 0);
    codeobj_b8c8667f1d555bdee90aac95fd358f70 = MAKE_CODE_OBJECT(module_filename_obj, 221, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[121], NULL, 1, 0, 0);
    codeobj_326818036ffb7808d21a251a1e84c9f8 = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[122], NULL, 1, 0, 0);
    codeobj_3c946a83c2492d92c7a73733f7fa4da6 = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[123], NULL, 1, 0, 0);
    codeobj_58c79349bfa83c59b68d7cd7d6c9b10d = MAKE_CODE_OBJECT(module_filename_obj, 198, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[123], NULL, 1, 0, 0);
    codeobj_e80548991e758e132972f773b19eeae0 = MAKE_CODE_OBJECT(module_filename_obj, 243, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[123], NULL, 1, 0, 0);
    codeobj_d85093012338e508e720d9f8bb6c22f9 = MAKE_CODE_OBJECT(module_filename_obj, 245, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[124], NULL, 1, 0, 0);
    codeobj_723d19ab030538327d87fa9104df40b5 = MAKE_CODE_OBJECT(module_filename_obj, 246, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[124], NULL, 1, 0, 0);
    codeobj_a8a82da1626c5994d59833e08e0d3254 = MAKE_CODE_OBJECT(module_filename_obj, 199, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[125], NULL, 1, 0, 0);
    codeobj_9ba8206da6cbbdfa716591d8c85a82b9 = MAKE_CODE_OBJECT(module_filename_obj, 244, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[125], NULL, 1, 0, 0);
    codeobj_ad1ba522feeb2f120a928694b49020fd = MAKE_CODE_OBJECT(module_filename_obj, 196, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[126], NULL, 1, 0, 0);
    codeobj_b273e8f7d370f9bbbc022de6b18b7961 = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[127], NULL, 1, 0, 0);
    codeobj_bafa585833064a6ca82a0af0d1609f07 = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[128], NULL, 1, 0, 0);
    codeobj_aa4947f673fd894ce4b4dae3cf0ab24a = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[128], NULL, 1, 0, 0);
    codeobj_dc25342e50d862ada480e377183f63c9 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[129], mod_consts[129], NULL, NULL, 0, 0, 0);
    codeobj_ca055cb8432d1e5bbd915f9c867d09f2 = MAKE_CODE_OBJECT(module_filename_obj, 7, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[130], NULL, 3, 0, 0);
    codeobj_05c859b02f51baa15d2f65c7151e9750 = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[105], mod_consts[105], mod_consts[131], NULL, 4, 4, 0);
    codeobj_6359f16d3ef077b834fafcc14554c307 = MAKE_CODE_OBJECT(module_filename_obj, 14, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[97], mod_consts[97], mod_consts[132], NULL, 5, 4, 0);
    codeobj_c627bf708e54bbdc09ff493e38d93ebe = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[101], mod_consts[101], mod_consts[133], NULL, 5, 5, 0);
    codeobj_89878d2b2abb20fa665638e0f470627d = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[106], mod_consts[106], mod_consts[134], NULL, 8, 0, 0);
    codeobj_4ba5c1f06d2d21446b65771f28106532 = MAKE_CODE_OBJECT(module_filename_obj, 225, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[111], mod_consts[111], mod_consts[135], NULL, 6, 6, 0);
    codeobj_ba10557991628490cf0283edeac7ff54 = MAKE_CODE_OBJECT(module_filename_obj, 177, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[109], mod_consts[109], mod_consts[136], NULL, 5, 5, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_torch$optim$_multi_tensor$_functional$$$function__1__make_sparse();


static PyObject *MAKE_FUNCTION_torch$optim$_multi_tensor$_functional$$$function__2_adagrad(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$optim$_multi_tensor$_functional$$$function__3_adamax(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$optim$_multi_tensor$_functional$$$function__4_adadelta(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$optim$_multi_tensor$_functional$$$function__5_asgd(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$optim$_multi_tensor$_functional$$$function__6_radam(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$optim$_multi_tensor$_functional$$$function__7_nadam(PyObject *annotations);


// The module function definitions.
static PyObject *impl_torch$optim$_multi_tensor$_functional$$$function__1__make_sparse(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_grad = python_pars[0];
    PyObject *par_grad_indices = python_pars[1];
    PyObject *par_values = python_pars[2];
    PyObject *var_size = NULL;
    struct Nuitka_FrameObject *frame_ca055cb8432d1e5bbd915f9c867d09f2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ca055cb8432d1e5bbd915f9c867d09f2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ca055cb8432d1e5bbd915f9c867d09f2)) {
        Py_XDECREF(cache_frame_ca055cb8432d1e5bbd915f9c867d09f2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ca055cb8432d1e5bbd915f9c867d09f2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ca055cb8432d1e5bbd915f9c867d09f2 = MAKE_FUNCTION_FRAME(codeobj_ca055cb8432d1e5bbd915f9c867d09f2, module_torch$optim$_multi_tensor$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ca055cb8432d1e5bbd915f9c867d09f2->m_type_description == NULL);
    frame_ca055cb8432d1e5bbd915f9c867d09f2 = cache_frame_ca055cb8432d1e5bbd915f9c867d09f2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ca055cb8432d1e5bbd915f9c867d09f2);
    assert(Py_REFCNT(frame_ca055cb8432d1e5bbd915f9c867d09f2) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_grad);
        tmp_called_instance_1 = par_grad;
        frame_ca055cb8432d1e5bbd915f9c867d09f2->m_frame.f_lineno = 8;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[0]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_size == NULL);
        var_size = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_grad_indices);
        tmp_called_instance_2 = par_grad_indices;
        frame_ca055cb8432d1e5bbd915f9c867d09f2->m_frame.f_lineno = 9;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[1]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_values);
        tmp_called_instance_3 = par_values;
        frame_ca055cb8432d1e5bbd915f9c867d09f2->m_frame.f_lineno = 9;
        tmp_cmp_expr_left_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[1]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[2];
        tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "oooo";
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
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_grad);
        tmp_args_element_value_1 = par_grad;
        frame_ca055cb8432d1e5bbd915f9c867d09f2->m_frame.f_lineno = 10;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[4], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_grad_indices);
        tmp_args_element_value_2 = par_grad_indices;
        if (par_values == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 11;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = par_values;
        CHECK_OBJECT(var_size);
        tmp_args_element_value_4 = var_size;
        frame_ca055cb8432d1e5bbd915f9c867d09f2->m_frame.f_lineno = 11;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_ca055cb8432d1e5bbd915f9c867d09f2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ca055cb8432d1e5bbd915f9c867d09f2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ca055cb8432d1e5bbd915f9c867d09f2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ca055cb8432d1e5bbd915f9c867d09f2,
        type_description_1,
        par_grad,
        par_grad_indices,
        par_values,
        var_size
    );


    // Release cached frame if used for exception.
    if (frame_ca055cb8432d1e5bbd915f9c867d09f2 == cache_frame_ca055cb8432d1e5bbd915f9c867d09f2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ca055cb8432d1e5bbd915f9c867d09f2);
        cache_frame_ca055cb8432d1e5bbd915f9c867d09f2 = NULL;
    }

    assertFrameObject(frame_ca055cb8432d1e5bbd915f9c867d09f2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_size);
    var_size = NULL;
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

    Py_XDECREF(var_size);
    var_size = NULL;
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
    CHECK_OBJECT(par_grad);
    Py_DECREF(par_grad);
    CHECK_OBJECT(par_grad_indices);
    Py_DECREF(par_grad_indices);
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_grad);
    Py_DECREF(par_grad);
    CHECK_OBJECT(par_grad_indices);
    Py_DECREF(par_grad_indices);
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$optim$_multi_tensor$_functional$$$function__2_adagrad(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_params = python_pars[0];
    PyObject *par_grads = python_pars[1];
    PyObject *par_state_sums = python_pars[2];
    PyObject *par_state_steps = python_pars[3];
    PyObject *par_has_sparse_grad = python_pars[4];
    PyObject *par_lr = python_pars[5];
    PyObject *par_weight_decay = python_pars[6];
    PyObject *par_lr_decay = python_pars[7];
    PyObject *par_eps = python_pars[8];
    PyObject *var_minus_clr = NULL;
    PyObject *var_i = NULL;
    PyObject *var_param = NULL;
    PyObject *var_grad = NULL;
    PyObject *var_state_sum = NULL;
    PyObject *var_step = NULL;
    PyObject *var_grad_indices = NULL;
    PyObject *var_grad_values = NULL;
    PyObject *var_size = NULL;
    PyObject *var_std_sparse = NULL;
    PyObject *var_std_sparse_values = NULL;
    PyObject *var_std = NULL;
    PyObject *var_toAdd = NULL;
    PyObject *outline_0_var_step = NULL;
    PyObject *outline_1_var_x = NULL;
    PyObject *outline_2_var_x = NULL;
    PyObject *outline_3_var_i = NULL;
    PyObject *outline_3_var_x = NULL;
    PyObject *outline_4_var_i = NULL;
    PyObject *outline_4_var_x = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__source_iter = NULL;
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
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__element_4 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_6359f16d3ef077b834fafcc14554c307;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_FrameObject *frame_b273e8f7d370f9bbbc022de6b18b7961_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_b273e8f7d370f9bbbc022de6b18b7961_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_iterator_attempt;
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
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_FrameObject *frame_bafa585833064a6ca82a0af0d1609f07_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    static struct Nuitka_FrameObject *cache_frame_bafa585833064a6ca82a0af0d1609f07_3 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    struct Nuitka_FrameObject *frame_aa4947f673fd894ce4b4dae3cf0ab24a_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    static struct Nuitka_FrameObject *cache_frame_aa4947f673fd894ce4b4dae3cf0ab24a_4 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    struct Nuitka_FrameObject *frame_1d98d992443614b7a8e22610b64a6915_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_1d98d992443614b7a8e22610b64a6915_5 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    struct Nuitka_FrameObject *frame_efaf539f300209ff55af1437a75a3d20_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_efaf539f300209ff55af1437a75a3d20_6 = NULL;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    static struct Nuitka_FrameObject *cache_frame_6359f16d3ef077b834fafcc14554c307 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6359f16d3ef077b834fafcc14554c307)) {
        Py_XDECREF(cache_frame_6359f16d3ef077b834fafcc14554c307);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6359f16d3ef077b834fafcc14554c307 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6359f16d3ef077b834fafcc14554c307 = MAKE_FUNCTION_FRAME(codeobj_6359f16d3ef077b834fafcc14554c307, module_torch$optim$_multi_tensor$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6359f16d3ef077b834fafcc14554c307->m_type_description == NULL);
    frame_6359f16d3ef077b834fafcc14554c307 = cache_frame_6359f16d3ef077b834fafcc14554c307;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6359f16d3ef077b834fafcc14554c307);
    assert(Py_REFCNT(frame_6359f16d3ef077b834fafcc14554c307) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_weight_decay);
        tmp_cmp_expr_left_1 = par_weight_decay;
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooooooooooooooooooo";
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
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_has_sparse_grad);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_has_sparse_grad);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[7];
        frame_6359f16d3ef077b834fafcc14554c307->m_frame.f_lineno = 33;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 33;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_grads);
        tmp_kw_call_arg_value_0_1 = par_grads;
        CHECK_OBJECT(par_params);
        tmp_kw_call_arg_value_1_1 = par_params;
        CHECK_OBJECT(par_weight_decay);
        tmp_kw_call_dict_value_0_1 = par_weight_decay;
        frame_6359f16d3ef077b834fafcc14554c307->m_frame.f_lineno = 36;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[9]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_state_steps);
            tmp_iter_arg_1 = par_state_steps;
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_1 = "oooooooooooooooooooooo";
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
        if (isFrameUnusable(cache_frame_b273e8f7d370f9bbbc022de6b18b7961_2)) {
            Py_XDECREF(cache_frame_b273e8f7d370f9bbbc022de6b18b7961_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_b273e8f7d370f9bbbc022de6b18b7961_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_b273e8f7d370f9bbbc022de6b18b7961_2 = MAKE_FUNCTION_FRAME(codeobj_b273e8f7d370f9bbbc022de6b18b7961, module_torch$optim$_multi_tensor$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_b273e8f7d370f9bbbc022de6b18b7961_2->m_type_description == NULL);
        frame_b273e8f7d370f9bbbc022de6b18b7961_2 = cache_frame_b273e8f7d370f9bbbc022de6b18b7961_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_b273e8f7d370f9bbbc022de6b18b7961_2);
        assert(Py_REFCNT(frame_b273e8f7d370f9bbbc022de6b18b7961_2) == 2);

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
                    type_description_2 = "ooo";
                    exception_lineno = 38;
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
                PyObject *old = outline_0_var_step;
                outline_0_var_step = tmp_assign_source_5;
                Py_INCREF(outline_0_var_step);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_truediv_expr_left_1;
            PyObject *tmp_truediv_expr_right_1;
            PyObject *tmp_operand_value_1;
            PyObject *tmp_add_expr_left_1;
            PyObject *tmp_add_expr_right_1;
            PyObject *tmp_mult_expr_left_1;
            PyObject *tmp_mult_expr_right_1;
            PyObject *tmp_sub_expr_left_1;
            PyObject *tmp_sub_expr_right_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(par_lr);
            tmp_operand_value_1 = par_lr;
            tmp_truediv_expr_left_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
            if (tmp_truediv_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_add_expr_left_1 = mod_consts[10];
            CHECK_OBJECT(outline_0_var_step);
            tmp_sub_expr_left_1 = outline_0_var_step;
            tmp_sub_expr_right_1 = mod_consts[10];
            tmp_mult_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
            if (tmp_mult_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_truediv_expr_left_1);

                exception_lineno = 38;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            if (par_lr_decay == NULL) {
                Py_DECREF(tmp_truediv_expr_left_1);
                Py_DECREF(tmp_mult_expr_left_1);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 38;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }

            tmp_mult_expr_right_1 = par_lr_decay;
            tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
            Py_DECREF(tmp_mult_expr_left_1);
            if (tmp_add_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_truediv_expr_left_1);

                exception_lineno = 38;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_truediv_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
            Py_DECREF(tmp_add_expr_right_1);
            if (tmp_truediv_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_truediv_expr_left_1);

                exception_lineno = 38;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_append_value_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
            Py_DECREF(tmp_truediv_expr_left_1);
            Py_DECREF(tmp_truediv_expr_right_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_2 = "ooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_1);
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
        goto frame_return_exit_1;
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
        frame_return_exit_1:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b273e8f7d370f9bbbc022de6b18b7961_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b273e8f7d370f9bbbc022de6b18b7961_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b273e8f7d370f9bbbc022de6b18b7961_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b273e8f7d370f9bbbc022de6b18b7961_2,
            type_description_2,
            outline_0_var_step,
            par_lr,
            par_lr_decay
        );


        // Release cached frame if used for exception.
        if (frame_b273e8f7d370f9bbbc022de6b18b7961_2 == cache_frame_b273e8f7d370f9bbbc022de6b18b7961_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_b273e8f7d370f9bbbc022de6b18b7961_2);
            cache_frame_b273e8f7d370f9bbbc022de6b18b7961_2 = NULL;
        }

        assertFrameObject(frame_b273e8f7d370f9bbbc022de6b18b7961_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_step);
        outline_0_var_step = NULL;
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

        Py_XDECREF(outline_0_var_step);
        outline_0_var_step = NULL;
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
        exception_lineno = 38;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_minus_clr == NULL);
        var_minus_clr = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_has_sparse_grad);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_has_sparse_grad);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_2 = (PyObject *)&PyEnum_Type;
        tmp_called_value_3 = (PyObject *)&PyZip_Type;
        if (par_params == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 44;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = par_params;
        if (par_grads == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 44;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = par_grads;
        CHECK_OBJECT(par_state_sums);
        tmp_args_element_value_4 = par_state_sums;
        CHECK_OBJECT(par_state_steps);
        tmp_args_element_value_5 = par_state_steps;
        frame_6359f16d3ef077b834fafcc14554c307->m_frame.f_lineno = 44;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_3, call_args);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_6359f16d3ef077b834fafcc14554c307->m_frame.f_lineno = 43;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_6;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_7 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooo";
                exception_lineno = 43;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_3 = tmp_for_loop_1__iter_value;
        tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooo";
            exception_lineno = 43;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooo";
            exception_lineno = 43;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
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

                    type_description_1 = "oooooooooooooooooooooo";
                    exception_lineno = 43;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[14];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooo";
            exception_lineno = 43;
            goto try_except_handler_6;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_11;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_iter_arg_4 = tmp_tuple_unpack_1__element_2;
        tmp_assign_source_12 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_3, 0, 4);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooo";
            exception_lineno = 43;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_4, 1, 4);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooo";
            exception_lineno = 43;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tmp_unpack_5, 2, 4);
        if (tmp_assign_source_15 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooo";
            exception_lineno = 43;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_3;
            tmp_tuple_unpack_2__element_3 = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT(tmp_unpack_6, 3, 4);
        if (tmp_assign_source_16 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooo";
            exception_lineno = 43;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_4;
            tmp_tuple_unpack_2__element_4 = tmp_assign_source_16;
            Py_XDECREF(old);
        }

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

                    type_description_1 = "oooooooooooooooooooooo";
                    exception_lineno = 43;
                    goto try_except_handler_8;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[15];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooo";
            exception_lineno = 43;
            goto try_except_handler_8;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_8:;
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

    goto try_except_handler_7;
    // End of try:
    try_end_2:;
    goto try_end_3;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_4);
    tmp_tuple_unpack_2__element_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_17 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_param;
            var_param = tmp_assign_source_17;
            Py_INCREF(var_param);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_18 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_grad;
            var_grad = tmp_assign_source_18;
            Py_INCREF(var_grad);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_19 = tmp_tuple_unpack_2__element_3;
        {
            PyObject *old = var_state_sum;
            var_state_sum = tmp_assign_source_19;
            Py_INCREF(var_state_sum);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_4);
        tmp_assign_source_20 = tmp_tuple_unpack_2__element_4;
        {
            PyObject *old = var_step;
            var_step = tmp_assign_source_20;
            Py_INCREF(var_step);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_4);
    tmp_tuple_unpack_2__element_4 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_grad);
        tmp_called_instance_1 = var_grad;
        frame_6359f16d3ef077b834fafcc14554c307->m_frame.f_lineno = 46;
        tmp_assign_source_21 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[16]);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_grad;
            assert(old != NULL);
            var_grad = tmp_assign_source_21;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_grad);
        tmp_called_instance_2 = var_grad;
        frame_6359f16d3ef077b834fafcc14554c307->m_frame.f_lineno = 47;
        tmp_assign_source_22 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[17]);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_grad_indices;
            var_grad_indices = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(var_grad);
        tmp_called_instance_3 = var_grad;
        frame_6359f16d3ef077b834fafcc14554c307->m_frame.f_lineno = 48;
        tmp_assign_source_23 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[18]);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_grad_values;
            var_grad_values = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(var_grad);
        tmp_called_instance_4 = var_grad;
        frame_6359f16d3ef077b834fafcc14554c307->m_frame.f_lineno = 49;
        tmp_assign_source_24 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[0]);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_size;
            var_size = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(var_state_sum);
        tmp_expression_value_2 = var_state_sum;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[19]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 51;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_grad);
        tmp_args_element_value_7 = var_grad;
        CHECK_OBJECT(var_grad_indices);
        tmp_args_element_value_8 = var_grad_indices;
        CHECK_OBJECT(var_grad_values);
        tmp_called_instance_5 = var_grad_values;
        frame_6359f16d3ef077b834fafcc14554c307->m_frame.f_lineno = 51;
        tmp_args_element_value_9 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_5,
            mod_consts[21],
            PyTuple_GET_ITEM(mod_consts[22], 0)
        );

        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 51;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_6359f16d3ef077b834fafcc14554c307->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_args_element_value_6 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_args_element_value_9);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 51;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_6359f16d3ef077b834fafcc14554c307->m_frame.f_lineno = 51;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(var_state_sum);
        tmp_called_instance_6 = var_state_sum;
        CHECK_OBJECT(var_grad);
        tmp_args_element_value_10 = var_grad;
        frame_6359f16d3ef077b834fafcc14554c307->m_frame.f_lineno = 52;
        tmp_assign_source_25 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[23], tmp_args_element_value_10);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_std_sparse;
            var_std_sparse = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_11;
        CHECK_OBJECT(var_std_sparse);
        tmp_called_instance_8 = var_std_sparse;
        frame_6359f16d3ef077b834fafcc14554c307->m_frame.f_lineno = 53;
        tmp_called_instance_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[18]);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_6359f16d3ef077b834fafcc14554c307->m_frame.f_lineno = 53;
        tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[24]);
        Py_DECREF(tmp_called_instance_7);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[19]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (par_eps == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 53;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_11 = par_eps;
        frame_6359f16d3ef077b834fafcc14554c307->m_frame.f_lineno = 53;
        tmp_assign_source_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_6);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_std_sparse_values;
            var_std_sparse_values = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_param);
        tmp_expression_value_4 = var_param;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[19]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 55;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_grad);
        tmp_args_element_value_12 = var_grad;
        CHECK_OBJECT(var_grad_indices);
        tmp_args_element_value_13 = var_grad_indices;
        CHECK_OBJECT(var_grad_values);
        tmp_truediv_expr_left_2 = var_grad_values;
        CHECK_OBJECT(var_std_sparse_values);
        tmp_truediv_expr_right_2 = var_std_sparse_values;
        tmp_args_element_value_14 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 55;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_6359f16d3ef077b834fafcc14554c307->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_kw_call_arg_value_0_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_args_element_value_14);
        if (tmp_kw_call_arg_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 55;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_minus_clr);
        tmp_expression_value_5 = var_minus_clr;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_1 = var_i;
        tmp_kw_call_dict_value_0_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_1);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            exception_lineno = 56;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_6359f16d3ef077b834fafcc14554c307->m_frame.f_lineno = 54;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_7, args, kw_values, mod_consts[9]);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_kw_call_arg_value_0_2);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 43;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_27;
        // Tried code:
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_iter_arg_5;
            if (par_grads == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[13]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 59;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_9;
            }

            tmp_iter_arg_5 = par_grads;
            tmp_assign_source_28 = MAKE_ITERATOR(tmp_iter_arg_5);
            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_9;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_28;
        }
        {
            PyObject *tmp_assign_source_29;
            tmp_assign_source_29 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_29;
        }
        if (isFrameUnusable(cache_frame_bafa585833064a6ca82a0af0d1609f07_3)) {
            Py_XDECREF(cache_frame_bafa585833064a6ca82a0af0d1609f07_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_bafa585833064a6ca82a0af0d1609f07_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_bafa585833064a6ca82a0af0d1609f07_3 = MAKE_FUNCTION_FRAME(codeobj_bafa585833064a6ca82a0af0d1609f07, module_torch$optim$_multi_tensor$_functional, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_bafa585833064a6ca82a0af0d1609f07_3->m_type_description == NULL);
        frame_bafa585833064a6ca82a0af0d1609f07_3 = cache_frame_bafa585833064a6ca82a0af0d1609f07_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_bafa585833064a6ca82a0af0d1609f07_3);
        assert(Py_REFCNT(frame_bafa585833064a6ca82a0af0d1609f07_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_30;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_3 = tmp_listcomp_2__$0;
            tmp_assign_source_30 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_30 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 59;
                    goto try_except_handler_10;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_30;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_31;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_31 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_x;
                outline_1_var_x = tmp_assign_source_31;
                Py_INCREF(outline_1_var_x);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_instance_9;
            PyObject *tmp_call_result_4;
            PyObject *tmp_args_element_value_15;
            int tmp_truth_name_3;
            PyObject *tmp_called_instance_10;
            PyObject *tmp_args_element_value_16;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_instance_9 == NULL)) {
                tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            if (tmp_called_instance_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            CHECK_OBJECT(outline_1_var_x);
            tmp_args_element_value_15 = outline_1_var_x;
            frame_bafa585833064a6ca82a0af0d1609f07_3->m_frame.f_lineno = 59;
            tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[26], tmp_args_element_value_15);
            if (tmp_call_result_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_4);
            if (tmp_truth_name_3 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_4);

                exception_lineno = 59;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            Py_DECREF(tmp_call_result_4);
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_1;
            } else {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_instance_10 == NULL)) {
                tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            if (tmp_called_instance_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            CHECK_OBJECT(outline_1_var_x);
            tmp_args_element_value_16 = outline_1_var_x;
            frame_bafa585833064a6ca82a0af0d1609f07_3->m_frame.f_lineno = 59;
            tmp_append_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_10, mod_consts[27], tmp_args_element_value_16);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            goto condexpr_end_1;
            condexpr_false_1:;
            CHECK_OBJECT(outline_1_var_x);
            tmp_append_value_2 = outline_1_var_x;
            Py_INCREF(tmp_append_value_2);
            condexpr_end_1:;
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_2 = "o";
            goto try_except_handler_10;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_27 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
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
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
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
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto frame_exception_exit_3;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_9;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_bafa585833064a6ca82a0af0d1609f07_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_bafa585833064a6ca82a0af0d1609f07_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_bafa585833064a6ca82a0af0d1609f07_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_bafa585833064a6ca82a0af0d1609f07_3,
            type_description_2,
            outline_1_var_x
        );


        // Release cached frame if used for exception.
        if (frame_bafa585833064a6ca82a0af0d1609f07_3 == cache_frame_bafa585833064a6ca82a0af0d1609f07_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_bafa585833064a6ca82a0af0d1609f07_3);
            cache_frame_bafa585833064a6ca82a0af0d1609f07_3 = NULL;
        }

        assertFrameObject(frame_bafa585833064a6ca82a0af0d1609f07_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_9;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_XDECREF(outline_1_var_x);
        outline_1_var_x = NULL;
        goto outline_result_2;
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

        Py_XDECREF(outline_1_var_x);
        outline_1_var_x = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 59;
        goto frame_exception_exit_1;
        outline_result_2:;
        {
            PyObject *old = par_grads;
            par_grads = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_32;
        // Tried code:
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_iter_arg_6;
            CHECK_OBJECT(par_state_sums);
            tmp_iter_arg_6 = par_state_sums;
            tmp_assign_source_33 = MAKE_ITERATOR(tmp_iter_arg_6);
            if (tmp_assign_source_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            assert(tmp_listcomp_3__$0 == NULL);
            tmp_listcomp_3__$0 = tmp_assign_source_33;
        }
        {
            PyObject *tmp_assign_source_34;
            tmp_assign_source_34 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_3__contraction == NULL);
            tmp_listcomp_3__contraction = tmp_assign_source_34;
        }
        if (isFrameUnusable(cache_frame_aa4947f673fd894ce4b4dae3cf0ab24a_4)) {
            Py_XDECREF(cache_frame_aa4947f673fd894ce4b4dae3cf0ab24a_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_aa4947f673fd894ce4b4dae3cf0ab24a_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_aa4947f673fd894ce4b4dae3cf0ab24a_4 = MAKE_FUNCTION_FRAME(codeobj_aa4947f673fd894ce4b4dae3cf0ab24a, module_torch$optim$_multi_tensor$_functional, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_aa4947f673fd894ce4b4dae3cf0ab24a_4->m_type_description == NULL);
        frame_aa4947f673fd894ce4b4dae3cf0ab24a_4 = cache_frame_aa4947f673fd894ce4b4dae3cf0ab24a_4;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_aa4947f673fd894ce4b4dae3cf0ab24a_4);
        assert(Py_REFCNT(frame_aa4947f673fd894ce4b4dae3cf0ab24a_4) == 2);

        // Framed code:
        // Tried code:
        loop_start_4:;
        {
            PyObject *tmp_next_source_4;
            PyObject *tmp_assign_source_35;
            CHECK_OBJECT(tmp_listcomp_3__$0);
            tmp_next_source_4 = tmp_listcomp_3__$0;
            tmp_assign_source_35 = ITERATOR_NEXT(tmp_next_source_4);
            if (tmp_assign_source_35 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_4;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 60;
                    goto try_except_handler_12;
                }
            }

            {
                PyObject *old = tmp_listcomp_3__iter_value_0;
                tmp_listcomp_3__iter_value_0 = tmp_assign_source_35;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_36;
            CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
            tmp_assign_source_36 = tmp_listcomp_3__iter_value_0;
            {
                PyObject *old = outline_2_var_x;
                outline_2_var_x = tmp_assign_source_36;
                Py_INCREF(outline_2_var_x);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_instance_11;
            PyObject *tmp_call_result_5;
            PyObject *tmp_args_element_value_17;
            int tmp_truth_name_4;
            PyObject *tmp_called_instance_12;
            PyObject *tmp_args_element_value_18;
            CHECK_OBJECT(tmp_listcomp_3__contraction);
            tmp_append_list_3 = tmp_listcomp_3__contraction;
            tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_instance_11 == NULL)) {
                tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            if (tmp_called_instance_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            CHECK_OBJECT(outline_2_var_x);
            tmp_args_element_value_17 = outline_2_var_x;
            frame_aa4947f673fd894ce4b4dae3cf0ab24a_4->m_frame.f_lineno = 60;
            tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_11, mod_consts[26], tmp_args_element_value_17);
            if (tmp_call_result_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_5);
            if (tmp_truth_name_4 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_5);

                exception_lineno = 60;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            tmp_condition_result_5 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            Py_DECREF(tmp_call_result_5);
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_instance_12 == NULL)) {
                tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            if (tmp_called_instance_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            CHECK_OBJECT(outline_2_var_x);
            tmp_args_element_value_18 = outline_2_var_x;
            frame_aa4947f673fd894ce4b4dae3cf0ab24a_4->m_frame.f_lineno = 60;
            tmp_append_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_12, mod_consts[27], tmp_args_element_value_18);
            if (tmp_append_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            CHECK_OBJECT(outline_2_var_x);
            tmp_append_value_3 = outline_2_var_x;
            Py_INCREF(tmp_append_value_3);
            condexpr_end_2:;
            tmp_result = LIST_APPEND1(tmp_append_list_3, tmp_append_value_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_2 = "o";
            goto try_except_handler_12;
        }
        goto loop_start_4;
        loop_end_4:;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        tmp_assign_source_32 = tmp_listcomp_3__contraction;
        Py_INCREF(tmp_assign_source_32);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
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
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
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
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto frame_exception_exit_4;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_return_exit_3:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_11;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_aa4947f673fd894ce4b4dae3cf0ab24a_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_aa4947f673fd894ce4b4dae3cf0ab24a_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_aa4947f673fd894ce4b4dae3cf0ab24a_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_aa4947f673fd894ce4b4dae3cf0ab24a_4,
            type_description_2,
            outline_2_var_x
        );


        // Release cached frame if used for exception.
        if (frame_aa4947f673fd894ce4b4dae3cf0ab24a_4 == cache_frame_aa4947f673fd894ce4b4dae3cf0ab24a_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_aa4947f673fd894ce4b4dae3cf0ab24a_4);
            cache_frame_aa4947f673fd894ce4b4dae3cf0ab24a_4 = NULL;
        }

        assertFrameObject(frame_aa4947f673fd894ce4b4dae3cf0ab24a_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_11;
        skip_nested_handling_3:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_XDECREF(outline_2_var_x);
        outline_2_var_x = NULL;
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

        Py_XDECREF(outline_2_var_x);
        outline_2_var_x = NULL;
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
        exception_lineno = 60;
        goto frame_exception_exit_1;
        outline_result_3:;
        {
            PyObject *old = par_state_sums;
            assert(old != NULL);
            par_state_sums = tmp_assign_source_32;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[28]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state_sums);
        tmp_tuple_element_1 = par_state_sums;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_grads);
        tmp_tuple_element_1 = par_grads;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_grads);
        tmp_tuple_element_1 = par_grads;
        PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[29]);
        frame_6359f16d3ef077b834fafcc14554c307->m_frame.f_lineno = 61;
        tmp_call_result_6 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[30]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_13 == NULL)) {
            tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 62;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state_sums);
        tmp_args_element_value_20 = par_state_sums;
        frame_6359f16d3ef077b834fafcc14554c307->m_frame.f_lineno = 62;
        tmp_args_element_value_19 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_13, mod_consts[31], tmp_args_element_value_20);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 62;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_eps);
        tmp_args_element_value_21 = par_eps;
        frame_6359f16d3ef077b834fafcc14554c307->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_21};
            tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_std == NULL);
        var_std = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[32]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_14 == NULL)) {
            tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 63;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_grads);
        tmp_args_element_value_23 = par_grads;
        CHECK_OBJECT(var_minus_clr);
        tmp_args_element_value_24 = var_minus_clr;
        frame_6359f16d3ef077b834fafcc14554c307->m_frame.f_lineno = 63;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_args_element_value_22 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_14,
                mod_consts[33],
                call_args
            );
        }

        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 63;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_std);
        tmp_args_element_value_25 = var_std;
        frame_6359f16d3ef077b834fafcc14554c307->m_frame.f_lineno = 63;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_25};
            tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_toAdd == NULL);
        var_toAdd = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        // Tried code:
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_iter_arg_7;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_26;
            tmp_called_value_12 = (PyObject *)&PyEnum_Type;
            CHECK_OBJECT(var_toAdd);
            tmp_args_element_value_26 = var_toAdd;
            frame_6359f16d3ef077b834fafcc14554c307->m_frame.f_lineno = 64;
            tmp_iter_arg_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_26);
            if (tmp_iter_arg_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_13;
            }
            tmp_assign_source_40 = MAKE_ITERATOR(tmp_iter_arg_7);
            Py_DECREF(tmp_iter_arg_7);
            if (tmp_assign_source_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_13;
            }
            assert(tmp_listcomp_4__$0 == NULL);
            tmp_listcomp_4__$0 = tmp_assign_source_40;
        }
        {
            PyObject *tmp_assign_source_41;
            tmp_assign_source_41 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_4__contraction == NULL);
            tmp_listcomp_4__contraction = tmp_assign_source_41;
        }
        if (isFrameUnusable(cache_frame_1d98d992443614b7a8e22610b64a6915_5)) {
            Py_XDECREF(cache_frame_1d98d992443614b7a8e22610b64a6915_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_1d98d992443614b7a8e22610b64a6915_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_1d98d992443614b7a8e22610b64a6915_5 = MAKE_FUNCTION_FRAME(codeobj_1d98d992443614b7a8e22610b64a6915, module_torch$optim$_multi_tensor$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_1d98d992443614b7a8e22610b64a6915_5->m_type_description == NULL);
        frame_1d98d992443614b7a8e22610b64a6915_5 = cache_frame_1d98d992443614b7a8e22610b64a6915_5;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_1d98d992443614b7a8e22610b64a6915_5);
        assert(Py_REFCNT(frame_1d98d992443614b7a8e22610b64a6915_5) == 2);

        // Framed code:
        // Tried code:
        loop_start_5:;
        {
            PyObject *tmp_next_source_5;
            PyObject *tmp_assign_source_42;
            CHECK_OBJECT(tmp_listcomp_4__$0);
            tmp_next_source_5 = tmp_listcomp_4__$0;
            tmp_assign_source_42 = ITERATOR_NEXT(tmp_next_source_5);
            if (tmp_assign_source_42 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_5;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 64;
                    goto try_except_handler_14;
                }
            }

            {
                PyObject *old = tmp_listcomp_4__iter_value_0;
                tmp_listcomp_4__iter_value_0 = tmp_assign_source_42;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_iter_arg_8;
            CHECK_OBJECT(tmp_listcomp_4__iter_value_0);
            tmp_iter_arg_8 = tmp_listcomp_4__iter_value_0;
            tmp_assign_source_43 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_8);
            if (tmp_assign_source_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_2 = "ooo";
                goto try_except_handler_15;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_43;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_unpack_7;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_7 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_44 = UNPACK_NEXT(tmp_unpack_7, 0, 2);
            if (tmp_assign_source_44 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 64;
                goto try_except_handler_16;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_44;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_unpack_8;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_8 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_45 = UNPACK_NEXT(tmp_unpack_8, 1, 2);
            if (tmp_assign_source_45 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 64;
                goto try_except_handler_16;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_45;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_3;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_iterator_name_3 = tmp_listcomp$tuple_unpack_1__source_iter;
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

                        type_description_2 = "ooo";
                        exception_lineno = 64;
                        goto try_except_handler_16;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[14];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "ooo";
                exception_lineno = 64;
                goto try_except_handler_16;
            }
        }
        goto try_end_6;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_15;
        // End of try:
        try_end_6:;
        goto try_end_7;
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

        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        try_end_7:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_46;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_46 = tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_3_var_i;
                outline_3_var_i = tmp_assign_source_46;
                Py_INCREF(outline_3_var_i);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_47;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_47 = tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_3_var_x;
                outline_3_var_x = tmp_assign_source_47;
                Py_INCREF(outline_3_var_x);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_append_list_4;
            PyObject *tmp_append_value_4;
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_value_13;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_call_result_7;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_2;
            int tmp_truth_name_5;
            PyObject *tmp_called_instance_15;
            PyObject *tmp_args_element_value_28;
            CHECK_OBJECT(tmp_listcomp_4__contraction);
            tmp_append_list_4 = tmp_listcomp_4__contraction;
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_2 = "ooo";
                goto try_except_handler_14;
            }
            tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[26]);
            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_2 = "ooo";
                goto try_except_handler_14;
            }
            if (par_params == NULL) {
                Py_DECREF(tmp_called_value_13);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[12]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 64;
                type_description_2 = "ooo";
                goto try_except_handler_14;
            }

            tmp_expression_value_10 = par_params;
            CHECK_OBJECT(outline_3_var_i);
            tmp_subscript_value_2 = outline_3_var_i;
            tmp_args_element_value_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_2);
            if (tmp_args_element_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_13);

                exception_lineno = 64;
                type_description_2 = "ooo";
                goto try_except_handler_14;
            }
            frame_1d98d992443614b7a8e22610b64a6915_5->m_frame.f_lineno = 64;
            tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_27);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_call_result_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_2 = "ooo";
                goto try_except_handler_14;
            }
            tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_7);
            if (tmp_truth_name_5 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_7);

                exception_lineno = 64;
                type_description_2 = "ooo";
                goto try_except_handler_14;
            }
            tmp_condition_result_6 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            Py_DECREF(tmp_call_result_7);
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_instance_15 == NULL)) {
                tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            if (tmp_called_instance_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_2 = "ooo";
                goto try_except_handler_14;
            }
            CHECK_OBJECT(outline_3_var_x);
            tmp_args_element_value_28 = outline_3_var_x;
            frame_1d98d992443614b7a8e22610b64a6915_5->m_frame.f_lineno = 64;
            tmp_append_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_15, mod_consts[34], tmp_args_element_value_28);
            if (tmp_append_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_2 = "ooo";
                goto try_except_handler_14;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            CHECK_OBJECT(outline_3_var_x);
            tmp_append_value_4 = outline_3_var_x;
            Py_INCREF(tmp_append_value_4);
            condexpr_end_3:;
            tmp_result = LIST_APPEND1(tmp_append_list_4, tmp_append_value_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_2 = "ooo";
                goto try_except_handler_14;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_2 = "ooo";
            goto try_except_handler_14;
        }
        goto loop_start_5;
        loop_end_5:;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        tmp_assign_source_39 = tmp_listcomp_4__contraction;
        Py_INCREF(tmp_assign_source_39);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
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
        try_except_handler_14:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
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
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto frame_exception_exit_5;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_return_exit_4:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_13;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_1d98d992443614b7a8e22610b64a6915_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1d98d992443614b7a8e22610b64a6915_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1d98d992443614b7a8e22610b64a6915_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1d98d992443614b7a8e22610b64a6915_5,
            type_description_2,
            outline_3_var_i,
            outline_3_var_x,
            par_params
        );


        // Release cached frame if used for exception.
        if (frame_1d98d992443614b7a8e22610b64a6915_5 == cache_frame_1d98d992443614b7a8e22610b64a6915_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_1d98d992443614b7a8e22610b64a6915_5);
            cache_frame_1d98d992443614b7a8e22610b64a6915_5 = NULL;
        }

        assertFrameObject(frame_1d98d992443614b7a8e22610b64a6915_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_13;
        skip_nested_handling_4:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_XDECREF(outline_3_var_i);
        outline_3_var_i = NULL;
        Py_XDECREF(outline_3_var_x);
        outline_3_var_x = NULL;
        goto outline_result_4;
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

        Py_XDECREF(outline_3_var_i);
        outline_3_var_i = NULL;
        Py_XDECREF(outline_3_var_x);
        outline_3_var_x = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 64;
        goto frame_exception_exit_1;
        outline_result_4:;
        {
            PyObject *old = var_toAdd;
            assert(old != NULL);
            var_toAdd = tmp_assign_source_39;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[8]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_params == NULL) {
            Py_DECREF(tmp_called_value_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 65;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_29 = par_params;
        CHECK_OBJECT(var_toAdd);
        tmp_args_element_value_30 = var_toAdd;
        frame_6359f16d3ef077b834fafcc14554c307->m_frame.f_lineno = 65;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_14, call_args);
        }

        Py_DECREF(tmp_called_value_14);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_assign_source_48;
        // Tried code:
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_iter_arg_9;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_31;
            tmp_called_value_15 = (PyObject *)&PyEnum_Type;
            CHECK_OBJECT(par_state_sums);
            tmp_args_element_value_31 = par_state_sums;
            frame_6359f16d3ef077b834fafcc14554c307->m_frame.f_lineno = 66;
            tmp_iter_arg_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_31);
            if (tmp_iter_arg_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_17;
            }
            tmp_assign_source_49 = MAKE_ITERATOR(tmp_iter_arg_9);
            Py_DECREF(tmp_iter_arg_9);
            if (tmp_assign_source_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_17;
            }
            assert(tmp_listcomp_5__$0 == NULL);
            tmp_listcomp_5__$0 = tmp_assign_source_49;
        }
        {
            PyObject *tmp_assign_source_50;
            tmp_assign_source_50 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_5__contraction == NULL);
            tmp_listcomp_5__contraction = tmp_assign_source_50;
        }
        if (isFrameUnusable(cache_frame_efaf539f300209ff55af1437a75a3d20_6)) {
            Py_XDECREF(cache_frame_efaf539f300209ff55af1437a75a3d20_6);

#if _DEBUG_REFCOUNTS
            if (cache_frame_efaf539f300209ff55af1437a75a3d20_6 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_efaf539f300209ff55af1437a75a3d20_6 = MAKE_FUNCTION_FRAME(codeobj_efaf539f300209ff55af1437a75a3d20, module_torch$optim$_multi_tensor$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_efaf539f300209ff55af1437a75a3d20_6->m_type_description == NULL);
        frame_efaf539f300209ff55af1437a75a3d20_6 = cache_frame_efaf539f300209ff55af1437a75a3d20_6;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_efaf539f300209ff55af1437a75a3d20_6);
        assert(Py_REFCNT(frame_efaf539f300209ff55af1437a75a3d20_6) == 2);

        // Framed code:
        // Tried code:
        loop_start_6:;
        {
            PyObject *tmp_next_source_6;
            PyObject *tmp_assign_source_51;
            CHECK_OBJECT(tmp_listcomp_5__$0);
            tmp_next_source_6 = tmp_listcomp_5__$0;
            tmp_assign_source_51 = ITERATOR_NEXT(tmp_next_source_6);
            if (tmp_assign_source_51 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_6;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 66;
                    goto try_except_handler_18;
                }
            }

            {
                PyObject *old = tmp_listcomp_5__iter_value_0;
                tmp_listcomp_5__iter_value_0 = tmp_assign_source_51;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_iter_arg_10;
            CHECK_OBJECT(tmp_listcomp_5__iter_value_0);
            tmp_iter_arg_10 = tmp_listcomp_5__iter_value_0;
            tmp_assign_source_52 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_10);
            if (tmp_assign_source_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "ooo";
                goto try_except_handler_19;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__source_iter;
                tmp_listcomp$tuple_unpack_2__source_iter = tmp_assign_source_52;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_53;
            PyObject *tmp_unpack_9;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_unpack_9 = tmp_listcomp$tuple_unpack_2__source_iter;
            tmp_assign_source_53 = UNPACK_NEXT(tmp_unpack_9, 0, 2);
            if (tmp_assign_source_53 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 66;
                goto try_except_handler_20;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__element_1;
                tmp_listcomp$tuple_unpack_2__element_1 = tmp_assign_source_53;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_54;
            PyObject *tmp_unpack_10;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_unpack_10 = tmp_listcomp$tuple_unpack_2__source_iter;
            tmp_assign_source_54 = UNPACK_NEXT(tmp_unpack_10, 1, 2);
            if (tmp_assign_source_54 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 66;
                goto try_except_handler_20;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__element_2;
                tmp_listcomp$tuple_unpack_2__element_2 = tmp_assign_source_54;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_4;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_iterator_name_4 = tmp_listcomp$tuple_unpack_2__source_iter;
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

                        type_description_2 = "ooo";
                        exception_lineno = 66;
                        goto try_except_handler_20;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[14];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "ooo";
                exception_lineno = 66;
                goto try_except_handler_20;
            }
        }
        goto try_end_8;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_2__source_iter);
        tmp_listcomp$tuple_unpack_2__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_19;
        // End of try:
        try_end_8:;
        goto try_end_9;
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

        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_1);
        tmp_listcomp$tuple_unpack_2__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_2);
        tmp_listcomp$tuple_unpack_2__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto try_except_handler_18;
        // End of try:
        try_end_9:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_2__source_iter);
        tmp_listcomp$tuple_unpack_2__source_iter = NULL;
        {
            PyObject *tmp_assign_source_55;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__element_1);
            tmp_assign_source_55 = tmp_listcomp$tuple_unpack_2__element_1;
            {
                PyObject *old = outline_4_var_i;
                outline_4_var_i = tmp_assign_source_55;
                Py_INCREF(outline_4_var_i);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_1);
        tmp_listcomp$tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_56;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__element_2);
            tmp_assign_source_56 = tmp_listcomp$tuple_unpack_2__element_2;
            {
                PyObject *old = outline_4_var_x;
                outline_4_var_x = tmp_assign_source_56;
                Py_INCREF(outline_4_var_x);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_2);
        tmp_listcomp$tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_append_list_5;
            PyObject *tmp_append_value_5;
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_value_16;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_call_result_9;
            PyObject *tmp_args_element_value_32;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_3;
            int tmp_truth_name_6;
            PyObject *tmp_called_instance_16;
            PyObject *tmp_args_element_value_33;
            CHECK_OBJECT(tmp_listcomp_5__contraction);
            tmp_append_list_5 = tmp_listcomp_5__contraction;
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "ooo";
                goto try_except_handler_18;
            }
            tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[26]);
            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "ooo";
                goto try_except_handler_18;
            }
            if (par_params == NULL) {
                Py_DECREF(tmp_called_value_16);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[12]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 66;
                type_description_2 = "ooo";
                goto try_except_handler_18;
            }

            tmp_expression_value_13 = par_params;
            CHECK_OBJECT(outline_4_var_i);
            tmp_subscript_value_3 = outline_4_var_i;
            tmp_args_element_value_32 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_3);
            if (tmp_args_element_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);

                exception_lineno = 66;
                type_description_2 = "ooo";
                goto try_except_handler_18;
            }
            frame_efaf539f300209ff55af1437a75a3d20_6->m_frame.f_lineno = 66;
            tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_32);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_32);
            if (tmp_call_result_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "ooo";
                goto try_except_handler_18;
            }
            tmp_truth_name_6 = CHECK_IF_TRUE(tmp_call_result_9);
            if (tmp_truth_name_6 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_9);

                exception_lineno = 66;
                type_description_2 = "ooo";
                goto try_except_handler_18;
            }
            tmp_condition_result_7 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            Py_DECREF(tmp_call_result_9);
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_instance_16 == NULL)) {
                tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            if (tmp_called_instance_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "ooo";
                goto try_except_handler_18;
            }
            CHECK_OBJECT(outline_4_var_x);
            tmp_args_element_value_33 = outline_4_var_x;
            frame_efaf539f300209ff55af1437a75a3d20_6->m_frame.f_lineno = 66;
            tmp_append_value_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_16, mod_consts[34], tmp_args_element_value_33);
            if (tmp_append_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "ooo";
                goto try_except_handler_18;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            CHECK_OBJECT(outline_4_var_x);
            tmp_append_value_5 = outline_4_var_x;
            Py_INCREF(tmp_append_value_5);
            condexpr_end_4:;
            tmp_result = LIST_APPEND1(tmp_append_list_5, tmp_append_value_5);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "ooo";
                goto try_except_handler_18;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_2 = "ooo";
            goto try_except_handler_18;
        }
        goto loop_start_6;
        loop_end_6:;
        CHECK_OBJECT(tmp_listcomp_5__contraction);
        tmp_assign_source_48 = tmp_listcomp_5__contraction;
        Py_INCREF(tmp_assign_source_48);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
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
        try_except_handler_18:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
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
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto frame_exception_exit_6;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_return_exit_5:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_17;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_efaf539f300209ff55af1437a75a3d20_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_efaf539f300209ff55af1437a75a3d20_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_efaf539f300209ff55af1437a75a3d20_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_efaf539f300209ff55af1437a75a3d20_6,
            type_description_2,
            outline_4_var_i,
            outline_4_var_x,
            par_params
        );


        // Release cached frame if used for exception.
        if (frame_efaf539f300209ff55af1437a75a3d20_6 == cache_frame_efaf539f300209ff55af1437a75a3d20_6) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_efaf539f300209ff55af1437a75a3d20_6);
            cache_frame_efaf539f300209ff55af1437a75a3d20_6 = NULL;
        }

        assertFrameObject(frame_efaf539f300209ff55af1437a75a3d20_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_17;
        skip_nested_handling_5:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        Py_XDECREF(outline_4_var_i);
        outline_4_var_i = NULL;
        Py_XDECREF(outline_4_var_x);
        outline_4_var_x = NULL;
        goto outline_result_5;
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

        Py_XDECREF(outline_4_var_i);
        outline_4_var_i = NULL;
        Py_XDECREF(outline_4_var_x);
        outline_4_var_x = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 66;
        goto frame_exception_exit_1;
        outline_result_5:;
        {
            PyObject *old = par_state_sums;
            assert(old != NULL);
            par_state_sums = tmp_assign_source_48;
            Py_DECREF(old);
        }

    }
    branch_end_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_6;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6359f16d3ef077b834fafcc14554c307, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6359f16d3ef077b834fafcc14554c307->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6359f16d3ef077b834fafcc14554c307, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6359f16d3ef077b834fafcc14554c307,
        type_description_1,
        par_params,
        par_grads,
        par_state_sums,
        par_state_steps,
        par_has_sparse_grad,
        par_lr,
        par_weight_decay,
        par_lr_decay,
        par_eps,
        var_minus_clr,
        var_i,
        var_param,
        var_grad,
        var_state_sum,
        var_step,
        var_grad_indices,
        var_grad_values,
        var_size,
        var_std_sparse,
        var_std_sparse_values,
        var_std,
        var_toAdd
    );


    // Release cached frame if used for exception.
    if (frame_6359f16d3ef077b834fafcc14554c307 == cache_frame_6359f16d3ef077b834fafcc14554c307) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6359f16d3ef077b834fafcc14554c307);
        cache_frame_6359f16d3ef077b834fafcc14554c307 = NULL;
    }

    assertFrameObject(frame_6359f16d3ef077b834fafcc14554c307);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_6:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_grads);
    par_grads = NULL;
    Py_XDECREF(par_state_sums);
    par_state_sums = NULL;
    Py_XDECREF(var_minus_clr);
    var_minus_clr = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_param);
    var_param = NULL;
    Py_XDECREF(var_grad);
    var_grad = NULL;
    Py_XDECREF(var_state_sum);
    var_state_sum = NULL;
    Py_XDECREF(var_step);
    var_step = NULL;
    Py_XDECREF(var_grad_indices);
    var_grad_indices = NULL;
    Py_XDECREF(var_grad_values);
    var_grad_values = NULL;
    Py_XDECREF(var_size);
    var_size = NULL;
    Py_XDECREF(var_std_sparse);
    var_std_sparse = NULL;
    Py_XDECREF(var_std_sparse_values);
    var_std_sparse_values = NULL;
    Py_XDECREF(var_std);
    var_std = NULL;
    Py_XDECREF(var_toAdd);
    var_toAdd = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_grads);
    par_grads = NULL;
    Py_XDECREF(par_state_sums);
    par_state_sums = NULL;
    Py_XDECREF(var_minus_clr);
    var_minus_clr = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_param);
    var_param = NULL;
    Py_XDECREF(var_grad);
    var_grad = NULL;
    Py_XDECREF(var_state_sum);
    var_state_sum = NULL;
    Py_XDECREF(var_step);
    var_step = NULL;
    Py_XDECREF(var_grad_indices);
    var_grad_indices = NULL;
    Py_XDECREF(var_grad_values);
    var_grad_values = NULL;
    Py_XDECREF(var_size);
    var_size = NULL;
    Py_XDECREF(var_std_sparse);
    var_std_sparse = NULL;
    Py_XDECREF(var_std_sparse_values);
    var_std_sparse_values = NULL;
    Py_XDECREF(var_std);
    var_std = NULL;
    Py_XDECREF(var_toAdd);
    var_toAdd = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_state_steps);
    Py_DECREF(par_state_steps);
    CHECK_OBJECT(par_has_sparse_grad);
    Py_DECREF(par_has_sparse_grad);
    CHECK_OBJECT(par_lr);
    Py_DECREF(par_lr);
    CHECK_OBJECT(par_weight_decay);
    Py_DECREF(par_weight_decay);
    CHECK_OBJECT(par_lr_decay);
    Py_DECREF(par_lr_decay);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_state_steps);
    Py_DECREF(par_state_steps);
    CHECK_OBJECT(par_has_sparse_grad);
    Py_DECREF(par_has_sparse_grad);
    CHECK_OBJECT(par_lr);
    Py_DECREF(par_lr);
    CHECK_OBJECT(par_weight_decay);
    Py_DECREF(par_weight_decay);
    CHECK_OBJECT(par_lr_decay);
    Py_DECREF(par_lr_decay);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$optim$_multi_tensor$_functional$$$function__3_adamax(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_params = python_pars[0];
    PyObject *par_grads = python_pars[1];
    PyObject *par_exp_avgs = python_pars[2];
    PyObject *par_exp_infs = python_pars[3];
    PyObject *par_states = python_pars[4];
    PyObject *par_beta1 = python_pars[5];
    PyObject *par_beta2 = python_pars[6];
    PyObject *par_lr = python_pars[7];
    PyObject *par_weight_decay = python_pars[8];
    PyObject *par_eps = python_pars[9];
    PyObject *var_exp_inf = NULL;
    PyObject *var_grad = NULL;
    PyObject *var_norm_buf = NULL;
    PyObject *var_bias_corrections = NULL;
    PyObject *var_clr = NULL;
    PyObject *outline_0_var_state = NULL;
    PyObject *outline_1_var_bias_correction = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_c627bf708e54bbdc09ff493e38d93ebe;
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
    struct Nuitka_FrameObject *frame_3c946a83c2492d92c7a73733f7fa4da6_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_3c946a83c2492d92c7a73733f7fa4da6_2 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_FrameObject *frame_4b7b23bc63466b647a75576ced412aa1_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_4b7b23bc63466b647a75576ced412aa1_3 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_c627bf708e54bbdc09ff493e38d93ebe = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c627bf708e54bbdc09ff493e38d93ebe)) {
        Py_XDECREF(cache_frame_c627bf708e54bbdc09ff493e38d93ebe);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c627bf708e54bbdc09ff493e38d93ebe == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c627bf708e54bbdc09ff493e38d93ebe = MAKE_FUNCTION_FRAME(codeobj_c627bf708e54bbdc09ff493e38d93ebe, module_torch$optim$_multi_tensor$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c627bf708e54bbdc09ff493e38d93ebe->m_type_description == NULL);
    frame_c627bf708e54bbdc09ff493e38d93ebe = cache_frame_c627bf708e54bbdc09ff493e38d93ebe;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c627bf708e54bbdc09ff493e38d93ebe);
    assert(Py_REFCNT(frame_c627bf708e54bbdc09ff493e38d93ebe) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_weight_decay);
        tmp_cmp_expr_left_1 = par_weight_decay;
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_grads);
        tmp_kw_call_arg_value_0_1 = par_grads;
        CHECK_OBJECT(par_params);
        tmp_kw_call_arg_value_1_1 = par_params;
        CHECK_OBJECT(par_weight_decay);
        tmp_kw_call_dict_value_0_1 = par_weight_decay;
        frame_c627bf708e54bbdc09ff493e38d93ebe->m_frame.f_lineno = 86;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[9]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_exp_avgs);
        tmp_args_element_value_1 = par_exp_avgs;
        CHECK_OBJECT(par_beta1);
        tmp_args_element_value_2 = par_beta1;
        frame_c627bf708e54bbdc09ff493e38d93ebe->m_frame.f_lineno = 89;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[36],
                call_args
            );
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[8]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_exp_avgs);
        tmp_kw_call_arg_value_0_2 = par_exp_avgs;
        if (par_grads == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 90;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_1_2 = par_grads;
        tmp_sub_expr_left_1 = mod_consts[10];
        CHECK_OBJECT(par_beta1);
        tmp_sub_expr_right_1 = par_beta1;
        tmp_kw_call_dict_value_0_2 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 90;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c627bf708e54bbdc09ff493e38d93ebe->m_frame.f_lineno = 90;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[9]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_exp_infs);
        tmp_args_element_value_3 = par_exp_infs;
        CHECK_OBJECT(par_beta2);
        tmp_args_element_value_4 = par_beta2;
        frame_c627bf708e54bbdc09ff493e38d93ebe->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[36],
                call_args
            );
        }

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_3 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT(par_exp_infs);
        tmp_args_element_value_5 = par_exp_infs;
        if (par_grads == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 95;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = par_grads;
        frame_c627bf708e54bbdc09ff493e38d93ebe->m_frame.f_lineno = 95;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooooooooooo";
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
                type_description_1 = "ooooooooooooooo";
                exception_lineno = 95;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
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
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 95;
            goto try_except_handler_4;
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
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 95;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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
                    exception_lineno = 95;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[14];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooo";
            exception_lineno = 95;
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
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_exp_inf;
            var_exp_inf = tmp_assign_source_6;
            Py_INCREF(var_exp_inf);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_grad;
            var_grad = tmp_assign_source_7;
            Py_INCREF(var_grad);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_9;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[37]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_exp_inf);
        tmp_called_instance_3 = var_exp_inf;
        frame_c627bf708e54bbdc09ff493e38d93ebe->m_frame.f_lineno = 97;
        tmp_list_element_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[38],
            PyTuple_GET_ITEM(mod_consts[39], 0)
        );

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 97;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_7 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_called_value_5;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_value_8;
            PyList_SET_ITEM(tmp_args_element_value_7, 0, tmp_list_element_1);
            CHECK_OBJECT(var_grad);
            tmp_called_instance_5 = var_grad;
            frame_c627bf708e54bbdc09ff493e38d93ebe->m_frame.f_lineno = 98;
            tmp_expression_value_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[40]);
            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[19]);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            if (par_eps == NULL) {
                Py_DECREF(tmp_called_value_5);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 98;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }

            tmp_args_element_value_8 = par_eps;
            frame_c627bf708e54bbdc09ff493e38d93ebe->m_frame.f_lineno = 98;
            tmp_called_instance_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_8);
            Py_DECREF(tmp_called_value_5);
            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_c627bf708e54bbdc09ff493e38d93ebe->m_frame.f_lineno = 98;
            tmp_list_element_1 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_4,
                mod_consts[41],
                PyTuple_GET_ITEM(mod_consts[39], 0)
            );

            Py_DECREF(tmp_called_instance_4);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_7, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_7);
        goto try_except_handler_2;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_args_element_value_9 = mod_consts[2];
        frame_c627bf708e54bbdc09ff493e38d93ebe->m_frame.f_lineno = 96;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_9};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_norm_buf;
            var_norm_buf = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_5;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[42]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_norm_buf);
        tmp_kw_call_arg_value_0_3 = var_norm_buf;
        tmp_kw_call_arg_value_1_3 = mod_consts[2];
        tmp_kw_call_dict_value_0_3 = Py_False;
        CHECK_OBJECT(var_exp_inf);
        tmp_tuple_element_1 = var_exp_inf;
        tmp_kw_call_dict_value_1_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_instance_6;
            PyObject *tmp_called_instance_7;
            PyTuple_SET_ITEM0(tmp_kw_call_dict_value_1_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_exp_inf);
            tmp_called_instance_7 = var_exp_inf;
            frame_c627bf708e54bbdc09ff493e38d93ebe->m_frame.f_lineno = 100;
            tmp_called_instance_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[43]);
            if (tmp_called_instance_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_1 = "ooooooooooooooo";
                goto tuple_build_exception_1;
            }
            frame_c627bf708e54bbdc09ff493e38d93ebe->m_frame.f_lineno = 100;
            tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[44]);
            Py_DECREF(tmp_called_instance_6);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_1 = "ooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_kw_call_dict_value_1_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_c627bf708e54bbdc09ff493e38d93ebe->m_frame.f_lineno = 100;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_1};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_6, args, kw_values, mod_consts[45]);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 95;
        type_description_1 = "ooooooooooooooo";
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
        PyObject *tmp_assign_source_9;
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(par_states);
            tmp_iter_arg_3 = par_states;
            tmp_assign_source_10 = MAKE_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_5;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_11;
        }
        if (isFrameUnusable(cache_frame_3c946a83c2492d92c7a73733f7fa4da6_2)) {
            Py_XDECREF(cache_frame_3c946a83c2492d92c7a73733f7fa4da6_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_3c946a83c2492d92c7a73733f7fa4da6_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_3c946a83c2492d92c7a73733f7fa4da6_2 = MAKE_FUNCTION_FRAME(codeobj_3c946a83c2492d92c7a73733f7fa4da6, module_torch$optim$_multi_tensor$_functional, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_3c946a83c2492d92c7a73733f7fa4da6_2->m_type_description == NULL);
        frame_3c946a83c2492d92c7a73733f7fa4da6_2 = cache_frame_3c946a83c2492d92c7a73733f7fa4da6_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_3c946a83c2492d92c7a73733f7fa4da6_2);
        assert(Py_REFCNT(frame_3c946a83c2492d92c7a73733f7fa4da6_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_12 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 102;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_12;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_13 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_state;
                outline_0_var_state = tmp_assign_source_13;
                Py_INCREF(outline_0_var_state);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_sub_expr_left_2;
            PyObject *tmp_sub_expr_right_2;
            PyObject *tmp_pow_expr_left_1;
            PyObject *tmp_pow_expr_right_1;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_sub_expr_left_2 = mod_consts[10];
            if (par_beta1 == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[46]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 102;
                type_description_2 = "oo";
                goto try_except_handler_6;
            }

            tmp_pow_expr_left_1 = par_beta1;
            CHECK_OBJECT(outline_0_var_state);
            tmp_expression_value_6 = outline_0_var_state;
            tmp_subscript_value_1 = mod_consts[47];
            tmp_pow_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_1);
            if (tmp_pow_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_2 = "oo";
                goto try_except_handler_6;
            }
            tmp_sub_expr_right_2 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
            Py_DECREF(tmp_pow_expr_right_1);
            if (tmp_sub_expr_right_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_2 = "oo";
                goto try_except_handler_6;
            }
            tmp_append_value_1 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
            Py_DECREF(tmp_sub_expr_right_2);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_2 = "oo";
                goto try_except_handler_6;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_2 = "oo";
                goto try_except_handler_6;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_2 = "oo";
            goto try_except_handler_6;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_9 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_9);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
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
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
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
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_1:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_5;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3c946a83c2492d92c7a73733f7fa4da6_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3c946a83c2492d92c7a73733f7fa4da6_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3c946a83c2492d92c7a73733f7fa4da6_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3c946a83c2492d92c7a73733f7fa4da6_2,
            type_description_2,
            outline_0_var_state,
            par_beta1
        );


        // Release cached frame if used for exception.
        if (frame_3c946a83c2492d92c7a73733f7fa4da6_2 == cache_frame_3c946a83c2492d92c7a73733f7fa4da6_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_3c946a83c2492d92c7a73733f7fa4da6_2);
            cache_frame_3c946a83c2492d92c7a73733f7fa4da6_2 = NULL;
        }

        assertFrameObject(frame_3c946a83c2492d92c7a73733f7fa4da6_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooooooooooo";
        goto try_except_handler_5;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_XDECREF(outline_0_var_state);
        outline_0_var_state = NULL;
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

        Py_XDECREF(outline_0_var_state);
        outline_0_var_state = NULL;
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
        exception_lineno = 102;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_bias_corrections == NULL);
        var_bias_corrections = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_14;
        // Tried code:
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT(var_bias_corrections);
            tmp_iter_arg_4 = var_bias_corrections;
            tmp_assign_source_15 = MAKE_ITERATOR(tmp_iter_arg_4);
            if (tmp_assign_source_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_7;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_15;
        }
        {
            PyObject *tmp_assign_source_16;
            tmp_assign_source_16 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_16;
        }
        if (isFrameUnusable(cache_frame_4b7b23bc63466b647a75576ced412aa1_3)) {
            Py_XDECREF(cache_frame_4b7b23bc63466b647a75576ced412aa1_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_4b7b23bc63466b647a75576ced412aa1_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_4b7b23bc63466b647a75576ced412aa1_3 = MAKE_FUNCTION_FRAME(codeobj_4b7b23bc63466b647a75576ced412aa1, module_torch$optim$_multi_tensor$_functional, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_4b7b23bc63466b647a75576ced412aa1_3->m_type_description == NULL);
        frame_4b7b23bc63466b647a75576ced412aa1_3 = cache_frame_4b7b23bc63466b647a75576ced412aa1_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_4b7b23bc63466b647a75576ced412aa1_3);
        assert(Py_REFCNT(frame_4b7b23bc63466b647a75576ced412aa1_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_3 = tmp_listcomp_2__$0;
            tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_17 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 103;
                    goto try_except_handler_8;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_17;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_18 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_bias_correction;
                outline_1_var_bias_correction = tmp_assign_source_18;
                Py_INCREF(outline_1_var_bias_correction);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_mult_expr_left_1;
            PyObject *tmp_mult_expr_right_1;
            PyObject *tmp_truediv_expr_left_1;
            PyObject *tmp_truediv_expr_right_1;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            tmp_mult_expr_left_1 = mod_consts[48];
            if (par_lr == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[49]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 103;
                type_description_2 = "oo";
                goto try_except_handler_8;
            }

            tmp_truediv_expr_left_1 = par_lr;
            CHECK_OBJECT(outline_1_var_bias_correction);
            tmp_truediv_expr_right_1 = outline_1_var_bias_correction;
            tmp_mult_expr_right_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
            if (tmp_mult_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_2 = "oo";
                goto try_except_handler_8;
            }
            tmp_append_value_2 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
            Py_DECREF(tmp_mult_expr_right_1);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_2 = "oo";
                goto try_except_handler_8;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_2 = "oo";
                goto try_except_handler_8;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_2 = "oo";
            goto try_except_handler_8;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_14 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_14);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
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
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
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
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto frame_exception_exit_3;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_7;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4b7b23bc63466b647a75576ced412aa1_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4b7b23bc63466b647a75576ced412aa1_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4b7b23bc63466b647a75576ced412aa1_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4b7b23bc63466b647a75576ced412aa1_3,
            type_description_2,
            outline_1_var_bias_correction,
            par_lr
        );


        // Release cached frame if used for exception.
        if (frame_4b7b23bc63466b647a75576ced412aa1_3 == cache_frame_4b7b23bc63466b647a75576ced412aa1_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_4b7b23bc63466b647a75576ced412aa1_3);
            cache_frame_4b7b23bc63466b647a75576ced412aa1_3 = NULL;
        }

        assertFrameObject(frame_4b7b23bc63466b647a75576ced412aa1_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ooooooooooooooo";
        goto try_except_handler_7;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_XDECREF(outline_1_var_bias_correction);
        outline_1_var_bias_correction = NULL;
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

        Py_XDECREF(outline_1_var_bias_correction);
        outline_1_var_bias_correction = NULL;
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
        exception_lineno = 103;
        goto frame_exception_exit_1;
        outline_result_2:;
        assert(var_clr == NULL);
        var_clr = tmp_assign_source_14;
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[50]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_params == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 104;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_10 = par_params;
        CHECK_OBJECT(par_exp_avgs);
        tmp_args_element_value_11 = par_exp_avgs;
        CHECK_OBJECT(par_exp_infs);
        tmp_args_element_value_12 = par_exp_infs;
        CHECK_OBJECT(var_clr);
        tmp_args_element_value_13 = var_clr;
        frame_c627bf708e54bbdc09ff493e38d93ebe->m_frame.f_lineno = 104;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c627bf708e54bbdc09ff493e38d93ebe, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c627bf708e54bbdc09ff493e38d93ebe->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c627bf708e54bbdc09ff493e38d93ebe, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c627bf708e54bbdc09ff493e38d93ebe,
        type_description_1,
        par_params,
        par_grads,
        par_exp_avgs,
        par_exp_infs,
        par_states,
        par_beta1,
        par_beta2,
        par_lr,
        par_weight_decay,
        par_eps,
        var_exp_inf,
        var_grad,
        var_norm_buf,
        var_bias_corrections,
        var_clr
    );


    // Release cached frame if used for exception.
    if (frame_c627bf708e54bbdc09ff493e38d93ebe == cache_frame_c627bf708e54bbdc09ff493e38d93ebe) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c627bf708e54bbdc09ff493e38d93ebe);
        cache_frame_c627bf708e54bbdc09ff493e38d93ebe = NULL;
    }

    assertFrameObject(frame_c627bf708e54bbdc09ff493e38d93ebe);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_3:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_exp_inf);
    var_exp_inf = NULL;
    Py_XDECREF(var_grad);
    var_grad = NULL;
    Py_XDECREF(var_norm_buf);
    var_norm_buf = NULL;
    CHECK_OBJECT(var_bias_corrections);
    Py_DECREF(var_bias_corrections);
    var_bias_corrections = NULL;
    CHECK_OBJECT(var_clr);
    Py_DECREF(var_clr);
    var_clr = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_exp_inf);
    var_exp_inf = NULL;
    Py_XDECREF(var_grad);
    var_grad = NULL;
    Py_XDECREF(var_norm_buf);
    var_norm_buf = NULL;
    Py_XDECREF(var_bias_corrections);
    var_bias_corrections = NULL;
    Py_XDECREF(var_clr);
    var_clr = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_grads);
    Py_DECREF(par_grads);
    CHECK_OBJECT(par_exp_avgs);
    Py_DECREF(par_exp_avgs);
    CHECK_OBJECT(par_exp_infs);
    Py_DECREF(par_exp_infs);
    CHECK_OBJECT(par_states);
    Py_DECREF(par_states);
    CHECK_OBJECT(par_beta1);
    Py_DECREF(par_beta1);
    CHECK_OBJECT(par_beta2);
    Py_DECREF(par_beta2);
    CHECK_OBJECT(par_lr);
    Py_DECREF(par_lr);
    CHECK_OBJECT(par_weight_decay);
    Py_DECREF(par_weight_decay);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_grads);
    Py_DECREF(par_grads);
    CHECK_OBJECT(par_exp_avgs);
    Py_DECREF(par_exp_avgs);
    CHECK_OBJECT(par_exp_infs);
    Py_DECREF(par_exp_infs);
    CHECK_OBJECT(par_states);
    Py_DECREF(par_states);
    CHECK_OBJECT(par_beta1);
    Py_DECREF(par_beta1);
    CHECK_OBJECT(par_beta2);
    Py_DECREF(par_beta2);
    CHECK_OBJECT(par_lr);
    Py_DECREF(par_lr);
    CHECK_OBJECT(par_weight_decay);
    Py_DECREF(par_weight_decay);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$optim$_multi_tensor$_functional$$$function__4_adadelta(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_params = python_pars[0];
    PyObject *par_grads = python_pars[1];
    PyObject *par_square_avgs = python_pars[2];
    PyObject *par_acc_deltas = python_pars[3];
    PyObject *par_lr = python_pars[4];
    PyObject *par_weight_decay = python_pars[5];
    PyObject *par_rho = python_pars[6];
    PyObject *par_eps = python_pars[7];
    PyObject *var_std = NULL;
    PyObject *var_deltas = NULL;
    struct Nuitka_FrameObject *frame_05c859b02f51baa15d2f65c7151e9750;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_05c859b02f51baa15d2f65c7151e9750 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_05c859b02f51baa15d2f65c7151e9750)) {
        Py_XDECREF(cache_frame_05c859b02f51baa15d2f65c7151e9750);

#if _DEBUG_REFCOUNTS
        if (cache_frame_05c859b02f51baa15d2f65c7151e9750 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_05c859b02f51baa15d2f65c7151e9750 = MAKE_FUNCTION_FRAME(codeobj_05c859b02f51baa15d2f65c7151e9750, module_torch$optim$_multi_tensor$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_05c859b02f51baa15d2f65c7151e9750->m_type_description == NULL);
    frame_05c859b02f51baa15d2f65c7151e9750 = cache_frame_05c859b02f51baa15d2f65c7151e9750;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_05c859b02f51baa15d2f65c7151e9750);
    assert(Py_REFCNT(frame_05c859b02f51baa15d2f65c7151e9750) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_weight_decay);
        tmp_cmp_expr_left_1 = par_weight_decay;
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooo";
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
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_grads);
        tmp_kw_call_arg_value_0_1 = par_grads;
        CHECK_OBJECT(par_params);
        tmp_kw_call_arg_value_1_1 = par_params;
        CHECK_OBJECT(par_weight_decay);
        tmp_kw_call_dict_value_0_1 = par_weight_decay;
        frame_05c859b02f51baa15d2f65c7151e9750->m_frame.f_lineno = 122;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[9]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_square_avgs);
        tmp_args_element_value_1 = par_square_avgs;
        CHECK_OBJECT(par_rho);
        tmp_args_element_value_2 = par_rho;
        frame_05c859b02f51baa15d2f65c7151e9750->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[36],
                call_args
            );
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[28]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_square_avgs);
        tmp_kw_call_arg_value_0_2 = par_square_avgs;
        if (par_grads == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 125;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_1_2 = par_grads;
        if (par_grads == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 125;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_2_1 = par_grads;
        tmp_sub_expr_left_1 = mod_consts[10];
        CHECK_OBJECT(par_rho);
        tmp_sub_expr_right_1 = par_rho;
        tmp_kw_call_dict_value_0_2 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 125;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_05c859b02f51baa15d2f65c7151e9750->m_frame.f_lineno = 125;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[52]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_square_avgs);
        tmp_args_element_value_3 = par_square_avgs;
        CHECK_OBJECT(par_eps);
        tmp_args_element_value_4 = par_eps;
        frame_05c859b02f51baa15d2f65c7151e9750->m_frame.f_lineno = 127;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[30],
                call_args
            );
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_std == NULL);
        var_std = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_std);
        tmp_args_element_value_5 = var_std;
        frame_05c859b02f51baa15d2f65c7151e9750->m_frame.f_lineno = 128;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[53], tmp_args_element_value_5);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_acc_deltas);
        tmp_args_element_value_6 = par_acc_deltas;
        CHECK_OBJECT(par_eps);
        tmp_args_element_value_7 = par_eps;
        frame_05c859b02f51baa15d2f65c7151e9750->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_4,
                mod_consts[30],
                call_args
            );
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_deltas == NULL);
        var_deltas = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_8;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_deltas);
        tmp_args_element_value_8 = var_deltas;
        frame_05c859b02f51baa15d2f65c7151e9750->m_frame.f_lineno = 131;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[53], tmp_args_element_value_8);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_deltas);
        tmp_args_element_value_9 = var_deltas;
        CHECK_OBJECT(var_std);
        tmp_args_element_value_10 = var_std;
        frame_05c859b02f51baa15d2f65c7151e9750->m_frame.f_lineno = 132;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_6 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_6,
                mod_consts[54],
                call_args
            );
        }

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[36]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_deltas);
        tmp_args_element_value_11 = var_deltas;
        if (par_grads == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 133;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_12 = par_grads;
        frame_05c859b02f51baa15d2f65c7151e9750->m_frame.f_lineno = 133;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_8;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_operand_value_1;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[8]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_params == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 135;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_3 = par_params;
        CHECK_OBJECT(var_deltas);
        tmp_kw_call_arg_value_1_3 = var_deltas;
        CHECK_OBJECT(par_lr);
        tmp_operand_value_1 = par_lr;
        tmp_kw_call_dict_value_0_3 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 135;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_05c859b02f51baa15d2f65c7151e9750->m_frame.f_lineno = 135;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[9]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_dict_value_0_3);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_acc_deltas);
        tmp_args_element_value_13 = par_acc_deltas;
        CHECK_OBJECT(par_rho);
        tmp_args_element_value_14 = par_rho;
        frame_05c859b02f51baa15d2f65c7151e9750->m_frame.f_lineno = 137;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_call_result_9 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_7,
                mod_consts[36],
                call_args
            );
        }

        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_10;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_arg_value_1_4;
        PyObject *tmp_kw_call_arg_value_2_2;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[28]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_acc_deltas);
        tmp_kw_call_arg_value_0_4 = par_acc_deltas;
        CHECK_OBJECT(var_deltas);
        tmp_kw_call_arg_value_1_4 = var_deltas;
        CHECK_OBJECT(var_deltas);
        tmp_kw_call_arg_value_2_2 = var_deltas;
        tmp_sub_expr_left_2 = mod_consts[10];
        CHECK_OBJECT(par_rho);
        tmp_sub_expr_right_2 = par_rho;
        tmp_kw_call_dict_value_0_4 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_kw_call_dict_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 138;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_05c859b02f51baa15d2f65c7151e9750->m_frame.f_lineno = 138;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_4, tmp_kw_call_arg_value_2_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_5, args, kw_values, mod_consts[52]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_dict_value_0_4);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_05c859b02f51baa15d2f65c7151e9750, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_05c859b02f51baa15d2f65c7151e9750->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_05c859b02f51baa15d2f65c7151e9750, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_05c859b02f51baa15d2f65c7151e9750,
        type_description_1,
        par_params,
        par_grads,
        par_square_avgs,
        par_acc_deltas,
        par_lr,
        par_weight_decay,
        par_rho,
        par_eps,
        var_std,
        var_deltas
    );


    // Release cached frame if used for exception.
    if (frame_05c859b02f51baa15d2f65c7151e9750 == cache_frame_05c859b02f51baa15d2f65c7151e9750) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_05c859b02f51baa15d2f65c7151e9750);
        cache_frame_05c859b02f51baa15d2f65c7151e9750 = NULL;
    }

    assertFrameObject(frame_05c859b02f51baa15d2f65c7151e9750);

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
    CHECK_OBJECT(var_std);
    Py_DECREF(var_std);
    var_std = NULL;
    CHECK_OBJECT(var_deltas);
    Py_DECREF(var_deltas);
    var_deltas = NULL;
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

    Py_XDECREF(var_std);
    var_std = NULL;
    Py_XDECREF(var_deltas);
    var_deltas = NULL;
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
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_grads);
    Py_DECREF(par_grads);
    CHECK_OBJECT(par_square_avgs);
    Py_DECREF(par_square_avgs);
    CHECK_OBJECT(par_acc_deltas);
    Py_DECREF(par_acc_deltas);
    CHECK_OBJECT(par_lr);
    Py_DECREF(par_lr);
    CHECK_OBJECT(par_weight_decay);
    Py_DECREF(par_weight_decay);
    CHECK_OBJECT(par_rho);
    Py_DECREF(par_rho);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_grads);
    Py_DECREF(par_grads);
    CHECK_OBJECT(par_square_avgs);
    Py_DECREF(par_square_avgs);
    CHECK_OBJECT(par_acc_deltas);
    Py_DECREF(par_acc_deltas);
    CHECK_OBJECT(par_lr);
    Py_DECREF(par_lr);
    CHECK_OBJECT(par_weight_decay);
    Py_DECREF(par_weight_decay);
    CHECK_OBJECT(par_rho);
    Py_DECREF(par_rho);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$optim$_multi_tensor$_functional$$$function__5_asgd(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_params = python_pars[0];
    PyObject *par_grads = python_pars[1];
    PyObject *par_states = python_pars[2];
    PyObject *par_lambd = python_pars[3];
    PyObject *par_lr = python_pars[4];
    PyObject *par_t0 = python_pars[5];
    PyObject *par_alpha = python_pars[6];
    PyObject *par_weight_decay = python_pars[7];
    PyObject *var_eta = NULL;
    PyObject *var_i = NULL;
    PyObject *var_state = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_89878d2b2abb20fa665638e0f470627d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_89878d2b2abb20fa665638e0f470627d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_89878d2b2abb20fa665638e0f470627d)) {
        Py_XDECREF(cache_frame_89878d2b2abb20fa665638e0f470627d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_89878d2b2abb20fa665638e0f470627d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_89878d2b2abb20fa665638e0f470627d = MAKE_FUNCTION_FRAME(codeobj_89878d2b2abb20fa665638e0f470627d, module_torch$optim$_multi_tensor$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_89878d2b2abb20fa665638e0f470627d->m_type_description == NULL);
    frame_89878d2b2abb20fa665638e0f470627d = cache_frame_89878d2b2abb20fa665638e0f470627d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_89878d2b2abb20fa665638e0f470627d);
    assert(Py_REFCNT(frame_89878d2b2abb20fa665638e0f470627d) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_weight_decay);
        tmp_cmp_expr_left_1 = par_weight_decay;
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooooooo";
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
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_grads);
        tmp_kw_call_arg_value_0_1 = par_grads;
        CHECK_OBJECT(par_params);
        tmp_kw_call_arg_value_1_1 = par_params;
        CHECK_OBJECT(par_weight_decay);
        tmp_kw_call_dict_value_0_1 = par_weight_decay;
        frame_89878d2b2abb20fa665638e0f470627d->m_frame.f_lineno = 154;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[9]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_states);
        tmp_expression_value_3 = par_states;
        tmp_subscript_value_1 = mod_consts[2];
        tmp_expression_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[56];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_eta == NULL);
        var_eta = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[36]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_params == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 158;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = par_params;
        tmp_sub_expr_left_1 = mod_consts[10];
        CHECK_OBJECT(par_lambd);
        tmp_mult_expr_left_1 = par_lambd;
        CHECK_OBJECT(var_eta);
        tmp_mult_expr_right_1 = var_eta;
        tmp_sub_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 158;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 158;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_89878d2b2abb20fa665638e0f470627d->m_frame.f_lineno = 158;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_operand_value_1;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[8]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_params == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 161;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_2 = par_params;
        if (par_grads == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 161;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_1_2 = par_grads;
        CHECK_OBJECT(var_eta);
        tmp_operand_value_1 = var_eta;
        tmp_kw_call_dict_value_0_2 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 161;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_89878d2b2abb20fa665638e0f470627d->m_frame.f_lineno = 161;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[9]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_states);
        tmp_len_arg_1 = par_states;
        tmp_xrange_low_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_xrange_low_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE1(tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_low_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooooooo";
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
                type_description_1 = "ooooooooooo";
                exception_lineno = 164;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_4;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_states);
        tmp_expression_value_7 = par_states;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_3 = var_i;
        tmp_expression_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_3);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_4 = mod_consts[57];
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_2 = mod_consts[10];
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooooo";
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
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_subscript_value_11;
        CHECK_OBJECT(par_states);
        tmp_expression_value_10 = par_states;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_5 = var_i;
        tmp_expression_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_5);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_6 = mod_consts[58];
        tmp_expression_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_6);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[19]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        if (par_params == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 166;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_13 = par_params;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_7 = var_i;
        tmp_expression_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_7);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 166;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[59]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 166;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_states);
        tmp_expression_value_15 = par_states;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_8 = var_i;
        tmp_expression_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_8);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 166;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_9 = mod_consts[58];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_9);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 166;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        frame_89878d2b2abb20fa665638e0f470627d->m_frame.f_lineno = 166;
        tmp_expression_value_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 166;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[60]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 166;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_states);
        tmp_expression_value_17 = par_states;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_10 = var_i;
        tmp_expression_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_10);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 166;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_11 = mod_consts[57];
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_11);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 166;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        frame_89878d2b2abb20fa665638e0f470627d->m_frame.f_lineno = 166;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 166;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        frame_89878d2b2abb20fa665638e0f470627d->m_frame.f_lineno = 166;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_14;
        CHECK_OBJECT(par_states);
        tmp_expression_value_20 = par_states;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_12 = var_i;
        tmp_expression_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_12);
        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_13 = mod_consts[58];
        tmp_expression_value_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_13);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[61]);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        if (par_params == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 168;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_21 = par_params;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_14 = var_i;
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_14);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 168;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        frame_89878d2b2abb20fa665638e0f470627d->m_frame.f_lineno = 168;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_end_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 164;
        type_description_1 = "ooooooooooo";
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
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(par_states);
        tmp_iter_arg_2 = par_states;
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_5;
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
                type_description_1 = "ooooooooooo";
                exception_lineno = 171;
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
            PyObject *old = var_state;
            var_state = tmp_assign_source_7;
            Py_INCREF(var_state);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (par_lr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 172;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }

        tmp_truediv_expr_left_1 = par_lr;
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[21]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        tmp_add_expr_left_1 = mod_consts[10];
        if (par_lambd == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 173;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }

        tmp_mult_expr_left_3 = par_lambd;
        if (par_lr == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 173;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }

        tmp_mult_expr_right_3 = par_lr;
        tmp_mult_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 173;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_state);
        tmp_expression_value_23 = var_state;
        tmp_subscript_value_15 = mod_consts[47];
        tmp_mult_expr_right_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_15);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_mult_expr_left_2);

            exception_lineno = 173;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 173;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_value_7 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 173;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        if (par_alpha == NULL) {
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 173;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_value_8 = par_alpha;
        frame_89878d2b2abb20fa665638e0f470627d->m_frame.f_lineno = 173;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_truediv_expr_right_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        tmp_ass_subvalue_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_state);
        tmp_ass_subscribed_1 = var_state;
        tmp_ass_subscript_1 = mod_consts[56];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_truediv_expr_left_2 = mod_consts[10];
        tmp_called_value_9 = LOOKUP_BUILTIN(mod_consts[42]);
        assert(tmp_called_value_9 != NULL);
        tmp_args_element_value_9 = mod_consts[10];
        CHECK_OBJECT(var_state);
        tmp_expression_value_24 = var_state;
        tmp_subscript_value_16 = mod_consts[47];
        tmp_sub_expr_left_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_16);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        if (par_t0 == NULL) {
            Py_DECREF(tmp_sub_expr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 174;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }

        tmp_sub_expr_right_2 = par_t0;
        tmp_args_element_value_10 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        frame_89878d2b2abb20fa665638e0f470627d->m_frame.f_lineno = 174;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_truediv_expr_right_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_args_element_value_10);
        if (tmp_truediv_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        tmp_ass_subvalue_2 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_right_2);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_state);
        tmp_ass_subscribed_2 = var_state;
        tmp_ass_subscript_2 = mod_consts[57];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 171;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_89878d2b2abb20fa665638e0f470627d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_89878d2b2abb20fa665638e0f470627d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_89878d2b2abb20fa665638e0f470627d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_89878d2b2abb20fa665638e0f470627d,
        type_description_1,
        par_params,
        par_grads,
        par_states,
        par_lambd,
        par_lr,
        par_t0,
        par_alpha,
        par_weight_decay,
        var_eta,
        var_i,
        var_state
    );


    // Release cached frame if used for exception.
    if (frame_89878d2b2abb20fa665638e0f470627d == cache_frame_89878d2b2abb20fa665638e0f470627d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_89878d2b2abb20fa665638e0f470627d);
        cache_frame_89878d2b2abb20fa665638e0f470627d = NULL;
    }

    assertFrameObject(frame_89878d2b2abb20fa665638e0f470627d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_eta);
    Py_DECREF(var_eta);
    var_eta = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_state);
    var_state = NULL;
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

    Py_XDECREF(var_eta);
    var_eta = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_state);
    var_state = NULL;
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
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_grads);
    Py_DECREF(par_grads);
    CHECK_OBJECT(par_states);
    Py_DECREF(par_states);
    CHECK_OBJECT(par_lambd);
    Py_DECREF(par_lambd);
    CHECK_OBJECT(par_lr);
    Py_DECREF(par_lr);
    CHECK_OBJECT(par_t0);
    Py_DECREF(par_t0);
    CHECK_OBJECT(par_alpha);
    Py_DECREF(par_alpha);
    CHECK_OBJECT(par_weight_decay);
    Py_DECREF(par_weight_decay);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_grads);
    Py_DECREF(par_grads);
    CHECK_OBJECT(par_states);
    Py_DECREF(par_states);
    CHECK_OBJECT(par_lambd);
    Py_DECREF(par_lambd);
    CHECK_OBJECT(par_lr);
    Py_DECREF(par_lr);
    CHECK_OBJECT(par_t0);
    Py_DECREF(par_t0);
    CHECK_OBJECT(par_alpha);
    Py_DECREF(par_alpha);
    CHECK_OBJECT(par_weight_decay);
    Py_DECREF(par_weight_decay);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$optim$_multi_tensor$_functional$$$function__6_radam(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_params = python_pars[0];
    PyObject *par_grads = python_pars[1];
    PyObject *par_exp_avg = python_pars[2];
    PyObject *par_exp_avg_sq = python_pars[3];
    PyObject *par_states = python_pars[4];
    PyObject *par_beta1 = python_pars[5];
    PyObject *par_beta2 = python_pars[6];
    PyObject *par_lr = python_pars[7];
    PyObject *par_weight_decay = python_pars[8];
    PyObject *par_eps = python_pars[9];
    PyObject *var_rho_inf = NULL;
    PyObject *var_rho_t_list = NULL;
    PyObject *var_bias_correction1 = NULL;
    PyObject *var_bias_correction2 = NULL;
    PyObject *var_rect = NULL;
    PyObject *var_unrectified = NULL;
    PyObject *var_exp_avg_sq_sqrt = NULL;
    PyObject *var_bias_correction_sqrt = NULL;
    PyObject *var_denom = NULL;
    PyObject *var_step_size = NULL;
    PyObject *outline_0_var_state = NULL;
    PyObject *outline_1_var_state = NULL;
    PyObject *outline_2_var_state = NULL;
    PyObject *outline_3_var_rho_t = NULL;
    PyObject *outline_4_var_rect = NULL;
    PyObject *outline_5_var_bc = NULL;
    PyObject *outline_6_var_rect = NULL;
    PyObject *outline_6_var_bc = NULL;
    PyObject *outline_7_var_exp_av = NULL;
    PyObject *outline_8_var_rect = NULL;
    PyObject *outline_8_var_bc = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__source_iter = NULL;
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
    PyObject *tmp_listcomp_7__$0 = NULL;
    PyObject *tmp_listcomp_7__contraction = NULL;
    PyObject *tmp_listcomp_7__iter_value_0 = NULL;
    PyObject *tmp_listcomp_8__$0 = NULL;
    PyObject *tmp_listcomp_8__contraction = NULL;
    PyObject *tmp_listcomp_8__iter_value_0 = NULL;
    PyObject *tmp_listcomp_9__$0 = NULL;
    PyObject *tmp_listcomp_9__contraction = NULL;
    PyObject *tmp_listcomp_9__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_ba10557991628490cf0283edeac7ff54;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_ad1ba522feeb2f120a928694b49020fd_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_ad1ba522feeb2f120a928694b49020fd_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_58c79349bfa83c59b68d7cd7d6c9b10d_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_58c79349bfa83c59b68d7cd7d6c9b10d_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_FrameObject *frame_a8a82da1626c5994d59833e08e0d3254_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_a8a82da1626c5994d59833e08e0d3254_4 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_FrameObject *frame_326818036ffb7808d21a251a1e84c9f8_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_326818036ffb7808d21a251a1e84c9f8_5 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    struct Nuitka_FrameObject *frame_c265c8c0c1ab9ec78ea9e7d4b321ea1e_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    static struct Nuitka_FrameObject *cache_frame_c265c8c0c1ab9ec78ea9e7d4b321ea1e_6 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    struct Nuitka_FrameObject *frame_a442f79ade1b7697494464fa54fbd1ae_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    static struct Nuitka_FrameObject *cache_frame_a442f79ade1b7697494464fa54fbd1ae_7 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    struct Nuitka_FrameObject *frame_4bab1b05fc34719c42214a5e4ad1d6c2_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    PyObject *tmp_iterator_attempt;
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
    static struct Nuitka_FrameObject *cache_frame_4bab1b05fc34719c42214a5e4ad1d6c2_8 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    struct Nuitka_FrameObject *frame_0cfc02cf6a50759aaa2e7b313f5bace6_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    static struct Nuitka_FrameObject *cache_frame_0cfc02cf6a50759aaa2e7b313f5bace6_9 = NULL;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    struct Nuitka_FrameObject *frame_b8c8667f1d555bdee90aac95fd358f70_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_b8c8667f1d555bdee90aac95fd358f70_10 = NULL;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    static struct Nuitka_FrameObject *cache_frame_ba10557991628490cf0283edeac7ff54 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ba10557991628490cf0283edeac7ff54)) {
        Py_XDECREF(cache_frame_ba10557991628490cf0283edeac7ff54);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ba10557991628490cf0283edeac7ff54 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ba10557991628490cf0283edeac7ff54 = MAKE_FUNCTION_FRAME(codeobj_ba10557991628490cf0283edeac7ff54, module_torch$optim$_multi_tensor$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ba10557991628490cf0283edeac7ff54->m_type_description == NULL);
    frame_ba10557991628490cf0283edeac7ff54 = cache_frame_ba10557991628490cf0283edeac7ff54;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ba10557991628490cf0283edeac7ff54);
    assert(Py_REFCNT(frame_ba10557991628490cf0283edeac7ff54) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        tmp_truediv_expr_left_1 = mod_consts[67];
        tmp_sub_expr_left_2 = mod_consts[10];
        CHECK_OBJECT(par_beta2);
        tmp_sub_expr_right_2 = par_beta2;
        tmp_truediv_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_left_1 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[10];
        tmp_assign_source_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_rho_inf == NULL);
        var_rho_inf = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_states);
            tmp_iter_arg_1 = par_states;
            tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_4;
        }
        if (isFrameUnusable(cache_frame_ad1ba522feeb2f120a928694b49020fd_2)) {
            Py_XDECREF(cache_frame_ad1ba522feeb2f120a928694b49020fd_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_ad1ba522feeb2f120a928694b49020fd_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_ad1ba522feeb2f120a928694b49020fd_2 = MAKE_FUNCTION_FRAME(codeobj_ad1ba522feeb2f120a928694b49020fd, module_torch$optim$_multi_tensor$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_ad1ba522feeb2f120a928694b49020fd_2->m_type_description == NULL);
        frame_ad1ba522feeb2f120a928694b49020fd_2 = cache_frame_ad1ba522feeb2f120a928694b49020fd_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ad1ba522feeb2f120a928694b49020fd_2);
        assert(Py_REFCNT(frame_ad1ba522feeb2f120a928694b49020fd_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_5 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 196;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_6 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_state;
                outline_0_var_state = tmp_assign_source_6;
                Py_INCREF(outline_0_var_state);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_sub_expr_left_3;
            PyObject *tmp_sub_expr_right_3;
            PyObject *tmp_truediv_expr_left_2;
            PyObject *tmp_truediv_expr_right_2;
            PyObject *tmp_mult_expr_left_1;
            PyObject *tmp_mult_expr_right_1;
            PyObject *tmp_mult_expr_left_2;
            PyObject *tmp_mult_expr_right_2;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_pow_expr_left_1;
            PyObject *tmp_pow_expr_right_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_sub_expr_left_4;
            PyObject *tmp_sub_expr_right_4;
            PyObject *tmp_pow_expr_left_2;
            PyObject *tmp_pow_expr_right_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_3;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            if (var_rho_inf == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[68]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 196;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }

            tmp_sub_expr_left_3 = var_rho_inf;
            tmp_mult_expr_left_2 = mod_consts[67];
            CHECK_OBJECT(outline_0_var_state);
            tmp_expression_value_1 = outline_0_var_state;
            tmp_subscript_value_1 = mod_consts[47];
            tmp_mult_expr_right_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
            if (tmp_mult_expr_right_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_mult_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
            Py_DECREF(tmp_mult_expr_right_2);
            if (tmp_mult_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            if (par_beta2 == NULL) {
                Py_DECREF(tmp_mult_expr_left_1);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[69]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 196;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }

            tmp_pow_expr_left_1 = par_beta2;
            CHECK_OBJECT(outline_0_var_state);
            tmp_expression_value_2 = outline_0_var_state;
            tmp_subscript_value_2 = mod_consts[47];
            tmp_pow_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
            if (tmp_pow_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_mult_expr_left_1);

                exception_lineno = 196;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_mult_expr_right_1 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
            Py_DECREF(tmp_pow_expr_right_1);
            if (tmp_mult_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_mult_expr_left_1);

                exception_lineno = 196;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_truediv_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
            Py_DECREF(tmp_mult_expr_left_1);
            Py_DECREF(tmp_mult_expr_right_1);
            if (tmp_truediv_expr_left_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_sub_expr_left_4 = mod_consts[10];
            if (par_beta2 == NULL) {
                Py_DECREF(tmp_truediv_expr_left_2);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[69]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 196;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }

            tmp_pow_expr_left_2 = par_beta2;
            CHECK_OBJECT(outline_0_var_state);
            tmp_expression_value_3 = outline_0_var_state;
            tmp_subscript_value_3 = mod_consts[47];
            tmp_pow_expr_right_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
            if (tmp_pow_expr_right_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_truediv_expr_left_2);

                exception_lineno = 196;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_sub_expr_right_4 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_2, tmp_pow_expr_right_2);
            Py_DECREF(tmp_pow_expr_right_2);
            if (tmp_sub_expr_right_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_truediv_expr_left_2);

                exception_lineno = 196;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_truediv_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
            Py_DECREF(tmp_sub_expr_right_4);
            if (tmp_truediv_expr_right_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_truediv_expr_left_2);

                exception_lineno = 196;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_sub_expr_right_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
            Py_DECREF(tmp_truediv_expr_left_2);
            Py_DECREF(tmp_truediv_expr_right_2);
            if (tmp_sub_expr_right_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_append_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
            Py_DECREF(tmp_sub_expr_right_3);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_2 = "ooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_2 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_2);
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
        goto frame_return_exit_1;
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
        frame_return_exit_1:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ad1ba522feeb2f120a928694b49020fd_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ad1ba522feeb2f120a928694b49020fd_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ad1ba522feeb2f120a928694b49020fd_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ad1ba522feeb2f120a928694b49020fd_2,
            type_description_2,
            outline_0_var_state,
            var_rho_inf,
            par_beta2
        );


        // Release cached frame if used for exception.
        if (frame_ad1ba522feeb2f120a928694b49020fd_2 == cache_frame_ad1ba522feeb2f120a928694b49020fd_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_ad1ba522feeb2f120a928694b49020fd_2);
            cache_frame_ad1ba522feeb2f120a928694b49020fd_2 = NULL;
        }

        assertFrameObject(frame_ad1ba522feeb2f120a928694b49020fd_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_state);
        outline_0_var_state = NULL;
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

        Py_XDECREF(outline_0_var_state);
        outline_0_var_state = NULL;
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
        exception_lineno = 196;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_rho_t_list == NULL);
        var_rho_t_list = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_7;
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(par_states);
            tmp_iter_arg_2 = par_states;
            tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_4;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_9;
        }
        if (isFrameUnusable(cache_frame_58c79349bfa83c59b68d7cd7d6c9b10d_3)) {
            Py_XDECREF(cache_frame_58c79349bfa83c59b68d7cd7d6c9b10d_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_58c79349bfa83c59b68d7cd7d6c9b10d_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_58c79349bfa83c59b68d7cd7d6c9b10d_3 = MAKE_FUNCTION_FRAME(codeobj_58c79349bfa83c59b68d7cd7d6c9b10d, module_torch$optim$_multi_tensor$_functional, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_58c79349bfa83c59b68d7cd7d6c9b10d_3->m_type_description == NULL);
        frame_58c79349bfa83c59b68d7cd7d6c9b10d_3 = cache_frame_58c79349bfa83c59b68d7cd7d6c9b10d_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_58c79349bfa83c59b68d7cd7d6c9b10d_3);
        assert(Py_REFCNT(frame_58c79349bfa83c59b68d7cd7d6c9b10d_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_10 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 198;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_10;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_11 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_state;
                outline_1_var_state = tmp_assign_source_11;
                Py_INCREF(outline_1_var_state);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_sub_expr_left_5;
            PyObject *tmp_sub_expr_right_5;
            PyObject *tmp_pow_expr_left_3;
            PyObject *tmp_pow_expr_right_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_4;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            tmp_sub_expr_left_5 = mod_consts[10];
            if (par_beta1 == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[46]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 198;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }

            tmp_pow_expr_left_3 = par_beta1;
            CHECK_OBJECT(outline_1_var_state);
            tmp_expression_value_4 = outline_1_var_state;
            tmp_subscript_value_4 = mod_consts[47];
            tmp_pow_expr_right_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
            if (tmp_pow_expr_right_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
            tmp_sub_expr_right_5 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_3, tmp_pow_expr_right_3);
            Py_DECREF(tmp_pow_expr_right_3);
            if (tmp_sub_expr_right_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
            tmp_append_value_2 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
            Py_DECREF(tmp_sub_expr_right_5);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_2 = "oo";
            goto try_except_handler_5;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_7 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_7);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
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
        try_except_handler_5:;
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

        goto try_return_handler_4;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_58c79349bfa83c59b68d7cd7d6c9b10d_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_58c79349bfa83c59b68d7cd7d6c9b10d_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_58c79349bfa83c59b68d7cd7d6c9b10d_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_58c79349bfa83c59b68d7cd7d6c9b10d_3,
            type_description_2,
            outline_1_var_state,
            par_beta1
        );


        // Release cached frame if used for exception.
        if (frame_58c79349bfa83c59b68d7cd7d6c9b10d_3 == cache_frame_58c79349bfa83c59b68d7cd7d6c9b10d_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_58c79349bfa83c59b68d7cd7d6c9b10d_3);
            cache_frame_58c79349bfa83c59b68d7cd7d6c9b10d_3 = NULL;
        }

        assertFrameObject(frame_58c79349bfa83c59b68d7cd7d6c9b10d_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_4;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_1_var_state);
        outline_1_var_state = NULL;
        goto outline_result_2;
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

        Py_XDECREF(outline_1_var_state);
        outline_1_var_state = NULL;
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
        exception_lineno = 198;
        goto frame_exception_exit_1;
        outline_result_2:;
        assert(var_bias_correction1 == NULL);
        var_bias_correction1 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_12;
        // Tried code:
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(par_states);
            tmp_iter_arg_3 = par_states;
            tmp_assign_source_13 = MAKE_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_6;
            }
            assert(tmp_listcomp_3__$0 == NULL);
            tmp_listcomp_3__$0 = tmp_assign_source_13;
        }
        {
            PyObject *tmp_assign_source_14;
            tmp_assign_source_14 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_3__contraction == NULL);
            tmp_listcomp_3__contraction = tmp_assign_source_14;
        }
        if (isFrameUnusable(cache_frame_a8a82da1626c5994d59833e08e0d3254_4)) {
            Py_XDECREF(cache_frame_a8a82da1626c5994d59833e08e0d3254_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_a8a82da1626c5994d59833e08e0d3254_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_a8a82da1626c5994d59833e08e0d3254_4 = MAKE_FUNCTION_FRAME(codeobj_a8a82da1626c5994d59833e08e0d3254, module_torch$optim$_multi_tensor$_functional, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_a8a82da1626c5994d59833e08e0d3254_4->m_type_description == NULL);
        frame_a8a82da1626c5994d59833e08e0d3254_4 = cache_frame_a8a82da1626c5994d59833e08e0d3254_4;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_a8a82da1626c5994d59833e08e0d3254_4);
        assert(Py_REFCNT(frame_a8a82da1626c5994d59833e08e0d3254_4) == 2);

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT(tmp_listcomp_3__$0);
            tmp_next_source_3 = tmp_listcomp_3__$0;
            tmp_assign_source_15 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_15 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 199;
                    goto try_except_handler_7;
                }
            }

            {
                PyObject *old = tmp_listcomp_3__iter_value_0;
                tmp_listcomp_3__iter_value_0 = tmp_assign_source_15;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
            tmp_assign_source_16 = tmp_listcomp_3__iter_value_0;
            {
                PyObject *old = outline_2_var_state;
                outline_2_var_state = tmp_assign_source_16;
                Py_INCREF(outline_2_var_state);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            PyObject *tmp_sub_expr_left_6;
            PyObject *tmp_sub_expr_right_6;
            PyObject *tmp_pow_expr_left_4;
            PyObject *tmp_pow_expr_right_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_5;
            CHECK_OBJECT(tmp_listcomp_3__contraction);
            tmp_append_list_3 = tmp_listcomp_3__contraction;
            tmp_sub_expr_left_6 = mod_consts[10];
            if (par_beta2 == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[69]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 199;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }

            tmp_pow_expr_left_4 = par_beta2;
            CHECK_OBJECT(outline_2_var_state);
            tmp_expression_value_5 = outline_2_var_state;
            tmp_subscript_value_5 = mod_consts[47];
            tmp_pow_expr_right_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_5);
            if (tmp_pow_expr_right_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            tmp_sub_expr_right_6 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_4, tmp_pow_expr_right_4);
            Py_DECREF(tmp_pow_expr_right_4);
            if (tmp_sub_expr_right_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            tmp_append_value_3 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
            Py_DECREF(tmp_sub_expr_right_6);
            if (tmp_append_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_3, tmp_append_value_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_2 = "oo";
            goto try_except_handler_7;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        tmp_assign_source_12 = tmp_listcomp_3__contraction;
        Py_INCREF(tmp_assign_source_12);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
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
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
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
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_4;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_return_exit_3:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_6;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a8a82da1626c5994d59833e08e0d3254_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a8a82da1626c5994d59833e08e0d3254_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a8a82da1626c5994d59833e08e0d3254_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a8a82da1626c5994d59833e08e0d3254_4,
            type_description_2,
            outline_2_var_state,
            par_beta2
        );


        // Release cached frame if used for exception.
        if (frame_a8a82da1626c5994d59833e08e0d3254_4 == cache_frame_a8a82da1626c5994d59833e08e0d3254_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_a8a82da1626c5994d59833e08e0d3254_4);
            cache_frame_a8a82da1626c5994d59833e08e0d3254_4 = NULL;
        }

        assertFrameObject(frame_a8a82da1626c5994d59833e08e0d3254_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_6;
        skip_nested_handling_3:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_XDECREF(outline_2_var_state);
        outline_2_var_state = NULL;
        goto outline_result_3;
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

        Py_XDECREF(outline_2_var_state);
        outline_2_var_state = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 199;
        goto frame_exception_exit_1;
        outline_result_3:;
        assert(var_bias_correction2 == NULL);
        var_bias_correction2 = tmp_assign_source_12;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_weight_decay);
        tmp_cmp_expr_left_1 = par_weight_decay;
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooooooooooooooo";
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
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[8]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_grads);
        tmp_kw_call_arg_value_0_1 = par_grads;
        CHECK_OBJECT(par_params);
        tmp_kw_call_arg_value_1_1 = par_params;
        CHECK_OBJECT(par_weight_decay);
        tmp_kw_call_dict_value_0_1 = par_weight_decay;
        frame_ba10557991628490cf0283edeac7ff54->m_frame.f_lineno = 201;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[9]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[36]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_exp_avg);
        tmp_args_element_value_1 = par_exp_avg;
        if (par_beta1 == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 204;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = par_beta1;
        frame_ba10557991628490cf0283edeac7ff54->m_frame.f_lineno = 204;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_sub_expr_left_7;
        PyObject *tmp_sub_expr_right_7;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[8]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_exp_avg);
        tmp_kw_call_arg_value_0_2 = par_exp_avg;
        if (par_grads == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 205;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_1_2 = par_grads;
        tmp_sub_expr_left_7 = mod_consts[10];
        if (par_beta1 == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 205;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_right_7 = par_beta1;
        tmp_kw_call_dict_value_0_2 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_7, tmp_sub_expr_right_7);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 205;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ba10557991628490cf0283edeac7ff54->m_frame.f_lineno = 205;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[9]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[36]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_exp_avg_sq);
        tmp_args_element_value_3 = par_exp_avg_sq;
        if (par_beta2 == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[69]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 207;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = par_beta2;
        frame_ba10557991628490cf0283edeac7ff54->m_frame.f_lineno = 207;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_sub_expr_left_8;
        PyObject *tmp_sub_expr_right_8;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[28]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_exp_avg_sq);
        tmp_args_element_value_5 = par_exp_avg_sq;
        if (par_grads == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 208;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = par_grads;
        if (par_grads == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 208;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_7 = par_grads;
        tmp_sub_expr_left_8 = mod_consts[10];
        if (par_beta2 == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[69]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 208;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_right_8 = par_beta2;
        tmp_args_element_value_8 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_8, tmp_sub_expr_right_8);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 208;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ba10557991628490cf0283edeac7ff54->m_frame.f_lineno = 208;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assign_source_17;
        // Tried code:
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT(var_rho_t_list);
            tmp_iter_arg_4 = var_rho_t_list;
            tmp_assign_source_18 = MAKE_ITERATOR(tmp_iter_arg_4);
            if (tmp_assign_source_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_8;
            }
            assert(tmp_listcomp_4__$0 == NULL);
            tmp_listcomp_4__$0 = tmp_assign_source_18;
        }
        {
            PyObject *tmp_assign_source_19;
            tmp_assign_source_19 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_4__contraction == NULL);
            tmp_listcomp_4__contraction = tmp_assign_source_19;
        }
        if (isFrameUnusable(cache_frame_326818036ffb7808d21a251a1e84c9f8_5)) {
            Py_XDECREF(cache_frame_326818036ffb7808d21a251a1e84c9f8_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_326818036ffb7808d21a251a1e84c9f8_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_326818036ffb7808d21a251a1e84c9f8_5 = MAKE_FUNCTION_FRAME(codeobj_326818036ffb7808d21a251a1e84c9f8, module_torch$optim$_multi_tensor$_functional, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_326818036ffb7808d21a251a1e84c9f8_5->m_type_description == NULL);
        frame_326818036ffb7808d21a251a1e84c9f8_5 = cache_frame_326818036ffb7808d21a251a1e84c9f8_5;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_326818036ffb7808d21a251a1e84c9f8_5);
        assert(Py_REFCNT(frame_326818036ffb7808d21a251a1e84c9f8_5) == 2);

        // Framed code:
        // Tried code:
        loop_start_4:;
        {
            PyObject *tmp_next_source_4;
            PyObject *tmp_assign_source_20;
            CHECK_OBJECT(tmp_listcomp_4__$0);
            tmp_next_source_4 = tmp_listcomp_4__$0;
            tmp_assign_source_20 = ITERATOR_NEXT(tmp_next_source_4);
            if (tmp_assign_source_20 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_4;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 210;
                    goto try_except_handler_9;
                }
            }

            {
                PyObject *old = tmp_listcomp_4__iter_value_0;
                tmp_listcomp_4__iter_value_0 = tmp_assign_source_20;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_21;
            CHECK_OBJECT(tmp_listcomp_4__iter_value_0);
            tmp_assign_source_21 = tmp_listcomp_4__iter_value_0;
            {
                PyObject *old = outline_3_var_rho_t;
                outline_3_var_rho_t = tmp_assign_source_21;
                Py_INCREF(outline_3_var_rho_t);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_4;
            PyObject *tmp_append_value_4;
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_truediv_expr_left_3;
            PyObject *tmp_truediv_expr_right_3;
            PyObject *tmp_mult_expr_left_3;
            PyObject *tmp_mult_expr_right_3;
            PyObject *tmp_mult_expr_left_4;
            PyObject *tmp_mult_expr_right_4;
            PyObject *tmp_sub_expr_left_9;
            PyObject *tmp_sub_expr_right_9;
            PyObject *tmp_sub_expr_left_10;
            PyObject *tmp_sub_expr_right_10;
            PyObject *tmp_mult_expr_left_5;
            PyObject *tmp_mult_expr_right_5;
            PyObject *tmp_mult_expr_left_6;
            PyObject *tmp_mult_expr_right_6;
            PyObject *tmp_sub_expr_left_11;
            PyObject *tmp_sub_expr_right_11;
            PyObject *tmp_sub_expr_left_12;
            PyObject *tmp_sub_expr_right_12;
            CHECK_OBJECT(tmp_listcomp_4__contraction);
            tmp_append_list_4 = tmp_listcomp_4__contraction;
            CHECK_OBJECT(outline_3_var_rho_t);
            tmp_cmp_expr_left_2 = outline_3_var_rho_t;
            tmp_cmp_expr_right_2 = mod_consts[70];
            tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_2 = "oo";
                goto try_except_handler_9;
            }
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_1;
            } else {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[62]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_2 = "oo";
                goto try_except_handler_9;
            }
            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[71]);
            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_2 = "oo";
                goto try_except_handler_9;
            }
            CHECK_OBJECT(outline_3_var_rho_t);
            tmp_sub_expr_left_9 = outline_3_var_rho_t;
            tmp_sub_expr_right_9 = mod_consts[72];
            tmp_mult_expr_left_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_9, tmp_sub_expr_right_9);
            if (tmp_mult_expr_left_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);

                exception_lineno = 210;
                type_description_2 = "oo";
                goto try_except_handler_9;
            }
            CHECK_OBJECT(outline_3_var_rho_t);
            tmp_sub_expr_left_10 = outline_3_var_rho_t;
            tmp_sub_expr_right_10 = mod_consts[67];
            tmp_mult_expr_right_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_10, tmp_sub_expr_right_10);
            if (tmp_mult_expr_right_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);
                Py_DECREF(tmp_mult_expr_left_4);

                exception_lineno = 210;
                type_description_2 = "oo";
                goto try_except_handler_9;
            }
            tmp_mult_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
            Py_DECREF(tmp_mult_expr_left_4);
            Py_DECREF(tmp_mult_expr_right_4);
            if (tmp_mult_expr_left_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);

                exception_lineno = 210;
                type_description_2 = "oo";
                goto try_except_handler_9;
            }
            if (var_rho_inf == NULL) {
                Py_DECREF(tmp_called_value_6);
                Py_DECREF(tmp_mult_expr_left_3);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[68]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 210;
                type_description_2 = "oo";
                goto try_except_handler_9;
            }

            tmp_mult_expr_right_3 = var_rho_inf;
            tmp_truediv_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
            Py_DECREF(tmp_mult_expr_left_3);
            if (tmp_truediv_expr_left_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);

                exception_lineno = 210;
                type_description_2 = "oo";
                goto try_except_handler_9;
            }
            if (var_rho_inf == NULL) {
                Py_DECREF(tmp_called_value_6);
                Py_DECREF(tmp_truediv_expr_left_3);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[68]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 210;
                type_description_2 = "oo";
                goto try_except_handler_9;
            }

            tmp_sub_expr_left_11 = var_rho_inf;
            tmp_sub_expr_right_11 = mod_consts[72];
            tmp_mult_expr_left_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_11, tmp_sub_expr_right_11);
            if (tmp_mult_expr_left_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);
                Py_DECREF(tmp_truediv_expr_left_3);

                exception_lineno = 210;
                type_description_2 = "oo";
                goto try_except_handler_9;
            }
            if (var_rho_inf == NULL) {
                Py_DECREF(tmp_called_value_6);
                Py_DECREF(tmp_truediv_expr_left_3);
                Py_DECREF(tmp_mult_expr_left_6);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[68]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 210;
                type_description_2 = "oo";
                goto try_except_handler_9;
            }

            tmp_sub_expr_left_12 = var_rho_inf;
            tmp_sub_expr_right_12 = mod_consts[67];
            tmp_mult_expr_right_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_12, tmp_sub_expr_right_12);
            if (tmp_mult_expr_right_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);
                Py_DECREF(tmp_truediv_expr_left_3);
                Py_DECREF(tmp_mult_expr_left_6);

                exception_lineno = 210;
                type_description_2 = "oo";
                goto try_except_handler_9;
            }
            tmp_mult_expr_left_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
            Py_DECREF(tmp_mult_expr_left_6);
            Py_DECREF(tmp_mult_expr_right_6);
            if (tmp_mult_expr_left_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);
                Py_DECREF(tmp_truediv_expr_left_3);

                exception_lineno = 210;
                type_description_2 = "oo";
                goto try_except_handler_9;
            }
            CHECK_OBJECT(outline_3_var_rho_t);
            tmp_mult_expr_right_5 = outline_3_var_rho_t;
            tmp_truediv_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
            Py_DECREF(tmp_mult_expr_left_5);
            if (tmp_truediv_expr_right_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);
                Py_DECREF(tmp_truediv_expr_left_3);

                exception_lineno = 210;
                type_description_2 = "oo";
                goto try_except_handler_9;
            }
            tmp_args_element_value_9 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
            Py_DECREF(tmp_truediv_expr_left_3);
            Py_DECREF(tmp_truediv_expr_right_3);
            if (tmp_args_element_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);

                exception_lineno = 210;
                type_description_2 = "oo";
                goto try_except_handler_9;
            }
            frame_326818036ffb7808d21a251a1e84c9f8_5->m_frame.f_lineno = 210;
            tmp_append_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_append_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_2 = "oo";
                goto try_except_handler_9;
            }
            goto condexpr_end_1;
            condexpr_false_1:;
            tmp_append_value_4 = mod_consts[2];
            Py_INCREF(tmp_append_value_4);
            condexpr_end_1:;
            tmp_result = LIST_APPEND1(tmp_append_list_4, tmp_append_value_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_2 = "oo";
                goto try_except_handler_9;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_2 = "oo";
            goto try_except_handler_9;
        }
        goto loop_start_4;
        loop_end_4:;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        tmp_assign_source_17 = tmp_listcomp_4__contraction;
        Py_INCREF(tmp_assign_source_17);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
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
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
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
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto frame_exception_exit_5;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_return_exit_4:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_8;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_326818036ffb7808d21a251a1e84c9f8_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_326818036ffb7808d21a251a1e84c9f8_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_326818036ffb7808d21a251a1e84c9f8_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_326818036ffb7808d21a251a1e84c9f8_5,
            type_description_2,
            outline_3_var_rho_t,
            var_rho_inf
        );


        // Release cached frame if used for exception.
        if (frame_326818036ffb7808d21a251a1e84c9f8_5 == cache_frame_326818036ffb7808d21a251a1e84c9f8_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_326818036ffb7808d21a251a1e84c9f8_5);
            cache_frame_326818036ffb7808d21a251a1e84c9f8_5 = NULL;
        }

        assertFrameObject(frame_326818036ffb7808d21a251a1e84c9f8_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_8;
        skip_nested_handling_4:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_XDECREF(outline_3_var_rho_t);
        outline_3_var_rho_t = NULL;
        goto outline_result_4;
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

        Py_XDECREF(outline_3_var_rho_t);
        outline_3_var_rho_t = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 210;
        goto frame_exception_exit_1;
        outline_result_4:;
        assert(var_rect == NULL);
        var_rect = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_22;
        // Tried code:
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_iter_arg_5;
            CHECK_OBJECT(var_rect);
            tmp_iter_arg_5 = var_rect;
            tmp_assign_source_23 = MAKE_ITERATOR(tmp_iter_arg_5);
            if (tmp_assign_source_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_10;
            }
            assert(tmp_listcomp_5__$0 == NULL);
            tmp_listcomp_5__$0 = tmp_assign_source_23;
        }
        {
            PyObject *tmp_assign_source_24;
            tmp_assign_source_24 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_5__contraction == NULL);
            tmp_listcomp_5__contraction = tmp_assign_source_24;
        }
        if (isFrameUnusable(cache_frame_c265c8c0c1ab9ec78ea9e7d4b321ea1e_6)) {
            Py_XDECREF(cache_frame_c265c8c0c1ab9ec78ea9e7d4b321ea1e_6);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c265c8c0c1ab9ec78ea9e7d4b321ea1e_6 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c265c8c0c1ab9ec78ea9e7d4b321ea1e_6 = MAKE_FUNCTION_FRAME(codeobj_c265c8c0c1ab9ec78ea9e7d4b321ea1e, module_torch$optim$_multi_tensor$_functional, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_c265c8c0c1ab9ec78ea9e7d4b321ea1e_6->m_type_description == NULL);
        frame_c265c8c0c1ab9ec78ea9e7d4b321ea1e_6 = cache_frame_c265c8c0c1ab9ec78ea9e7d4b321ea1e_6;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c265c8c0c1ab9ec78ea9e7d4b321ea1e_6);
        assert(Py_REFCNT(frame_c265c8c0c1ab9ec78ea9e7d4b321ea1e_6) == 2);

        // Framed code:
        // Tried code:
        loop_start_5:;
        {
            PyObject *tmp_next_source_5;
            PyObject *tmp_assign_source_25;
            CHECK_OBJECT(tmp_listcomp_5__$0);
            tmp_next_source_5 = tmp_listcomp_5__$0;
            tmp_assign_source_25 = ITERATOR_NEXT(tmp_next_source_5);
            if (tmp_assign_source_25 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_5;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 212;
                    goto try_except_handler_11;
                }
            }

            {
                PyObject *old = tmp_listcomp_5__iter_value_0;
                tmp_listcomp_5__iter_value_0 = tmp_assign_source_25;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_26;
            CHECK_OBJECT(tmp_listcomp_5__iter_value_0);
            tmp_assign_source_26 = tmp_listcomp_5__iter_value_0;
            {
                PyObject *old = outline_4_var_rect;
                outline_4_var_rect = tmp_assign_source_26;
                Py_INCREF(outline_4_var_rect);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_5;
            PyObject *tmp_append_value_5;
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_listcomp_5__contraction);
            tmp_append_list_5 = tmp_listcomp_5__contraction;
            CHECK_OBJECT(outline_4_var_rect);
            tmp_cmp_expr_left_3 = outline_4_var_rect;
            tmp_cmp_expr_right_3 = mod_consts[2];
            tmp_condition_result_3 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_append_value_5 = mod_consts[2];
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_append_value_5 = mod_consts[73];
            condexpr_end_2:;
            tmp_result = LIST_APPEND0(tmp_append_list_5, tmp_append_value_5);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_2 = "o";
            goto try_except_handler_11;
        }
        goto loop_start_5;
        loop_end_5:;
        CHECK_OBJECT(tmp_listcomp_5__contraction);
        tmp_assign_source_22 = tmp_listcomp_5__contraction;
        Py_INCREF(tmp_assign_source_22);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
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
        try_except_handler_11:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
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
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto frame_exception_exit_6;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_return_exit_5:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_10;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c265c8c0c1ab9ec78ea9e7d4b321ea1e_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c265c8c0c1ab9ec78ea9e7d4b321ea1e_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c265c8c0c1ab9ec78ea9e7d4b321ea1e_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c265c8c0c1ab9ec78ea9e7d4b321ea1e_6,
            type_description_2,
            outline_4_var_rect
        );


        // Release cached frame if used for exception.
        if (frame_c265c8c0c1ab9ec78ea9e7d4b321ea1e_6 == cache_frame_c265c8c0c1ab9ec78ea9e7d4b321ea1e_6) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_c265c8c0c1ab9ec78ea9e7d4b321ea1e_6);
            cache_frame_c265c8c0c1ab9ec78ea9e7d4b321ea1e_6 = NULL;
        }

        assertFrameObject(frame_c265c8c0c1ab9ec78ea9e7d4b321ea1e_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_10;
        skip_nested_handling_5:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_XDECREF(outline_4_var_rect);
        outline_4_var_rect = NULL;
        goto outline_result_5;
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

        Py_XDECREF(outline_4_var_rect);
        outline_4_var_rect = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 212;
        goto frame_exception_exit_1;
        outline_result_5:;
        assert(var_unrectified == NULL);
        var_unrectified = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_10;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_exp_avg_sq);
        tmp_args_element_value_10 = par_exp_avg_sq;
        frame_ba10557991628490cf0283edeac7ff54->m_frame.f_lineno = 214;
        tmp_assign_source_27 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[31], tmp_args_element_value_10);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_exp_avg_sq_sqrt == NULL);
        var_exp_avg_sq_sqrt = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        // Tried code:
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_iter_arg_6;
            CHECK_OBJECT(var_bias_correction2);
            tmp_iter_arg_6 = var_bias_correction2;
            tmp_assign_source_29 = MAKE_ITERATOR(tmp_iter_arg_6);
            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_12;
            }
            assert(tmp_listcomp_6__$0 == NULL);
            tmp_listcomp_6__$0 = tmp_assign_source_29;
        }
        {
            PyObject *tmp_assign_source_30;
            tmp_assign_source_30 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_6__contraction == NULL);
            tmp_listcomp_6__contraction = tmp_assign_source_30;
        }
        if (isFrameUnusable(cache_frame_a442f79ade1b7697494464fa54fbd1ae_7)) {
            Py_XDECREF(cache_frame_a442f79ade1b7697494464fa54fbd1ae_7);

#if _DEBUG_REFCOUNTS
            if (cache_frame_a442f79ade1b7697494464fa54fbd1ae_7 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_a442f79ade1b7697494464fa54fbd1ae_7 = MAKE_FUNCTION_FRAME(codeobj_a442f79ade1b7697494464fa54fbd1ae, module_torch$optim$_multi_tensor$_functional, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_a442f79ade1b7697494464fa54fbd1ae_7->m_type_description == NULL);
        frame_a442f79ade1b7697494464fa54fbd1ae_7 = cache_frame_a442f79ade1b7697494464fa54fbd1ae_7;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_a442f79ade1b7697494464fa54fbd1ae_7);
        assert(Py_REFCNT(frame_a442f79ade1b7697494464fa54fbd1ae_7) == 2);

        // Framed code:
        // Tried code:
        loop_start_6:;
        {
            PyObject *tmp_next_source_6;
            PyObject *tmp_assign_source_31;
            CHECK_OBJECT(tmp_listcomp_6__$0);
            tmp_next_source_6 = tmp_listcomp_6__$0;
            tmp_assign_source_31 = ITERATOR_NEXT(tmp_next_source_6);
            if (tmp_assign_source_31 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_6;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 215;
                    goto try_except_handler_13;
                }
            }

            {
                PyObject *old = tmp_listcomp_6__iter_value_0;
                tmp_listcomp_6__iter_value_0 = tmp_assign_source_31;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_32;
            CHECK_OBJECT(tmp_listcomp_6__iter_value_0);
            tmp_assign_source_32 = tmp_listcomp_6__iter_value_0;
            {
                PyObject *old = outline_5_var_bc;
                outline_5_var_bc = tmp_assign_source_32;
                Py_INCREF(outline_5_var_bc);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_6;
            PyObject *tmp_append_value_6;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_11;
            CHECK_OBJECT(tmp_listcomp_6__contraction);
            tmp_append_list_6 = tmp_listcomp_6__contraction;
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[62]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            CHECK_OBJECT(outline_5_var_bc);
            tmp_args_element_value_11 = outline_5_var_bc;
            frame_a442f79ade1b7697494464fa54fbd1ae_7->m_frame.f_lineno = 215;
            tmp_append_value_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[71], tmp_args_element_value_11);
            if (tmp_append_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_6, tmp_append_value_6);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_2 = "o";
            goto try_except_handler_13;
        }
        goto loop_start_6;
        loop_end_6:;
        CHECK_OBJECT(tmp_listcomp_6__contraction);
        tmp_assign_source_28 = tmp_listcomp_6__contraction;
        Py_INCREF(tmp_assign_source_28);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
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
        try_except_handler_13:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
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
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto frame_exception_exit_7;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;
        frame_return_exit_6:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_12;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a442f79ade1b7697494464fa54fbd1ae_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a442f79ade1b7697494464fa54fbd1ae_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a442f79ade1b7697494464fa54fbd1ae_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a442f79ade1b7697494464fa54fbd1ae_7,
            type_description_2,
            outline_5_var_bc
        );


        // Release cached frame if used for exception.
        if (frame_a442f79ade1b7697494464fa54fbd1ae_7 == cache_frame_a442f79ade1b7697494464fa54fbd1ae_7) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_a442f79ade1b7697494464fa54fbd1ae_7);
            cache_frame_a442f79ade1b7697494464fa54fbd1ae_7 = NULL;
        }

        assertFrameObject(frame_a442f79ade1b7697494464fa54fbd1ae_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_12;
        skip_nested_handling_6:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_XDECREF(outline_5_var_bc);
        outline_5_var_bc = NULL;
        goto outline_result_6;
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

        Py_XDECREF(outline_5_var_bc);
        outline_5_var_bc = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 215;
        goto frame_exception_exit_1;
        outline_result_6:;
        assert(var_bias_correction_sqrt == NULL);
        var_bias_correction_sqrt = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_exp_avg_sq_sqrt);
        tmp_args_element_value_12 = var_exp_avg_sq_sqrt;
        CHECK_OBJECT(var_bias_correction_sqrt);
        tmp_args_element_value_13 = var_bias_correction_sqrt;
        frame_ba10557991628490cf0283edeac7ff54->m_frame.f_lineno = 216;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_assign_source_33 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[32],
                call_args
            );
        }

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_denom == NULL);
        var_denom = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        // Tried code:
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_iter_arg_7;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_args_element_value_15;
            tmp_called_value_7 = (PyObject *)&PyZip_Type;
            CHECK_OBJECT(var_rect);
            tmp_args_element_value_14 = var_rect;
            CHECK_OBJECT(var_bias_correction1);
            tmp_args_element_value_15 = var_bias_correction1;
            frame_ba10557991628490cf0283edeac7ff54->m_frame.f_lineno = 217;
            {
                PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
                tmp_iter_arg_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
            }

            if (tmp_iter_arg_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_14;
            }
            tmp_assign_source_35 = MAKE_ITERATOR(tmp_iter_arg_7);
            Py_DECREF(tmp_iter_arg_7);
            if (tmp_assign_source_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_14;
            }
            assert(tmp_listcomp_7__$0 == NULL);
            tmp_listcomp_7__$0 = tmp_assign_source_35;
        }
        {
            PyObject *tmp_assign_source_36;
            tmp_assign_source_36 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_7__contraction == NULL);
            tmp_listcomp_7__contraction = tmp_assign_source_36;
        }
        if (isFrameUnusable(cache_frame_4bab1b05fc34719c42214a5e4ad1d6c2_8)) {
            Py_XDECREF(cache_frame_4bab1b05fc34719c42214a5e4ad1d6c2_8);

#if _DEBUG_REFCOUNTS
            if (cache_frame_4bab1b05fc34719c42214a5e4ad1d6c2_8 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_4bab1b05fc34719c42214a5e4ad1d6c2_8 = MAKE_FUNCTION_FRAME(codeobj_4bab1b05fc34719c42214a5e4ad1d6c2, module_torch$optim$_multi_tensor$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_4bab1b05fc34719c42214a5e4ad1d6c2_8->m_type_description == NULL);
        frame_4bab1b05fc34719c42214a5e4ad1d6c2_8 = cache_frame_4bab1b05fc34719c42214a5e4ad1d6c2_8;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_4bab1b05fc34719c42214a5e4ad1d6c2_8);
        assert(Py_REFCNT(frame_4bab1b05fc34719c42214a5e4ad1d6c2_8) == 2);

        // Framed code:
        // Tried code:
        loop_start_7:;
        {
            PyObject *tmp_next_source_7;
            PyObject *tmp_assign_source_37;
            CHECK_OBJECT(tmp_listcomp_7__$0);
            tmp_next_source_7 = tmp_listcomp_7__$0;
            tmp_assign_source_37 = ITERATOR_NEXT(tmp_next_source_7);
            if (tmp_assign_source_37 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_7;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 217;
                    goto try_except_handler_15;
                }
            }

            {
                PyObject *old = tmp_listcomp_7__iter_value_0;
                tmp_listcomp_7__iter_value_0 = tmp_assign_source_37;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_iter_arg_8;
            CHECK_OBJECT(tmp_listcomp_7__iter_value_0);
            tmp_iter_arg_8 = tmp_listcomp_7__iter_value_0;
            tmp_assign_source_38 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_8);
            if (tmp_assign_source_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "ooo";
                goto try_except_handler_16;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_38;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_39 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
            if (tmp_assign_source_39 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 217;
                goto try_except_handler_17;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_39;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_40 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
            if (tmp_assign_source_40 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 217;
                goto try_except_handler_17;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_40;
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

                        type_description_2 = "ooo";
                        exception_lineno = 217;
                        goto try_except_handler_17;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[14];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "ooo";
                exception_lineno = 217;
                goto try_except_handler_17;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_16;
        // End of try:
        try_end_1:;
        goto try_end_2;
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

        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto try_except_handler_15;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_41;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_41 = tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_6_var_rect;
                outline_6_var_rect = tmp_assign_source_41;
                Py_INCREF(outline_6_var_rect);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_42;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_42 = tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_6_var_bc;
                outline_6_var_bc = tmp_assign_source_42;
                Py_INCREF(outline_6_var_bc);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_append_list_7;
            PyObject *tmp_append_value_7;
            PyObject *tmp_mult_expr_left_7;
            PyObject *tmp_mult_expr_right_7;
            PyObject *tmp_truediv_expr_left_4;
            PyObject *tmp_truediv_expr_right_4;
            PyObject *tmp_mult_expr_left_8;
            PyObject *tmp_mult_expr_right_8;
            CHECK_OBJECT(tmp_listcomp_7__contraction);
            tmp_append_list_7 = tmp_listcomp_7__contraction;
            if (par_lr == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[49]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 217;
                type_description_2 = "ooo";
                goto try_except_handler_15;
            }

            tmp_mult_expr_left_8 = par_lr;
            CHECK_OBJECT(outline_6_var_rect);
            tmp_mult_expr_right_8 = outline_6_var_rect;
            tmp_truediv_expr_left_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
            if (tmp_truediv_expr_left_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "ooo";
                goto try_except_handler_15;
            }
            CHECK_OBJECT(outline_6_var_bc);
            tmp_truediv_expr_right_4 = outline_6_var_bc;
            tmp_mult_expr_left_7 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
            Py_DECREF(tmp_truediv_expr_left_4);
            if (tmp_mult_expr_left_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "ooo";
                goto try_except_handler_15;
            }
            tmp_mult_expr_right_7 = mod_consts[48];
            tmp_append_value_7 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
            Py_DECREF(tmp_mult_expr_left_7);
            if (tmp_append_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "ooo";
                goto try_except_handler_15;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_7, tmp_append_value_7);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "ooo";
                goto try_except_handler_15;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_2 = "ooo";
            goto try_except_handler_15;
        }
        goto loop_start_7;
        loop_end_7:;
        CHECK_OBJECT(tmp_listcomp_7__contraction);
        tmp_assign_source_34 = tmp_listcomp_7__contraction;
        Py_INCREF(tmp_assign_source_34);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        CHECK_OBJECT(tmp_listcomp_7__$0);
        Py_DECREF(tmp_listcomp_7__$0);
        tmp_listcomp_7__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_7__contraction);
        Py_DECREF(tmp_listcomp_7__contraction);
        tmp_listcomp_7__contraction = NULL;
        Py_XDECREF(tmp_listcomp_7__iter_value_0);
        tmp_listcomp_7__iter_value_0 = NULL;
        goto frame_return_exit_7;
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

        CHECK_OBJECT(tmp_listcomp_7__$0);
        Py_DECREF(tmp_listcomp_7__$0);
        tmp_listcomp_7__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_7__contraction);
        Py_DECREF(tmp_listcomp_7__contraction);
        tmp_listcomp_7__contraction = NULL;
        Py_XDECREF(tmp_listcomp_7__iter_value_0);
        tmp_listcomp_7__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto frame_exception_exit_8;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;
        frame_return_exit_7:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_14;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4bab1b05fc34719c42214a5e4ad1d6c2_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4bab1b05fc34719c42214a5e4ad1d6c2_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4bab1b05fc34719c42214a5e4ad1d6c2_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4bab1b05fc34719c42214a5e4ad1d6c2_8,
            type_description_2,
            outline_6_var_rect,
            outline_6_var_bc,
            par_lr
        );


        // Release cached frame if used for exception.
        if (frame_4bab1b05fc34719c42214a5e4ad1d6c2_8 == cache_frame_4bab1b05fc34719c42214a5e4ad1d6c2_8) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_4bab1b05fc34719c42214a5e4ad1d6c2_8);
            cache_frame_4bab1b05fc34719c42214a5e4ad1d6c2_8 = NULL;
        }

        assertFrameObject(frame_4bab1b05fc34719c42214a5e4ad1d6c2_8);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_14;
        skip_nested_handling_7:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        Py_XDECREF(outline_6_var_rect);
        outline_6_var_rect = NULL;
        Py_XDECREF(outline_6_var_bc);
        outline_6_var_bc = NULL;
        goto outline_result_7;
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

        Py_XDECREF(outline_6_var_rect);
        outline_6_var_rect = NULL;
        Py_XDECREF(outline_6_var_bc);
        outline_6_var_bc = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 217;
        goto frame_exception_exit_1;
        outline_result_7:;
        assert(var_step_size == NULL);
        var_step_size = tmp_assign_source_34;
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[50]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_params == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_16 = par_params;
        CHECK_OBJECT(par_exp_avg);
        tmp_args_element_value_17 = par_exp_avg;
        CHECK_OBJECT(var_denom);
        tmp_args_element_value_18 = var_denom;
        CHECK_OBJECT(var_step_size);
        tmp_args_element_value_19 = var_step_size;
        frame_ba10557991628490cf0283edeac7ff54->m_frame.f_lineno = 218;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assign_source_43;
        // Tried code:
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_iter_arg_9;
            CHECK_OBJECT(par_exp_avg);
            tmp_iter_arg_9 = par_exp_avg;
            tmp_assign_source_44 = MAKE_ITERATOR(tmp_iter_arg_9);
            if (tmp_assign_source_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_18;
            }
            assert(tmp_listcomp_8__$0 == NULL);
            tmp_listcomp_8__$0 = tmp_assign_source_44;
        }
        {
            PyObject *tmp_assign_source_45;
            tmp_assign_source_45 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_8__contraction == NULL);
            tmp_listcomp_8__contraction = tmp_assign_source_45;
        }
        if (isFrameUnusable(cache_frame_0cfc02cf6a50759aaa2e7b313f5bace6_9)) {
            Py_XDECREF(cache_frame_0cfc02cf6a50759aaa2e7b313f5bace6_9);

#if _DEBUG_REFCOUNTS
            if (cache_frame_0cfc02cf6a50759aaa2e7b313f5bace6_9 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_0cfc02cf6a50759aaa2e7b313f5bace6_9 = MAKE_FUNCTION_FRAME(codeobj_0cfc02cf6a50759aaa2e7b313f5bace6, module_torch$optim$_multi_tensor$_functional, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_0cfc02cf6a50759aaa2e7b313f5bace6_9->m_type_description == NULL);
        frame_0cfc02cf6a50759aaa2e7b313f5bace6_9 = cache_frame_0cfc02cf6a50759aaa2e7b313f5bace6_9;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_0cfc02cf6a50759aaa2e7b313f5bace6_9);
        assert(Py_REFCNT(frame_0cfc02cf6a50759aaa2e7b313f5bace6_9) == 2);

        // Framed code:
        // Tried code:
        loop_start_8:;
        {
            PyObject *tmp_next_source_8;
            PyObject *tmp_assign_source_46;
            CHECK_OBJECT(tmp_listcomp_8__$0);
            tmp_next_source_8 = tmp_listcomp_8__$0;
            tmp_assign_source_46 = ITERATOR_NEXT(tmp_next_source_8);
            if (tmp_assign_source_46 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_8;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 220;
                    goto try_except_handler_19;
                }
            }

            {
                PyObject *old = tmp_listcomp_8__iter_value_0;
                tmp_listcomp_8__iter_value_0 = tmp_assign_source_46;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_47;
            CHECK_OBJECT(tmp_listcomp_8__iter_value_0);
            tmp_assign_source_47 = tmp_listcomp_8__iter_value_0;
            {
                PyObject *old = outline_7_var_exp_av;
                outline_7_var_exp_av = tmp_assign_source_47;
                Py_INCREF(outline_7_var_exp_av);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_8;
            PyObject *tmp_append_value_8;
            PyObject *tmp_called_value_9;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_kw_call_arg_value_0_3;
            PyObject *tmp_kw_call_dict_value_0_3;
            PyObject *tmp_expression_value_14;
            CHECK_OBJECT(tmp_listcomp_8__contraction);
            tmp_append_list_8 = tmp_listcomp_8__contraction;
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "o";
                goto try_except_handler_19;
            }
            tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[74]);
            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "o";
                goto try_except_handler_19;
            }
            CHECK_OBJECT(outline_7_var_exp_av);
            tmp_kw_call_arg_value_0_3 = outline_7_var_exp_av;
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_9);

                exception_lineno = 220;
                type_description_2 = "o";
                goto try_except_handler_19;
            }
            tmp_kw_call_dict_value_0_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[75]);
            if (tmp_kw_call_dict_value_0_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_9);

                exception_lineno = 220;
                type_description_2 = "o";
                goto try_except_handler_19;
            }
            frame_0cfc02cf6a50759aaa2e7b313f5bace6_9->m_frame.f_lineno = 220;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_3};
                PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
                tmp_append_value_8 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_9, args, kw_values, mod_consts[76]);
            }

            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_kw_call_dict_value_0_3);
            if (tmp_append_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "o";
                goto try_except_handler_19;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_8, tmp_append_value_8);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "o";
                goto try_except_handler_19;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_2 = "o";
            goto try_except_handler_19;
        }
        goto loop_start_8;
        loop_end_8:;
        CHECK_OBJECT(tmp_listcomp_8__contraction);
        tmp_assign_source_43 = tmp_listcomp_8__contraction;
        Py_INCREF(tmp_assign_source_43);
        goto try_return_handler_19;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        CHECK_OBJECT(tmp_listcomp_8__$0);
        Py_DECREF(tmp_listcomp_8__$0);
        tmp_listcomp_8__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_8__contraction);
        Py_DECREF(tmp_listcomp_8__contraction);
        tmp_listcomp_8__contraction = NULL;
        Py_XDECREF(tmp_listcomp_8__iter_value_0);
        tmp_listcomp_8__iter_value_0 = NULL;
        goto frame_return_exit_8;
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

        CHECK_OBJECT(tmp_listcomp_8__$0);
        Py_DECREF(tmp_listcomp_8__$0);
        tmp_listcomp_8__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_8__contraction);
        Py_DECREF(tmp_listcomp_8__contraction);
        tmp_listcomp_8__contraction = NULL;
        Py_XDECREF(tmp_listcomp_8__iter_value_0);
        tmp_listcomp_8__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto frame_exception_exit_9;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_8;
        frame_return_exit_8:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_18;
        frame_exception_exit_9:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0cfc02cf6a50759aaa2e7b313f5bace6_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0cfc02cf6a50759aaa2e7b313f5bace6_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0cfc02cf6a50759aaa2e7b313f5bace6_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0cfc02cf6a50759aaa2e7b313f5bace6_9,
            type_description_2,
            outline_7_var_exp_av
        );


        // Release cached frame if used for exception.
        if (frame_0cfc02cf6a50759aaa2e7b313f5bace6_9 == cache_frame_0cfc02cf6a50759aaa2e7b313f5bace6_9) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_0cfc02cf6a50759aaa2e7b313f5bace6_9);
            cache_frame_0cfc02cf6a50759aaa2e7b313f5bace6_9 = NULL;
        }

        assertFrameObject(frame_0cfc02cf6a50759aaa2e7b313f5bace6_9);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_8;
        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_18;
        skip_nested_handling_8:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_XDECREF(outline_7_var_exp_av);
        outline_7_var_exp_av = NULL;
        goto outline_result_8;
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

        Py_XDECREF(outline_7_var_exp_av);
        outline_7_var_exp_av = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 220;
        goto frame_exception_exit_1;
        outline_result_8:;
        {
            PyObject *old = var_denom;
            assert(old != NULL);
            var_denom = tmp_assign_source_43;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_48;
        // Tried code:
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_iter_arg_10;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_args_element_value_21;
            tmp_called_value_10 = (PyObject *)&PyZip_Type;
            CHECK_OBJECT(var_unrectified);
            tmp_args_element_value_20 = var_unrectified;
            CHECK_OBJECT(var_bias_correction1);
            tmp_args_element_value_21 = var_bias_correction1;
            frame_ba10557991628490cf0283edeac7ff54->m_frame.f_lineno = 221;
            {
                PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
                tmp_iter_arg_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_10, call_args);
            }

            if (tmp_iter_arg_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_20;
            }
            tmp_assign_source_49 = MAKE_ITERATOR(tmp_iter_arg_10);
            Py_DECREF(tmp_iter_arg_10);
            if (tmp_assign_source_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_20;
            }
            assert(tmp_listcomp_9__$0 == NULL);
            tmp_listcomp_9__$0 = tmp_assign_source_49;
        }
        {
            PyObject *tmp_assign_source_50;
            tmp_assign_source_50 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_9__contraction == NULL);
            tmp_listcomp_9__contraction = tmp_assign_source_50;
        }
        if (isFrameUnusable(cache_frame_b8c8667f1d555bdee90aac95fd358f70_10)) {
            Py_XDECREF(cache_frame_b8c8667f1d555bdee90aac95fd358f70_10);

#if _DEBUG_REFCOUNTS
            if (cache_frame_b8c8667f1d555bdee90aac95fd358f70_10 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_b8c8667f1d555bdee90aac95fd358f70_10 = MAKE_FUNCTION_FRAME(codeobj_b8c8667f1d555bdee90aac95fd358f70, module_torch$optim$_multi_tensor$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_b8c8667f1d555bdee90aac95fd358f70_10->m_type_description == NULL);
        frame_b8c8667f1d555bdee90aac95fd358f70_10 = cache_frame_b8c8667f1d555bdee90aac95fd358f70_10;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_b8c8667f1d555bdee90aac95fd358f70_10);
        assert(Py_REFCNT(frame_b8c8667f1d555bdee90aac95fd358f70_10) == 2);

        // Framed code:
        // Tried code:
        loop_start_9:;
        {
            PyObject *tmp_next_source_9;
            PyObject *tmp_assign_source_51;
            CHECK_OBJECT(tmp_listcomp_9__$0);
            tmp_next_source_9 = tmp_listcomp_9__$0;
            tmp_assign_source_51 = ITERATOR_NEXT(tmp_next_source_9);
            if (tmp_assign_source_51 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_9;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 221;
                    goto try_except_handler_21;
                }
            }

            {
                PyObject *old = tmp_listcomp_9__iter_value_0;
                tmp_listcomp_9__iter_value_0 = tmp_assign_source_51;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_iter_arg_11;
            CHECK_OBJECT(tmp_listcomp_9__iter_value_0);
            tmp_iter_arg_11 = tmp_listcomp_9__iter_value_0;
            tmp_assign_source_52 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_11);
            if (tmp_assign_source_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_2 = "ooo";
                goto try_except_handler_22;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__source_iter;
                tmp_listcomp$tuple_unpack_2__source_iter = tmp_assign_source_52;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_53;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_unpack_3 = tmp_listcomp$tuple_unpack_2__source_iter;
            tmp_assign_source_53 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
            if (tmp_assign_source_53 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 221;
                goto try_except_handler_23;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__element_1;
                tmp_listcomp$tuple_unpack_2__element_1 = tmp_assign_source_53;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_54;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_unpack_4 = tmp_listcomp$tuple_unpack_2__source_iter;
            tmp_assign_source_54 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
            if (tmp_assign_source_54 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 221;
                goto try_except_handler_23;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__element_2;
                tmp_listcomp$tuple_unpack_2__element_2 = tmp_assign_source_54;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_iterator_name_2 = tmp_listcomp$tuple_unpack_2__source_iter;
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

                        type_description_2 = "ooo";
                        exception_lineno = 221;
                        goto try_except_handler_23;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[14];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "ooo";
                exception_lineno = 221;
                goto try_except_handler_23;
            }
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_2__source_iter);
        tmp_listcomp$tuple_unpack_2__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto try_except_handler_22;
        // End of try:
        try_end_3:;
        goto try_end_4;
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

        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_1);
        tmp_listcomp$tuple_unpack_2__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_2);
        tmp_listcomp$tuple_unpack_2__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto try_except_handler_21;
        // End of try:
        try_end_4:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_2__source_iter);
        tmp_listcomp$tuple_unpack_2__source_iter = NULL;
        {
            PyObject *tmp_assign_source_55;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__element_1);
            tmp_assign_source_55 = tmp_listcomp$tuple_unpack_2__element_1;
            {
                PyObject *old = outline_8_var_rect;
                outline_8_var_rect = tmp_assign_source_55;
                Py_INCREF(outline_8_var_rect);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_1);
        tmp_listcomp$tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_56;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__element_2);
            tmp_assign_source_56 = tmp_listcomp$tuple_unpack_2__element_2;
            {
                PyObject *old = outline_8_var_bc;
                outline_8_var_bc = tmp_assign_source_56;
                Py_INCREF(outline_8_var_bc);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_2);
        tmp_listcomp$tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_append_list_9;
            PyObject *tmp_append_value_9;
            PyObject *tmp_mult_expr_left_9;
            PyObject *tmp_mult_expr_right_9;
            PyObject *tmp_truediv_expr_left_5;
            PyObject *tmp_truediv_expr_right_5;
            PyObject *tmp_mult_expr_left_10;
            PyObject *tmp_mult_expr_right_10;
            CHECK_OBJECT(tmp_listcomp_9__contraction);
            tmp_append_list_9 = tmp_listcomp_9__contraction;
            if (par_lr == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[49]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 221;
                type_description_2 = "ooo";
                goto try_except_handler_21;
            }

            tmp_mult_expr_left_10 = par_lr;
            CHECK_OBJECT(outline_8_var_rect);
            tmp_mult_expr_right_10 = outline_8_var_rect;
            tmp_truediv_expr_left_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_10, tmp_mult_expr_right_10);
            if (tmp_truediv_expr_left_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_2 = "ooo";
                goto try_except_handler_21;
            }
            CHECK_OBJECT(outline_8_var_bc);
            tmp_truediv_expr_right_5 = outline_8_var_bc;
            tmp_mult_expr_left_9 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_5, tmp_truediv_expr_right_5);
            Py_DECREF(tmp_truediv_expr_left_5);
            if (tmp_mult_expr_left_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_2 = "ooo";
                goto try_except_handler_21;
            }
            tmp_mult_expr_right_9 = mod_consts[48];
            tmp_append_value_9 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_9, tmp_mult_expr_right_9);
            Py_DECREF(tmp_mult_expr_left_9);
            if (tmp_append_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_2 = "ooo";
                goto try_except_handler_21;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_9, tmp_append_value_9);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_2 = "ooo";
                goto try_except_handler_21;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_2 = "ooo";
            goto try_except_handler_21;
        }
        goto loop_start_9;
        loop_end_9:;
        CHECK_OBJECT(tmp_listcomp_9__contraction);
        tmp_assign_source_48 = tmp_listcomp_9__contraction;
        Py_INCREF(tmp_assign_source_48);
        goto try_return_handler_21;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        CHECK_OBJECT(tmp_listcomp_9__$0);
        Py_DECREF(tmp_listcomp_9__$0);
        tmp_listcomp_9__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_9__contraction);
        Py_DECREF(tmp_listcomp_9__contraction);
        tmp_listcomp_9__contraction = NULL;
        Py_XDECREF(tmp_listcomp_9__iter_value_0);
        tmp_listcomp_9__iter_value_0 = NULL;
        goto frame_return_exit_9;
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

        CHECK_OBJECT(tmp_listcomp_9__$0);
        Py_DECREF(tmp_listcomp_9__$0);
        tmp_listcomp_9__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_9__contraction);
        Py_DECREF(tmp_listcomp_9__contraction);
        tmp_listcomp_9__contraction = NULL;
        Py_XDECREF(tmp_listcomp_9__iter_value_0);
        tmp_listcomp_9__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto frame_exception_exit_10;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_9;
        frame_return_exit_9:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_20;
        frame_exception_exit_10:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b8c8667f1d555bdee90aac95fd358f70_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b8c8667f1d555bdee90aac95fd358f70_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b8c8667f1d555bdee90aac95fd358f70_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b8c8667f1d555bdee90aac95fd358f70_10,
            type_description_2,
            outline_8_var_rect,
            outline_8_var_bc,
            par_lr
        );


        // Release cached frame if used for exception.
        if (frame_b8c8667f1d555bdee90aac95fd358f70_10 == cache_frame_b8c8667f1d555bdee90aac95fd358f70_10) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_b8c8667f1d555bdee90aac95fd358f70_10);
            cache_frame_b8c8667f1d555bdee90aac95fd358f70_10 = NULL;
        }

        assertFrameObject(frame_b8c8667f1d555bdee90aac95fd358f70_10);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_9;
        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
        skip_nested_handling_9:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        Py_XDECREF(outline_8_var_rect);
        outline_8_var_rect = NULL;
        Py_XDECREF(outline_8_var_bc);
        outline_8_var_bc = NULL;
        goto outline_result_9;
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

        Py_XDECREF(outline_8_var_rect);
        outline_8_var_rect = NULL;
        Py_XDECREF(outline_8_var_bc);
        outline_8_var_bc = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 221;
        goto frame_exception_exit_1;
        outline_result_9:;
        {
            PyObject *old = var_step_size;
            assert(old != NULL);
            var_step_size = tmp_assign_source_48;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[50]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_params == NULL) {
            Py_DECREF(tmp_called_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 222;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_22 = par_params;
        CHECK_OBJECT(par_exp_avg);
        tmp_args_element_value_23 = par_exp_avg;
        CHECK_OBJECT(var_denom);
        tmp_args_element_value_24 = var_denom;
        CHECK_OBJECT(var_step_size);
        tmp_args_element_value_25 = var_step_size;
        frame_ba10557991628490cf0283edeac7ff54->m_frame.f_lineno = 222;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_called_value_11);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_10;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ba10557991628490cf0283edeac7ff54, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ba10557991628490cf0283edeac7ff54->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ba10557991628490cf0283edeac7ff54, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ba10557991628490cf0283edeac7ff54,
        type_description_1,
        par_params,
        par_grads,
        par_exp_avg,
        par_exp_avg_sq,
        par_states,
        par_beta1,
        par_beta2,
        par_lr,
        par_weight_decay,
        par_eps,
        var_rho_inf,
        var_rho_t_list,
        var_bias_correction1,
        var_bias_correction2,
        var_rect,
        var_unrectified,
        var_exp_avg_sq_sqrt,
        var_bias_correction_sqrt,
        var_denom,
        var_step_size
    );


    // Release cached frame if used for exception.
    if (frame_ba10557991628490cf0283edeac7ff54 == cache_frame_ba10557991628490cf0283edeac7ff54) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ba10557991628490cf0283edeac7ff54);
        cache_frame_ba10557991628490cf0283edeac7ff54 = NULL;
    }

    assertFrameObject(frame_ba10557991628490cf0283edeac7ff54);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_10:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_rho_inf);
    var_rho_inf = NULL;
    CHECK_OBJECT(var_rho_t_list);
    Py_DECREF(var_rho_t_list);
    var_rho_t_list = NULL;
    CHECK_OBJECT(var_bias_correction1);
    Py_DECREF(var_bias_correction1);
    var_bias_correction1 = NULL;
    CHECK_OBJECT(var_bias_correction2);
    Py_DECREF(var_bias_correction2);
    var_bias_correction2 = NULL;
    CHECK_OBJECT(var_rect);
    Py_DECREF(var_rect);
    var_rect = NULL;
    CHECK_OBJECT(var_unrectified);
    Py_DECREF(var_unrectified);
    var_unrectified = NULL;
    CHECK_OBJECT(var_exp_avg_sq_sqrt);
    Py_DECREF(var_exp_avg_sq_sqrt);
    var_exp_avg_sq_sqrt = NULL;
    CHECK_OBJECT(var_bias_correction_sqrt);
    Py_DECREF(var_bias_correction_sqrt);
    var_bias_correction_sqrt = NULL;
    CHECK_OBJECT(var_denom);
    Py_DECREF(var_denom);
    var_denom = NULL;
    CHECK_OBJECT(var_step_size);
    Py_DECREF(var_step_size);
    var_step_size = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_rho_inf);
    var_rho_inf = NULL;
    Py_XDECREF(var_rho_t_list);
    var_rho_t_list = NULL;
    Py_XDECREF(var_bias_correction1);
    var_bias_correction1 = NULL;
    Py_XDECREF(var_bias_correction2);
    var_bias_correction2 = NULL;
    Py_XDECREF(var_rect);
    var_rect = NULL;
    Py_XDECREF(var_unrectified);
    var_unrectified = NULL;
    Py_XDECREF(var_exp_avg_sq_sqrt);
    var_exp_avg_sq_sqrt = NULL;
    Py_XDECREF(var_bias_correction_sqrt);
    var_bias_correction_sqrt = NULL;
    Py_XDECREF(var_denom);
    var_denom = NULL;
    Py_XDECREF(var_step_size);
    var_step_size = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_grads);
    Py_DECREF(par_grads);
    CHECK_OBJECT(par_exp_avg);
    Py_DECREF(par_exp_avg);
    CHECK_OBJECT(par_exp_avg_sq);
    Py_DECREF(par_exp_avg_sq);
    CHECK_OBJECT(par_states);
    Py_DECREF(par_states);
    CHECK_OBJECT(par_beta1);
    Py_DECREF(par_beta1);
    CHECK_OBJECT(par_beta2);
    Py_DECREF(par_beta2);
    CHECK_OBJECT(par_lr);
    Py_DECREF(par_lr);
    CHECK_OBJECT(par_weight_decay);
    Py_DECREF(par_weight_decay);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_grads);
    Py_DECREF(par_grads);
    CHECK_OBJECT(par_exp_avg);
    Py_DECREF(par_exp_avg);
    CHECK_OBJECT(par_exp_avg_sq);
    Py_DECREF(par_exp_avg_sq);
    CHECK_OBJECT(par_states);
    Py_DECREF(par_states);
    CHECK_OBJECT(par_beta1);
    Py_DECREF(par_beta1);
    CHECK_OBJECT(par_beta2);
    Py_DECREF(par_beta2);
    CHECK_OBJECT(par_lr);
    Py_DECREF(par_lr);
    CHECK_OBJECT(par_weight_decay);
    Py_DECREF(par_weight_decay);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$optim$_multi_tensor$_functional$$$function__7_nadam(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_params = python_pars[0];
    PyObject *par_grads = python_pars[1];
    PyObject *par_exp_avg = python_pars[2];
    PyObject *par_exp_avg_sq = python_pars[3];
    PyObject *par_mu_products = python_pars[4];
    PyObject *par_states = python_pars[5];
    PyObject *par_beta1 = python_pars[6];
    PyObject *par_beta2 = python_pars[7];
    PyObject *par_lr = python_pars[8];
    PyObject *par_weight_decay = python_pars[9];
    PyObject *par_momentum_decay = python_pars[10];
    PyObject *par_eps = python_pars[11];
    PyObject *var_bias_correction1 = NULL;
    PyObject *var_bias_correction2 = NULL;
    PyObject *var_mus = NULL;
    PyObject *var_mu_nexts = NULL;
    PyObject *var_exp_avg_sq_sqrt = NULL;
    PyObject *var_bias_correction_sqrt = NULL;
    PyObject *var_denom = NULL;
    PyObject *var_step_size_grads = NULL;
    PyObject *var_step_size_expavg = NULL;
    PyObject *outline_0_var_state = NULL;
    PyObject *outline_1_var_state = NULL;
    PyObject *outline_2_var_state = NULL;
    PyObject *outline_3_var_state = NULL;
    PyObject *outline_4_var_bc = NULL;
    PyObject *outline_5_var_mu_product = NULL;
    PyObject *outline_5_var_mu = NULL;
    PyObject *outline_6_var_mu_product = NULL;
    PyObject *outline_6_var_mu_next = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__source_iter = NULL;
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
    PyObject *tmp_listcomp_7__$0 = NULL;
    PyObject *tmp_listcomp_7__contraction = NULL;
    PyObject *tmp_listcomp_7__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_4ba5c1f06d2d21446b65771f28106532;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_e80548991e758e132972f773b19eeae0_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_e80548991e758e132972f773b19eeae0_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_9ba8206da6cbbdfa716591d8c85a82b9_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_9ba8206da6cbbdfa716591d8c85a82b9_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_FrameObject *frame_d85093012338e508e720d9f8bb6c22f9_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_d85093012338e508e720d9f8bb6c22f9_4 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_FrameObject *frame_723d19ab030538327d87fa9104df40b5_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_723d19ab030538327d87fa9104df40b5_5 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_FrameObject *frame_f44a79116667f140f7f8629df00fb469_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    static struct Nuitka_FrameObject *cache_frame_f44a79116667f140f7f8629df00fb469_6 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    struct Nuitka_FrameObject *frame_0cc2ab3f2f61ec9914a7437f736610e5_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *tmp_iterator_attempt;
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
    static struct Nuitka_FrameObject *cache_frame_0cc2ab3f2f61ec9914a7437f736610e5_7 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    struct Nuitka_FrameObject *frame_be465eb929d220cf4a4298e4cd590469_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_be465eb929d220cf4a4298e4cd590469_8 = NULL;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    static struct Nuitka_FrameObject *cache_frame_4ba5c1f06d2d21446b65771f28106532 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4ba5c1f06d2d21446b65771f28106532)) {
        Py_XDECREF(cache_frame_4ba5c1f06d2d21446b65771f28106532);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4ba5c1f06d2d21446b65771f28106532 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4ba5c1f06d2d21446b65771f28106532 = MAKE_FUNCTION_FRAME(codeobj_4ba5c1f06d2d21446b65771f28106532, module_torch$optim$_multi_tensor$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4ba5c1f06d2d21446b65771f28106532->m_type_description == NULL);
    frame_4ba5c1f06d2d21446b65771f28106532 = cache_frame_4ba5c1f06d2d21446b65771f28106532;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4ba5c1f06d2d21446b65771f28106532);
    assert(Py_REFCNT(frame_4ba5c1f06d2d21446b65771f28106532) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_states);
            tmp_iter_arg_1 = par_states;
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_1 = "ooooooooooooooooooooo";
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
        if (isFrameUnusable(cache_frame_e80548991e758e132972f773b19eeae0_2)) {
            Py_XDECREF(cache_frame_e80548991e758e132972f773b19eeae0_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_e80548991e758e132972f773b19eeae0_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_e80548991e758e132972f773b19eeae0_2 = MAKE_FUNCTION_FRAME(codeobj_e80548991e758e132972f773b19eeae0, module_torch$optim$_multi_tensor$_functional, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_e80548991e758e132972f773b19eeae0_2->m_type_description == NULL);
        frame_e80548991e758e132972f773b19eeae0_2 = cache_frame_e80548991e758e132972f773b19eeae0_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_e80548991e758e132972f773b19eeae0_2);
        assert(Py_REFCNT(frame_e80548991e758e132972f773b19eeae0_2) == 2);

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
                    type_description_2 = "oo";
                    exception_lineno = 243;
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
                PyObject *old = outline_0_var_state;
                outline_0_var_state = tmp_assign_source_5;
                Py_INCREF(outline_0_var_state);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_sub_expr_left_1;
            PyObject *tmp_sub_expr_right_1;
            PyObject *tmp_pow_expr_left_1;
            PyObject *tmp_pow_expr_right_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_subscript_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_sub_expr_left_1 = mod_consts[10];
            if (par_beta1 == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[46]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 243;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }

            tmp_pow_expr_left_1 = par_beta1;
            CHECK_OBJECT(outline_0_var_state);
            tmp_expression_value_1 = outline_0_var_state;
            tmp_subscript_value_1 = mod_consts[47];
            tmp_pow_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
            if (tmp_pow_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_sub_expr_right_1 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
            Py_DECREF(tmp_pow_expr_right_1);
            if (tmp_sub_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_append_value_1 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
            Py_DECREF(tmp_sub_expr_right_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_1);
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
        goto frame_return_exit_1;
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
        frame_return_exit_1:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e80548991e758e132972f773b19eeae0_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e80548991e758e132972f773b19eeae0_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e80548991e758e132972f773b19eeae0_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e80548991e758e132972f773b19eeae0_2,
            type_description_2,
            outline_0_var_state,
            par_beta1
        );


        // Release cached frame if used for exception.
        if (frame_e80548991e758e132972f773b19eeae0_2 == cache_frame_e80548991e758e132972f773b19eeae0_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_e80548991e758e132972f773b19eeae0_2);
            cache_frame_e80548991e758e132972f773b19eeae0_2 = NULL;
        }

        assertFrameObject(frame_e80548991e758e132972f773b19eeae0_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_state);
        outline_0_var_state = NULL;
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

        Py_XDECREF(outline_0_var_state);
        outline_0_var_state = NULL;
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
        exception_lineno = 243;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_bias_correction1 == NULL);
        var_bias_correction1 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_6;
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(par_states);
            tmp_iter_arg_2 = par_states;
            tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_8;
        }
        if (isFrameUnusable(cache_frame_9ba8206da6cbbdfa716591d8c85a82b9_3)) {
            Py_XDECREF(cache_frame_9ba8206da6cbbdfa716591d8c85a82b9_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_9ba8206da6cbbdfa716591d8c85a82b9_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_9ba8206da6cbbdfa716591d8c85a82b9_3 = MAKE_FUNCTION_FRAME(codeobj_9ba8206da6cbbdfa716591d8c85a82b9, module_torch$optim$_multi_tensor$_functional, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_9ba8206da6cbbdfa716591d8c85a82b9_3->m_type_description == NULL);
        frame_9ba8206da6cbbdfa716591d8c85a82b9_3 = cache_frame_9ba8206da6cbbdfa716591d8c85a82b9_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_9ba8206da6cbbdfa716591d8c85a82b9_3);
        assert(Py_REFCNT(frame_9ba8206da6cbbdfa716591d8c85a82b9_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_9 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 244;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_9;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_10 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_state;
                outline_1_var_state = tmp_assign_source_10;
                Py_INCREF(outline_1_var_state);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_sub_expr_left_2;
            PyObject *tmp_sub_expr_right_2;
            PyObject *tmp_pow_expr_left_2;
            PyObject *tmp_pow_expr_right_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            tmp_sub_expr_left_2 = mod_consts[10];
            if (par_beta2 == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[69]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 244;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }

            tmp_pow_expr_left_2 = par_beta2;
            CHECK_OBJECT(outline_1_var_state);
            tmp_expression_value_2 = outline_1_var_state;
            tmp_subscript_value_2 = mod_consts[47];
            tmp_pow_expr_right_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
            if (tmp_pow_expr_right_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
            tmp_sub_expr_right_2 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_2, tmp_pow_expr_right_2);
            Py_DECREF(tmp_pow_expr_right_2);
            if (tmp_sub_expr_right_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
            tmp_append_value_2 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
            Py_DECREF(tmp_sub_expr_right_2);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_2 = "oo";
            goto try_except_handler_5;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_6 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_6);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
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
        try_except_handler_5:;
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

        goto try_return_handler_4;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_9ba8206da6cbbdfa716591d8c85a82b9_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_9ba8206da6cbbdfa716591d8c85a82b9_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_9ba8206da6cbbdfa716591d8c85a82b9_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_9ba8206da6cbbdfa716591d8c85a82b9_3,
            type_description_2,
            outline_1_var_state,
            par_beta2
        );


        // Release cached frame if used for exception.
        if (frame_9ba8206da6cbbdfa716591d8c85a82b9_3 == cache_frame_9ba8206da6cbbdfa716591d8c85a82b9_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_9ba8206da6cbbdfa716591d8c85a82b9_3);
            cache_frame_9ba8206da6cbbdfa716591d8c85a82b9_3 = NULL;
        }

        assertFrameObject(frame_9ba8206da6cbbdfa716591d8c85a82b9_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_4;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_1_var_state);
        outline_1_var_state = NULL;
        goto outline_result_2;
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

        Py_XDECREF(outline_1_var_state);
        outline_1_var_state = NULL;
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
        exception_lineno = 244;
        goto frame_exception_exit_1;
        outline_result_2:;
        assert(var_bias_correction2 == NULL);
        var_bias_correction2 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_11;
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(par_states);
            tmp_iter_arg_3 = par_states;
            tmp_assign_source_12 = MAKE_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            assert(tmp_listcomp_3__$0 == NULL);
            tmp_listcomp_3__$0 = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_3__contraction == NULL);
            tmp_listcomp_3__contraction = tmp_assign_source_13;
        }
        if (isFrameUnusable(cache_frame_d85093012338e508e720d9f8bb6c22f9_4)) {
            Py_XDECREF(cache_frame_d85093012338e508e720d9f8bb6c22f9_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_d85093012338e508e720d9f8bb6c22f9_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_d85093012338e508e720d9f8bb6c22f9_4 = MAKE_FUNCTION_FRAME(codeobj_d85093012338e508e720d9f8bb6c22f9, module_torch$optim$_multi_tensor$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_d85093012338e508e720d9f8bb6c22f9_4->m_type_description == NULL);
        frame_d85093012338e508e720d9f8bb6c22f9_4 = cache_frame_d85093012338e508e720d9f8bb6c22f9_4;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_d85093012338e508e720d9f8bb6c22f9_4);
        assert(Py_REFCNT(frame_d85093012338e508e720d9f8bb6c22f9_4) == 2);

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT(tmp_listcomp_3__$0);
            tmp_next_source_3 = tmp_listcomp_3__$0;
            tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_14 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 245;
                    goto try_except_handler_7;
                }
            }

            {
                PyObject *old = tmp_listcomp_3__iter_value_0;
                tmp_listcomp_3__iter_value_0 = tmp_assign_source_14;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
            tmp_assign_source_15 = tmp_listcomp_3__iter_value_0;
            {
                PyObject *old = outline_2_var_state;
                outline_2_var_state = tmp_assign_source_15;
                Py_INCREF(outline_2_var_state);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            PyObject *tmp_mult_expr_left_1;
            PyObject *tmp_mult_expr_right_1;
            PyObject *tmp_sub_expr_left_3;
            PyObject *tmp_sub_expr_right_3;
            PyObject *tmp_mult_expr_left_2;
            PyObject *tmp_mult_expr_right_2;
            PyObject *tmp_pow_expr_left_3;
            PyObject *tmp_pow_expr_right_3;
            PyObject *tmp_mult_expr_left_3;
            PyObject *tmp_mult_expr_right_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_3;
            CHECK_OBJECT(tmp_listcomp_3__contraction);
            tmp_append_list_3 = tmp_listcomp_3__contraction;
            if (par_beta1 == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[46]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 245;
                type_description_2 = "ooo";
                goto try_except_handler_7;
            }

            tmp_mult_expr_left_1 = par_beta1;
            tmp_sub_expr_left_3 = mod_consts[73];
            tmp_mult_expr_left_2 = mod_consts[78];
            tmp_pow_expr_left_3 = mod_consts[79];
            CHECK_OBJECT(outline_2_var_state);
            tmp_expression_value_3 = outline_2_var_state;
            tmp_subscript_value_3 = mod_consts[47];
            tmp_mult_expr_left_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
            if (tmp_mult_expr_left_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "ooo";
                goto try_except_handler_7;
            }
            if (par_momentum_decay == NULL) {
                Py_DECREF(tmp_mult_expr_left_3);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[80]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 245;
                type_description_2 = "ooo";
                goto try_except_handler_7;
            }

            tmp_mult_expr_right_3 = par_momentum_decay;
            tmp_pow_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
            Py_DECREF(tmp_mult_expr_left_3);
            if (tmp_pow_expr_right_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "ooo";
                goto try_except_handler_7;
            }
            tmp_mult_expr_right_2 = BINARY_OPERATION_POW_OBJECT_FLOAT_OBJECT(tmp_pow_expr_left_3, tmp_pow_expr_right_3);
            Py_DECREF(tmp_pow_expr_right_3);
            if (tmp_mult_expr_right_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "ooo";
                goto try_except_handler_7;
            }
            tmp_sub_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
            Py_DECREF(tmp_mult_expr_right_2);
            if (tmp_sub_expr_right_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "ooo";
                goto try_except_handler_7;
            }
            tmp_mult_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_FLOAT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
            Py_DECREF(tmp_sub_expr_right_3);
            if (tmp_mult_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "ooo";
                goto try_except_handler_7;
            }
            tmp_append_value_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
            Py_DECREF(tmp_mult_expr_right_1);
            if (tmp_append_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "ooo";
                goto try_except_handler_7;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_3, tmp_append_value_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "ooo";
                goto try_except_handler_7;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_2 = "ooo";
            goto try_except_handler_7;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        tmp_assign_source_11 = tmp_listcomp_3__contraction;
        Py_INCREF(tmp_assign_source_11);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
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
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
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
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_4;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_return_exit_3:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_6;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d85093012338e508e720d9f8bb6c22f9_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d85093012338e508e720d9f8bb6c22f9_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d85093012338e508e720d9f8bb6c22f9_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d85093012338e508e720d9f8bb6c22f9_4,
            type_description_2,
            outline_2_var_state,
            par_beta1,
            par_momentum_decay
        );


        // Release cached frame if used for exception.
        if (frame_d85093012338e508e720d9f8bb6c22f9_4 == cache_frame_d85093012338e508e720d9f8bb6c22f9_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_d85093012338e508e720d9f8bb6c22f9_4);
            cache_frame_d85093012338e508e720d9f8bb6c22f9_4 = NULL;
        }

        assertFrameObject(frame_d85093012338e508e720d9f8bb6c22f9_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_6;
        skip_nested_handling_3:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_XDECREF(outline_2_var_state);
        outline_2_var_state = NULL;
        goto outline_result_3;
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

        Py_XDECREF(outline_2_var_state);
        outline_2_var_state = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 245;
        goto frame_exception_exit_1;
        outline_result_3:;
        assert(var_mus == NULL);
        var_mus = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_16;
        // Tried code:
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT(par_states);
            tmp_iter_arg_4 = par_states;
            tmp_assign_source_17 = MAKE_ITERATOR(tmp_iter_arg_4);
            if (tmp_assign_source_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_8;
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
        if (isFrameUnusable(cache_frame_723d19ab030538327d87fa9104df40b5_5)) {
            Py_XDECREF(cache_frame_723d19ab030538327d87fa9104df40b5_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_723d19ab030538327d87fa9104df40b5_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_723d19ab030538327d87fa9104df40b5_5 = MAKE_FUNCTION_FRAME(codeobj_723d19ab030538327d87fa9104df40b5, module_torch$optim$_multi_tensor$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_723d19ab030538327d87fa9104df40b5_5->m_type_description == NULL);
        frame_723d19ab030538327d87fa9104df40b5_5 = cache_frame_723d19ab030538327d87fa9104df40b5_5;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_723d19ab030538327d87fa9104df40b5_5);
        assert(Py_REFCNT(frame_723d19ab030538327d87fa9104df40b5_5) == 2);

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
                    type_description_2 = "ooo";
                    exception_lineno = 246;
                    goto try_except_handler_9;
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
                PyObject *old = outline_3_var_state;
                outline_3_var_state = tmp_assign_source_20;
                Py_INCREF(outline_3_var_state);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_4;
            PyObject *tmp_append_value_4;
            PyObject *tmp_mult_expr_left_4;
            PyObject *tmp_mult_expr_right_4;
            PyObject *tmp_sub_expr_left_4;
            PyObject *tmp_sub_expr_right_4;
            PyObject *tmp_mult_expr_left_5;
            PyObject *tmp_mult_expr_right_5;
            PyObject *tmp_pow_expr_left_4;
            PyObject *tmp_pow_expr_right_4;
            PyObject *tmp_mult_expr_left_6;
            PyObject *tmp_mult_expr_right_6;
            PyObject *tmp_add_expr_left_1;
            PyObject *tmp_add_expr_right_1;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_4;
            CHECK_OBJECT(tmp_listcomp_4__contraction);
            tmp_append_list_4 = tmp_listcomp_4__contraction;
            if (par_beta1 == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[46]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 246;
                type_description_2 = "ooo";
                goto try_except_handler_9;
            }

            tmp_mult_expr_left_4 = par_beta1;
            tmp_sub_expr_left_4 = mod_consts[73];
            tmp_mult_expr_left_5 = mod_consts[78];
            tmp_pow_expr_left_4 = mod_consts[79];
            CHECK_OBJECT(outline_3_var_state);
            tmp_expression_value_4 = outline_3_var_state;
            tmp_subscript_value_4 = mod_consts[47];
            tmp_add_expr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
            if (tmp_add_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_2 = "ooo";
                goto try_except_handler_9;
            }
            tmp_add_expr_right_1 = mod_consts[10];
            tmp_mult_expr_left_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
            Py_DECREF(tmp_add_expr_left_1);
            if (tmp_mult_expr_left_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_2 = "ooo";
                goto try_except_handler_9;
            }
            if (par_momentum_decay == NULL) {
                Py_DECREF(tmp_mult_expr_left_6);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[80]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 246;
                type_description_2 = "ooo";
                goto try_except_handler_9;
            }

            tmp_mult_expr_right_6 = par_momentum_decay;
            tmp_pow_expr_right_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
            Py_DECREF(tmp_mult_expr_left_6);
            if (tmp_pow_expr_right_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_2 = "ooo";
                goto try_except_handler_9;
            }
            tmp_mult_expr_right_5 = BINARY_OPERATION_POW_OBJECT_FLOAT_OBJECT(tmp_pow_expr_left_4, tmp_pow_expr_right_4);
            Py_DECREF(tmp_pow_expr_right_4);
            if (tmp_mult_expr_right_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_2 = "ooo";
                goto try_except_handler_9;
            }
            tmp_sub_expr_right_4 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
            Py_DECREF(tmp_mult_expr_right_5);
            if (tmp_sub_expr_right_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_2 = "ooo";
                goto try_except_handler_9;
            }
            tmp_mult_expr_right_4 = BINARY_OPERATION_SUB_OBJECT_FLOAT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
            Py_DECREF(tmp_sub_expr_right_4);
            if (tmp_mult_expr_right_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_2 = "ooo";
                goto try_except_handler_9;
            }
            tmp_append_value_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
            Py_DECREF(tmp_mult_expr_right_4);
            if (tmp_append_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_2 = "ooo";
                goto try_except_handler_9;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_4, tmp_append_value_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_2 = "ooo";
                goto try_except_handler_9;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_2 = "ooo";
            goto try_except_handler_9;
        }
        goto loop_start_4;
        loop_end_4:;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        tmp_assign_source_16 = tmp_listcomp_4__contraction;
        Py_INCREF(tmp_assign_source_16);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
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
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
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
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto frame_exception_exit_5;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_return_exit_4:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_8;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_723d19ab030538327d87fa9104df40b5_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_723d19ab030538327d87fa9104df40b5_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_723d19ab030538327d87fa9104df40b5_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_723d19ab030538327d87fa9104df40b5_5,
            type_description_2,
            outline_3_var_state,
            par_beta1,
            par_momentum_decay
        );


        // Release cached frame if used for exception.
        if (frame_723d19ab030538327d87fa9104df40b5_5 == cache_frame_723d19ab030538327d87fa9104df40b5_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_723d19ab030538327d87fa9104df40b5_5);
            cache_frame_723d19ab030538327d87fa9104df40b5_5 = NULL;
        }

        assertFrameObject(frame_723d19ab030538327d87fa9104df40b5_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_8;
        skip_nested_handling_4:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_XDECREF(outline_3_var_state);
        outline_3_var_state = NULL;
        goto outline_result_4;
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

        Py_XDECREF(outline_3_var_state);
        outline_3_var_state = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 246;
        goto frame_exception_exit_1;
        outline_result_4:;
        assert(var_mu_nexts == NULL);
        var_mu_nexts = tmp_assign_source_16;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_weight_decay);
        tmp_cmp_expr_left_1 = par_weight_decay;
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooooooooooooooooooo";
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
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[8]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_grads);
        tmp_kw_call_arg_value_0_1 = par_grads;
        CHECK_OBJECT(par_params);
        tmp_kw_call_arg_value_1_1 = par_params;
        CHECK_OBJECT(par_weight_decay);
        tmp_kw_call_dict_value_0_1 = par_weight_decay;
        frame_4ba5c1f06d2d21446b65771f28106532->m_frame.f_lineno = 249;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[9]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[36]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_exp_avg);
        tmp_args_element_value_1 = par_exp_avg;
        if (par_beta1 == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 252;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = par_beta1;
        frame_4ba5c1f06d2d21446b65771f28106532->m_frame.f_lineno = 252;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_sub_expr_left_5;
        PyObject *tmp_sub_expr_right_5;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[8]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_exp_avg);
        tmp_kw_call_arg_value_0_2 = par_exp_avg;
        if (par_grads == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 253;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_1_2 = par_grads;
        tmp_sub_expr_left_5 = mod_consts[10];
        if (par_beta1 == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 253;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_right_5 = par_beta1;
        tmp_kw_call_dict_value_0_2 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 253;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4ba5c1f06d2d21446b65771f28106532->m_frame.f_lineno = 253;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[9]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[36]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_exp_avg_sq);
        tmp_args_element_value_3 = par_exp_avg_sq;
        if (par_beta2 == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[69]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 255;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = par_beta2;
        frame_4ba5c1f06d2d21446b65771f28106532->m_frame.f_lineno = 255;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_sub_expr_left_6;
        PyObject *tmp_sub_expr_right_6;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[28]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_exp_avg_sq);
        tmp_args_element_value_5 = par_exp_avg_sq;
        if (par_grads == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 256;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = par_grads;
        if (par_grads == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 256;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_7 = par_grads;
        tmp_sub_expr_left_6 = mod_consts[10];
        if (par_beta2 == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[69]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 256;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_right_6 = par_beta2;
        tmp_args_element_value_8 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 256;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4ba5c1f06d2d21446b65771f28106532->m_frame.f_lineno = 256;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_9;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_exp_avg_sq);
        tmp_args_element_value_9 = par_exp_avg_sq;
        frame_4ba5c1f06d2d21446b65771f28106532->m_frame.f_lineno = 258;
        tmp_assign_source_21 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[31], tmp_args_element_value_9);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_exp_avg_sq_sqrt == NULL);
        var_exp_avg_sq_sqrt = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        // Tried code:
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_iter_arg_5;
            CHECK_OBJECT(var_bias_correction2);
            tmp_iter_arg_5 = var_bias_correction2;
            tmp_assign_source_23 = MAKE_ITERATOR(tmp_iter_arg_5);
            if (tmp_assign_source_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_10;
            }
            assert(tmp_listcomp_5__$0 == NULL);
            tmp_listcomp_5__$0 = tmp_assign_source_23;
        }
        {
            PyObject *tmp_assign_source_24;
            tmp_assign_source_24 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_5__contraction == NULL);
            tmp_listcomp_5__contraction = tmp_assign_source_24;
        }
        if (isFrameUnusable(cache_frame_f44a79116667f140f7f8629df00fb469_6)) {
            Py_XDECREF(cache_frame_f44a79116667f140f7f8629df00fb469_6);

#if _DEBUG_REFCOUNTS
            if (cache_frame_f44a79116667f140f7f8629df00fb469_6 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_f44a79116667f140f7f8629df00fb469_6 = MAKE_FUNCTION_FRAME(codeobj_f44a79116667f140f7f8629df00fb469, module_torch$optim$_multi_tensor$_functional, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_f44a79116667f140f7f8629df00fb469_6->m_type_description == NULL);
        frame_f44a79116667f140f7f8629df00fb469_6 = cache_frame_f44a79116667f140f7f8629df00fb469_6;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_f44a79116667f140f7f8629df00fb469_6);
        assert(Py_REFCNT(frame_f44a79116667f140f7f8629df00fb469_6) == 2);

        // Framed code:
        // Tried code:
        loop_start_5:;
        {
            PyObject *tmp_next_source_5;
            PyObject *tmp_assign_source_25;
            CHECK_OBJECT(tmp_listcomp_5__$0);
            tmp_next_source_5 = tmp_listcomp_5__$0;
            tmp_assign_source_25 = ITERATOR_NEXT(tmp_next_source_5);
            if (tmp_assign_source_25 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_5;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 259;
                    goto try_except_handler_11;
                }
            }

            {
                PyObject *old = tmp_listcomp_5__iter_value_0;
                tmp_listcomp_5__iter_value_0 = tmp_assign_source_25;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_26;
            CHECK_OBJECT(tmp_listcomp_5__iter_value_0);
            tmp_assign_source_26 = tmp_listcomp_5__iter_value_0;
            {
                PyObject *old = outline_4_var_bc;
                outline_4_var_bc = tmp_assign_source_26;
                Py_INCREF(outline_4_var_bc);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_5;
            PyObject *tmp_append_value_5;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_10;
            CHECK_OBJECT(tmp_listcomp_5__contraction);
            tmp_append_list_5 = tmp_listcomp_5__contraction;
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[62]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            CHECK_OBJECT(outline_4_var_bc);
            tmp_args_element_value_10 = outline_4_var_bc;
            frame_f44a79116667f140f7f8629df00fb469_6->m_frame.f_lineno = 259;
            tmp_append_value_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[71], tmp_args_element_value_10);
            if (tmp_append_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_5, tmp_append_value_5);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_2 = "o";
            goto try_except_handler_11;
        }
        goto loop_start_5;
        loop_end_5:;
        CHECK_OBJECT(tmp_listcomp_5__contraction);
        tmp_assign_source_22 = tmp_listcomp_5__contraction;
        Py_INCREF(tmp_assign_source_22);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
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
        try_except_handler_11:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
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
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto frame_exception_exit_6;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_return_exit_5:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_10;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f44a79116667f140f7f8629df00fb469_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f44a79116667f140f7f8629df00fb469_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f44a79116667f140f7f8629df00fb469_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f44a79116667f140f7f8629df00fb469_6,
            type_description_2,
            outline_4_var_bc
        );


        // Release cached frame if used for exception.
        if (frame_f44a79116667f140f7f8629df00fb469_6 == cache_frame_f44a79116667f140f7f8629df00fb469_6) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_f44a79116667f140f7f8629df00fb469_6);
            cache_frame_f44a79116667f140f7f8629df00fb469_6 = NULL;
        }

        assertFrameObject(frame_f44a79116667f140f7f8629df00fb469_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_10;
        skip_nested_handling_5:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_XDECREF(outline_4_var_bc);
        outline_4_var_bc = NULL;
        goto outline_result_5;
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

        Py_XDECREF(outline_4_var_bc);
        outline_4_var_bc = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 259;
        goto frame_exception_exit_1;
        outline_result_5:;
        assert(var_bias_correction_sqrt == NULL);
        var_bias_correction_sqrt = tmp_assign_source_22;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_exp_avg_sq_sqrt);
        tmp_args_element_value_11 = var_exp_avg_sq_sqrt;
        CHECK_OBJECT(var_bias_correction_sqrt);
        tmp_args_element_value_12 = var_bias_correction_sqrt;
        frame_4ba5c1f06d2d21446b65771f28106532->m_frame.f_lineno = 260;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_6 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[54],
                call_args
            );
        }

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_exp_avg_sq_sqrt);
        tmp_args_element_value_13 = var_exp_avg_sq_sqrt;
        CHECK_OBJECT(par_eps);
        tmp_args_element_value_14 = par_eps;
        frame_4ba5c1f06d2d21446b65771f28106532->m_frame.f_lineno = 261;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assign_source_27 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_4,
                mod_consts[30],
                call_args
            );
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_denom == NULL);
        var_denom = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        // Tried code:
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_iter_arg_6;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_args_element_value_16;
            tmp_called_value_6 = (PyObject *)&PyZip_Type;
            CHECK_OBJECT(par_mu_products);
            tmp_args_element_value_15 = par_mu_products;
            CHECK_OBJECT(var_mus);
            tmp_args_element_value_16 = var_mus;
            frame_4ba5c1f06d2d21446b65771f28106532->m_frame.f_lineno = 264;
            {
                PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
                tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
            }

            if (tmp_iter_arg_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            tmp_assign_source_29 = MAKE_ITERATOR(tmp_iter_arg_6);
            Py_DECREF(tmp_iter_arg_6);
            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            assert(tmp_listcomp_6__$0 == NULL);
            tmp_listcomp_6__$0 = tmp_assign_source_29;
        }
        {
            PyObject *tmp_assign_source_30;
            tmp_assign_source_30 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_6__contraction == NULL);
            tmp_listcomp_6__contraction = tmp_assign_source_30;
        }
        if (isFrameUnusable(cache_frame_0cc2ab3f2f61ec9914a7437f736610e5_7)) {
            Py_XDECREF(cache_frame_0cc2ab3f2f61ec9914a7437f736610e5_7);

#if _DEBUG_REFCOUNTS
            if (cache_frame_0cc2ab3f2f61ec9914a7437f736610e5_7 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_0cc2ab3f2f61ec9914a7437f736610e5_7 = MAKE_FUNCTION_FRAME(codeobj_0cc2ab3f2f61ec9914a7437f736610e5, module_torch$optim$_multi_tensor$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_0cc2ab3f2f61ec9914a7437f736610e5_7->m_type_description == NULL);
        frame_0cc2ab3f2f61ec9914a7437f736610e5_7 = cache_frame_0cc2ab3f2f61ec9914a7437f736610e5_7;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_0cc2ab3f2f61ec9914a7437f736610e5_7);
        assert(Py_REFCNT(frame_0cc2ab3f2f61ec9914a7437f736610e5_7) == 2);

        // Framed code:
        // Tried code:
        loop_start_6:;
        {
            PyObject *tmp_next_source_6;
            PyObject *tmp_assign_source_31;
            CHECK_OBJECT(tmp_listcomp_6__$0);
            tmp_next_source_6 = tmp_listcomp_6__$0;
            tmp_assign_source_31 = ITERATOR_NEXT(tmp_next_source_6);
            if (tmp_assign_source_31 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_6;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 263;
                    goto try_except_handler_13;
                }
            }

            {
                PyObject *old = tmp_listcomp_6__iter_value_0;
                tmp_listcomp_6__iter_value_0 = tmp_assign_source_31;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_iter_arg_7;
            CHECK_OBJECT(tmp_listcomp_6__iter_value_0);
            tmp_iter_arg_7 = tmp_listcomp_6__iter_value_0;
            tmp_assign_source_32 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
            if (tmp_assign_source_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_2 = "ooo";
                goto try_except_handler_14;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_32;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_33 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
            if (tmp_assign_source_33 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 263;
                goto try_except_handler_15;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_33;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_34 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
            if (tmp_assign_source_34 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 263;
                goto try_except_handler_15;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_34;
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

                        type_description_2 = "ooo";
                        exception_lineno = 263;
                        goto try_except_handler_15;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[14];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "ooo";
                exception_lineno = 263;
                goto try_except_handler_15;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_14;
        // End of try:
        try_end_1:;
        goto try_end_2;
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

        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_13;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_35;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_35 = tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_5_var_mu_product;
                outline_5_var_mu_product = tmp_assign_source_35;
                Py_INCREF(outline_5_var_mu_product);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_36;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_36 = tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_5_var_mu;
                outline_5_var_mu = tmp_assign_source_36;
                Py_INCREF(outline_5_var_mu);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_append_list_6;
            PyObject *tmp_append_value_6;
            PyObject *tmp_mult_expr_left_7;
            PyObject *tmp_mult_expr_right_7;
            PyObject *tmp_truediv_expr_left_1;
            PyObject *tmp_truediv_expr_right_1;
            PyObject *tmp_mult_expr_left_8;
            PyObject *tmp_mult_expr_right_8;
            PyObject *tmp_sub_expr_left_7;
            PyObject *tmp_sub_expr_right_7;
            PyObject *tmp_sub_expr_left_8;
            PyObject *tmp_sub_expr_right_8;
            CHECK_OBJECT(tmp_listcomp_6__contraction);
            tmp_append_list_6 = tmp_listcomp_6__contraction;
            if (par_lr == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[49]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 263;
                type_description_2 = "ooo";
                goto try_except_handler_13;
            }

            tmp_mult_expr_left_8 = par_lr;
            tmp_sub_expr_left_7 = mod_consts[73];
            CHECK_OBJECT(outline_5_var_mu);
            tmp_sub_expr_right_7 = outline_5_var_mu;
            tmp_mult_expr_right_8 = BINARY_OPERATION_SUB_OBJECT_FLOAT_OBJECT(tmp_sub_expr_left_7, tmp_sub_expr_right_7);
            if (tmp_mult_expr_right_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_2 = "ooo";
                goto try_except_handler_13;
            }
            tmp_truediv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
            Py_DECREF(tmp_mult_expr_right_8);
            if (tmp_truediv_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_2 = "ooo";
                goto try_except_handler_13;
            }
            tmp_sub_expr_left_8 = mod_consts[73];
            CHECK_OBJECT(outline_5_var_mu_product);
            tmp_sub_expr_right_8 = outline_5_var_mu_product;
            tmp_truediv_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_FLOAT_OBJECT(tmp_sub_expr_left_8, tmp_sub_expr_right_8);
            if (tmp_truediv_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_truediv_expr_left_1);

                exception_lineno = 263;
                type_description_2 = "ooo";
                goto try_except_handler_13;
            }
            tmp_mult_expr_left_7 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
            Py_DECREF(tmp_truediv_expr_left_1);
            Py_DECREF(tmp_truediv_expr_right_1);
            if (tmp_mult_expr_left_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_2 = "ooo";
                goto try_except_handler_13;
            }
            tmp_mult_expr_right_7 = mod_consts[48];
            tmp_append_value_6 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
            Py_DECREF(tmp_mult_expr_left_7);
            if (tmp_append_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_2 = "ooo";
                goto try_except_handler_13;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_6, tmp_append_value_6);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_2 = "ooo";
                goto try_except_handler_13;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_2 = "ooo";
            goto try_except_handler_13;
        }
        goto loop_start_6;
        loop_end_6:;
        CHECK_OBJECT(tmp_listcomp_6__contraction);
        tmp_assign_source_28 = tmp_listcomp_6__contraction;
        Py_INCREF(tmp_assign_source_28);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
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
        try_except_handler_13:;
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

        goto try_return_handler_12;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0cc2ab3f2f61ec9914a7437f736610e5_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0cc2ab3f2f61ec9914a7437f736610e5_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0cc2ab3f2f61ec9914a7437f736610e5_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0cc2ab3f2f61ec9914a7437f736610e5_7,
            type_description_2,
            outline_5_var_mu_product,
            outline_5_var_mu,
            par_lr
        );


        // Release cached frame if used for exception.
        if (frame_0cc2ab3f2f61ec9914a7437f736610e5_7 == cache_frame_0cc2ab3f2f61ec9914a7437f736610e5_7) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_0cc2ab3f2f61ec9914a7437f736610e5_7);
            cache_frame_0cc2ab3f2f61ec9914a7437f736610e5_7 = NULL;
        }

        assertFrameObject(frame_0cc2ab3f2f61ec9914a7437f736610e5_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_12;
        skip_nested_handling_6:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_XDECREF(outline_5_var_mu_product);
        outline_5_var_mu_product = NULL;
        Py_XDECREF(outline_5_var_mu);
        outline_5_var_mu = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_5_var_mu_product);
        outline_5_var_mu_product = NULL;
        Py_XDECREF(outline_5_var_mu);
        outline_5_var_mu = NULL;
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
        exception_lineno = 263;
        goto frame_exception_exit_1;
        outline_result_6:;
        assert(var_step_size_grads == NULL);
        var_step_size_grads = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_37;
        // Tried code:
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_iter_arg_8;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_args_element_value_18;
            tmp_called_value_7 = (PyObject *)&PyZip_Type;
            CHECK_OBJECT(par_mu_products);
            tmp_args_element_value_17 = par_mu_products;
            CHECK_OBJECT(var_mu_nexts);
            tmp_args_element_value_18 = var_mu_nexts;
            frame_4ba5c1f06d2d21446b65771f28106532->m_frame.f_lineno = 266;
            {
                PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
                tmp_iter_arg_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
            }

            if (tmp_iter_arg_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            tmp_assign_source_38 = MAKE_ITERATOR(tmp_iter_arg_8);
            Py_DECREF(tmp_iter_arg_8);
            if (tmp_assign_source_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;
                type_description_1 = "ooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            assert(tmp_listcomp_7__$0 == NULL);
            tmp_listcomp_7__$0 = tmp_assign_source_38;
        }
        {
            PyObject *tmp_assign_source_39;
            tmp_assign_source_39 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_7__contraction == NULL);
            tmp_listcomp_7__contraction = tmp_assign_source_39;
        }
        if (isFrameUnusable(cache_frame_be465eb929d220cf4a4298e4cd590469_8)) {
            Py_XDECREF(cache_frame_be465eb929d220cf4a4298e4cd590469_8);

#if _DEBUG_REFCOUNTS
            if (cache_frame_be465eb929d220cf4a4298e4cd590469_8 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_be465eb929d220cf4a4298e4cd590469_8 = MAKE_FUNCTION_FRAME(codeobj_be465eb929d220cf4a4298e4cd590469, module_torch$optim$_multi_tensor$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_be465eb929d220cf4a4298e4cd590469_8->m_type_description == NULL);
        frame_be465eb929d220cf4a4298e4cd590469_8 = cache_frame_be465eb929d220cf4a4298e4cd590469_8;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_be465eb929d220cf4a4298e4cd590469_8);
        assert(Py_REFCNT(frame_be465eb929d220cf4a4298e4cd590469_8) == 2);

        // Framed code:
        // Tried code:
        loop_start_7:;
        {
            PyObject *tmp_next_source_7;
            PyObject *tmp_assign_source_40;
            CHECK_OBJECT(tmp_listcomp_7__$0);
            tmp_next_source_7 = tmp_listcomp_7__$0;
            tmp_assign_source_40 = ITERATOR_NEXT(tmp_next_source_7);
            if (tmp_assign_source_40 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_7;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 265;
                    goto try_except_handler_17;
                }
            }

            {
                PyObject *old = tmp_listcomp_7__iter_value_0;
                tmp_listcomp_7__iter_value_0 = tmp_assign_source_40;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_iter_arg_9;
            CHECK_OBJECT(tmp_listcomp_7__iter_value_0);
            tmp_iter_arg_9 = tmp_listcomp_7__iter_value_0;
            tmp_assign_source_41 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_9);
            if (tmp_assign_source_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;
                type_description_2 = "ooo";
                goto try_except_handler_18;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__source_iter;
                tmp_listcomp$tuple_unpack_2__source_iter = tmp_assign_source_41;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_unpack_3 = tmp_listcomp$tuple_unpack_2__source_iter;
            tmp_assign_source_42 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
            if (tmp_assign_source_42 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 265;
                goto try_except_handler_19;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__element_1;
                tmp_listcomp$tuple_unpack_2__element_1 = tmp_assign_source_42;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_unpack_4 = tmp_listcomp$tuple_unpack_2__source_iter;
            tmp_assign_source_43 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
            if (tmp_assign_source_43 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "ooo";
                exception_lineno = 265;
                goto try_except_handler_19;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__element_2;
                tmp_listcomp$tuple_unpack_2__element_2 = tmp_assign_source_43;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_iterator_name_2 = tmp_listcomp$tuple_unpack_2__source_iter;
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

                        type_description_2 = "ooo";
                        exception_lineno = 265;
                        goto try_except_handler_19;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[14];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "ooo";
                exception_lineno = 265;
                goto try_except_handler_19;
            }
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_2__source_iter);
        tmp_listcomp$tuple_unpack_2__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto try_except_handler_18;
        // End of try:
        try_end_3:;
        goto try_end_4;
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

        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_1);
        tmp_listcomp$tuple_unpack_2__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_2);
        tmp_listcomp$tuple_unpack_2__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        try_end_4:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_2__source_iter);
        tmp_listcomp$tuple_unpack_2__source_iter = NULL;
        {
            PyObject *tmp_assign_source_44;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__element_1);
            tmp_assign_source_44 = tmp_listcomp$tuple_unpack_2__element_1;
            {
                PyObject *old = outline_6_var_mu_product;
                outline_6_var_mu_product = tmp_assign_source_44;
                Py_INCREF(outline_6_var_mu_product);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_1);
        tmp_listcomp$tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_45;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__element_2);
            tmp_assign_source_45 = tmp_listcomp$tuple_unpack_2__element_2;
            {
                PyObject *old = outline_6_var_mu_next;
                outline_6_var_mu_next = tmp_assign_source_45;
                Py_INCREF(outline_6_var_mu_next);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_2);
        tmp_listcomp$tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_append_list_7;
            PyObject *tmp_append_value_7;
            PyObject *tmp_mult_expr_left_9;
            PyObject *tmp_mult_expr_right_9;
            PyObject *tmp_truediv_expr_left_2;
            PyObject *tmp_truediv_expr_right_2;
            PyObject *tmp_mult_expr_left_10;
            PyObject *tmp_mult_expr_right_10;
            PyObject *tmp_sub_expr_left_9;
            PyObject *tmp_sub_expr_right_9;
            PyObject *tmp_mult_expr_left_11;
            PyObject *tmp_mult_expr_right_11;
            CHECK_OBJECT(tmp_listcomp_7__contraction);
            tmp_append_list_7 = tmp_listcomp_7__contraction;
            if (par_lr == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[49]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 265;
                type_description_2 = "ooo";
                goto try_except_handler_17;
            }

            tmp_mult_expr_left_10 = par_lr;
            CHECK_OBJECT(outline_6_var_mu_next);
            tmp_mult_expr_right_10 = outline_6_var_mu_next;
            tmp_truediv_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_10, tmp_mult_expr_right_10);
            if (tmp_truediv_expr_left_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;
                type_description_2 = "ooo";
                goto try_except_handler_17;
            }
            tmp_sub_expr_left_9 = mod_consts[73];
            CHECK_OBJECT(outline_6_var_mu_product);
            tmp_mult_expr_left_11 = outline_6_var_mu_product;
            CHECK_OBJECT(outline_6_var_mu_next);
            tmp_mult_expr_right_11 = outline_6_var_mu_next;
            tmp_sub_expr_right_9 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_11, tmp_mult_expr_right_11);
            if (tmp_sub_expr_right_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_truediv_expr_left_2);

                exception_lineno = 265;
                type_description_2 = "ooo";
                goto try_except_handler_17;
            }
            tmp_truediv_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_FLOAT_OBJECT(tmp_sub_expr_left_9, tmp_sub_expr_right_9);
            Py_DECREF(tmp_sub_expr_right_9);
            if (tmp_truediv_expr_right_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_truediv_expr_left_2);

                exception_lineno = 265;
                type_description_2 = "ooo";
                goto try_except_handler_17;
            }
            tmp_mult_expr_left_9 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
            Py_DECREF(tmp_truediv_expr_left_2);
            Py_DECREF(tmp_truediv_expr_right_2);
            if (tmp_mult_expr_left_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;
                type_description_2 = "ooo";
                goto try_except_handler_17;
            }
            tmp_mult_expr_right_9 = mod_consts[48];
            tmp_append_value_7 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_9, tmp_mult_expr_right_9);
            Py_DECREF(tmp_mult_expr_left_9);
            if (tmp_append_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;
                type_description_2 = "ooo";
                goto try_except_handler_17;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_7, tmp_append_value_7);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;
                type_description_2 = "ooo";
                goto try_except_handler_17;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_2 = "ooo";
            goto try_except_handler_17;
        }
        goto loop_start_7;
        loop_end_7:;
        CHECK_OBJECT(tmp_listcomp_7__contraction);
        tmp_assign_source_37 = tmp_listcomp_7__contraction;
        Py_INCREF(tmp_assign_source_37);
        goto try_return_handler_17;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(tmp_listcomp_7__$0);
        Py_DECREF(tmp_listcomp_7__$0);
        tmp_listcomp_7__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_7__contraction);
        Py_DECREF(tmp_listcomp_7__contraction);
        tmp_listcomp_7__contraction = NULL;
        Py_XDECREF(tmp_listcomp_7__iter_value_0);
        tmp_listcomp_7__iter_value_0 = NULL;
        goto frame_return_exit_7;
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

        CHECK_OBJECT(tmp_listcomp_7__$0);
        Py_DECREF(tmp_listcomp_7__$0);
        tmp_listcomp_7__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_7__contraction);
        Py_DECREF(tmp_listcomp_7__contraction);
        tmp_listcomp_7__contraction = NULL;
        Py_XDECREF(tmp_listcomp_7__iter_value_0);
        tmp_listcomp_7__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto frame_exception_exit_8;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;
        frame_return_exit_7:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_16;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_be465eb929d220cf4a4298e4cd590469_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_be465eb929d220cf4a4298e4cd590469_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_be465eb929d220cf4a4298e4cd590469_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_be465eb929d220cf4a4298e4cd590469_8,
            type_description_2,
            outline_6_var_mu_product,
            outline_6_var_mu_next,
            par_lr
        );


        // Release cached frame if used for exception.
        if (frame_be465eb929d220cf4a4298e4cd590469_8 == cache_frame_be465eb929d220cf4a4298e4cd590469_8) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_be465eb929d220cf4a4298e4cd590469_8);
            cache_frame_be465eb929d220cf4a4298e4cd590469_8 = NULL;
        }

        assertFrameObject(frame_be465eb929d220cf4a4298e4cd590469_8);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_16;
        skip_nested_handling_7:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_XDECREF(outline_6_var_mu_product);
        outline_6_var_mu_product = NULL;
        Py_XDECREF(outline_6_var_mu_next);
        outline_6_var_mu_next = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_6_var_mu_product);
        outline_6_var_mu_product = NULL;
        Py_XDECREF(outline_6_var_mu_next);
        outline_6_var_mu_next = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 265;
        goto frame_exception_exit_1;
        outline_result_7:;
        assert(var_step_size_expavg == NULL);
        var_step_size_expavg = tmp_assign_source_37;
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[50]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_params == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 267;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_19 = par_params;
        if (par_grads == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 267;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_20 = par_grads;
        CHECK_OBJECT(var_denom);
        tmp_args_element_value_21 = var_denom;
        CHECK_OBJECT(var_step_size_grads);
        tmp_args_element_value_22 = var_step_size_grads;
        frame_4ba5c1f06d2d21446b65771f28106532->m_frame.f_lineno = 267;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[50]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_params == NULL) {
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 268;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_23 = par_params;
        CHECK_OBJECT(par_exp_avg);
        tmp_args_element_value_24 = par_exp_avg;
        CHECK_OBJECT(var_denom);
        tmp_args_element_value_25 = var_denom;
        CHECK_OBJECT(var_step_size_expavg);
        tmp_args_element_value_26 = var_step_size_expavg;
        frame_4ba5c1f06d2d21446b65771f28106532->m_frame.f_lineno = 268;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_8;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4ba5c1f06d2d21446b65771f28106532, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4ba5c1f06d2d21446b65771f28106532->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4ba5c1f06d2d21446b65771f28106532, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4ba5c1f06d2d21446b65771f28106532,
        type_description_1,
        par_params,
        par_grads,
        par_exp_avg,
        par_exp_avg_sq,
        par_mu_products,
        par_states,
        par_beta1,
        par_beta2,
        par_lr,
        par_weight_decay,
        par_momentum_decay,
        par_eps,
        var_bias_correction1,
        var_bias_correction2,
        var_mus,
        var_mu_nexts,
        var_exp_avg_sq_sqrt,
        var_bias_correction_sqrt,
        var_denom,
        var_step_size_grads,
        var_step_size_expavg
    );


    // Release cached frame if used for exception.
    if (frame_4ba5c1f06d2d21446b65771f28106532 == cache_frame_4ba5c1f06d2d21446b65771f28106532) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4ba5c1f06d2d21446b65771f28106532);
        cache_frame_4ba5c1f06d2d21446b65771f28106532 = NULL;
    }

    assertFrameObject(frame_4ba5c1f06d2d21446b65771f28106532);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_8:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_bias_correction1);
    Py_DECREF(var_bias_correction1);
    var_bias_correction1 = NULL;
    CHECK_OBJECT(var_bias_correction2);
    Py_DECREF(var_bias_correction2);
    var_bias_correction2 = NULL;
    CHECK_OBJECT(var_mus);
    Py_DECREF(var_mus);
    var_mus = NULL;
    CHECK_OBJECT(var_mu_nexts);
    Py_DECREF(var_mu_nexts);
    var_mu_nexts = NULL;
    CHECK_OBJECT(var_exp_avg_sq_sqrt);
    Py_DECREF(var_exp_avg_sq_sqrt);
    var_exp_avg_sq_sqrt = NULL;
    CHECK_OBJECT(var_bias_correction_sqrt);
    Py_DECREF(var_bias_correction_sqrt);
    var_bias_correction_sqrt = NULL;
    CHECK_OBJECT(var_denom);
    Py_DECREF(var_denom);
    var_denom = NULL;
    CHECK_OBJECT(var_step_size_grads);
    Py_DECREF(var_step_size_grads);
    var_step_size_grads = NULL;
    CHECK_OBJECT(var_step_size_expavg);
    Py_DECREF(var_step_size_expavg);
    var_step_size_expavg = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_bias_correction1);
    var_bias_correction1 = NULL;
    Py_XDECREF(var_bias_correction2);
    var_bias_correction2 = NULL;
    Py_XDECREF(var_mus);
    var_mus = NULL;
    Py_XDECREF(var_mu_nexts);
    var_mu_nexts = NULL;
    Py_XDECREF(var_exp_avg_sq_sqrt);
    var_exp_avg_sq_sqrt = NULL;
    Py_XDECREF(var_bias_correction_sqrt);
    var_bias_correction_sqrt = NULL;
    Py_XDECREF(var_denom);
    var_denom = NULL;
    Py_XDECREF(var_step_size_grads);
    var_step_size_grads = NULL;
    Py_XDECREF(var_step_size_expavg);
    var_step_size_expavg = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_grads);
    Py_DECREF(par_grads);
    CHECK_OBJECT(par_exp_avg);
    Py_DECREF(par_exp_avg);
    CHECK_OBJECT(par_exp_avg_sq);
    Py_DECREF(par_exp_avg_sq);
    CHECK_OBJECT(par_mu_products);
    Py_DECREF(par_mu_products);
    CHECK_OBJECT(par_states);
    Py_DECREF(par_states);
    CHECK_OBJECT(par_beta1);
    Py_DECREF(par_beta1);
    CHECK_OBJECT(par_beta2);
    Py_DECREF(par_beta2);
    CHECK_OBJECT(par_lr);
    Py_DECREF(par_lr);
    CHECK_OBJECT(par_weight_decay);
    Py_DECREF(par_weight_decay);
    CHECK_OBJECT(par_momentum_decay);
    Py_DECREF(par_momentum_decay);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_grads);
    Py_DECREF(par_grads);
    CHECK_OBJECT(par_exp_avg);
    Py_DECREF(par_exp_avg);
    CHECK_OBJECT(par_exp_avg_sq);
    Py_DECREF(par_exp_avg_sq);
    CHECK_OBJECT(par_mu_products);
    Py_DECREF(par_mu_products);
    CHECK_OBJECT(par_states);
    Py_DECREF(par_states);
    CHECK_OBJECT(par_beta1);
    Py_DECREF(par_beta1);
    CHECK_OBJECT(par_beta2);
    Py_DECREF(par_beta2);
    CHECK_OBJECT(par_lr);
    Py_DECREF(par_lr);
    CHECK_OBJECT(par_weight_decay);
    Py_DECREF(par_weight_decay);
    CHECK_OBJECT(par_momentum_decay);
    Py_DECREF(par_momentum_decay);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torch$optim$_multi_tensor$_functional$$$function__1__make_sparse() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$_multi_tensor$_functional$$$function__1__make_sparse,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ca055cb8432d1e5bbd915f9c867d09f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$optim$_multi_tensor$_functional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$_multi_tensor$_functional$$$function__2_adagrad(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$_multi_tensor$_functional$$$function__2_adagrad,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6359f16d3ef077b834fafcc14554c307,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$optim$_multi_tensor$_functional,
        mod_consts[35],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$_multi_tensor$_functional$$$function__3_adamax(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$_multi_tensor$_functional$$$function__3_adamax,
        mod_consts[101],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c627bf708e54bbdc09ff493e38d93ebe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$optim$_multi_tensor$_functional,
        mod_consts[51],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$_multi_tensor$_functional$$$function__4_adadelta(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$_multi_tensor$_functional$$$function__4_adadelta,
        mod_consts[105],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_05c859b02f51baa15d2f65c7151e9750,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$optim$_multi_tensor$_functional,
        mod_consts[55],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$_multi_tensor$_functional$$$function__5_asgd(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$_multi_tensor$_functional$$$function__5_asgd,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_89878d2b2abb20fa665638e0f470627d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$optim$_multi_tensor$_functional,
        mod_consts[66],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$_multi_tensor$_functional$$$function__6_radam(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$_multi_tensor$_functional$$$function__6_radam,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ba10557991628490cf0283edeac7ff54,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$optim$_multi_tensor$_functional,
        mod_consts[77],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$_multi_tensor$_functional$$$function__7_nadam(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$_multi_tensor$_functional$$$function__7_nadam,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4ba5c1f06d2d21446b65771f28106532,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$optim$_multi_tensor$_functional,
        mod_consts[81],
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

function_impl_code functable_torch$optim$_multi_tensor$_functional[] = {
    impl_torch$optim$_multi_tensor$_functional$$$function__1__make_sparse,
    impl_torch$optim$_multi_tensor$_functional$$$function__2_adagrad,
    impl_torch$optim$_multi_tensor$_functional$$$function__3_adamax,
    impl_torch$optim$_multi_tensor$_functional$$$function__4_adadelta,
    impl_torch$optim$_multi_tensor$_functional$$$function__5_asgd,
    impl_torch$optim$_multi_tensor$_functional$$$function__6_radam,
    impl_torch$optim$_multi_tensor$_functional$$$function__7_nadam,
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

    function_impl_code *current = functable_torch$optim$_multi_tensor$_functional;
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

    if (offset > sizeof(functable_torch$optim$_multi_tensor$_functional) || offset < 0) {
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
        functable_torch$optim$_multi_tensor$_functional[offset],
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
        module_torch$optim$_multi_tensor$_functional,
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
PyObject *modulecode_torch$optim$_multi_tensor$_functional(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch.optim._multi_tensor._functional");

    // Store the module for future use.
    module_torch$optim$_multi_tensor$_functional = module;

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
        PRINT_STRING("torch.optim._multi_tensor._functional: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.optim._multi_tensor._functional: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.optim._multi_tensor._functional: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$optim$_multi_tensor$_functional\n");

    moduledict_torch$optim$_multi_tensor$_functional = MODULE_DICT(module_torch$optim$_multi_tensor$_functional);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$optim$_multi_tensor$_functional,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$optim$_multi_tensor$_functional,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[137]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$optim$_multi_tensor$_functional,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$optim$_multi_tensor$_functional,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$optim$_multi_tensor$_functional,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$optim$_multi_tensor$_functional);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$optim$_multi_tensor$_functional);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_dc25342e50d862ada480e377183f63c9;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[82];
        UPDATE_STRING_DICT0(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_2);
    }
    frame_dc25342e50d862ada480e377183f63c9 = MAKE_MODULE_FRAME(codeobj_dc25342e50d862ada480e377183f63c9, module_torch$optim$_multi_tensor$_functional);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dc25342e50d862ada480e377183f63c9);
    assert(Py_REFCNT(frame_dc25342e50d862ada480e377183f63c9) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[86], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[87], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[62];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$optim$_multi_tensor$_functional;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[2];
        frame_dc25342e50d862ada480e377183f63c9->m_frame.f_lineno = 2;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[3];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$optim$_multi_tensor$_functional;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[2];
        frame_dc25342e50d862ada480e377183f63c9->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[3];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torch$optim$_multi_tensor$_functional;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[89];
        tmp_level_value_3 = mod_consts[2];
        frame_dc25342e50d862ada480e377183f63c9->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$optim$_multi_tensor$_functional,
                mod_consts[90],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[90]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_7 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_7);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torch$optim$_multi_tensor$_functional,
                mod_consts[91],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[91]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torch$optim$_multi_tensor$_functional,
                mod_consts[92],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[92]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_9);
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


        tmp_assign_source_10 = MAKE_FUNCTION_torch$optim$_multi_tensor$_functional$$$function__1__make_sparse();

        UPDATE_STRING_DICT1(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_dict_key_1 = mod_consts[12];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_subscript_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_subscript_value_1 == NULL)) {
            tmp_subscript_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        assert(!(tmp_subscript_value_1 == NULL));
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 9 );
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_4;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[13];
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_subscript_value_2 == NULL)) {
                tmp_subscript_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_subscript_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[93];
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_subscript_value_3 == NULL)) {
                tmp_subscript_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_subscript_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[94];
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_4 = (PyObject *)&PyLong_Type;
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[95];
            tmp_dict_value_1 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[49];
            tmp_dict_value_1 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[96];
            tmp_dict_value_1 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[11];
            tmp_dict_value_1 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[25];
            tmp_dict_value_1 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_assign_source_11 = MAKE_FUNCTION_torch$optim$_multi_tensor$_functional$$$function__2_adagrad(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        tmp_dict_key_2 = mod_consts[12];
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_subscript_value_5 == NULL)) {
            tmp_subscript_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_subscript_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_5);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 10 );
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_9;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[13];
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_subscript_value_6 == NULL)) {
                tmp_subscript_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_subscript_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_6);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[98];
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_subscript_value_7 == NULL)) {
                tmp_subscript_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_subscript_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_7);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[99];
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_subscript_value_8 == NULL)) {
                tmp_subscript_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_subscript_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_8);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[100];
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[92]);

            if (unlikely(tmp_subscript_value_9 == NULL)) {
                tmp_subscript_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
            }

            if (tmp_subscript_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_9);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[46];
            tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[69];
            tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[49];
            tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[96];
            tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[25];
            tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;


        tmp_assign_source_12 = MAKE_FUNCTION_torch$optim$_multi_tensor$_functional$$$function__3_adamax(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_10;
        tmp_dict_key_3 = mod_consts[12];
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_subscript_value_10 == NULL)) {
            tmp_subscript_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_subscript_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_10);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 8 );
        {
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_13;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[13];
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_subscript_value_11 == NULL)) {
                tmp_subscript_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_subscript_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_11);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[102];
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_subscript_value_12 == NULL)) {
                tmp_subscript_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_subscript_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_12);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[103];
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_subscript_value_13 == NULL)) {
                tmp_subscript_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_subscript_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_13);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[49];
            tmp_dict_value_3 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[96];
            tmp_dict_value_3 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[104];
            tmp_dict_value_3 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[25];
            tmp_dict_value_3 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_annotations_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;


        tmp_assign_source_13 = MAKE_FUNCTION_torch$optim$_multi_tensor$_functional$$$function__4_adadelta(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_14;
        tmp_dict_key_4 = mod_consts[12];
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_subscript_value_14 == NULL)) {
            tmp_subscript_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_subscript_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_14);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 8 );
        {
            PyObject *tmp_expression_value_15;
            PyObject *tmp_subscript_value_15;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_16;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[13];
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_subscript_value_15 == NULL)) {
                tmp_subscript_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_subscript_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_15);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[100];
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[92]);

            if (unlikely(tmp_subscript_value_16 == NULL)) {
                tmp_subscript_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
            }

            if (tmp_subscript_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_16);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[63];
            tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[49];
            tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[65];
            tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[64];
            tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[96];
            tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_annotations_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;


        tmp_assign_source_14 = MAKE_FUNCTION_torch$optim$_multi_tensor$_functional$$$function__5_asgd(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_17;
        tmp_dict_key_5 = mod_consts[12];
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_subscript_value_17 == NULL)) {
            tmp_subscript_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_subscript_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_17);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 10 );
        {
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_19;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_subscript_value_20;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_subscript_value_21;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[13];
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_18 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_subscript_value_18 == NULL)) {
                tmp_subscript_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_subscript_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto dict_build_exception_5;
            }
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_18);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[107];
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_subscript_value_19 == NULL)) {
                tmp_subscript_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_subscript_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto dict_build_exception_5;
            }
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_19);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[108];
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_subscript_value_20 == NULL)) {
                tmp_subscript_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_subscript_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto dict_build_exception_5;
            }
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_20);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[100];
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_21 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[92]);

            if (unlikely(tmp_subscript_value_21 == NULL)) {
                tmp_subscript_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
            }

            if (tmp_subscript_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto dict_build_exception_5;
            }
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_21);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[46];
            tmp_dict_value_5 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[69];
            tmp_dict_value_5 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[49];
            tmp_dict_value_5 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[96];
            tmp_dict_value_5 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[25];
            tmp_dict_value_5 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_annotations_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;


        tmp_assign_source_15 = MAKE_FUNCTION_torch$optim$_multi_tensor$_functional$$$function__6_radam(tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_subscript_value_22;
        tmp_dict_key_6 = mod_consts[12];
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_subscript_value_22 == NULL)) {
            tmp_subscript_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_subscript_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_22);
        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        tmp_annotations_6 = _PyDict_NewPresized( 12 );
        {
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_23;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_subscript_value_24;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_subscript_value_25;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_subscript_value_26;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_subscript_value_27;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[13];
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_23 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_subscript_value_23 == NULL)) {
                tmp_subscript_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_subscript_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto dict_build_exception_6;
            }
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_23);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[107];
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_24 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_subscript_value_24 == NULL)) {
                tmp_subscript_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_subscript_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;

                goto dict_build_exception_6;
            }
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_24);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[108];
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_25 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_subscript_value_25 == NULL)) {
                tmp_subscript_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_subscript_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto dict_build_exception_6;
            }
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_25);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[110];
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_26 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_subscript_value_26 == NULL)) {
                tmp_subscript_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_subscript_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;

                goto dict_build_exception_6;
            }
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_26);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[100];
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_27 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[92]);

            if (unlikely(tmp_subscript_value_27 == NULL)) {
                tmp_subscript_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
            }

            if (tmp_subscript_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;

                goto dict_build_exception_6;
            }
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_27);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[46];
            tmp_dict_value_6 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[69];
            tmp_dict_value_6 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[49];
            tmp_dict_value_6 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[96];
            tmp_dict_value_6 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[80];
            tmp_dict_value_6 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[25];
            tmp_dict_value_6 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_6;
        // Exception handling pass through code for dict_build:
        dict_build_exception_6:;
        Py_DECREF(tmp_annotations_6);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_6:;


        tmp_assign_source_16 = MAKE_FUNCTION_torch$optim$_multi_tensor$_functional$$$function__7_nadam(tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_16);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dc25342e50d862ada480e377183f63c9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dc25342e50d862ada480e377183f63c9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dc25342e50d862ada480e377183f63c9, exception_lineno);
    }



    assertFrameObject(frame_dc25342e50d862ada480e377183f63c9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch.optim._multi_tensor._functional", false);

    Py_INCREF(module_torch$optim$_multi_tensor$_functional);
    return module_torch$optim$_multi_tensor$_functional;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$optim$_multi_tensor$_functional, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$optim$_multi_tensor$_functional", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
