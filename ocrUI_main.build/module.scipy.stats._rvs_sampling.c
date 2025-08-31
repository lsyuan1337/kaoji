/* Generated code for Python module 'scipy.stats._rvs_sampling'
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

/* The "module_scipy$stats$_rvs_sampling" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$stats$_rvs_sampling;
PyDictObject *moduledict_scipy$stats$_rvs_sampling;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[130];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[130];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("scipy.stats._rvs_sampling"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 130; i++) {
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
void checkModuleConstants_scipy$stats$_rvs_sampling(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 130; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_b11892022628804c3ad32ebf54d13d46;
static PyCodeObject *codeobj_fba32a3771f34b616b5b3332bc1f9dc9;
static PyCodeObject *codeobj_9108603d8041d31045a23f6dfaa8b377;
static PyCodeObject *codeobj_f30ccd9d1f21167b43ff12151d10f788;
static PyCodeObject *codeobj_7adff293d5950550f0e54d63c30a97ed;
static PyCodeObject *codeobj_cf44597026b596f717b5d7c3a038c98f;
static PyCodeObject *codeobj_ef89e493e5b8ea5c114d61fe7856f0a8;
static PyCodeObject *codeobj_e0e9d6421a63ef16bd605e0d3945e182;
static PyCodeObject *codeobj_0075e695ab3b9eb0bcd7c7042b98ce04;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[118]); CHECK_OBJECT(module_filename_obj);
    codeobj_b11892022628804c3ad32ebf54d13d46 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[119], mod_consts[119], NULL, NULL, 0, 0, 0);
    codeobj_fba32a3771f34b616b5b3332bc1f9dc9 = MAKE_CODE_OBJECT(module_filename_obj, 338, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[108], mod_consts[108], mod_consts[120], NULL, 2, 2, 0);
    codeobj_9108603d8041d31045a23f6dfaa8b377 = MAKE_CODE_OBJECT(module_filename_obj, 525, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[29], mod_consts[29], mod_consts[121], NULL, 3, 0, 0);
    codeobj_f30ccd9d1f21167b43ff12151d10f788 = MAKE_CODE_OBJECT(module_filename_obj, 498, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[64], mod_consts[64], mod_consts[122], NULL, 3, 0, 0);
    codeobj_7adff293d5950550f0e54d63c30a97ed = MAKE_CODE_OBJECT(module_filename_obj, 513, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[59], mod_consts[59], mod_consts[123], mod_consts[124], 1, 0, 0);
    codeobj_cf44597026b596f717b5d7c3a038c98f = MAKE_CODE_OBJECT(module_filename_obj, 346, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[42], mod_consts[42], mod_consts[125], NULL, 2, 0, 0);
    codeobj_ef89e493e5b8ea5c114d61fe7856f0a8 = MAKE_CODE_OBJECT(module_filename_obj, 404, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[115], mod_consts[115], mod_consts[126], NULL, 4, 0, 0);
    codeobj_e0e9d6421a63ef16bd605e0d3945e182 = MAKE_CODE_OBJECT(module_filename_obj, 368, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[112], mod_consts[112], mod_consts[127], NULL, 3, 0, 0);
    codeobj_0075e695ab3b9eb0bcd7c7042b98ce04 = MAKE_CODE_OBJECT(module_filename_obj, 8, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[101], mod_consts[101], mod_consts[128], NULL, 7, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$stats$_rvs_sampling$$$function__1_rvs_ratio_uniforms(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$stats$_rvs_sampling$$$function__2___init__(PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_scipy$stats$_rvs_sampling$$$function__3_ppf();


static PyObject *MAKE_FUNCTION_scipy$stats$_rvs_sampling$$$function__4_rvs(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$stats$_rvs_sampling$$$function__5_qrvs(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$stats$_rvs_sampling$$$function__6__fni_input_validation();


static PyObject *MAKE_FUNCTION_scipy$stats$_rvs_sampling$$$function__6__fni_input_validation$$$function__1_isf(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$stats$_rvs_sampling$$$function__7__fast_numerical_inverse(PyObject *defaults);


// The module function definitions.
static PyObject *impl_scipy$stats$_rvs_sampling$$$function__1_rvs_ratio_uniforms(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pdf = python_pars[0];
    PyObject *par_umax = python_pars[1];
    PyObject *par_vmin = python_pars[2];
    PyObject *par_vmax = python_pars[3];
    PyObject *par_size = python_pars[4];
    PyObject *par_c = python_pars[5];
    PyObject *par_random_state = python_pars[6];
    PyObject *var_size1d = NULL;
    PyObject *var_N = NULL;
    PyObject *var_rng = NULL;
    PyObject *var_x = NULL;
    PyObject *var_simulated = NULL;
    PyObject *var_i = NULL;
    PyObject *var_k = NULL;
    PyObject *var_u1 = NULL;
    PyObject *var_v1 = NULL;
    PyObject *var_rvs = NULL;
    PyObject *var_accept = NULL;
    PyObject *var_num_accept = NULL;
    PyObject *var_msg = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_0075e695ab3b9eb0bcd7c7042b98ce04;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0075e695ab3b9eb0bcd7c7042b98ce04 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0075e695ab3b9eb0bcd7c7042b98ce04)) {
        Py_XDECREF(cache_frame_0075e695ab3b9eb0bcd7c7042b98ce04);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0075e695ab3b9eb0bcd7c7042b98ce04 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0075e695ab3b9eb0bcd7c7042b98ce04 = MAKE_FUNCTION_FRAME(codeobj_0075e695ab3b9eb0bcd7c7042b98ce04, module_scipy$stats$_rvs_sampling, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0075e695ab3b9eb0bcd7c7042b98ce04->m_type_description == NULL);
    frame_0075e695ab3b9eb0bcd7c7042b98ce04 = cache_frame_0075e695ab3b9eb0bcd7c7042b98ce04;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0075e695ab3b9eb0bcd7c7042b98ce04);
    assert(Py_REFCNT(frame_0075e695ab3b9eb0bcd7c7042b98ce04) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_vmin);
        tmp_cmp_expr_left_1 = par_vmin;
        CHECK_OBJECT(par_vmax);
        tmp_cmp_expr_right_1 = par_vmax;
        tmp_condition_result_1 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[0];
        frame_0075e695ab3b9eb0bcd7c7042b98ce04->m_frame.f_lineno = 134;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 134;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_umax);
        tmp_cmp_expr_left_2 = par_umax;
        tmp_cmp_expr_right_2 = mod_consts[1];
        tmp_condition_result_2 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooo";
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
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[2];
        frame_0075e695ab3b9eb0bcd7c7042b98ce04->m_frame.f_lineno = 137;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 137;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_size);
        tmp_args_element_value_1 = par_size;
        frame_0075e695ab3b9eb0bcd7c7042b98ce04->m_frame.f_lineno = 139;
        tmp_tuple_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[4], tmp_args_element_value_1);
        if (tmp_tuple_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_size1d == NULL);
        var_size1d = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_size1d);
        tmp_args_element_value_2 = var_size1d;
        frame_0075e695ab3b9eb0bcd7c7042b98ce04->m_frame.f_lineno = 140;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[5], tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_N == NULL);
        var_N = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_random_state);
        tmp_args_element_value_3 = par_random_state;
        frame_0075e695ab3b9eb0bcd7c7042b98ce04->m_frame.f_lineno = 143;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_rng == NULL);
        var_rng = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_N);
        tmp_args_element_value_4 = var_N;
        frame_0075e695ab3b9eb0bcd7c7042b98ce04->m_frame.f_lineno = 144;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[7], tmp_args_element_value_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_x == NULL);
        var_x = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = mod_consts[8];
        tmp_assign_source_5 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        assert(!(tmp_assign_source_5 == NULL));
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
    }
    // Tried code:
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


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 145;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
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


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 145;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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

                    type_description_1 = "oooooooooooooooooooo";
                    exception_lineno = 145;
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

            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 145;
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
        assert(var_simulated == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_simulated = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        assert(var_i == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_i = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    loop_start_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        if (var_simulated == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_3 = var_simulated;
        if (var_N == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_3 = var_N;
        tmp_operand_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooo";
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
    goto loop_end_1;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        if (var_N == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 153;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_left_1 = var_N;
        if (var_simulated == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 153;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_right_1 = var_simulated;
        tmp_assign_source_10 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        if (par_umax == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_left_1 = par_umax;
        if (var_rng == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = var_rng;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_k);
        tmp_kw_call_value_0_1 = var_k;
        frame_0075e695ab3b9eb0bcd7c7042b98ce04->m_frame.f_lineno = 155;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_mult_expr_right_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_u1;
            var_u1 = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        if (var_rng == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 156;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = var_rng;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_vmin == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 156;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = par_vmin;
        if (par_vmax == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 156;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_1_1 = par_vmax;
        CHECK_OBJECT(var_k);
        tmp_kw_call_dict_value_0_1 = var_k;
        frame_0075e695ab3b9eb0bcd7c7042b98ce04->m_frame.f_lineno = 156;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_v1;
            var_v1 = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        CHECK_OBJECT(var_v1);
        tmp_truediv_expr_left_1 = var_v1;
        CHECK_OBJECT(var_u1);
        tmp_truediv_expr_right_1 = var_u1;
        tmp_add_expr_left_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_c == NULL) {
            Py_DECREF(tmp_add_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 158;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_right_1 = par_c;
        tmp_assign_source_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_rvs;
            var_rvs = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_pow_expr_left_1;
        PyObject *tmp_pow_expr_right_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(var_u1);
        tmp_pow_expr_left_1 = var_u1;
        tmp_pow_expr_right_1 = mod_consts[19];
        tmp_cmp_expr_left_4 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_pdf == NULL) {
            Py_DECREF(tmp_cmp_expr_left_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 159;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_4 = par_pdf;
        CHECK_OBJECT(var_rvs);
        tmp_args_element_value_5 = var_rvs;
        frame_0075e695ab3b9eb0bcd7c7042b98ce04->m_frame.f_lineno = 159;
        tmp_cmp_expr_right_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);

            exception_lineno = 159;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_accept;
            var_accept = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_accept);
        tmp_args_element_value_6 = var_accept;
        frame_0075e695ab3b9eb0bcd7c7042b98ce04->m_frame.f_lineno = 160;
        tmp_assign_source_15 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[21], tmp_args_element_value_6);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_num_accept;
            var_num_accept = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_num_accept);
        tmp_cmp_expr_left_5 = var_num_accept;
        tmp_cmp_expr_right_5 = mod_consts[1];
        tmp_condition_result_4 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        CHECK_OBJECT(var_rvs);
        tmp_expression_value_3 = var_rvs;
        CHECK_OBJECT(var_accept);
        tmp_subscript_value_1 = var_accept;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_x == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 162;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = var_x;
        if (var_simulated == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 162;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_start_value_1 = var_simulated;
        if (var_simulated == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 162;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_2 = var_simulated;
        CHECK_OBJECT(var_num_accept);
        tmp_add_expr_right_2 = var_num_accept;
        tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_stop_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 162;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
        Py_DECREF(tmp_stop_value_1);
        assert(!(tmp_ass_subscript_1 == NULL));
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        if (var_simulated == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 163;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_1 = var_simulated;
        CHECK_OBJECT(var_num_accept);
        tmp_iadd_expr_right_1 = var_num_accept;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = tmp_iadd_expr_left_1;
        var_simulated = tmp_assign_source_16;

    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        if (var_simulated == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 165;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_6 = var_simulated;
        tmp_cmp_expr_right_6 = mod_consts[1];
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 165;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_left_2 = var_i;
        if (var_N == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 165;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_right_2 = var_N;
        tmp_cmp_expr_left_7 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_7 = mod_consts[24];
        tmp_and_right_value_1 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_left_7);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_5 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        tmp_kw_call_arg_value_0_2 = mod_consts[25];
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_left_3 = var_i;
        if (var_N == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_right_3 = var_N;
        tmp_kw_call_arg_value_1_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_kw_call_arg_value_1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0075e695ab3b9eb0bcd7c7042b98ce04->m_frame.f_lineno = 166;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_2);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_msg == NULL);
        var_msg = tmp_assign_source_17;
    }
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        CHECK_OBJECT(var_msg);
        tmp_make_exception_arg_3 = var_msg;
        frame_0075e695ab3b9eb0bcd7c7042b98ce04->m_frame.f_lineno = 170;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 170;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_2 = var_i;
        tmp_iadd_expr_right_2 = mod_consts[26];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = tmp_iadd_expr_left_2;
        var_i = tmp_assign_source_18;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 152;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[27]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_x == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 173;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_7 = var_x;
        CHECK_OBJECT(var_size1d);
        tmp_args_element_value_8 = var_size1d;
        frame_0075e695ab3b9eb0bcd7c7042b98ce04->m_frame.f_lineno = 173;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_0075e695ab3b9eb0bcd7c7042b98ce04, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0075e695ab3b9eb0bcd7c7042b98ce04->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0075e695ab3b9eb0bcd7c7042b98ce04, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0075e695ab3b9eb0bcd7c7042b98ce04,
        type_description_1,
        par_pdf,
        par_umax,
        par_vmin,
        par_vmax,
        par_size,
        par_c,
        par_random_state,
        var_size1d,
        var_N,
        var_rng,
        var_x,
        var_simulated,
        var_i,
        var_k,
        var_u1,
        var_v1,
        var_rvs,
        var_accept,
        var_num_accept,
        var_msg
    );


    // Release cached frame if used for exception.
    if (frame_0075e695ab3b9eb0bcd7c7042b98ce04 == cache_frame_0075e695ab3b9eb0bcd7c7042b98ce04) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0075e695ab3b9eb0bcd7c7042b98ce04);
        cache_frame_0075e695ab3b9eb0bcd7c7042b98ce04 = NULL;
    }

    assertFrameObject(frame_0075e695ab3b9eb0bcd7c7042b98ce04);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_size1d);
    Py_DECREF(var_size1d);
    var_size1d = NULL;
    Py_XDECREF(var_N);
    var_N = NULL;
    Py_XDECREF(var_rng);
    var_rng = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_simulated);
    var_simulated = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_u1);
    var_u1 = NULL;
    Py_XDECREF(var_v1);
    var_v1 = NULL;
    Py_XDECREF(var_rvs);
    var_rvs = NULL;
    Py_XDECREF(var_accept);
    var_accept = NULL;
    Py_XDECREF(var_num_accept);
    var_num_accept = NULL;
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

    Py_XDECREF(var_size1d);
    var_size1d = NULL;
    Py_XDECREF(var_N);
    var_N = NULL;
    Py_XDECREF(var_rng);
    var_rng = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_simulated);
    var_simulated = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_u1);
    var_u1 = NULL;
    Py_XDECREF(var_v1);
    var_v1 = NULL;
    Py_XDECREF(var_rvs);
    var_rvs = NULL;
    Py_XDECREF(var_accept);
    var_accept = NULL;
    Py_XDECREF(var_num_accept);
    var_num_accept = NULL;
    Py_XDECREF(var_msg);
    var_msg = NULL;
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
    CHECK_OBJECT(par_pdf);
    Py_DECREF(par_pdf);
    CHECK_OBJECT(par_umax);
    Py_DECREF(par_umax);
    CHECK_OBJECT(par_vmin);
    Py_DECREF(par_vmin);
    CHECK_OBJECT(par_vmax);
    Py_DECREF(par_vmax);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_random_state);
    Py_DECREF(par_random_state);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_pdf);
    Py_DECREF(par_pdf);
    CHECK_OBJECT(par_umax);
    Py_DECREF(par_umax);
    CHECK_OBJECT(par_vmin);
    Py_DECREF(par_vmin);
    CHECK_OBJECT(par_vmax);
    Py_DECREF(par_vmax);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);
    CHECK_OBJECT(par_random_state);
    Py_DECREF(par_random_state);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$stats$_rvs_sampling$$$function__2___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dist = python_pars[1];
    PyObject *par_tol = python_pars[2];
    PyObject *par_max_intervals = python_pars[3];
    PyObject *var_res = NULL;
    PyObject *var_H = NULL;
    PyObject *var_eu = NULL;
    PyObject *var_intervals = NULL;
    PyObject *var_a = NULL;
    PyObject *var_b = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_fba32a3771f34b616b5b3332bc1f9dc9;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_fba32a3771f34b616b5b3332bc1f9dc9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_fba32a3771f34b616b5b3332bc1f9dc9)) {
        Py_XDECREF(cache_frame_fba32a3771f34b616b5b3332bc1f9dc9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fba32a3771f34b616b5b3332bc1f9dc9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fba32a3771f34b616b5b3332bc1f9dc9 = MAKE_FUNCTION_FRAME(codeobj_fba32a3771f34b616b5b3332bc1f9dc9, module_scipy$stats$_rvs_sampling, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fba32a3771f34b616b5b3332bc1f9dc9->m_type_description == NULL);
    frame_fba32a3771f34b616b5b3332bc1f9dc9 = cache_frame_fba32a3771f34b616b5b3332bc1f9dc9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fba32a3771f34b616b5b3332bc1f9dc9);
    assert(Py_REFCNT(frame_fba32a3771f34b616b5b3332bc1f9dc9) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dist);
        tmp_args_element_value_1 = par_dist;
        CHECK_OBJECT(par_tol);
        tmp_args_element_value_2 = par_tol;
        CHECK_OBJECT(par_max_intervals);
        tmp_args_element_value_3 = par_max_intervals;
        frame_fba32a3771f34b616b5b3332bc1f9dc9->m_frame.f_lineno = 339;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_res);
        tmp_iter_arg_1 = var_res;
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 5);
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
            exception_lineno = 340;
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
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 5);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 340;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_3, 2, 5);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 340;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_4, 3, 5);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 340;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_5, 4, 5);
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
            exception_lineno = 340;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_5 == NULL);
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_7;
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
                    exception_lineno = 340;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[30];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 340;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;
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
        assert(var_H == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_H = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        assert(var_eu == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_eu = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_3;
        assert(var_intervals == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_intervals = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_4;
        assert(var_a == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_a = tmp_assign_source_11;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_5;
        assert(var_b == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_b = tmp_assign_source_12;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_H);
        tmp_assattr_value_1 = var_H;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[31], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_eu);
        tmp_assattr_value_2 = var_eu;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[32], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(var_intervals);
        tmp_assattr_value_3 = var_intervals;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[33], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_a);
        tmp_tuple_element_1 = var_a;
        tmp_iter_arg_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_iter_arg_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_b);
        tmp_tuple_element_1 = var_b;
        PyTuple_SET_ITEM0(tmp_iter_arg_2, 1, tmp_tuple_element_1);
        tmp_assign_source_13 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        assert(!(tmp_assign_source_13 == NULL));
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_13;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_6, 0, 2);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 344;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tmp_unpack_7, 1, 2);
        if (tmp_assign_source_15 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 344;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_15;
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
                    exception_lineno = 344;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[9];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 344;
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
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assattr_value_4 = tmp_tuple_unpack_2__element_1;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[34], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assattr_value_5 = tmp_tuple_unpack_2__element_2;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[35], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
    }
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fba32a3771f34b616b5b3332bc1f9dc9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fba32a3771f34b616b5b3332bc1f9dc9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fba32a3771f34b616b5b3332bc1f9dc9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fba32a3771f34b616b5b3332bc1f9dc9,
        type_description_1,
        par_self,
        par_dist,
        par_tol,
        par_max_intervals,
        var_res,
        var_H,
        var_eu,
        var_intervals,
        var_a,
        var_b
    );


    // Release cached frame if used for exception.
    if (frame_fba32a3771f34b616b5b3332bc1f9dc9 == cache_frame_fba32a3771f34b616b5b3332bc1f9dc9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fba32a3771f34b616b5b3332bc1f9dc9);
        cache_frame_fba32a3771f34b616b5b3332bc1f9dc9 = NULL;
    }

    assertFrameObject(frame_fba32a3771f34b616b5b3332bc1f9dc9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_res);
    Py_DECREF(var_res);
    var_res = NULL;
    CHECK_OBJECT(var_H);
    Py_DECREF(var_H);
    var_H = NULL;
    CHECK_OBJECT(var_eu);
    Py_DECREF(var_eu);
    var_eu = NULL;
    CHECK_OBJECT(var_intervals);
    Py_DECREF(var_intervals);
    var_intervals = NULL;
    CHECK_OBJECT(var_a);
    Py_DECREF(var_a);
    var_a = NULL;
    CHECK_OBJECT(var_b);
    Py_DECREF(var_b);
    var_b = NULL;
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

    Py_XDECREF(var_res);
    var_res = NULL;
    Py_XDECREF(var_H);
    var_H = NULL;
    Py_XDECREF(var_eu);
    var_eu = NULL;
    Py_XDECREF(var_intervals);
    var_intervals = NULL;
    Py_XDECREF(var_a);
    var_a = NULL;
    Py_XDECREF(var_b);
    var_b = NULL;
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
    CHECK_OBJECT(par_dist);
    Py_DECREF(par_dist);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);
    CHECK_OBJECT(par_max_intervals);
    Py_DECREF(par_max_intervals);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dist);
    Py_DECREF(par_dist);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);
    CHECK_OBJECT(par_max_intervals);
    Py_DECREF(par_max_intervals);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$stats$_rvs_sampling$$$function__3_ppf(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_q = python_pars[1];
    PyObject *var_result = NULL;
    PyObject *var_i = NULL;
    struct Nuitka_FrameObject *frame_cf44597026b596f717b5d7c3a038c98f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_cf44597026b596f717b5d7c3a038c98f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cf44597026b596f717b5d7c3a038c98f)) {
        Py_XDECREF(cache_frame_cf44597026b596f717b5d7c3a038c98f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cf44597026b596f717b5d7c3a038c98f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cf44597026b596f717b5d7c3a038c98f = MAKE_FUNCTION_FRAME(codeobj_cf44597026b596f717b5d7c3a038c98f, module_scipy$stats$_rvs_sampling, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cf44597026b596f717b5d7c3a038c98f->m_type_description == NULL);
    frame_cf44597026b596f717b5d7c3a038c98f = cache_frame_cf44597026b596f717b5d7c3a038c98f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cf44597026b596f717b5d7c3a038c98f);
    assert(Py_REFCNT(frame_cf44597026b596f717b5d7c3a038c98f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_q);
        tmp_args_element_value_1 = par_q;
        frame_cf44597026b596f717b5d7c3a038c98f->m_frame.f_lineno = 361;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[36], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_q;
            assert(old != NULL);
            par_q = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[37]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_q);
        tmp_kw_call_arg_value_0_1 = par_q;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 362;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[38]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 362;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_cf44597026b596f717b5d7c3a038c98f->m_frame.f_lineno = 362;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[39]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_q);
        tmp_cmp_expr_left_1 = par_q;
        tmp_cmp_expr_right_1 = mod_consts[1];
        tmp_bitand_expr_left_1 = RICH_COMPARE_GE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_bitand_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_q);
        tmp_cmp_expr_left_2 = par_q;
        tmp_cmp_expr_right_2 = mod_consts[26];
        tmp_bitand_expr_right_1 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_bitand_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitand_expr_left_1);

            exception_lineno = 363;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        Py_DECREF(tmp_bitand_expr_left_1);
        Py_DECREF(tmp_bitand_expr_right_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_i == NULL);
        var_i = tmp_assign_source_3;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[31]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_q);
        tmp_expression_value_4 = par_q;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_1 = var_i;
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 364;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_cf44597026b596f717b5d7c3a038c98f->m_frame.f_lineno = 364;
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_result);
        tmp_ass_subscribed_1 = var_result;
        CHECK_OBJECT(var_i);
        tmp_ass_subscript_1 = var_i;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_operand_value_1;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[40]);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_result);
        tmp_ass_subscribed_2 = var_result;
        CHECK_OBJECT(var_i);
        tmp_operand_value_1 = var_i;
        tmp_ass_subscript_2 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_1);
        if (tmp_ass_subscript_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 365;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cf44597026b596f717b5d7c3a038c98f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cf44597026b596f717b5d7c3a038c98f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cf44597026b596f717b5d7c3a038c98f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cf44597026b596f717b5d7c3a038c98f,
        type_description_1,
        par_self,
        par_q,
        var_result,
        var_i
    );


    // Release cached frame if used for exception.
    if (frame_cf44597026b596f717b5d7c3a038c98f == cache_frame_cf44597026b596f717b5d7c3a038c98f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cf44597026b596f717b5d7c3a038c98f);
        cache_frame_cf44597026b596f717b5d7c3a038c98f = NULL;
    }

    assertFrameObject(frame_cf44597026b596f717b5d7c3a038c98f);

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
    CHECK_OBJECT(par_q);
    Py_DECREF(par_q);
    par_q = NULL;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
    CHECK_OBJECT(var_i);
    Py_DECREF(var_i);
    var_i = NULL;
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

    Py_XDECREF(par_q);
    par_q = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
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


static PyObject *impl_scipy$stats$_rvs_sampling$$$function__4_rvs(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_size = python_pars[1];
    PyObject *par_random_state = python_pars[2];
    PyObject *var_uniform = NULL;
    struct Nuitka_FrameObject *frame_e0e9d6421a63ef16bd605e0d3945e182;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e0e9d6421a63ef16bd605e0d3945e182 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e0e9d6421a63ef16bd605e0d3945e182)) {
        Py_XDECREF(cache_frame_e0e9d6421a63ef16bd605e0d3945e182);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e0e9d6421a63ef16bd605e0d3945e182 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e0e9d6421a63ef16bd605e0d3945e182 = MAKE_FUNCTION_FRAME(codeobj_e0e9d6421a63ef16bd605e0d3945e182, module_scipy$stats$_rvs_sampling, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e0e9d6421a63ef16bd605e0d3945e182->m_type_description == NULL);
    frame_e0e9d6421a63ef16bd605e0d3945e182 = cache_frame_e0e9d6421a63ef16bd605e0d3945e182;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e0e9d6421a63ef16bd605e0d3945e182);
    assert(Py_REFCNT(frame_e0e9d6421a63ef16bd605e0d3945e182) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_random_state);
        tmp_args_element_value_1 = par_random_state;
        frame_e0e9d6421a63ef16bd605e0d3945e182->m_frame.f_lineno = 398;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_random_state;
            assert(old != NULL);
            par_random_state = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        CHECK_OBJECT(par_random_state);
        tmp_expression_value_1 = par_random_state;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_size);
        tmp_kw_call_value_0_1 = par_size;
        frame_e0e9d6421a63ef16bd605e0d3945e182->m_frame.f_lineno = 399;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_uniform == NULL);
        var_uniform = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[34]);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_uniform);
        tmp_mult_expr_left_1 = var_uniform;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[35]);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 401;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[34]);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 401;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 401;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 401;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_uniform;
            assert(old != NULL);
            var_uniform = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(var_uniform);
        tmp_args_element_value_2 = var_uniform;
        frame_e0e9d6421a63ef16bd605e0d3945e182->m_frame.f_lineno = 402;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[42], tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
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
        exception_tb = MAKE_TRACEBACK(frame_e0e9d6421a63ef16bd605e0d3945e182, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e0e9d6421a63ef16bd605e0d3945e182->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e0e9d6421a63ef16bd605e0d3945e182, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e0e9d6421a63ef16bd605e0d3945e182,
        type_description_1,
        par_self,
        par_size,
        par_random_state,
        var_uniform
    );


    // Release cached frame if used for exception.
    if (frame_e0e9d6421a63ef16bd605e0d3945e182 == cache_frame_e0e9d6421a63ef16bd605e0d3945e182) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e0e9d6421a63ef16bd605e0d3945e182);
        cache_frame_e0e9d6421a63ef16bd605e0d3945e182 = NULL;
    }

    assertFrameObject(frame_e0e9d6421a63ef16bd605e0d3945e182);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_random_state);
    Py_DECREF(par_random_state);
    par_random_state = NULL;
    CHECK_OBJECT(var_uniform);
    Py_DECREF(var_uniform);
    var_uniform = NULL;
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

    Py_XDECREF(par_random_state);
    par_random_state = NULL;
    Py_XDECREF(var_uniform);
    var_uniform = NULL;
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
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$stats$_rvs_sampling$$$function__5_qrvs(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_size = python_pars[1];
    PyObject *par_d = python_pars[2];
    PyObject *par_qmc_engine = python_pars[3];
    PyObject *var_tuple_size = NULL;
    PyObject *var_uniform = NULL;
    PyObject *var_qrvs = NULL;
    struct Nuitka_FrameObject *frame_ef89e493e5b8ea5c114d61fe7856f0a8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ef89e493e5b8ea5c114d61fe7856f0a8 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ef89e493e5b8ea5c114d61fe7856f0a8)) {
        Py_XDECREF(cache_frame_ef89e493e5b8ea5c114d61fe7856f0a8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ef89e493e5b8ea5c114d61fe7856f0a8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ef89e493e5b8ea5c114d61fe7856f0a8 = MAKE_FUNCTION_FRAME(codeobj_ef89e493e5b8ea5c114d61fe7856f0a8, module_scipy$stats$_rvs_sampling, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ef89e493e5b8ea5c114d61fe7856f0a8->m_type_description == NULL);
    frame_ef89e493e5b8ea5c114d61fe7856f0a8 = cache_frame_ef89e493e5b8ea5c114d61fe7856f0a8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ef89e493e5b8ea5c114d61fe7856f0a8);
    assert(Py_REFCNT(frame_ef89e493e5b8ea5c114d61fe7856f0a8) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_qmc_engine);
        tmp_isinstance_inst_1 = par_qmc_engine;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[45]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[46]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "ooooNooo";
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
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_d);
        tmp_cmp_expr_left_1 = par_d;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_qmc_engine);
        tmp_expression_value_3 = par_qmc_engine;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[47]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_d);
        tmp_cmp_expr_right_2 = par_d;
        tmp_and_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[48];
        frame_ef89e493e5b8ea5c114d61fe7856f0a8->m_frame.f_lineno = 465;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 465;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooNooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_d);
        tmp_cmp_expr_left_3 = par_d;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        if (par_qmc_engine == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 466;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = par_qmc_engine;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[47]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_d);
        tmp_assign_source_1 = par_d;
        Py_INCREF(tmp_assign_source_1);
        condexpr_end_1:;
        {
            PyObject *old = par_d;
            assert(old != NULL);
            par_d = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_qmc_engine);
        tmp_cmp_expr_left_4 = par_qmc_engine;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_2;
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(par_d);
        tmp_cmp_expr_left_5 = par_d;
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_assign_source_2 = mod_consts[26];
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT(par_d);
        tmp_assign_source_2 = par_d;
        condexpr_end_2:;
        {
            PyObject *old = par_d;
            assert(old != NULL);
            par_d = tmp_assign_source_2;
            Py_INCREF(par_d);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[45]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_d);
        tmp_args_element_value_1 = par_d;
        frame_ef89e493e5b8ea5c114d61fe7856f0a8->m_frame.f_lineno = 469;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[50], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_qmc_engine;
            assert(old != NULL);
            par_qmc_engine = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[51];
        frame_ef89e493e5b8ea5c114d61fe7856f0a8->m_frame.f_lineno = 473;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 473;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooNooo";
        goto frame_exception_exit_1;
    }
    branch_end_3:;
    branch_end_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_tuple_arg_1;
        CHECK_OBJECT(par_size);
        tmp_tuple_arg_1 = par_size;
        tmp_assign_source_4 = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "ooooNooo";
            goto try_except_handler_2;
        }
        assert(var_tuple_size == NULL);
        var_tuple_size = tmp_assign_source_4;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_ef89e493e5b8ea5c114d61fe7856f0a8, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_ef89e493e5b8ea5c114d61fe7856f0a8, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        tmp_cmp_expr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_6 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_size);
        tmp_tuple_element_1 = par_size;
        tmp_assign_source_5 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_5, 0, tmp_tuple_element_1);
        assert(var_tuple_size == NULL);
        var_tuple_size = tmp_assign_source_5;
    }
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 477;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ef89e493e5b8ea5c114d61fe7856f0a8->m_frame) frame_ef89e493e5b8ea5c114d61fe7856f0a8->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooNooo";
    goto try_except_handler_3;
    branch_end_4:;
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
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_2;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_3;
        if (par_qmc_engine == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 483;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = par_qmc_engine;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[52]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 483;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tuple_size);
        tmp_args_element_value_3 = var_tuple_size;
        frame_ef89e493e5b8ea5c114d61fe7856f0a8->m_frame.f_lineno = 483;
        tmp_or_left_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[5], tmp_args_element_value_3);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 483;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 483;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[26];
        Py_INCREF(tmp_or_right_value_1);
        tmp_args_element_value_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_args_element_value_2 = tmp_or_left_value_1;
        or_end_1:;
        frame_ef89e493e5b8ea5c114d61fe7856f0a8->m_frame.f_lineno = 483;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        assert(var_uniform == NULL);
        var_uniform = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[34]);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_uniform);
        tmp_mult_expr_left_1 = var_uniform;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[35]);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 485;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[34]);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 485;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 485;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 485;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_uniform;
            assert(old != NULL);
            var_uniform = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_uniform);
        tmp_args_element_value_4 = var_uniform;
        frame_ef89e493e5b8ea5c114d61fe7856f0a8->m_frame.f_lineno = 486;
        tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[42], tmp_args_element_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        assert(var_qrvs == NULL);
        var_qrvs = tmp_assign_source_8;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(par_size);
        tmp_cmp_expr_left_7 = par_size;
        tmp_cmp_expr_right_7 = Py_None;
        tmp_condition_result_7 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_expression_value_10;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_qrvs);
        tmp_called_instance_4 = var_qrvs;
        frame_ef89e493e5b8ea5c114d61fe7856f0a8->m_frame.f_lineno = 490;
        tmp_expression_value_10 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[53]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[54];
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        if (par_d == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 492;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_8 = par_d;
        tmp_cmp_expr_right_8 = mod_consts[26];
        tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(var_qrvs);
        tmp_called_instance_5 = var_qrvs;
        CHECK_OBJECT(var_tuple_size);
        tmp_args_element_value_5 = var_tuple_size;
        frame_ef89e493e5b8ea5c114d61fe7856f0a8->m_frame.f_lineno = 493;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[27], tmp_args_element_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_qrvs);
        tmp_expression_value_11 = var_qrvs;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[27]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tuple_size);
        tmp_add_expr_left_2 = var_tuple_size;
        if (par_d == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 495;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = par_d;
        tmp_add_expr_right_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_add_expr_right_2, 0, tmp_tuple_element_2);
        tmp_args_element_value_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_TUPLE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 495;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        frame_ef89e493e5b8ea5c114d61fe7856f0a8->m_frame.f_lineno = 495;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_6:;
    branch_end_5:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ef89e493e5b8ea5c114d61fe7856f0a8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ef89e493e5b8ea5c114d61fe7856f0a8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ef89e493e5b8ea5c114d61fe7856f0a8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ef89e493e5b8ea5c114d61fe7856f0a8,
        type_description_1,
        par_self,
        par_size,
        par_d,
        par_qmc_engine,
        NULL,
        var_tuple_size,
        var_uniform,
        var_qrvs
    );


    // Release cached frame if used for exception.
    if (frame_ef89e493e5b8ea5c114d61fe7856f0a8 == cache_frame_ef89e493e5b8ea5c114d61fe7856f0a8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ef89e493e5b8ea5c114d61fe7856f0a8);
        cache_frame_ef89e493e5b8ea5c114d61fe7856f0a8 = NULL;
    }

    assertFrameObject(frame_ef89e493e5b8ea5c114d61fe7856f0a8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_d);
    par_d = NULL;
    Py_XDECREF(par_qmc_engine);
    par_qmc_engine = NULL;
    CHECK_OBJECT(var_tuple_size);
    Py_DECREF(var_tuple_size);
    var_tuple_size = NULL;
    CHECK_OBJECT(var_uniform);
    Py_DECREF(var_uniform);
    var_uniform = NULL;
    Py_XDECREF(var_qrvs);
    var_qrvs = NULL;
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

    Py_XDECREF(par_d);
    par_d = NULL;
    Py_XDECREF(par_qmc_engine);
    par_qmc_engine = NULL;
    Py_XDECREF(var_tuple_size);
    var_tuple_size = NULL;
    Py_XDECREF(var_uniform);
    var_uniform = NULL;
    Py_XDECREF(var_qrvs);
    var_qrvs = NULL;
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
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$stats$_rvs_sampling$$$function__6__fni_input_validation(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_dist = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_tol = python_pars[1];
    PyObject *par_max_intervals = python_pars[2];
    PyObject *var_has_pdf = NULL;
    PyObject *var_has_cdf = NULL;
    PyObject *var_has_ppf = NULL;
    PyObject *var_has_isf = NULL;
    PyObject *var_isf = NULL;
    struct Nuitka_FrameObject *frame_f30ccd9d1f21167b43ff12151d10f788;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f30ccd9d1f21167b43ff12151d10f788 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f30ccd9d1f21167b43ff12151d10f788)) {
        Py_XDECREF(cache_frame_f30ccd9d1f21167b43ff12151d10f788);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f30ccd9d1f21167b43ff12151d10f788 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f30ccd9d1f21167b43ff12151d10f788 = MAKE_FUNCTION_FRAME(codeobj_f30ccd9d1f21167b43ff12151d10f788, module_scipy$stats$_rvs_sampling, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f30ccd9d1f21167b43ff12151d10f788->m_type_description == NULL);
    frame_f30ccd9d1f21167b43ff12151d10f788 = cache_frame_f30ccd9d1f21167b43ff12151d10f788;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f30ccd9d1f21167b43ff12151d10f788);
    assert(Py_REFCNT(frame_f30ccd9d1f21167b43ff12151d10f788) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_dist));
        tmp_expression_value_1 = Nuitka_Cell_GET(par_dist);
        tmp_attribute_value_1 = mod_consts[20];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[56]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(Nuitka_Cell_GET(par_dist));
        tmp_expression_value_2 = Nuitka_Cell_GET(par_dist);
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[20]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }
        frame_f30ccd9d1f21167b43ff12151d10f788->m_frame.f_lineno = 504;
        tmp_and_right_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF(tmp_and_left_value_1);
        tmp_assign_source_1 = tmp_and_left_value_1;
        and_end_1:;
        assert(var_has_pdf == NULL);
        var_has_pdf = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_attribute_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_4;
        if (Nuitka_Cell_GET(par_dist) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 505;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(par_dist);
        tmp_attribute_value_2 = mod_consts[58];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_3, tmp_attribute_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[56]);
        assert(tmp_called_value_2 != NULL);
        if (Nuitka_Cell_GET(par_dist) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 505;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(par_dist);
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[58]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }
        frame_f30ccd9d1f21167b43ff12151d10f788->m_frame.f_lineno = 505;
        tmp_and_right_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_and_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        Py_INCREF(tmp_and_left_value_2);
        tmp_assign_source_2 = tmp_and_left_value_2;
        and_end_2:;
        assert(var_has_cdf == NULL);
        var_has_cdf = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        int tmp_and_left_truth_3;
        PyObject *tmp_and_left_value_3;
        PyObject *tmp_and_right_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_attribute_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_6;
        if (Nuitka_Cell_GET(par_dist) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 506;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(par_dist);
        tmp_attribute_value_3 = mod_consts[42];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_5, tmp_attribute_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_and_left_truth_3 = CHECK_IF_TRUE(tmp_and_left_value_3);
        if (tmp_and_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[56]);
        assert(tmp_called_value_3 != NULL);
        if (Nuitka_Cell_GET(par_dist) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 506;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = Nuitka_Cell_GET(par_dist);
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[42]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }
        frame_f30ccd9d1f21167b43ff12151d10f788->m_frame.f_lineno = 506;
        tmp_and_right_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_and_right_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        Py_INCREF(tmp_and_left_value_3);
        tmp_assign_source_3 = tmp_and_left_value_3;
        and_end_3:;
        assert(var_has_ppf == NULL);
        var_has_ppf = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        int tmp_and_left_truth_4;
        PyObject *tmp_and_left_value_4;
        PyObject *tmp_and_right_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_attribute_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_8;
        if (Nuitka_Cell_GET(par_dist) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 507;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(par_dist);
        tmp_attribute_value_4 = mod_consts[59];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_7, tmp_attribute_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_and_left_truth_4 = CHECK_IF_TRUE(tmp_and_left_value_4);
        if (tmp_and_left_truth_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts[56]);
        assert(tmp_called_value_4 != NULL);
        if (Nuitka_Cell_GET(par_dist) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 507;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(par_dist);
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[59]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }
        frame_f30ccd9d1f21167b43ff12151d10f788->m_frame.f_lineno = 507;
        tmp_and_right_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_and_right_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        Py_INCREF(tmp_and_left_value_4);
        tmp_assign_source_4 = tmp_and_left_value_4;
        and_end_4:;
        assert(var_has_isf == NULL);
        var_has_isf = tmp_assign_source_4;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        int tmp_and_left_truth_5;
        PyObject *tmp_and_left_value_5;
        PyObject *tmp_and_right_value_5;
        int tmp_and_left_truth_6;
        PyObject *tmp_and_left_value_6;
        PyObject *tmp_and_right_value_6;
        CHECK_OBJECT(var_has_pdf);
        tmp_and_left_value_5 = var_has_pdf;
        tmp_and_left_truth_5 = CHECK_IF_TRUE(tmp_and_left_value_5);
        if (tmp_and_left_truth_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_5 == 1) {
            goto and_right_5;
        } else {
            goto and_left_5;
        }
        and_right_5:;
        CHECK_OBJECT(var_has_cdf);
        tmp_and_left_value_6 = var_has_cdf;
        tmp_and_left_truth_6 = CHECK_IF_TRUE(tmp_and_left_value_6);
        if (tmp_and_left_truth_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_6 == 1) {
            goto and_right_6;
        } else {
            goto and_left_6;
        }
        and_right_6:;
        CHECK_OBJECT(var_has_ppf);
        tmp_and_right_value_6 = var_has_ppf;
        tmp_and_right_value_5 = tmp_and_right_value_6;
        goto and_end_6;
        and_left_6:;
        tmp_and_right_value_5 = tmp_and_left_value_6;
        and_end_6:;
        tmp_operand_value_1 = tmp_and_right_value_5;
        goto and_end_5;
        and_left_5:;
        tmp_operand_value_1 = tmp_and_left_value_5;
        and_end_5:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "cooooooo";
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
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[60];
        frame_f30ccd9d1f21167b43ff12151d10f788->m_frame.f_lineno = 510;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 510;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "cooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(var_has_isf);
        tmp_operand_value_2 = var_has_isf;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "cooooooo";
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
        PyObject *tmp_assign_source_5;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_dist;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_5 = MAKE_FUNCTION_scipy$stats$_rvs_sampling$$$function__6__fni_input_validation$$$function__1_isf(tmp_closure_1);

        assert(var_isf == NULL);
        var_isf = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_isf);
        tmp_assattr_value_1 = var_isf;
        if (Nuitka_Cell_GET(par_dist) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 515;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(par_dist);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[59], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_float_arg_1;
        CHECK_OBJECT(par_tol);
        tmp_float_arg_1 = par_tol;
        tmp_assign_source_6 = TO_FLOAT(tmp_float_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_tol;
            assert(old != NULL);
            par_tol = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_max_intervals);
        tmp_int_arg_1 = par_max_intervals;
        tmp_cmp_expr_left_1 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_max_intervals);
        tmp_cmp_expr_right_1 = par_max_intervals;
        tmp_or_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_max_intervals);
        tmp_cmp_expr_left_2 = par_max_intervals;
        tmp_cmp_expr_right_2 = mod_consts[26];
        tmp_or_right_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_3 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[62];
        frame_f30ccd9d1f21167b43ff12151d10f788->m_frame.f_lineno = 520;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 520;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "cooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_tuple_element_1;
        if (Nuitka_Cell_GET(par_dist) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 522;
            type_description_1 = "cooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(par_dist);
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_tol);
        tmp_tuple_element_1 = par_tol;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_max_intervals);
        tmp_tuple_element_1 = par_max_intervals;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_f30ccd9d1f21167b43ff12151d10f788, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f30ccd9d1f21167b43ff12151d10f788->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f30ccd9d1f21167b43ff12151d10f788, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f30ccd9d1f21167b43ff12151d10f788,
        type_description_1,
        par_dist,
        par_tol,
        par_max_intervals,
        var_has_pdf,
        var_has_cdf,
        var_has_ppf,
        var_has_isf,
        var_isf
    );


    // Release cached frame if used for exception.
    if (frame_f30ccd9d1f21167b43ff12151d10f788 == cache_frame_f30ccd9d1f21167b43ff12151d10f788) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f30ccd9d1f21167b43ff12151d10f788);
        cache_frame_f30ccd9d1f21167b43ff12151d10f788 = NULL;
    }

    assertFrameObject(frame_f30ccd9d1f21167b43ff12151d10f788);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);
    par_tol = NULL;
    CHECK_OBJECT(var_has_pdf);
    Py_DECREF(var_has_pdf);
    var_has_pdf = NULL;
    CHECK_OBJECT(var_has_cdf);
    Py_DECREF(var_has_cdf);
    var_has_cdf = NULL;
    CHECK_OBJECT(var_has_ppf);
    Py_DECREF(var_has_ppf);
    var_has_ppf = NULL;
    CHECK_OBJECT(var_has_isf);
    Py_DECREF(var_has_isf);
    var_has_isf = NULL;
    Py_XDECREF(var_isf);
    var_isf = NULL;
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

    Py_XDECREF(par_tol);
    par_tol = NULL;
    Py_XDECREF(var_has_pdf);
    var_has_pdf = NULL;
    Py_XDECREF(var_has_cdf);
    var_has_cdf = NULL;
    Py_XDECREF(var_has_ppf);
    var_has_ppf = NULL;
    Py_XDECREF(var_has_isf);
    var_has_isf = NULL;
    Py_XDECREF(var_isf);
    var_isf = NULL;
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
    CHECK_OBJECT(par_dist);
    Py_DECREF(par_dist);
    CHECK_OBJECT(par_max_intervals);
    Py_DECREF(par_max_intervals);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_dist);
    Py_DECREF(par_dist);
    CHECK_OBJECT(par_max_intervals);
    Py_DECREF(par_max_intervals);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$stats$_rvs_sampling$$$function__6__fni_input_validation$$$function__1_isf(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_7adff293d5950550f0e54d63c30a97ed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7adff293d5950550f0e54d63c30a97ed = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7adff293d5950550f0e54d63c30a97ed)) {
        Py_XDECREF(cache_frame_7adff293d5950550f0e54d63c30a97ed);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7adff293d5950550f0e54d63c30a97ed == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7adff293d5950550f0e54d63c30a97ed = MAKE_FUNCTION_FRAME(codeobj_7adff293d5950550f0e54d63c30a97ed, module_scipy$stats$_rvs_sampling, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7adff293d5950550f0e54d63c30a97ed->m_type_description == NULL);
    frame_7adff293d5950550f0e54d63c30a97ed = cache_frame_7adff293d5950550f0e54d63c30a97ed;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7adff293d5950550f0e54d63c30a97ed);
    assert(Py_REFCNT(frame_7adff293d5950550f0e54d63c30a97ed) == 2);

    // Framed code:
    {
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_sub_expr_left_1 = mod_consts[26];
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 514;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_7adff293d5950550f0e54d63c30a97ed->m_frame.f_lineno = 514;
        tmp_sub_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[42], tmp_args_element_value_1);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7adff293d5950550f0e54d63c30a97ed, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7adff293d5950550f0e54d63c30a97ed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7adff293d5950550f0e54d63c30a97ed, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7adff293d5950550f0e54d63c30a97ed,
        type_description_1,
        par_x,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_7adff293d5950550f0e54d63c30a97ed == cache_frame_7adff293d5950550f0e54d63c30a97ed) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7adff293d5950550f0e54d63c30a97ed);
        cache_frame_7adff293d5950550f0e54d63c30a97ed = NULL;
    }

    assertFrameObject(frame_7adff293d5950550f0e54d63c30a97ed);

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


static PyObject *impl_scipy$stats$_rvs_sampling$$$function__7__fast_numerical_inverse(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dist = python_pars[0];
    PyObject *par_tol = python_pars[1];
    PyObject *par_max_intervals = python_pars[2];
    PyObject *var_p = NULL;
    PyObject *var_u = NULL;
    PyObject *var_i = NULL;
    PyObject *var_p_mid = NULL;
    PyObject *var_u_mid = NULL;
    PyObject *var_i_sort = NULL;
    PyObject *var_f = NULL;
    PyObject *var_H = NULL;
    PyObject *var_eu = NULL;
    PyObject *var_f_mid = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_9108603d8041d31045a23f6dfaa8b377;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9108603d8041d31045a23f6dfaa8b377 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9108603d8041d31045a23f6dfaa8b377)) {
        Py_XDECREF(cache_frame_9108603d8041d31045a23f6dfaa8b377);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9108603d8041d31045a23f6dfaa8b377 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9108603d8041d31045a23f6dfaa8b377 = MAKE_FUNCTION_FRAME(codeobj_9108603d8041d31045a23f6dfaa8b377, module_scipy$stats$_rvs_sampling, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9108603d8041d31045a23f6dfaa8b377->m_type_description == NULL);
    frame_9108603d8041d31045a23f6dfaa8b377 = cache_frame_9108603d8041d31045a23f6dfaa8b377;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9108603d8041d31045a23f6dfaa8b377);
    assert(Py_REFCNT(frame_9108603d8041d31045a23f6dfaa8b377) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_1 = "oooooooooooNoo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_dist);
        tmp_args_element_value_1 = par_dist;
        CHECK_OBJECT(par_tol);
        tmp_args_element_value_2 = par_tol;
        CHECK_OBJECT(par_max_intervals);
        tmp_args_element_value_3 = par_max_intervals;
        frame_9108603d8041d31045a23f6dfaa8b377->m_frame.f_lineno = 558;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_1 = "oooooooooooNoo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_1 = "oooooooooooNoo";
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


            type_description_1 = "oooooooooooNoo";
            exception_lineno = 558;
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


            type_description_1 = "oooooooooooNoo";
            exception_lineno = 558;
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


            type_description_1 = "oooooooooooNoo";
            exception_lineno = 558;
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

                    type_description_1 = "oooooooooooNoo";
                    exception_lineno = 558;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[65];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooNoo";
            exception_lineno = 558;
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
        {
            PyObject *old = par_dist;
            assert(old != NULL);
            par_dist = tmp_assign_source_5;
            Py_INCREF(par_dist);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_tol;
            assert(old != NULL);
            par_tol = tmp_assign_source_6;
            Py_INCREF(par_tol);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = par_max_intervals;
            assert(old != NULL);
            par_max_intervals = tmp_assign_source_7;
            Py_INCREF(par_max_intervals);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[66]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dist);
        tmp_expression_value_2 = par_dist;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[42]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 563;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_tol);
        tmp_truediv_expr_left_1 = par_tol;
        tmp_truediv_expr_right_1 = mod_consts[67];
        tmp_args_element_value_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 563;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        frame_9108603d8041d31045a23f6dfaa8b377->m_frame.f_lineno = 563;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 563;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_truediv_expr_left_2;
            PyObject *tmp_truediv_expr_right_2;
            PyList_SET_ITEM(tmp_args_element_value_4, 0, tmp_list_element_1);
            CHECK_OBJECT(par_dist);
            tmp_expression_value_3 = par_dist;
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[59]);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 563;
                type_description_1 = "oooooooooooNoo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(par_tol);
            tmp_truediv_expr_left_2 = par_tol;
            tmp_truediv_expr_right_2 = mod_consts[67];
            tmp_args_element_value_6 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
            if (tmp_args_element_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 563;
                type_description_1 = "oooooooooooNoo";
                goto list_build_exception_1;
            }
            frame_9108603d8041d31045a23f6dfaa8b377->m_frame.f_lineno = 563;
            tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 563;
                type_description_1 = "oooooooooooNoo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_4, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        frame_9108603d8041d31045a23f6dfaa8b377->m_frame.f_lineno = 563;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        assert(var_p == NULL);
        var_p = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(par_dist);
        tmp_called_instance_1 = par_dist;
        CHECK_OBJECT(var_p);
        tmp_args_element_value_7 = var_p;
        frame_9108603d8041d31045a23f6dfaa8b377->m_frame.f_lineno = 567;
        tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[58], tmp_args_element_value_7);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        assert(var_u == NULL);
        var_u = tmp_assign_source_9;
    }
    loop_start_1:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        if (var_p == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 568;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = var_p;
        tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[69]);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[26];
        tmp_cmp_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 568;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[70]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 568;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        if (par_max_intervals == NULL) {
            Py_DECREF(tmp_cmp_expr_left_1);
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 568;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_truediv_expr_left_3 = par_max_intervals;
        tmp_truediv_expr_right_3 = mod_consts[19];
        tmp_args_element_value_8 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 568;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        frame_9108603d8041d31045a23f6dfaa8b377->m_frame.f_lineno = 568;
        tmp_cmp_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 568;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "oooooooooooNoo";
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
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[72]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 569;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[73]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 569;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        if (var_u == NULL) {
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 569;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_10 = var_u;
        frame_9108603d8041d31045a23f6dfaa8b377->m_frame.f_lineno = 569;
        tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_7);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 569;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[75];
        tmp_args_element_value_9 = RICH_COMPARE_GT_OBJECT_OBJECT_FLOAT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 569;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        frame_9108603d8041d31045a23f6dfaa8b377->m_frame.f_lineno = 569;
        tmp_expression_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[1];
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(var_i);
        tmp_expression_value_9 = var_i;
        tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[69]);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "oooooooooooNoo";
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
    goto loop_end_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_truediv_expr_left_4;
        PyObject *tmp_truediv_expr_right_4;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        if (var_p == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 573;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = var_p;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_2 = var_i;
        tmp_add_expr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        if (var_p == NULL) {
            Py_DECREF(tmp_add_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 573;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = var_p;
        CHECK_OBJECT(var_i);
        tmp_add_expr_left_2 = var_i;
        tmp_add_expr_right_2 = mod_consts[26];
        tmp_subscript_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_subscript_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 573;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 573;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_truediv_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_4 = mod_consts[19];
        tmp_assign_source_11 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
        Py_DECREF(tmp_truediv_expr_left_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_p_mid;
            var_p_mid = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_11;
        if (par_dist == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 576;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = par_dist;
        CHECK_OBJECT(var_p_mid);
        tmp_args_element_value_11 = var_p_mid;
        frame_9108603d8041d31045a23f6dfaa8b377->m_frame.f_lineno = 576;
        tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[58], tmp_args_element_value_11);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_u_mid;
            var_u_mid = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[76]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        if (var_p == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 577;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_p;
        tmp_args_element_value_12 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_12, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_p_mid);
        tmp_tuple_element_1 = var_p_mid;
        PyTuple_SET_ITEM0(tmp_args_element_value_12, 1, tmp_tuple_element_1);
        frame_9108603d8041d31045a23f6dfaa8b377->m_frame.f_lineno = 577;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_p;
            var_p = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_tuple_element_2;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[76]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        if (var_u == NULL) {
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 578;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_u;
        tmp_args_element_value_13 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_13, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_u_mid);
        tmp_tuple_element_2 = var_u_mid;
        PyTuple_SET_ITEM0(tmp_args_element_value_13, 1, tmp_tuple_element_2);
        frame_9108603d8041d31045a23f6dfaa8b377->m_frame.f_lineno = 578;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_u;
            var_u = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_14;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_p);
        tmp_args_element_value_14 = var_p;
        frame_9108603d8041d31045a23f6dfaa8b377->m_frame.f_lineno = 579;
        tmp_assign_source_15 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[77], tmp_args_element_value_14);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_i_sort;
            var_i_sort = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_p);
        tmp_expression_value_14 = var_p;
        CHECK_OBJECT(var_i_sort);
        tmp_subscript_value_4 = var_i_sort;
        tmp_assign_source_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_4);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_p;
            assert(old != NULL);
            var_p = tmp_assign_source_16;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(var_u);
        tmp_expression_value_15 = var_u;
        CHECK_OBJECT(var_i_sort);
        tmp_subscript_value_5 = var_i_sort;
        tmp_assign_source_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_5);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 581;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_u;
            assert(old != NULL);
            var_u = tmp_assign_source_17;
            Py_DECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 568;
        type_description_1 = "oooooooooooNoo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_15;
        if (par_dist == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 586;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_16 = par_dist;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[58]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 586;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        if (var_p == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 586;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_15 = var_p;
        frame_9108603d8041d31045a23f6dfaa8b377->m_frame.f_lineno = 586;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_10);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 586;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_u;
            var_u = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_16;
        if (par_dist == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 587;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_17 = par_dist;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[20]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        if (var_p == NULL) {
            Py_DECREF(tmp_called_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 587;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_16 = var_p;
        frame_9108603d8041d31045a23f6dfaa8b377->m_frame.f_lineno = 587;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_11);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        assert(var_f == NULL);
        var_f = tmp_assign_source_19;
    }
    loop_start_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_expression_value_18;
        if (var_p == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 588;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_18 = var_p;
        tmp_sub_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[69]);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 588;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_2 = mod_consts[26];
        tmp_cmp_expr_left_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 588;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        if (par_max_intervals == NULL) {
            Py_DECREF(tmp_cmp_expr_left_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 588;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_3 = par_max_intervals;
        tmp_operand_value_3 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 588;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 588;
            type_description_1 = "oooooooooooNoo";
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
    goto loop_end_2;
    branch_no_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_truediv_expr_left_5;
        PyObject *tmp_truediv_expr_right_5;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;
            type_description_1 = "oooooooooooNoo";
            goto try_except_handler_4;
        }
        if (var_u == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 591;
            type_description_1 = "oooooooooooNoo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_17 = var_u;
        if (var_p == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 591;
            type_description_1 = "oooooooooooNoo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_18 = var_p;
        tmp_truediv_expr_left_5 = mod_consts[26];
        if (var_f == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 591;
            type_description_1 = "oooooooooooNoo";
            goto try_except_handler_4;
        }

        tmp_truediv_expr_right_5 = var_f;
        tmp_args_element_value_19 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_truediv_expr_left_5, tmp_truediv_expr_right_5);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;
            type_description_1 = "oooooooooooNoo";
            goto try_except_handler_4;
        }
        frame_9108603d8041d31045a23f6dfaa8b377->m_frame.f_lineno = 591;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_args_element_value_19);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;
            type_description_1 = "oooooooooooNoo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_H;
            var_H = tmp_assign_source_20;
            Py_XDECREF(old);
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_9108603d8041d31045a23f6dfaa8b377, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_9108603d8041d31045a23f6dfaa8b377, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_4 = PyExc_ValueError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[80];
        frame_9108603d8041d31045a23f6dfaa8b377->m_frame.f_lineno = 597;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 597;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooNoo";
        goto try_except_handler_5;
    }
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 590;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9108603d8041d31045a23f6dfaa8b377->m_frame) frame_9108603d8041d31045a23f6dfaa8b377->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooNoo";
    goto try_except_handler_5;
    branch_end_4:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_truediv_expr_left_6;
        PyObject *tmp_truediv_expr_right_6;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_7;
        if (var_u == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 601;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_19 = var_u;
        tmp_subscript_value_6 = mod_consts[81];
        tmp_add_expr_left_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_6);
        if (tmp_add_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 601;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        if (var_u == NULL) {
            Py_DECREF(tmp_add_expr_left_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 601;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_20 = var_u;
        tmp_subscript_value_7 = mod_consts[82];
        tmp_add_expr_right_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_7);
        if (tmp_add_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 601;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_truediv_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 601;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_6 = mod_consts[19];
        tmp_assign_source_21 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_6, tmp_truediv_expr_right_6);
        Py_DECREF(tmp_truediv_expr_left_6);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 601;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_u_mid;
            var_u_mid = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_22;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 602;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[83]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 602;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        if (par_dist == NULL) {
            Py_DECREF(tmp_called_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 602;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_22 = par_dist;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[58]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 602;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_H);
        tmp_called_value_15 = var_H;
        CHECK_OBJECT(var_u_mid);
        tmp_args_element_value_22 = var_u_mid;
        frame_9108603d8041d31045a23f6dfaa8b377->m_frame.f_lineno = 602;
        tmp_args_element_value_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_22);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 602;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        frame_9108603d8041d31045a23f6dfaa8b377->m_frame.f_lineno = 602;
        tmp_sub_expr_left_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_21);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_sub_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 602;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_u_mid);
        tmp_sub_expr_right_3 = var_u_mid;
        tmp_args_element_value_20 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_left_3);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 602;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        frame_9108603d8041d31045a23f6dfaa8b377->m_frame.f_lineno = 602;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 602;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_eu;
            var_eu = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_subscript_value_8;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 604;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[72]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 604;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_eu);
        tmp_cmp_expr_left_5 = var_eu;
        CHECK_OBJECT(par_tol);
        tmp_cmp_expr_right_5 = par_tol;
        tmp_args_element_value_23 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 604;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        frame_9108603d8041d31045a23f6dfaa8b377->m_frame.f_lineno = 604;
        tmp_expression_value_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_23);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 604;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_8 = mod_consts[1];
        tmp_assign_source_23 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_23, tmp_subscript_value_8, 0);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 604;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_25;
        CHECK_OBJECT(var_i);
        tmp_expression_value_25 = var_i;
        tmp_operand_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[69]);
        if (tmp_operand_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 605;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 605;
            type_description_1 = "oooooooooooNoo";
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
    goto loop_end_2;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_truediv_expr_left_7;
        PyObject *tmp_truediv_expr_right_7;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        if (var_p == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 608;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_26 = var_p;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_9 = var_i;
        tmp_add_expr_left_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_9);
        if (tmp_add_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 608;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        if (var_p == NULL) {
            Py_DECREF(tmp_add_expr_left_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 608;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_27 = var_p;
        CHECK_OBJECT(var_i);
        tmp_add_expr_left_5 = var_i;
        tmp_add_expr_right_5 = mod_consts[26];
        tmp_subscript_value_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_5, tmp_add_expr_right_5);
        if (tmp_subscript_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_4);

            exception_lineno = 608;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_10);
        Py_DECREF(tmp_subscript_value_10);
        if (tmp_add_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_4);

            exception_lineno = 608;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_left_4);
        Py_DECREF(tmp_add_expr_right_4);
        if (tmp_truediv_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 608;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_7 = mod_consts[19];
        tmp_assign_source_24 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_7, tmp_truediv_expr_right_7);
        Py_DECREF(tmp_truediv_expr_left_7);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 608;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_p_mid;
            var_p_mid = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_24;
        if (par_dist == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 609;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = par_dist;
        CHECK_OBJECT(var_p_mid);
        tmp_args_element_value_24 = var_p_mid;
        frame_9108603d8041d31045a23f6dfaa8b377->m_frame.f_lineno = 609;
        tmp_assign_source_25 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[58], tmp_args_element_value_24);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 609;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_u_mid;
            assert(old != NULL);
            var_u_mid = tmp_assign_source_25;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_25;
        if (par_dist == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 610;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = par_dist;
        CHECK_OBJECT(var_p_mid);
        tmp_args_element_value_25 = var_p_mid;
        frame_9108603d8041d31045a23f6dfaa8b377->m_frame.f_lineno = 610;
        tmp_assign_source_26 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[20], tmp_args_element_value_25);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_f_mid;
            var_f_mid = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_tuple_element_3;
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[76]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        if (var_p == NULL) {
            Py_DECREF(tmp_called_value_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 611;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = var_p;
        tmp_args_element_value_26 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_26, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_p_mid);
        tmp_tuple_element_3 = var_p_mid;
        PyTuple_SET_ITEM0(tmp_args_element_value_26, 1, tmp_tuple_element_3);
        frame_9108603d8041d31045a23f6dfaa8b377->m_frame.f_lineno = 611;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_26);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_p;
            var_p = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_tuple_element_4;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 612;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[76]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 612;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        if (var_u == NULL) {
            Py_DECREF(tmp_called_value_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 612;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_4 = var_u;
        tmp_args_element_value_27 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_27, 0, tmp_tuple_element_4);
        CHECK_OBJECT(var_u_mid);
        tmp_tuple_element_4 = var_u_mid;
        PyTuple_SET_ITEM0(tmp_args_element_value_27, 1, tmp_tuple_element_4);
        frame_9108603d8041d31045a23f6dfaa8b377->m_frame.f_lineno = 612;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_27);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 612;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_u;
            var_u = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_tuple_element_5;
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 613;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[76]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 613;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        if (var_f == NULL) {
            Py_DECREF(tmp_called_value_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 613;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_5 = var_f;
        tmp_args_element_value_28 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_28, 0, tmp_tuple_element_5);
        CHECK_OBJECT(var_f_mid);
        tmp_tuple_element_5 = var_f_mid;
        PyTuple_SET_ITEM0(tmp_args_element_value_28, 1, tmp_tuple_element_5);
        frame_9108603d8041d31045a23f6dfaa8b377->m_frame.f_lineno = 613;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_28);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 613;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_f;
            var_f = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_29;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_p);
        tmp_args_element_value_29 = var_p;
        frame_9108603d8041d31045a23f6dfaa8b377->m_frame.f_lineno = 614;
        tmp_assign_source_30 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[77], tmp_args_element_value_29);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 614;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_i_sort;
            var_i_sort = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_11;
        CHECK_OBJECT(var_p);
        tmp_expression_value_31 = var_p;
        CHECK_OBJECT(var_i_sort);
        tmp_subscript_value_11 = var_i_sort;
        tmp_assign_source_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_11);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_p;
            assert(old != NULL);
            var_p = tmp_assign_source_31;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_subscript_value_12;
        CHECK_OBJECT(var_u);
        tmp_expression_value_32 = var_u;
        CHECK_OBJECT(var_i_sort);
        tmp_subscript_value_12 = var_i_sort;
        tmp_assign_source_32 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_12);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 616;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_u;
            assert(old != NULL);
            var_u = tmp_assign_source_32;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_subscript_value_13;
        CHECK_OBJECT(var_f);
        tmp_expression_value_33 = var_f;
        CHECK_OBJECT(var_i_sort);
        tmp_subscript_value_13 = var_i_sort;
        tmp_assign_source_33 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_13);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 617;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_f;
            assert(old != NULL);
            var_f = tmp_assign_source_33;
            Py_DECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 588;
        type_description_1 = "oooooooooooNoo";
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    {
        PyObject *tmp_tuple_element_6;
        if (var_H == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 621;
            type_description_1 = "oooooooooooNoo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_6 = var_H;
        tmp_return_value = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_sub_expr_left_4;
            PyObject *tmp_sub_expr_right_4;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_subscript_value_15;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_6);
            if (var_eu == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 621;
                type_description_1 = "oooooooooooNoo";
                goto tuple_build_exception_1;
            }

            tmp_tuple_element_6 = var_eu;
            PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_6);
            if (var_p == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 621;
                type_description_1 = "oooooooooooNoo";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_34 = var_p;
            tmp_sub_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[69]);
            if (tmp_sub_expr_left_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 621;
                type_description_1 = "oooooooooooNoo";
                goto tuple_build_exception_1;
            }
            tmp_sub_expr_right_4 = mod_consts[26];
            tmp_tuple_element_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
            Py_DECREF(tmp_sub_expr_left_4);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 621;
                type_description_1 = "oooooooooooNoo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_6);
            if (var_u == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 621;
                type_description_1 = "oooooooooooNoo";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_35 = var_u;
            tmp_subscript_value_14 = mod_consts[1];
            tmp_tuple_element_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_35, tmp_subscript_value_14, 0);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 621;
                type_description_1 = "oooooooooooNoo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 3, tmp_tuple_element_6);
            if (var_u == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 621;
                type_description_1 = "oooooooooooNoo";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_36 = var_u;
            tmp_subscript_value_15 = mod_consts[85];
            tmp_tuple_element_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_36, tmp_subscript_value_15, -1);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 621;
                type_description_1 = "oooooooooooNoo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 4, tmp_tuple_element_6);
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
        exception_tb = MAKE_TRACEBACK(frame_9108603d8041d31045a23f6dfaa8b377, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9108603d8041d31045a23f6dfaa8b377->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9108603d8041d31045a23f6dfaa8b377, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9108603d8041d31045a23f6dfaa8b377,
        type_description_1,
        par_dist,
        par_tol,
        par_max_intervals,
        var_p,
        var_u,
        var_i,
        var_p_mid,
        var_u_mid,
        var_i_sort,
        var_f,
        var_H,
        NULL,
        var_eu,
        var_f_mid
    );


    // Release cached frame if used for exception.
    if (frame_9108603d8041d31045a23f6dfaa8b377 == cache_frame_9108603d8041d31045a23f6dfaa8b377) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9108603d8041d31045a23f6dfaa8b377);
        cache_frame_9108603d8041d31045a23f6dfaa8b377 = NULL;
    }

    assertFrameObject(frame_9108603d8041d31045a23f6dfaa8b377);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_dist);
    par_dist = NULL;
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);
    par_tol = NULL;
    Py_XDECREF(par_max_intervals);
    par_max_intervals = NULL;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_u);
    var_u = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_p_mid);
    var_p_mid = NULL;
    Py_XDECREF(var_u_mid);
    var_u_mid = NULL;
    Py_XDECREF(var_i_sort);
    var_i_sort = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_H);
    var_H = NULL;
    Py_XDECREF(var_eu);
    var_eu = NULL;
    Py_XDECREF(var_f_mid);
    var_f_mid = NULL;
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

    Py_XDECREF(par_dist);
    par_dist = NULL;
    Py_XDECREF(par_tol);
    par_tol = NULL;
    Py_XDECREF(par_max_intervals);
    par_max_intervals = NULL;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_u);
    var_u = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_p_mid);
    var_p_mid = NULL;
    Py_XDECREF(var_u_mid);
    var_u_mid = NULL;
    Py_XDECREF(var_i_sort);
    var_i_sort = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_H);
    var_H = NULL;
    Py_XDECREF(var_eu);
    var_eu = NULL;
    Py_XDECREF(var_f_mid);
    var_f_mid = NULL;
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



static PyObject *MAKE_FUNCTION_scipy$stats$_rvs_sampling$$$function__1_rvs_ratio_uniforms(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$stats$_rvs_sampling$$$function__1_rvs_ratio_uniforms,
        mod_consts[101],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0075e695ab3b9eb0bcd7c7042b98ce04,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$stats$_rvs_sampling,
        mod_consts[28],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$stats$_rvs_sampling$$$function__2___init__(PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$stats$_rvs_sampling$$$function__2___init__,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        mod_consts[109],
#endif
        codeobj_fba32a3771f34b616b5b3332bc1f9dc9,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_scipy$stats$_rvs_sampling,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$stats$_rvs_sampling$$$function__3_ppf() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$stats$_rvs_sampling$$$function__3_ppf,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        mod_consts[110],
#endif
        codeobj_cf44597026b596f717b5d7c3a038c98f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$stats$_rvs_sampling,
        mod_consts[41],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$stats$_rvs_sampling$$$function__4_rvs(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$stats$_rvs_sampling$$$function__4_rvs,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        mod_consts[113],
#endif
        codeobj_e0e9d6421a63ef16bd605e0d3945e182,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$stats$_rvs_sampling,
        mod_consts[43],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$stats$_rvs_sampling$$$function__5_qrvs(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$stats$_rvs_sampling$$$function__5_qrvs,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        codeobj_ef89e493e5b8ea5c114d61fe7856f0a8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$stats$_rvs_sampling,
        mod_consts[55],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$stats$_rvs_sampling$$$function__6__fni_input_validation() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$stats$_rvs_sampling$$$function__6__fni_input_validation,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f30ccd9d1f21167b43ff12151d10f788,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$stats$_rvs_sampling,
        mod_consts[63],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$stats$_rvs_sampling$$$function__6__fni_input_validation$$$function__1_isf(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$stats$_rvs_sampling$$$function__6__fni_input_validation$$$function__1_isf,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[61],
#endif
        codeobj_7adff293d5950550f0e54d63c30a97ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$stats$_rvs_sampling,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$stats$_rvs_sampling$$$function__7__fast_numerical_inverse(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$stats$_rvs_sampling$$$function__7__fast_numerical_inverse,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9108603d8041d31045a23f6dfaa8b377,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$stats$_rvs_sampling,
        mod_consts[86],
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

function_impl_code functable_scipy$stats$_rvs_sampling[] = {
    impl_scipy$stats$_rvs_sampling$$$function__6__fni_input_validation$$$function__1_isf,
    impl_scipy$stats$_rvs_sampling$$$function__1_rvs_ratio_uniforms,
    impl_scipy$stats$_rvs_sampling$$$function__2___init__,
    impl_scipy$stats$_rvs_sampling$$$function__3_ppf,
    impl_scipy$stats$_rvs_sampling$$$function__4_rvs,
    impl_scipy$stats$_rvs_sampling$$$function__5_qrvs,
    impl_scipy$stats$_rvs_sampling$$$function__6__fni_input_validation,
    impl_scipy$stats$_rvs_sampling$$$function__7__fast_numerical_inverse,
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

    function_impl_code *current = functable_scipy$stats$_rvs_sampling;
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

    if (offset > sizeof(functable_scipy$stats$_rvs_sampling) || offset < 0) {
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
        functable_scipy$stats$_rvs_sampling[offset],
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
        module_scipy$stats$_rvs_sampling,
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
PyObject *modulecode_scipy$stats$_rvs_sampling(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("scipy.stats._rvs_sampling");

    // Store the module for future use.
    module_scipy$stats$_rvs_sampling = module;

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
        PRINT_STRING("scipy.stats._rvs_sampling: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy.stats._rvs_sampling: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy.stats._rvs_sampling: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initscipy$stats$_rvs_sampling\n");

    moduledict_scipy$stats$_rvs_sampling = MODULE_DICT(module_scipy$stats$_rvs_sampling);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_scipy$stats$_rvs_sampling,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_scipy$stats$_rvs_sampling,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[129]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_scipy$stats$_rvs_sampling,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$stats$_rvs_sampling,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$stats$_rvs_sampling,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_scipy$stats$_rvs_sampling);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_scipy$stats$_rvs_sampling);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_b11892022628804c3ad32ebf54d13d46;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_scipy$stats$_rvs_sampling$$$class__1_NumericalInverseHermite_176 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
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
        UPDATE_STRING_DICT0(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_2);
    }
    frame_b11892022628804c3ad32ebf54d13d46 = MAKE_MODULE_FRAME(codeobj_b11892022628804c3ad32ebf54d13d46, module_scipy$stats$_rvs_sampling);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b11892022628804c3ad32ebf54d13d46);
    assert(Py_REFCNT(frame_b11892022628804c3ad32ebf54d13d46) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[90], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[91], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[93];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_scipy$stats$_rvs_sampling;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[1];
        frame_b11892022628804c3ad32ebf54d13d46->m_frame.f_lineno = 2;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[94];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_scipy$stats$_rvs_sampling;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[95];
        tmp_level_value_2 = mod_consts[1];
        frame_b11892022628804c3ad32ebf54d13d46->m_frame.f_lineno = 3;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_scipy$stats$_rvs_sampling,
                mod_consts[6],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[6]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[96];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_scipy$stats$_rvs_sampling;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[97];
        tmp_level_value_3 = mod_consts[1];
        frame_b11892022628804c3ad32ebf54d13d46->m_frame.f_lineno = 4;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_scipy$stats$_rvs_sampling,
                mod_consts[78],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[78]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[98];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_scipy$stats$_rvs_sampling;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[99];
        tmp_level_value_4 = mod_consts[1];
        frame_b11892022628804c3ad32ebf54d13d46->m_frame.f_lineno = 5;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_scipy$stats$_rvs_sampling,
                mod_consts[44],
                mod_consts[1]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[44]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[100];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_8 = MAKE_FUNCTION_scipy$stats$_rvs_sampling$$$function__1_rvs_ratio_uniforms(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_scipy$stats$_rvs_sampling$$$class__1_NumericalInverseHermite_176 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[102];
        tmp_res = PyDict_SetItem(locals_scipy$stats$_rvs_sampling$$$class__1_NumericalInverseHermite_176, mod_consts[103], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[104];
        tmp_res = PyDict_SetItem(locals_scipy$stats$_rvs_sampling$$$class__1_NumericalInverseHermite_176, mod_consts[87], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[105];
        tmp_res = PyDict_SetItem(locals_scipy$stats$_rvs_sampling$$$class__1_NumericalInverseHermite_176, mod_consts[106], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_kw_defaults_1;
            tmp_kw_defaults_1 = DICT_COPY(mod_consts[107]);


            tmp_dictset_value = MAKE_FUNCTION_scipy$stats$_rvs_sampling$$$function__2___init__(tmp_kw_defaults_1);

            tmp_res = PyDict_SetItem(locals_scipy$stats$_rvs_sampling$$$class__1_NumericalInverseHermite_176, mod_consts[108], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_scipy$stats$_rvs_sampling$$$function__3_ppf();

        tmp_res = PyDict_SetItem(locals_scipy$stats$_rvs_sampling$$$class__1_NumericalInverseHermite_176, mod_consts[42], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[111];
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_scipy$stats$_rvs_sampling$$$function__4_rvs(tmp_defaults_2);

            tmp_res = PyDict_SetItem(locals_scipy$stats$_rvs_sampling$$$class__1_NumericalInverseHermite_176, mod_consts[112], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[114];
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_scipy$stats$_rvs_sampling$$$function__5_qrvs(tmp_defaults_3);

            tmp_res = PyDict_SetItem(locals_scipy$stats$_rvs_sampling$$$class__1_NumericalInverseHermite_176, mod_consts[115], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[105];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[54];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_scipy$stats$_rvs_sampling$$$class__1_NumericalInverseHermite_176;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_b11892022628804c3ad32ebf54d13d46->m_frame.f_lineno = 176;
            tmp_assign_source_12 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_12;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_11 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_11);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_scipy$stats$_rvs_sampling$$$class__1_NumericalInverseHermite_176);
        locals_scipy$stats$_rvs_sampling$$$class__1_NumericalInverseHermite_176 = NULL;
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

        Py_DECREF(locals_scipy$stats$_rvs_sampling$$$class__1_NumericalInverseHermite_176);
        locals_scipy$stats$_rvs_sampling$$$class__1_NumericalInverseHermite_176 = NULL;
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
        exception_lineno = 176;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_11);
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

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
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

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b11892022628804c3ad32ebf54d13d46, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b11892022628804c3ad32ebf54d13d46->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b11892022628804c3ad32ebf54d13d46, exception_lineno);
    }



    assertFrameObject(frame_b11892022628804c3ad32ebf54d13d46);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_scipy$stats$_rvs_sampling$$$function__6__fni_input_validation();

        UPDATE_STRING_DICT1(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = mod_consts[117];
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_14 = MAKE_FUNCTION_scipy$stats$_rvs_sampling$$$function__7__fast_numerical_inverse(tmp_defaults_4);

        UPDATE_STRING_DICT1(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_14);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("scipy.stats._rvs_sampling", false);

    Py_INCREF(module_scipy$stats$_rvs_sampling);
    return module_scipy$stats$_rvs_sampling;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_rvs_sampling, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("scipy$stats$_rvs_sampling", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
