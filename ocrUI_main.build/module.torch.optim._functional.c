/* Generated code for Python module 'torch.optim._functional'
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

/* The "module_torch$optim$_functional" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$optim$_functional;
PyDictObject *moduledict_torch$optim$_functional;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[169];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[169];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch.optim._functional"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 169; i++) {
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
void checkModuleConstants_torch$optim$_functional(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 169; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_cbd92c58fec2bb7288d428a482a6b4e5;
static PyCodeObject *codeobj_2afe5bb62bee0a711b2bfa03527c4b1e;
static PyCodeObject *codeobj_f0d0e832a60569c4d77bc02656c328f4;
static PyCodeObject *codeobj_bebd4b335fe55c74c16860993bb95af9;
static PyCodeObject *codeobj_53120334105ed829c779aa74ccf52915;
static PyCodeObject *codeobj_f0017e915de489a0d5abbebd0b70cffa;
static PyCodeObject *codeobj_e886a0d0f852401d6fe4cb2c61ad254d;
static PyCodeObject *codeobj_4d34c784f2406b8a445b50e82e0db550;
static PyCodeObject *codeobj_d9bc94e707d1030c80c8c4692d945e79;
static PyCodeObject *codeobj_b0a87e0af404722c97c3c6e1dec5f433;
static PyCodeObject *codeobj_1c1066f4b7bffe9fc266f212034b6413;
static PyCodeObject *codeobj_1a6ce2c4e5fc56421b40861a3fbbcd17;
static PyCodeObject *codeobj_4cbf6e0ecca94a31c8a2fa968e847035;
static PyCodeObject *codeobj_b011d3803280b48e4c54cea5f44713f5;
static PyCodeObject *codeobj_fe9f16d6c89a44c243f64e1b78c6c44b;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[152]); CHECK_OBJECT(module_filename_obj);
    codeobj_cbd92c58fec2bb7288d428a482a6b4e5 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[153], mod_consts[153], NULL, NULL, 0, 0, 0);
    codeobj_2afe5bb62bee0a711b2bfa03527c4b1e = MAKE_CODE_OBJECT(module_filename_obj, 9, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[154], NULL, 3, 0, 0);
    codeobj_f0d0e832a60569c4d77bc02656c328f4 = MAKE_CODE_OBJECT(module_filename_obj, 197, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[135], mod_consts[135], mod_consts[155], NULL, 4, 4, 0);
    codeobj_bebd4b335fe55c74c16860993bb95af9 = MAKE_CODE_OBJECT(module_filename_obj, 16, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[122], mod_consts[122], mod_consts[156], NULL, 4, 4, 0);
    codeobj_53120334105ed829c779aa74ccf52915 = MAKE_CODE_OBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[128], mod_consts[128], mod_consts[157], NULL, 6, 7, 0);
    codeobj_f0017e915de489a0d5abbebd0b70cffa = MAKE_CODE_OBJECT(module_filename_obj, 307, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], mod_consts[143], mod_consts[158], NULL, 5, 5, 0);
    codeobj_e886a0d0f852401d6fe4cb2c61ad254d = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[129], mod_consts[129], mod_consts[157], NULL, 6, 7, 0);
    codeobj_4d34c784f2406b8a445b50e82e0db550 = MAKE_CODE_OBJECT(module_filename_obj, 347, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[147], mod_consts[147], mod_consts[159], NULL, 5, 2, 0);
    codeobj_d9bc94e707d1030c80c8c4692d945e79 = MAKE_CODE_OBJECT(module_filename_obj, 503, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[99], mod_consts[99], mod_consts[160], mod_consts[161], 1, 0, 0);
    codeobj_b0a87e0af404722c97c3c6e1dec5f433 = MAKE_CODE_OBJECT(module_filename_obj, 382, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[149], mod_consts[149], mod_consts[162], NULL, 6, 6, 0);
    codeobj_1c1066f4b7bffe9fc266f212034b6413 = MAKE_CODE_OBJECT(module_filename_obj, 427, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[150], mod_consts[150], mod_consts[163], NULL, 5, 5, 0);
    codeobj_1a6ce2c4e5fc56421b40861a3fbbcd17 = MAKE_CODE_OBJECT(module_filename_obj, 228, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[138], mod_consts[138], mod_consts[164], NULL, 5, 6, 0);
    codeobj_4cbf6e0ecca94a31c8a2fa968e847035 = MAKE_CODE_OBJECT(module_filename_obj, 269, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[141], mod_consts[141], mod_consts[165], NULL, 4, 4, 0);
    codeobj_b011d3803280b48e4c54cea5f44713f5 = MAKE_CODE_OBJECT(module_filename_obj, 158, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[132], mod_consts[132], mod_consts[166], NULL, 3, 6, 0);
    codeobj_fe9f16d6c89a44c243f64e1b78c6c44b = MAKE_CODE_OBJECT(module_filename_obj, 477, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[151], mod_consts[151], mod_consts[167], NULL, 5, 4, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_torch$optim$_functional$$$function__10_asgd(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$optim$_functional$$$function__11_nadam(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$optim$_functional$$$function__12_radam(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$optim$_functional$$$function__13_sparse_adam(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$optim$_functional$$$function__13_sparse_adam$$$function__1_make_sparse(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$optim$_functional$$$function__1__make_sparse();


static PyObject *MAKE_FUNCTION_torch$optim$_functional$$$function__2_adagrad(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$optim$_functional$$$function__3_adam(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$optim$_functional$$$function__4_adamw(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$optim$_functional$$$function__5_sgd(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$optim$_functional$$$function__6_adadelta(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$optim$_functional$$$function__7_rmsprop(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$optim$_functional$$$function__8_rprop(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$optim$_functional$$$function__9_adamax(PyObject *annotations);


// The module function definitions.
static PyObject *impl_torch$optim$_functional$$$function__1__make_sparse(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_grad = python_pars[0];
    PyObject *par_grad_indices = python_pars[1];
    PyObject *par_values = python_pars[2];
    PyObject *var_size = NULL;
    struct Nuitka_FrameObject *frame_2afe5bb62bee0a711b2bfa03527c4b1e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2afe5bb62bee0a711b2bfa03527c4b1e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2afe5bb62bee0a711b2bfa03527c4b1e)) {
        Py_XDECREF(cache_frame_2afe5bb62bee0a711b2bfa03527c4b1e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2afe5bb62bee0a711b2bfa03527c4b1e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2afe5bb62bee0a711b2bfa03527c4b1e = MAKE_FUNCTION_FRAME(codeobj_2afe5bb62bee0a711b2bfa03527c4b1e, module_torch$optim$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2afe5bb62bee0a711b2bfa03527c4b1e->m_type_description == NULL);
    frame_2afe5bb62bee0a711b2bfa03527c4b1e = cache_frame_2afe5bb62bee0a711b2bfa03527c4b1e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2afe5bb62bee0a711b2bfa03527c4b1e);
    assert(Py_REFCNT(frame_2afe5bb62bee0a711b2bfa03527c4b1e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_grad);
        tmp_called_instance_1 = par_grad;
        frame_2afe5bb62bee0a711b2bfa03527c4b1e->m_frame.f_lineno = 10;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[0]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
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
        frame_2afe5bb62bee0a711b2bfa03527c4b1e->m_frame.f_lineno = 11;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[1]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
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
        frame_2afe5bb62bee0a711b2bfa03527c4b1e->m_frame.f_lineno = 11;
        tmp_cmp_expr_left_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[1]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[2];
        tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
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
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_grad);
        tmp_args_element_value_1 = par_grad;
        frame_2afe5bb62bee0a711b2bfa03527c4b1e->m_frame.f_lineno = 12;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[4], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
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
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
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

            exception_lineno = 13;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = par_values;
        CHECK_OBJECT(var_size);
        tmp_args_element_value_4 = var_size;
        frame_2afe5bb62bee0a711b2bfa03527c4b1e->m_frame.f_lineno = 13;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
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
        exception_tb = MAKE_TRACEBACK(frame_2afe5bb62bee0a711b2bfa03527c4b1e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2afe5bb62bee0a711b2bfa03527c4b1e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2afe5bb62bee0a711b2bfa03527c4b1e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2afe5bb62bee0a711b2bfa03527c4b1e,
        type_description_1,
        par_grad,
        par_grad_indices,
        par_values,
        var_size
    );


    // Release cached frame if used for exception.
    if (frame_2afe5bb62bee0a711b2bfa03527c4b1e == cache_frame_2afe5bb62bee0a711b2bfa03527c4b1e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2afe5bb62bee0a711b2bfa03527c4b1e);
        cache_frame_2afe5bb62bee0a711b2bfa03527c4b1e = NULL;
    }

    assertFrameObject(frame_2afe5bb62bee0a711b2bfa03527c4b1e);

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


static PyObject *impl_torch$optim$_functional$$$function__2_adagrad(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_params = python_pars[0];
    PyObject *par_grads = python_pars[1];
    PyObject *par_state_sums = python_pars[2];
    PyObject *par_state_steps = python_pars[3];
    PyObject *par_lr = python_pars[4];
    PyObject *par_weight_decay = python_pars[5];
    PyObject *par_lr_decay = python_pars[6];
    PyObject *par_eps = python_pars[7];
    PyObject *var_param = NULL;
    PyObject *var_grad = NULL;
    PyObject *var_state_sum = NULL;
    PyObject *var_step = NULL;
    PyObject *var_clr = NULL;
    PyObject *var_grad_indices = NULL;
    PyObject *var_grad_values = NULL;
    PyObject *var_size = NULL;
    PyObject *var_std = NULL;
    PyObject *var_std_values = NULL;
    PyObject *var_is_complex = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_bebd4b335fe55c74c16860993bb95af9;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_bebd4b335fe55c74c16860993bb95af9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bebd4b335fe55c74c16860993bb95af9)) {
        Py_XDECREF(cache_frame_bebd4b335fe55c74c16860993bb95af9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bebd4b335fe55c74c16860993bb95af9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bebd4b335fe55c74c16860993bb95af9 = MAKE_FUNCTION_FRAME(codeobj_bebd4b335fe55c74c16860993bb95af9, module_torch$optim$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bebd4b335fe55c74c16860993bb95af9->m_type_description == NULL);
    frame_bebd4b335fe55c74c16860993bb95af9 = cache_frame_bebd4b335fe55c74c16860993bb95af9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bebd4b335fe55c74c16860993bb95af9);
    assert(Py_REFCNT(frame_bebd4b335fe55c74c16860993bb95af9) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT(par_params);
        tmp_args_element_value_1 = par_params;
        CHECK_OBJECT(par_grads);
        tmp_args_element_value_2 = par_grads;
        CHECK_OBJECT(par_state_sums);
        tmp_args_element_value_3 = par_state_sums;
        CHECK_OBJECT(par_state_steps);
        tmp_args_element_value_4 = par_state_steps;
        frame_bebd4b335fe55c74c16860993bb95af9->m_frame.f_lineno = 30;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_1, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooooooooooooooooo";
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
                type_description_1 = "ooooooooooooooooooo";
                exception_lineno = 30;
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


            exception_lineno = 30;
            type_description_1 = "ooooooooooooooooooo";
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


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 30;
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


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 30;
            goto try_except_handler_4;
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


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 30;
            goto try_except_handler_4;
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


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 30;
            goto try_except_handler_4;
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

                    type_description_1 = "ooooooooooooooooooo";
                    exception_lineno = 30;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[7];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 30;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
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
            PyObject *old = var_param;
            var_param = tmp_assign_source_8;
            Py_INCREF(var_param);
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
            PyObject *old = var_grad;
            var_grad = tmp_assign_source_9;
            Py_INCREF(var_grad);
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
            PyObject *old = var_state_sum;
            var_state_sum = tmp_assign_source_10;
            Py_INCREF(var_state_sum);
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
            PyObject *old = var_step;
            var_step = tmp_assign_source_11;
            Py_INCREF(var_step);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (par_weight_decay == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 31;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_1 = par_weight_decay;
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooooooooooooooooo";
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
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_grad);
        tmp_expression_value_1 = var_grad;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 32;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[10];
        frame_bebd4b335fe55c74c16860993bb95af9->m_frame.f_lineno = 33;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 33;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooooo";
        goto try_except_handler_2;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(var_grad);
        tmp_expression_value_2 = var_grad;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[11]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_param);
        tmp_kw_call_arg_value_0_1 = var_param;
        if (par_weight_decay == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 34;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_kw_call_dict_value_0_1 = par_weight_decay;
        frame_bebd4b335fe55c74c16860993bb95af9->m_frame.f_lineno = 34;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_grad;
            assert(old != NULL);
            var_grad = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        if (par_lr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 36;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_truediv_expr_left_1 = par_lr;
        tmp_add_expr_left_1 = mod_consts[14];
        CHECK_OBJECT(var_step);
        tmp_sub_expr_left_1 = var_step;
        tmp_sub_expr_right_1 = mod_consts[14];
        tmp_mult_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_lr_decay == NULL) {
            Py_DECREF(tmp_mult_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 36;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_mult_expr_right_1 = par_lr_decay;
        tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truediv_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_13 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_clr;
            var_clr = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_grad);
        tmp_expression_value_3 = var_grad;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[9]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 38;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_grad);
        tmp_called_instance_1 = var_grad;
        frame_bebd4b335fe55c74c16860993bb95af9->m_frame.f_lineno = 39;
        tmp_assign_source_14 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[16]);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_grad;
            assert(old != NULL);
            var_grad = tmp_assign_source_14;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_grad);
        tmp_called_instance_2 = var_grad;
        frame_bebd4b335fe55c74c16860993bb95af9->m_frame.f_lineno = 40;
        tmp_assign_source_15 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[17]);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_grad_indices;
            var_grad_indices = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(var_grad);
        tmp_called_instance_3 = var_grad;
        frame_bebd4b335fe55c74c16860993bb95af9->m_frame.f_lineno = 41;
        tmp_assign_source_16 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[18]);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_grad_values;
            var_grad_values = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(var_grad);
        tmp_called_instance_4 = var_grad;
        frame_bebd4b335fe55c74c16860993bb95af9->m_frame.f_lineno = 42;
        tmp_assign_source_17 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[0]);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_size;
            var_size = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(var_state_sum);
        tmp_expression_value_4 = var_state_sum;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[19]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 44;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_grad);
        tmp_args_element_value_6 = var_grad;
        CHECK_OBJECT(var_grad_indices);
        tmp_args_element_value_7 = var_grad_indices;
        CHECK_OBJECT(var_grad_values);
        tmp_called_instance_5 = var_grad_values;
        frame_bebd4b335fe55c74c16860993bb95af9->m_frame.f_lineno = 44;
        tmp_args_element_value_8 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_5,
            mod_consts[21],
            PyTuple_GET_ITEM(mod_consts[22], 0)
        );

        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 44;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_bebd4b335fe55c74c16860993bb95af9->m_frame.f_lineno = 44;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_8);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 44;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_bebd4b335fe55c74c16860993bb95af9->m_frame.f_lineno = 44;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(var_state_sum);
        tmp_called_instance_6 = var_state_sum;
        CHECK_OBJECT(var_grad);
        tmp_args_element_value_9 = var_grad;
        frame_bebd4b335fe55c74c16860993bb95af9->m_frame.f_lineno = 45;
        tmp_assign_source_18 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[23], tmp_args_element_value_9);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_std;
            var_std = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(var_std);
        tmp_called_instance_8 = var_std;
        frame_bebd4b335fe55c74c16860993bb95af9->m_frame.f_lineno = 46;
        tmp_called_instance_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[18]);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_bebd4b335fe55c74c16860993bb95af9->m_frame.f_lineno = 46;
        tmp_expression_value_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[24]);
        Py_DECREF(tmp_called_instance_7);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[19]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_eps == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 46;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_10 = par_eps;
        frame_bebd4b335fe55c74c16860993bb95af9->m_frame.f_lineno = 46;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_std_values;
            var_std_values = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_operand_value_1;
        if (var_param == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_6 = var_param;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[19]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_grad);
        tmp_args_element_value_11 = var_grad;
        CHECK_OBJECT(var_grad_indices);
        tmp_args_element_value_12 = var_grad_indices;
        CHECK_OBJECT(var_grad_values);
        tmp_truediv_expr_left_2 = var_grad_values;
        CHECK_OBJECT(var_std_values);
        tmp_truediv_expr_right_2 = var_std_values;
        tmp_args_element_value_13 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_bebd4b335fe55c74c16860993bb95af9->m_frame.f_lineno = 47;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_kw_call_arg_value_0_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_args_element_value_13);
        if (tmp_kw_call_arg_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_clr);
        tmp_operand_value_1 = var_clr;
        tmp_kw_call_dict_value_0_2 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_bebd4b335fe55c74c16860993bb95af9->m_frame.f_lineno = 47;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_6, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_kw_call_arg_value_0_2);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_14;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[27]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_param == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_14 = var_param;
        frame_bebd4b335fe55c74c16860993bb95af9->m_frame.f_lineno = 49;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_is_complex;
            var_is_complex = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_is_complex);
        tmp_truth_name_3 = CHECK_IF_TRUE(var_is_complex);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_15;
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_grad);
        tmp_args_element_value_15 = var_grad;
        frame_bebd4b335fe55c74c16860993bb95af9->m_frame.f_lineno = 51;
        tmp_assign_source_21 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[28], tmp_args_element_value_15);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_called_instance_10;
        PyObject *tmp_args_element_value_16;
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_state_sum);
        tmp_args_element_value_16 = var_state_sum;
        frame_bebd4b335fe55c74c16860993bb95af9->m_frame.f_lineno = 52;
        tmp_assign_source_22 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_10, mod_consts[28], tmp_args_element_value_16);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_state_sum;
            assert(old != NULL);
            var_state_sum = tmp_assign_source_22;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_17;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[28]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_param == NULL) {
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 53;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_17 = var_param;
        frame_bebd4b335fe55c74c16860993bb95af9->m_frame.f_lineno = 53;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_9);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_param;
            var_param = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    branch_no_4:;
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(var_state_sum);
        tmp_expression_value_9 = var_state_sum;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[29]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_grad == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 54;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_tuple_element_1 = var_grad;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        if (var_grad == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 54;
            type_description_1 = "ooooooooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_grad;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_value_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[31]);
        frame_bebd4b335fe55c74c16860993bb95af9->m_frame.f_lineno = 54;
        tmp_call_result_3 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_args_element_value_18;
        CHECK_OBJECT(var_state_sum);
        tmp_called_instance_11 = var_state_sum;
        frame_bebd4b335fe55c74c16860993bb95af9->m_frame.f_lineno = 55;
        tmp_expression_value_10 = CALL_METHOD_NO_ARGS(tmp_called_instance_11, mod_consts[32]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[19]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_eps == NULL) {
            Py_DECREF(tmp_called_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 55;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_18 = par_eps;
        frame_bebd4b335fe55c74c16860993bb95af9->m_frame.f_lineno = 55;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_11);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_std;
            var_std = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_4;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_operand_value_2;
        if (var_param == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_11 = var_param;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[33]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_grad == NULL) {
            Py_DECREF(tmp_called_value_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_kw_call_arg_value_0_3 = var_grad;
        CHECK_OBJECT(var_std);
        tmp_kw_call_arg_value_1_1 = var_std;
        CHECK_OBJECT(var_clr);
        tmp_operand_value_2 = var_clr;
        tmp_kw_call_dict_value_0_3 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_bebd4b335fe55c74c16860993bb95af9->m_frame.f_lineno = 56;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_12, args, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_kw_call_dict_value_0_3);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_is_complex);
        tmp_truth_name_4 = CHECK_IF_TRUE(var_is_complex);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_5 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_19;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[35]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_param == NULL) {
            Py_DECREF(tmp_called_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 58;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_19 = var_param;
        frame_bebd4b335fe55c74c16860993bb95af9->m_frame.f_lineno = 58;
        tmp_assign_source_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_19);
        Py_DECREF(tmp_called_value_13);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_param;
            var_param = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_args_element_value_20;
        tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_12 == NULL)) {
            tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_state_sum);
        tmp_args_element_value_20 = var_state_sum;
        frame_bebd4b335fe55c74c16860993bb95af9->m_frame.f_lineno = 59;
        tmp_assign_source_26 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_12, mod_consts[35], tmp_args_element_value_20);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_state_sum;
            assert(old != NULL);
            var_state_sum = tmp_assign_source_26;
            Py_DECREF(old);
        }

    }
    branch_no_5:;
    branch_end_3:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 30;
        type_description_1 = "ooooooooooooooooooo";
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bebd4b335fe55c74c16860993bb95af9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bebd4b335fe55c74c16860993bb95af9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bebd4b335fe55c74c16860993bb95af9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bebd4b335fe55c74c16860993bb95af9,
        type_description_1,
        par_params,
        par_grads,
        par_state_sums,
        par_state_steps,
        par_lr,
        par_weight_decay,
        par_lr_decay,
        par_eps,
        var_param,
        var_grad,
        var_state_sum,
        var_step,
        var_clr,
        var_grad_indices,
        var_grad_values,
        var_size,
        var_std,
        var_std_values,
        var_is_complex
    );


    // Release cached frame if used for exception.
    if (frame_bebd4b335fe55c74c16860993bb95af9 == cache_frame_bebd4b335fe55c74c16860993bb95af9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bebd4b335fe55c74c16860993bb95af9);
        cache_frame_bebd4b335fe55c74c16860993bb95af9 = NULL;
    }

    assertFrameObject(frame_bebd4b335fe55c74c16860993bb95af9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_param);
    var_param = NULL;
    Py_XDECREF(var_grad);
    var_grad = NULL;
    Py_XDECREF(var_state_sum);
    var_state_sum = NULL;
    Py_XDECREF(var_step);
    var_step = NULL;
    Py_XDECREF(var_clr);
    var_clr = NULL;
    Py_XDECREF(var_grad_indices);
    var_grad_indices = NULL;
    Py_XDECREF(var_grad_values);
    var_grad_values = NULL;
    Py_XDECREF(var_size);
    var_size = NULL;
    Py_XDECREF(var_std);
    var_std = NULL;
    Py_XDECREF(var_std_values);
    var_std_values = NULL;
    Py_XDECREF(var_is_complex);
    var_is_complex = NULL;
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

    Py_XDECREF(var_param);
    var_param = NULL;
    Py_XDECREF(var_grad);
    var_grad = NULL;
    Py_XDECREF(var_state_sum);
    var_state_sum = NULL;
    Py_XDECREF(var_step);
    var_step = NULL;
    Py_XDECREF(var_clr);
    var_clr = NULL;
    Py_XDECREF(var_grad_indices);
    var_grad_indices = NULL;
    Py_XDECREF(var_grad_values);
    var_grad_values = NULL;
    Py_XDECREF(var_size);
    var_size = NULL;
    Py_XDECREF(var_std);
    var_std = NULL;
    Py_XDECREF(var_std_values);
    var_std_values = NULL;
    Py_XDECREF(var_is_complex);
    var_is_complex = NULL;
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
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_grads);
    Py_DECREF(par_grads);
    CHECK_OBJECT(par_state_sums);
    Py_DECREF(par_state_sums);
    CHECK_OBJECT(par_state_steps);
    Py_DECREF(par_state_steps);
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
    CHECK_OBJECT(par_grads);
    Py_DECREF(par_grads);
    CHECK_OBJECT(par_state_sums);
    Py_DECREF(par_state_sums);
    CHECK_OBJECT(par_state_steps);
    Py_DECREF(par_state_steps);
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


static PyObject *impl_torch$optim$_functional$$$function__3_adam(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_params = python_pars[0];
    PyObject *par_grads = python_pars[1];
    PyObject *par_exp_avgs = python_pars[2];
    PyObject *par_exp_avg_sqs = python_pars[3];
    PyObject *par_max_exp_avg_sqs = python_pars[4];
    PyObject *par_state_steps = python_pars[5];
    PyObject *par_amsgrad = python_pars[6];
    PyObject *par_beta1 = python_pars[7];
    PyObject *par_beta2 = python_pars[8];
    PyObject *par_lr = python_pars[9];
    PyObject *par_weight_decay = python_pars[10];
    PyObject *par_eps = python_pars[11];
    PyObject *par_maximize = python_pars[12];
    PyObject *var_i = NULL;
    PyObject *var_param = NULL;
    PyObject *var_grad = NULL;
    PyObject *var_exp_avg = NULL;
    PyObject *var_exp_avg_sq = NULL;
    PyObject *var_step = NULL;
    PyObject *var_bias_correction1 = NULL;
    PyObject *var_bias_correction2 = NULL;
    PyObject *var_denom = NULL;
    PyObject *var_step_size = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_53120334105ed829c779aa74ccf52915;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_53120334105ed829c779aa74ccf52915 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_53120334105ed829c779aa74ccf52915)) {
        Py_XDECREF(cache_frame_53120334105ed829c779aa74ccf52915);

#if _DEBUG_REFCOUNTS
        if (cache_frame_53120334105ed829c779aa74ccf52915 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_53120334105ed829c779aa74ccf52915 = MAKE_FUNCTION_FRAME(codeobj_53120334105ed829c779aa74ccf52915, module_torch$optim$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_53120334105ed829c779aa74ccf52915->m_type_description == NULL);
    frame_53120334105ed829c779aa74ccf52915 = cache_frame_53120334105ed829c779aa74ccf52915;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_53120334105ed829c779aa74ccf52915);
    assert(Py_REFCNT(frame_53120334105ed829c779aa74ccf52915) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_params);
        tmp_args_element_value_1 = par_params;
        frame_53120334105ed829c779aa74ccf52915->m_frame.f_lineno = 83;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooooo";
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
                type_description_1 = "ooooooooooooooooooooooo";
                exception_lineno = 83;
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


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooooo";
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


            type_description_1 = "ooooooooooooooooooooooo";
            exception_lineno = 83;
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


            type_description_1 = "ooooooooooooooooooooooo";
            exception_lineno = 83;
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

                    type_description_1 = "ooooooooooooooooooooooo";
                    exception_lineno = 83;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooooo";
            exception_lineno = 83;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_6;
            Py_INCREF(var_i);
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
            PyObject *old = var_param;
            var_param = tmp_assign_source_7;
            Py_INCREF(var_param);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_maximize);
        tmp_operand_value_1 = par_maximize;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_grads);
        tmp_expression_value_1 = par_grads;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_1 = var_i;
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_grads);
        tmp_expression_value_2 = par_grads;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_2 = var_i;
        tmp_operand_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        condexpr_end_1:;
        {
            PyObject *old = var_grad;
            var_grad = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_exp_avgs);
        tmp_expression_value_3 = par_exp_avgs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_3 = var_i;
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_exp_avg;
            var_exp_avg = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_exp_avg_sqs);
        tmp_expression_value_4 = par_exp_avg_sqs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_4 = var_i;
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_exp_avg_sq;
            var_exp_avg_sq = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(par_state_steps);
        tmp_expression_value_5 = par_state_steps;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_5 = var_i;
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_step;
            var_step = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_pow_expr_left_1;
        PyObject *tmp_pow_expr_right_1;
        tmp_sub_expr_left_1 = mod_consts[14];
        if (par_beta1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 90;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_pow_expr_left_1 = par_beta1;
        CHECK_OBJECT(var_step);
        tmp_pow_expr_right_1 = var_step;
        tmp_sub_expr_right_1 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_12 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_bias_correction1;
            var_bias_correction1 = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_pow_expr_left_2;
        PyObject *tmp_pow_expr_right_2;
        tmp_sub_expr_left_2 = mod_consts[14];
        if (par_beta2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 91;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_pow_expr_left_2 = par_beta2;
        CHECK_OBJECT(var_step);
        tmp_pow_expr_right_2 = var_step;
        tmp_sub_expr_right_2 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_2, tmp_pow_expr_right_2);
        if (tmp_sub_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_13 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_right_2);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_bias_correction2;
            var_bias_correction2 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (par_weight_decay == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 93;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_1 = par_weight_decay;
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(var_grad);
        tmp_expression_value_6 = var_grad;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[11]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_param);
        tmp_kw_call_arg_value_0_1 = var_param;
        if (par_weight_decay == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 94;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_kw_call_dict_value_0_1 = par_weight_decay;
        frame_53120334105ed829c779aa74ccf52915->m_frame.f_lineno = 94;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_grad;
            assert(old != NULL);
            var_grad = tmp_assign_source_14;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        CHECK_OBJECT(var_exp_avg);
        tmp_expression_value_8 = var_exp_avg;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[40]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_beta1 == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_2 = par_beta1;
        frame_53120334105ed829c779aa74ccf52915->m_frame.f_lineno = 97;
        tmp_expression_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[19]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_grad);
        tmp_kw_call_arg_value_0_2 = var_grad;
        tmp_sub_expr_left_3 = mod_consts[14];
        if (par_beta1 == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_sub_expr_right_3 = par_beta1;
        tmp_kw_call_dict_value_0_2 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_53120334105ed829c779aa74ccf52915->m_frame.f_lineno = 97;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_sub_expr_left_4;
        PyObject *tmp_sub_expr_right_4;
        CHECK_OBJECT(var_exp_avg_sq);
        tmp_expression_value_10 = var_exp_avg_sq;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[40]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_beta2 == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 98;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_3 = par_beta2;
        frame_53120334105ed829c779aa74ccf52915->m_frame.f_lineno = 98;
        tmp_expression_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_6);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[29]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_grad);
        tmp_kw_call_arg_value_0_3 = var_grad;
        CHECK_OBJECT(var_grad);
        tmp_called_instance_1 = var_grad;
        frame_53120334105ed829c779aa74ccf52915->m_frame.f_lineno = 98;
        tmp_kw_call_arg_value_1_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[41]);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 98;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_sub_expr_left_4 = mod_consts[14];
        if (par_beta2 == NULL) {
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 98;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_sub_expr_right_4 = par_beta2;
        tmp_kw_call_dict_value_0_3 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 98;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_53120334105ed829c779aa74ccf52915->m_frame.f_lineno = 98;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_5, args, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_0_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_amsgrad);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_amsgrad);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_7;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[42]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_max_exp_avg_sqs);
        tmp_expression_value_12 = par_max_exp_avg_sqs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_6 = var_i;
        tmp_kw_call_arg_value_0_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_6);
        if (tmp_kw_call_arg_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 101;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_exp_avg_sq);
        tmp_kw_call_arg_value_1_2 = var_exp_avg_sq;
        CHECK_OBJECT(par_max_exp_avg_sqs);
        tmp_expression_value_13 = par_max_exp_avg_sqs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_7 = var_i;
        tmp_kw_call_dict_value_0_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_7);
        if (tmp_kw_call_dict_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_kw_call_arg_value_0_4);

            exception_lineno = 101;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_53120334105ed829c779aa74ccf52915->m_frame.f_lineno = 101;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_7, args, kw_values, mod_consts[43]);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_kw_call_arg_value_0_4);
        Py_DECREF(tmp_kw_call_dict_value_0_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_max_exp_avg_sqs);
        tmp_expression_value_15 = par_max_exp_avg_sqs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_8 = var_i;
        tmp_called_instance_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_8);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_53120334105ed829c779aa74ccf52915->m_frame.f_lineno = 103;
        tmp_truediv_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[32]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 103;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_bias_correction2);
        tmp_args_element_value_4 = var_bias_correction2;
        frame_53120334105ed829c779aa74ccf52915->m_frame.f_lineno = 103;
        tmp_truediv_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[32], tmp_args_element_value_4);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 103;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_14 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[19]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_eps == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 103;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_5 = par_eps;
        frame_53120334105ed829c779aa74ccf52915->m_frame.f_lineno = 103;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_denom;
            var_denom = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(var_exp_avg_sq);
        tmp_called_instance_4 = var_exp_avg_sq;
        frame_53120334105ed829c779aa74ccf52915->m_frame.f_lineno = 105;
        tmp_truediv_expr_left_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[32]);
        if (tmp_truediv_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_2);

            exception_lineno = 105;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_bias_correction2);
        tmp_args_element_value_6 = var_bias_correction2;
        frame_53120334105ed829c779aa74ccf52915->m_frame.f_lineno = 105;
        tmp_truediv_expr_right_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[32], tmp_args_element_value_6);
        if (tmp_truediv_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_2);

            exception_lineno = 105;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_16 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_left_2);
        Py_DECREF(tmp_truediv_expr_right_2);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[19]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_eps == NULL) {
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 105;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_7 = par_eps;
        frame_53120334105ed829c779aa74ccf52915->m_frame.f_lineno = 105;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_9);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_denom;
            var_denom = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        if (par_lr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 109;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_truediv_expr_left_3 = par_lr;
        CHECK_OBJECT(var_bias_correction1);
        tmp_truediv_expr_right_3 = var_bias_correction1;
        tmp_assign_source_17 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_step_size;
            var_step_size = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_4;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_kw_call_dict_value_0_5;
        PyObject *tmp_operand_value_3;
        if (var_param == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 110;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_17 = var_param;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[33]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_exp_avg);
        tmp_kw_call_arg_value_0_5 = var_exp_avg;
        CHECK_OBJECT(var_denom);
        tmp_kw_call_arg_value_1_3 = var_denom;
        CHECK_OBJECT(var_step_size);
        tmp_operand_value_3 = var_step_size;
        tmp_kw_call_dict_value_0_5 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_3);
        if (tmp_kw_call_dict_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 110;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_53120334105ed829c779aa74ccf52915->m_frame.f_lineno = 110;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5, tmp_kw_call_arg_value_1_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_5};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_10, args, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_kw_call_dict_value_0_5);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 83;
        type_description_1 = "ooooooooooooooooooooooo";
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_53120334105ed829c779aa74ccf52915, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_53120334105ed829c779aa74ccf52915->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_53120334105ed829c779aa74ccf52915, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_53120334105ed829c779aa74ccf52915,
        type_description_1,
        par_params,
        par_grads,
        par_exp_avgs,
        par_exp_avg_sqs,
        par_max_exp_avg_sqs,
        par_state_steps,
        par_amsgrad,
        par_beta1,
        par_beta2,
        par_lr,
        par_weight_decay,
        par_eps,
        par_maximize,
        var_i,
        var_param,
        var_grad,
        var_exp_avg,
        var_exp_avg_sq,
        var_step,
        var_bias_correction1,
        var_bias_correction2,
        var_denom,
        var_step_size
    );


    // Release cached frame if used for exception.
    if (frame_53120334105ed829c779aa74ccf52915 == cache_frame_53120334105ed829c779aa74ccf52915) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_53120334105ed829c779aa74ccf52915);
        cache_frame_53120334105ed829c779aa74ccf52915 = NULL;
    }

    assertFrameObject(frame_53120334105ed829c779aa74ccf52915);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_param);
    var_param = NULL;
    Py_XDECREF(var_grad);
    var_grad = NULL;
    Py_XDECREF(var_exp_avg);
    var_exp_avg = NULL;
    Py_XDECREF(var_exp_avg_sq);
    var_exp_avg_sq = NULL;
    Py_XDECREF(var_step);
    var_step = NULL;
    Py_XDECREF(var_bias_correction1);
    var_bias_correction1 = NULL;
    Py_XDECREF(var_bias_correction2);
    var_bias_correction2 = NULL;
    Py_XDECREF(var_denom);
    var_denom = NULL;
    Py_XDECREF(var_step_size);
    var_step_size = NULL;
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

    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_param);
    var_param = NULL;
    Py_XDECREF(var_grad);
    var_grad = NULL;
    Py_XDECREF(var_exp_avg);
    var_exp_avg = NULL;
    Py_XDECREF(var_exp_avg_sq);
    var_exp_avg_sq = NULL;
    Py_XDECREF(var_step);
    var_step = NULL;
    Py_XDECREF(var_bias_correction1);
    var_bias_correction1 = NULL;
    Py_XDECREF(var_bias_correction2);
    var_bias_correction2 = NULL;
    Py_XDECREF(var_denom);
    var_denom = NULL;
    Py_XDECREF(var_step_size);
    var_step_size = NULL;
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
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_grads);
    Py_DECREF(par_grads);
    CHECK_OBJECT(par_exp_avgs);
    Py_DECREF(par_exp_avgs);
    CHECK_OBJECT(par_exp_avg_sqs);
    Py_DECREF(par_exp_avg_sqs);
    CHECK_OBJECT(par_max_exp_avg_sqs);
    Py_DECREF(par_max_exp_avg_sqs);
    CHECK_OBJECT(par_state_steps);
    Py_DECREF(par_state_steps);
    CHECK_OBJECT(par_amsgrad);
    Py_DECREF(par_amsgrad);
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
    CHECK_OBJECT(par_maximize);
    Py_DECREF(par_maximize);
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
    CHECK_OBJECT(par_exp_avg_sqs);
    Py_DECREF(par_exp_avg_sqs);
    CHECK_OBJECT(par_max_exp_avg_sqs);
    Py_DECREF(par_max_exp_avg_sqs);
    CHECK_OBJECT(par_state_steps);
    Py_DECREF(par_state_steps);
    CHECK_OBJECT(par_amsgrad);
    Py_DECREF(par_amsgrad);
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
    CHECK_OBJECT(par_maximize);
    Py_DECREF(par_maximize);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$optim$_functional$$$function__4_adamw(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_params = python_pars[0];
    PyObject *par_grads = python_pars[1];
    PyObject *par_exp_avgs = python_pars[2];
    PyObject *par_exp_avg_sqs = python_pars[3];
    PyObject *par_max_exp_avg_sqs = python_pars[4];
    PyObject *par_state_steps = python_pars[5];
    PyObject *par_amsgrad = python_pars[6];
    PyObject *par_beta1 = python_pars[7];
    PyObject *par_beta2 = python_pars[8];
    PyObject *par_lr = python_pars[9];
    PyObject *par_weight_decay = python_pars[10];
    PyObject *par_eps = python_pars[11];
    PyObject *par_maximize = python_pars[12];
    PyObject *var_i = NULL;
    PyObject *var_param = NULL;
    PyObject *var_grad = NULL;
    PyObject *var_exp_avg = NULL;
    PyObject *var_exp_avg_sq = NULL;
    PyObject *var_step = NULL;
    PyObject *var_bias_correction1 = NULL;
    PyObject *var_bias_correction2 = NULL;
    PyObject *var_denom = NULL;
    PyObject *var_step_size = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_e886a0d0f852401d6fe4cb2c61ad254d;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_e886a0d0f852401d6fe4cb2c61ad254d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e886a0d0f852401d6fe4cb2c61ad254d)) {
        Py_XDECREF(cache_frame_e886a0d0f852401d6fe4cb2c61ad254d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e886a0d0f852401d6fe4cb2c61ad254d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e886a0d0f852401d6fe4cb2c61ad254d = MAKE_FUNCTION_FRAME(codeobj_e886a0d0f852401d6fe4cb2c61ad254d, module_torch$optim$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e886a0d0f852401d6fe4cb2c61ad254d->m_type_description == NULL);
    frame_e886a0d0f852401d6fe4cb2c61ad254d = cache_frame_e886a0d0f852401d6fe4cb2c61ad254d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e886a0d0f852401d6fe4cb2c61ad254d);
    assert(Py_REFCNT(frame_e886a0d0f852401d6fe4cb2c61ad254d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_params);
        tmp_args_element_value_1 = par_params;
        frame_e886a0d0f852401d6fe4cb2c61ad254d->m_frame.f_lineno = 130;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooooo";
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
                type_description_1 = "ooooooooooooooooooooooo";
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


            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooooo";
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


            type_description_1 = "ooooooooooooooooooooooo";
            exception_lineno = 130;
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


            type_description_1 = "ooooooooooooooooooooooo";
            exception_lineno = 130;
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

                    type_description_1 = "ooooooooooooooooooooooo";
                    exception_lineno = 130;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooooo";
            exception_lineno = 130;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_6;
            Py_INCREF(var_i);
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
            PyObject *old = var_param;
            var_param = tmp_assign_source_7;
            Py_INCREF(var_param);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_maximize);
        tmp_operand_value_1 = par_maximize;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_grads);
        tmp_expression_value_1 = par_grads;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_1 = var_i;
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_grads);
        tmp_expression_value_2 = par_grads;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_2 = var_i;
        tmp_operand_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        condexpr_end_1:;
        {
            PyObject *old = var_grad;
            var_grad = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_exp_avgs);
        tmp_expression_value_3 = par_exp_avgs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_3 = var_i;
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_exp_avg;
            var_exp_avg = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_exp_avg_sqs);
        tmp_expression_value_4 = par_exp_avg_sqs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_4 = var_i;
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_exp_avg_sq;
            var_exp_avg_sq = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(par_state_steps);
        tmp_expression_value_5 = par_state_steps;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_5 = var_i;
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_step;
            var_step = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        CHECK_OBJECT(var_param);
        tmp_expression_value_6 = var_param;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[40]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_sub_expr_left_1 = mod_consts[14];
        if (par_lr == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_mult_expr_left_1 = par_lr;
        if (par_weight_decay == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_mult_expr_right_1 = par_weight_decay;
        tmp_sub_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_2 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_e886a0d0f852401d6fe4cb2c61ad254d->m_frame.f_lineno = 137;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_pow_expr_left_1;
        PyObject *tmp_pow_expr_right_1;
        tmp_sub_expr_left_2 = mod_consts[14];
        if (par_beta1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_pow_expr_left_1 = par_beta1;
        CHECK_OBJECT(var_step);
        tmp_pow_expr_right_1 = var_step;
        tmp_sub_expr_right_2 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
        if (tmp_sub_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_12 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_right_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_bias_correction1;
            var_bias_correction1 = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_pow_expr_left_2;
        PyObject *tmp_pow_expr_right_2;
        tmp_sub_expr_left_3 = mod_consts[14];
        if (par_beta2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 140;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_pow_expr_left_2 = par_beta2;
        CHECK_OBJECT(var_step);
        tmp_pow_expr_right_2 = var_step;
        tmp_sub_expr_right_3 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_2, tmp_pow_expr_right_2);
        if (tmp_sub_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_13 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_right_3);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_bias_correction2;
            var_bias_correction2 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_sub_expr_left_4;
        PyObject *tmp_sub_expr_right_4;
        CHECK_OBJECT(var_exp_avg);
        tmp_expression_value_8 = var_exp_avg;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[40]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_beta1 == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 143;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_3 = par_beta1;
        frame_e886a0d0f852401d6fe4cb2c61ad254d->m_frame.f_lineno = 143;
        tmp_expression_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[19]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_grad);
        tmp_kw_call_arg_value_0_1 = var_grad;
        tmp_sub_expr_left_4 = mod_consts[14];
        if (par_beta1 == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 143;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_sub_expr_right_4 = par_beta1;
        tmp_kw_call_dict_value_0_1 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 143;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_e886a0d0f852401d6fe4cb2c61ad254d->m_frame.f_lineno = 143;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_sub_expr_left_5;
        PyObject *tmp_sub_expr_right_5;
        CHECK_OBJECT(var_exp_avg_sq);
        tmp_expression_value_10 = var_exp_avg_sq;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[40]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_beta2 == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_4 = par_beta2;
        frame_e886a0d0f852401d6fe4cb2c61ad254d->m_frame.f_lineno = 144;
        tmp_expression_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_6);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[29]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_grad);
        tmp_kw_call_arg_value_0_2 = var_grad;
        CHECK_OBJECT(var_grad);
        tmp_kw_call_arg_value_1_1 = var_grad;
        tmp_sub_expr_left_5 = mod_consts[14];
        if (par_beta2 == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_sub_expr_right_5 = par_beta2;
        tmp_kw_call_dict_value_0_2 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_e886a0d0f852401d6fe4cb2c61ad254d->m_frame.f_lineno = 144;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_5, args, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_amsgrad);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_amsgrad);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_4;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_7;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[42]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_max_exp_avg_sqs);
        tmp_expression_value_12 = par_max_exp_avg_sqs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_6 = var_i;
        tmp_kw_call_arg_value_0_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_6);
        if (tmp_kw_call_arg_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_exp_avg_sq);
        tmp_kw_call_arg_value_1_2 = var_exp_avg_sq;
        CHECK_OBJECT(par_max_exp_avg_sqs);
        tmp_expression_value_13 = par_max_exp_avg_sqs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_7 = var_i;
        tmp_kw_call_dict_value_0_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_7);
        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_kw_call_arg_value_0_3);

            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_e886a0d0f852401d6fe4cb2c61ad254d->m_frame.f_lineno = 147;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_7, args, kw_values, mod_consts[43]);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_kw_call_arg_value_0_3);
        Py_DECREF(tmp_kw_call_dict_value_0_3);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_max_exp_avg_sqs);
        tmp_expression_value_15 = par_max_exp_avg_sqs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_8 = var_i;
        tmp_called_instance_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_8);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_e886a0d0f852401d6fe4cb2c61ad254d->m_frame.f_lineno = 149;
        tmp_truediv_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[32]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 149;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_bias_correction2);
        tmp_args_element_value_5 = var_bias_correction2;
        frame_e886a0d0f852401d6fe4cb2c61ad254d->m_frame.f_lineno = 149;
        tmp_truediv_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[32], tmp_args_element_value_5);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 149;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_14 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[19]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_eps == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 149;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_6 = par_eps;
        frame_e886a0d0f852401d6fe4cb2c61ad254d->m_frame.f_lineno = 149;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_denom;
            var_denom = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(var_exp_avg_sq);
        tmp_called_instance_3 = var_exp_avg_sq;
        frame_e886a0d0f852401d6fe4cb2c61ad254d->m_frame.f_lineno = 151;
        tmp_truediv_expr_left_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[32]);
        if (tmp_truediv_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_2);

            exception_lineno = 151;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_bias_correction2);
        tmp_args_element_value_7 = var_bias_correction2;
        frame_e886a0d0f852401d6fe4cb2c61ad254d->m_frame.f_lineno = 151;
        tmp_truediv_expr_right_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[32], tmp_args_element_value_7);
        if (tmp_truediv_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_2);

            exception_lineno = 151;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_16 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_left_2);
        Py_DECREF(tmp_truediv_expr_right_2);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[19]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_eps == NULL) {
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 151;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_8 = par_eps;
        frame_e886a0d0f852401d6fe4cb2c61ad254d->m_frame.f_lineno = 151;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_9);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_denom;
            var_denom = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        if (par_lr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 153;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_truediv_expr_left_3 = par_lr;
        CHECK_OBJECT(var_bias_correction1);
        tmp_truediv_expr_right_3 = var_bias_correction1;
        tmp_assign_source_16 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_step_size;
            var_step_size = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_5;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_operand_value_3;
        CHECK_OBJECT(var_param);
        tmp_expression_value_17 = var_param;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[33]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_exp_avg);
        tmp_kw_call_arg_value_0_4 = var_exp_avg;
        CHECK_OBJECT(var_denom);
        tmp_kw_call_arg_value_1_3 = var_denom;
        CHECK_OBJECT(var_step_size);
        tmp_operand_value_3 = var_step_size;
        tmp_kw_call_dict_value_0_4 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_3);
        if (tmp_kw_call_dict_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 155;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_e886a0d0f852401d6fe4cb2c61ad254d->m_frame.f_lineno = 155;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_10, args, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_kw_call_dict_value_0_4);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 130;
        type_description_1 = "ooooooooooooooooooooooo";
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e886a0d0f852401d6fe4cb2c61ad254d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e886a0d0f852401d6fe4cb2c61ad254d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e886a0d0f852401d6fe4cb2c61ad254d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e886a0d0f852401d6fe4cb2c61ad254d,
        type_description_1,
        par_params,
        par_grads,
        par_exp_avgs,
        par_exp_avg_sqs,
        par_max_exp_avg_sqs,
        par_state_steps,
        par_amsgrad,
        par_beta1,
        par_beta2,
        par_lr,
        par_weight_decay,
        par_eps,
        par_maximize,
        var_i,
        var_param,
        var_grad,
        var_exp_avg,
        var_exp_avg_sq,
        var_step,
        var_bias_correction1,
        var_bias_correction2,
        var_denom,
        var_step_size
    );


    // Release cached frame if used for exception.
    if (frame_e886a0d0f852401d6fe4cb2c61ad254d == cache_frame_e886a0d0f852401d6fe4cb2c61ad254d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e886a0d0f852401d6fe4cb2c61ad254d);
        cache_frame_e886a0d0f852401d6fe4cb2c61ad254d = NULL;
    }

    assertFrameObject(frame_e886a0d0f852401d6fe4cb2c61ad254d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_param);
    var_param = NULL;
    Py_XDECREF(var_grad);
    var_grad = NULL;
    Py_XDECREF(var_exp_avg);
    var_exp_avg = NULL;
    Py_XDECREF(var_exp_avg_sq);
    var_exp_avg_sq = NULL;
    Py_XDECREF(var_step);
    var_step = NULL;
    Py_XDECREF(var_bias_correction1);
    var_bias_correction1 = NULL;
    Py_XDECREF(var_bias_correction2);
    var_bias_correction2 = NULL;
    Py_XDECREF(var_denom);
    var_denom = NULL;
    Py_XDECREF(var_step_size);
    var_step_size = NULL;
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

    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_param);
    var_param = NULL;
    Py_XDECREF(var_grad);
    var_grad = NULL;
    Py_XDECREF(var_exp_avg);
    var_exp_avg = NULL;
    Py_XDECREF(var_exp_avg_sq);
    var_exp_avg_sq = NULL;
    Py_XDECREF(var_step);
    var_step = NULL;
    Py_XDECREF(var_bias_correction1);
    var_bias_correction1 = NULL;
    Py_XDECREF(var_bias_correction2);
    var_bias_correction2 = NULL;
    Py_XDECREF(var_denom);
    var_denom = NULL;
    Py_XDECREF(var_step_size);
    var_step_size = NULL;
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
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_grads);
    Py_DECREF(par_grads);
    CHECK_OBJECT(par_exp_avgs);
    Py_DECREF(par_exp_avgs);
    CHECK_OBJECT(par_exp_avg_sqs);
    Py_DECREF(par_exp_avg_sqs);
    CHECK_OBJECT(par_max_exp_avg_sqs);
    Py_DECREF(par_max_exp_avg_sqs);
    CHECK_OBJECT(par_state_steps);
    Py_DECREF(par_state_steps);
    CHECK_OBJECT(par_amsgrad);
    Py_DECREF(par_amsgrad);
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
    CHECK_OBJECT(par_maximize);
    Py_DECREF(par_maximize);
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
    CHECK_OBJECT(par_exp_avg_sqs);
    Py_DECREF(par_exp_avg_sqs);
    CHECK_OBJECT(par_max_exp_avg_sqs);
    Py_DECREF(par_max_exp_avg_sqs);
    CHECK_OBJECT(par_state_steps);
    Py_DECREF(par_state_steps);
    CHECK_OBJECT(par_amsgrad);
    Py_DECREF(par_amsgrad);
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
    CHECK_OBJECT(par_maximize);
    Py_DECREF(par_maximize);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$optim$_functional$$$function__5_sgd(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_params = python_pars[0];
    PyObject *par_d_p_list = python_pars[1];
    PyObject *par_momentum_buffer_list = python_pars[2];
    PyObject *par_weight_decay = python_pars[3];
    PyObject *par_momentum = python_pars[4];
    PyObject *par_lr = python_pars[5];
    PyObject *par_dampening = python_pars[6];
    PyObject *par_nesterov = python_pars[7];
    PyObject *par_maximize = python_pars[8];
    PyObject *var_i = NULL;
    PyObject *var_param = NULL;
    PyObject *var_d_p = NULL;
    PyObject *var_buf = NULL;
    PyObject *var_alpha = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b011d3803280b48e4c54cea5f44713f5;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_b011d3803280b48e4c54cea5f44713f5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b011d3803280b48e4c54cea5f44713f5)) {
        Py_XDECREF(cache_frame_b011d3803280b48e4c54cea5f44713f5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b011d3803280b48e4c54cea5f44713f5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b011d3803280b48e4c54cea5f44713f5 = MAKE_FUNCTION_FRAME(codeobj_b011d3803280b48e4c54cea5f44713f5, module_torch$optim$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b011d3803280b48e4c54cea5f44713f5->m_type_description == NULL);
    frame_b011d3803280b48e4c54cea5f44713f5 = cache_frame_b011d3803280b48e4c54cea5f44713f5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b011d3803280b48e4c54cea5f44713f5);
    assert(Py_REFCNT(frame_b011d3803280b48e4c54cea5f44713f5) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_params);
        tmp_args_element_value_1 = par_params;
        frame_b011d3803280b48e4c54cea5f44713f5->m_frame.f_lineno = 173;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooooooooo";
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
                type_description_1 = "oooooooooooooo";
                exception_lineno = 173;
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


            exception_lineno = 173;
            type_description_1 = "oooooooooooooo";
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 173;
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 173;
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

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 173;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooo";
            exception_lineno = 173;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_6;
            Py_INCREF(var_i);
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
            PyObject *old = var_param;
            var_param = tmp_assign_source_7;
            Py_INCREF(var_param);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_d_p_list);
        tmp_expression_value_1 = par_d_p_list;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_1 = var_i;
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_d_p;
            var_d_p = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (par_weight_decay == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 176;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_1 = par_weight_decay;
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oooooooooooooo";
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(var_d_p);
        tmp_expression_value_2 = var_d_p;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[11]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_param);
        tmp_kw_call_arg_value_0_1 = var_param;
        if (par_weight_decay == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 177;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_kw_call_dict_value_0_1 = par_weight_decay;
        frame_b011d3803280b48e4c54cea5f44713f5->m_frame.f_lineno = 177;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_d_p;
            assert(old != NULL);
            var_d_p = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (par_momentum == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 179;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_2 = par_momentum;
        tmp_cmp_expr_right_2 = mod_consts[2];
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooooooo";
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
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        if (par_momentum_buffer_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 180;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = par_momentum_buffer_list;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_2 = var_i;
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_buf;
            var_buf = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_buf);
        tmp_cmp_expr_left_3 = var_buf;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_d_p);
        tmp_args_element_value_2 = var_d_p;
        frame_b011d3803280b48e4c54cea5f44713f5->m_frame.f_lineno = 183;
        tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[49], tmp_args_element_value_2);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        frame_b011d3803280b48e4c54cea5f44713f5->m_frame.f_lineno = 183;
        tmp_assign_source_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[50]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_buf;
            assert(old != NULL);
            var_buf = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_buf);
        tmp_ass_subvalue_1 = var_buf;
        if (par_momentum_buffer_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 184;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = par_momentum_buffer_list;
        CHECK_OBJECT(var_i);
        tmp_ass_subscript_1 = var_i;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        CHECK_OBJECT(var_buf);
        tmp_expression_value_5 = var_buf;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[40]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_momentum == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 186;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_3 = par_momentum;
        frame_b011d3803280b48e4c54cea5f44713f5->m_frame.f_lineno = 186;
        tmp_expression_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[19]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_d_p);
        tmp_kw_call_arg_value_0_2 = var_d_p;
        tmp_sub_expr_left_1 = mod_consts[14];
        if (par_dampening == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 186;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_sub_expr_right_1 = par_dampening;
        tmp_kw_call_dict_value_0_2 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 186;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        frame_b011d3803280b48e4c54cea5f44713f5->m_frame.f_lineno = 186;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_end_3:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_nesterov);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_nesterov);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooooooooo";
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        if (var_d_p == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_6 = var_d_p;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[11]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_buf == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_kw_call_arg_value_0_3 = var_buf;
        if (par_momentum == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_kw_call_dict_value_0_3 = par_momentum;
        frame_b011d3803280b48e4c54cea5f44713f5->m_frame.f_lineno = 189;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_5, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_d_p;
            var_d_p = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_13;
        if (var_buf == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 191;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_assign_source_13 = var_buf;
        {
            PyObject *old = var_d_p;
            var_d_p = tmp_assign_source_13;
            Py_INCREF(var_d_p);
            Py_XDECREF(old);
        }

    }
    branch_end_4:;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_14;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_maximize);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_maximize);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_lr);
        tmp_assign_source_14 = par_lr;
        Py_INCREF(tmp_assign_source_14);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_lr);
        tmp_operand_value_1 = par_lr;
        tmp_assign_source_14 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        condexpr_end_1:;
        {
            PyObject *old = var_alpha;
            var_alpha = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_dict_value_0_4;
        if (var_param == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 194;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_7 = var_param;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[19]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_d_p);
        tmp_kw_call_arg_value_0_4 = var_d_p;
        CHECK_OBJECT(var_alpha);
        tmp_kw_call_dict_value_0_4 = var_alpha;
        frame_b011d3803280b48e4c54cea5f44713f5->m_frame.f_lineno = 194;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_6, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 173;
        type_description_1 = "oooooooooooooo";
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b011d3803280b48e4c54cea5f44713f5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b011d3803280b48e4c54cea5f44713f5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b011d3803280b48e4c54cea5f44713f5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b011d3803280b48e4c54cea5f44713f5,
        type_description_1,
        par_params,
        par_d_p_list,
        par_momentum_buffer_list,
        par_weight_decay,
        par_momentum,
        par_lr,
        par_dampening,
        par_nesterov,
        par_maximize,
        var_i,
        var_param,
        var_d_p,
        var_buf,
        var_alpha
    );


    // Release cached frame if used for exception.
    if (frame_b011d3803280b48e4c54cea5f44713f5 == cache_frame_b011d3803280b48e4c54cea5f44713f5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b011d3803280b48e4c54cea5f44713f5);
        cache_frame_b011d3803280b48e4c54cea5f44713f5 = NULL;
    }

    assertFrameObject(frame_b011d3803280b48e4c54cea5f44713f5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_param);
    var_param = NULL;
    Py_XDECREF(var_d_p);
    var_d_p = NULL;
    Py_XDECREF(var_buf);
    var_buf = NULL;
    Py_XDECREF(var_alpha);
    var_alpha = NULL;
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

    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_param);
    var_param = NULL;
    Py_XDECREF(var_d_p);
    var_d_p = NULL;
    Py_XDECREF(var_buf);
    var_buf = NULL;
    Py_XDECREF(var_alpha);
    var_alpha = NULL;
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
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_d_p_list);
    Py_DECREF(par_d_p_list);
    CHECK_OBJECT(par_momentum_buffer_list);
    Py_DECREF(par_momentum_buffer_list);
    CHECK_OBJECT(par_weight_decay);
    Py_DECREF(par_weight_decay);
    CHECK_OBJECT(par_momentum);
    Py_DECREF(par_momentum);
    CHECK_OBJECT(par_lr);
    Py_DECREF(par_lr);
    CHECK_OBJECT(par_dampening);
    Py_DECREF(par_dampening);
    CHECK_OBJECT(par_nesterov);
    Py_DECREF(par_nesterov);
    CHECK_OBJECT(par_maximize);
    Py_DECREF(par_maximize);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_d_p_list);
    Py_DECREF(par_d_p_list);
    CHECK_OBJECT(par_momentum_buffer_list);
    Py_DECREF(par_momentum_buffer_list);
    CHECK_OBJECT(par_weight_decay);
    Py_DECREF(par_weight_decay);
    CHECK_OBJECT(par_momentum);
    Py_DECREF(par_momentum);
    CHECK_OBJECT(par_lr);
    Py_DECREF(par_lr);
    CHECK_OBJECT(par_dampening);
    Py_DECREF(par_dampening);
    CHECK_OBJECT(par_nesterov);
    Py_DECREF(par_nesterov);
    CHECK_OBJECT(par_maximize);
    Py_DECREF(par_maximize);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$optim$_functional$$$function__6_adadelta(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
    PyObject *par_rho = python_pars[5];
    PyObject *par_eps = python_pars[6];
    PyObject *par_weight_decay = python_pars[7];
    PyObject *var_param = NULL;
    PyObject *var_grad = NULL;
    PyObject *var_square_avg = NULL;
    PyObject *var_acc_delta = NULL;
    PyObject *var_std = NULL;
    PyObject *var_delta = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_f0d0e832a60569c4d77bc02656c328f4;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_f0d0e832a60569c4d77bc02656c328f4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f0d0e832a60569c4d77bc02656c328f4)) {
        Py_XDECREF(cache_frame_f0d0e832a60569c4d77bc02656c328f4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f0d0e832a60569c4d77bc02656c328f4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f0d0e832a60569c4d77bc02656c328f4 = MAKE_FUNCTION_FRAME(codeobj_f0d0e832a60569c4d77bc02656c328f4, module_torch$optim$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f0d0e832a60569c4d77bc02656c328f4->m_type_description == NULL);
    frame_f0d0e832a60569c4d77bc02656c328f4 = cache_frame_f0d0e832a60569c4d77bc02656c328f4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f0d0e832a60569c4d77bc02656c328f4);
    assert(Py_REFCNT(frame_f0d0e832a60569c4d77bc02656c328f4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT(par_params);
        tmp_args_element_value_1 = par_params;
        CHECK_OBJECT(par_grads);
        tmp_args_element_value_2 = par_grads;
        CHECK_OBJECT(par_square_avgs);
        tmp_args_element_value_3 = par_square_avgs;
        CHECK_OBJECT(par_acc_deltas);
        tmp_args_element_value_4 = par_acc_deltas;
        frame_f0d0e832a60569c4d77bc02656c328f4->m_frame.f_lineno = 211;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_1, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooooooooooo";
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
                type_description_1 = "oooooooooooooo";
                exception_lineno = 211;
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


            exception_lineno = 211;
            type_description_1 = "oooooooooooooo";
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 211;
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 211;
            goto try_except_handler_4;
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 211;
            goto try_except_handler_4;
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 211;
            goto try_except_handler_4;
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

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 211;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[7];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooo";
            exception_lineno = 211;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
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
            PyObject *old = var_param;
            var_param = tmp_assign_source_8;
            Py_INCREF(var_param);
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
            PyObject *old = var_grad;
            var_grad = tmp_assign_source_9;
            Py_INCREF(var_grad);
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
            PyObject *old = var_square_avg;
            var_square_avg = tmp_assign_source_10;
            Py_INCREF(var_square_avg);
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
            PyObject *old = var_acc_delta;
            var_acc_delta = tmp_assign_source_11;
            Py_INCREF(var_acc_delta);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (par_weight_decay == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 212;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_1 = par_weight_decay;
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooooooo";
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(var_grad);
        tmp_expression_value_1 = var_grad;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_param);
        tmp_kw_call_arg_value_0_1 = var_param;
        if (par_weight_decay == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 213;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_kw_call_dict_value_0_1 = par_weight_decay;
        frame_f0d0e832a60569c4d77bc02656c328f4->m_frame.f_lineno = 213;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_grad;
            assert(old != NULL);
            var_grad = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_5;
        int tmp_truth_name_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[27]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_param == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 215;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_5 = var_param;
        frame_f0d0e832a60569c4d77bc02656c328f4->m_frame.f_lineno = 215;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 215;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_square_avg);
        tmp_args_element_value_6 = var_square_avg;
        frame_f0d0e832a60569c4d77bc02656c328f4->m_frame.f_lineno = 216;
        tmp_assign_source_13 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[28], tmp_args_element_value_6);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_square_avg;
            assert(old != NULL);
            var_square_avg = tmp_assign_source_13;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_7;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_acc_delta);
        tmp_args_element_value_7 = var_acc_delta;
        frame_f0d0e832a60569c4d77bc02656c328f4->m_frame.f_lineno = 217;
        tmp_assign_source_14 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[28], tmp_args_element_value_7);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_acc_delta;
            assert(old != NULL);
            var_acc_delta = tmp_assign_source_14;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_8;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_grad);
        tmp_args_element_value_8 = var_grad;
        frame_f0d0e832a60569c4d77bc02656c328f4->m_frame.f_lineno = 218;
        tmp_assign_source_15 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[28], tmp_args_element_value_8);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_grad;
            assert(old != NULL);
            var_grad = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        CHECK_OBJECT(var_square_avg);
        tmp_expression_value_4 = var_square_avg;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[40]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_rho == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 220;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_9 = par_rho;
        frame_f0d0e832a60569c4d77bc02656c328f4->m_frame.f_lineno = 220;
        tmp_expression_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_5);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[29]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_grad);
        tmp_kw_call_arg_value_0_2 = var_grad;
        CHECK_OBJECT(var_grad);
        tmp_kw_call_arg_value_1_1 = var_grad;
        tmp_sub_expr_left_1 = mod_consts[14];
        if (par_rho == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 220;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_sub_expr_right_1 = par_rho;
        tmp_kw_call_dict_value_0_2 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 220;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        frame_f0d0e832a60569c4d77bc02656c328f4->m_frame.f_lineno = 220;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(var_square_avg);
        tmp_expression_value_5 = var_square_avg;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[11]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_eps == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 221;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_10 = par_eps;
        frame_f0d0e832a60569c4d77bc02656c328f4->m_frame.f_lineno = 221;
        tmp_called_instance_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_6);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        frame_f0d0e832a60569c4d77bc02656c328f4->m_frame.f_lineno = 221;
        tmp_assign_source_16 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[24]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_std;
            var_std = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        CHECK_OBJECT(var_acc_delta);
        tmp_expression_value_6 = var_acc_delta;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[11]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_eps == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 222;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_11 = par_eps;
        frame_f0d0e832a60569c4d77bc02656c328f4->m_frame.f_lineno = 222;
        tmp_called_instance_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_7);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        frame_f0d0e832a60569c4d77bc02656c328f4->m_frame.f_lineno = 222;
        tmp_called_instance_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[24]);
        Py_DECREF(tmp_called_instance_7);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_std);
        tmp_args_element_value_12 = var_std;
        frame_f0d0e832a60569c4d77bc02656c328f4->m_frame.f_lineno = 222;
        tmp_called_instance_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[56], tmp_args_element_value_12);
        Py_DECREF(tmp_called_instance_6);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_grad);
        tmp_args_element_value_13 = var_grad;
        frame_f0d0e832a60569c4d77bc02656c328f4->m_frame.f_lineno = 222;
        tmp_assign_source_17 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[40], tmp_args_element_value_13);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_delta;
            var_delta = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        CHECK_OBJECT(var_acc_delta);
        tmp_expression_value_8 = var_acc_delta;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[40]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_rho == NULL) {
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 223;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_14 = par_rho;
        frame_f0d0e832a60569c4d77bc02656c328f4->m_frame.f_lineno = 223;
        tmp_expression_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_9);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[29]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_delta);
        tmp_kw_call_arg_value_0_3 = var_delta;
        CHECK_OBJECT(var_delta);
        tmp_kw_call_arg_value_1_2 = var_delta;
        tmp_sub_expr_left_2 = mod_consts[14];
        if (par_rho == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 223;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_sub_expr_right_2 = par_rho;
        tmp_kw_call_dict_value_0_3 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 223;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        frame_f0d0e832a60569c4d77bc02656c328f4->m_frame.f_lineno = 223;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_8, args, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_kw_call_dict_value_0_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_15;
        int tmp_truth_name_2;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[27]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_param == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 224;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_15 = var_param;
        frame_f0d0e832a60569c4d77bc02656c328f4->m_frame.f_lineno = 224;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_10);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_4);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_4);

            exception_lineno = 224;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_4);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_16;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_delta);
        tmp_args_element_value_16 = var_delta;
        frame_f0d0e832a60569c4d77bc02656c328f4->m_frame.f_lineno = 225;
        tmp_assign_source_18 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[35], tmp_args_element_value_16);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_delta;
            assert(old != NULL);
            var_delta = tmp_assign_source_18;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_5;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_operand_value_1;
        if (var_param == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 226;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_10 = var_param;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[19]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_delta == NULL) {
            Py_DECREF(tmp_called_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 226;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_kw_call_arg_value_0_4 = var_delta;
        CHECK_OBJECT(par_lr);
        tmp_operand_value_1 = par_lr;
        tmp_kw_call_dict_value_0_4 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        if (tmp_kw_call_dict_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 226;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        frame_f0d0e832a60569c4d77bc02656c328f4->m_frame.f_lineno = 226;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_11, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_kw_call_dict_value_0_4);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 211;
        type_description_1 = "oooooooooooooo";
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f0d0e832a60569c4d77bc02656c328f4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f0d0e832a60569c4d77bc02656c328f4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f0d0e832a60569c4d77bc02656c328f4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f0d0e832a60569c4d77bc02656c328f4,
        type_description_1,
        par_params,
        par_grads,
        par_square_avgs,
        par_acc_deltas,
        par_lr,
        par_rho,
        par_eps,
        par_weight_decay,
        var_param,
        var_grad,
        var_square_avg,
        var_acc_delta,
        var_std,
        var_delta
    );


    // Release cached frame if used for exception.
    if (frame_f0d0e832a60569c4d77bc02656c328f4 == cache_frame_f0d0e832a60569c4d77bc02656c328f4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f0d0e832a60569c4d77bc02656c328f4);
        cache_frame_f0d0e832a60569c4d77bc02656c328f4 = NULL;
    }

    assertFrameObject(frame_f0d0e832a60569c4d77bc02656c328f4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_param);
    var_param = NULL;
    Py_XDECREF(var_grad);
    var_grad = NULL;
    Py_XDECREF(var_square_avg);
    var_square_avg = NULL;
    Py_XDECREF(var_acc_delta);
    var_acc_delta = NULL;
    Py_XDECREF(var_std);
    var_std = NULL;
    Py_XDECREF(var_delta);
    var_delta = NULL;
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

    Py_XDECREF(var_param);
    var_param = NULL;
    Py_XDECREF(var_grad);
    var_grad = NULL;
    Py_XDECREF(var_square_avg);
    var_square_avg = NULL;
    Py_XDECREF(var_acc_delta);
    var_acc_delta = NULL;
    Py_XDECREF(var_std);
    var_std = NULL;
    Py_XDECREF(var_delta);
    var_delta = NULL;
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
    CHECK_OBJECT(par_rho);
    Py_DECREF(par_rho);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
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
    CHECK_OBJECT(par_square_avgs);
    Py_DECREF(par_square_avgs);
    CHECK_OBJECT(par_acc_deltas);
    Py_DECREF(par_acc_deltas);
    CHECK_OBJECT(par_lr);
    Py_DECREF(par_lr);
    CHECK_OBJECT(par_rho);
    Py_DECREF(par_rho);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    CHECK_OBJECT(par_weight_decay);
    Py_DECREF(par_weight_decay);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$optim$_functional$$$function__7_rmsprop(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_params = python_pars[0];
    PyObject *par_grads = python_pars[1];
    PyObject *par_square_avgs = python_pars[2];
    PyObject *par_grad_avgs = python_pars[3];
    PyObject *par_momentum_buffer_list = python_pars[4];
    PyObject *par_lr = python_pars[5];
    PyObject *par_alpha = python_pars[6];
    PyObject *par_eps = python_pars[7];
    PyObject *par_weight_decay = python_pars[8];
    PyObject *par_momentum = python_pars[9];
    PyObject *par_centered = python_pars[10];
    PyObject *var_i = NULL;
    PyObject *var_param = NULL;
    PyObject *var_grad = NULL;
    PyObject *var_square_avg = NULL;
    PyObject *var_grad_avg = NULL;
    PyObject *var_avg = NULL;
    PyObject *var_buf = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_1a6ce2c4e5fc56421b40861a3fbbcd17;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_1a6ce2c4e5fc56421b40861a3fbbcd17 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1a6ce2c4e5fc56421b40861a3fbbcd17)) {
        Py_XDECREF(cache_frame_1a6ce2c4e5fc56421b40861a3fbbcd17);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1a6ce2c4e5fc56421b40861a3fbbcd17 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1a6ce2c4e5fc56421b40861a3fbbcd17 = MAKE_FUNCTION_FRAME(codeobj_1a6ce2c4e5fc56421b40861a3fbbcd17, module_torch$optim$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1a6ce2c4e5fc56421b40861a3fbbcd17->m_type_description == NULL);
    frame_1a6ce2c4e5fc56421b40861a3fbbcd17 = cache_frame_1a6ce2c4e5fc56421b40861a3fbbcd17;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1a6ce2c4e5fc56421b40861a3fbbcd17);
    assert(Py_REFCNT(frame_1a6ce2c4e5fc56421b40861a3fbbcd17) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_params);
        tmp_args_element_value_1 = par_params;
        frame_1a6ce2c4e5fc56421b40861a3fbbcd17->m_frame.f_lineno = 245;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooooooooooooooooo";
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
                type_description_1 = "oooooooooooooooooo";
                exception_lineno = 245;
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


            exception_lineno = 245;
            type_description_1 = "oooooooooooooooooo";
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


            type_description_1 = "oooooooooooooooooo";
            exception_lineno = 245;
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


            type_description_1 = "oooooooooooooooooo";
            exception_lineno = 245;
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

                    type_description_1 = "oooooooooooooooooo";
                    exception_lineno = 245;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooo";
            exception_lineno = 245;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_6;
            Py_INCREF(var_i);
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
            PyObject *old = var_param;
            var_param = tmp_assign_source_7;
            Py_INCREF(var_param);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_grads);
        tmp_expression_value_1 = par_grads;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_1 = var_i;
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_grad;
            var_grad = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_square_avgs);
        tmp_expression_value_2 = par_square_avgs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_2 = var_i;
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_square_avg;
            var_square_avg = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (par_weight_decay == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_1 = par_weight_decay;
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooo";
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
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(var_grad);
        tmp_expression_value_3 = var_grad;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[11]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_param);
        tmp_kw_call_arg_value_0_1 = var_param;
        if (par_weight_decay == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 250;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_kw_call_dict_value_0_1 = par_weight_decay;
        frame_1a6ce2c4e5fc56421b40861a3fbbcd17->m_frame.f_lineno = 250;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_grad;
            assert(old != NULL);
            var_grad = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        CHECK_OBJECT(var_square_avg);
        tmp_expression_value_5 = var_square_avg;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[40]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_alpha == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 252;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_2 = par_alpha;
        frame_1a6ce2c4e5fc56421b40861a3fbbcd17->m_frame.f_lineno = 252;
        tmp_expression_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[29]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_grad);
        tmp_kw_call_arg_value_0_2 = var_grad;
        CHECK_OBJECT(var_grad);
        tmp_kw_call_arg_value_1_1 = var_grad;
        tmp_sub_expr_left_1 = mod_consts[14];
        if (par_alpha == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 252;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_sub_expr_right_1 = par_alpha;
        tmp_kw_call_dict_value_0_2 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 252;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_1a6ce2c4e5fc56421b40861a3fbbcd17->m_frame.f_lineno = 252;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_centered);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_centered);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_grad_avgs);
        tmp_expression_value_6 = par_grad_avgs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_3 = var_i;
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_3);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_grad_avg;
            var_grad_avg = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        CHECK_OBJECT(var_grad_avg);
        tmp_expression_value_8 = var_grad_avg;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[40]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_alpha == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 256;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_3 = par_alpha;
        frame_1a6ce2c4e5fc56421b40861a3fbbcd17->m_frame.f_lineno = 256;
        tmp_expression_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_6);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[19]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_grad);
        tmp_kw_call_arg_value_0_3 = var_grad;
        tmp_sub_expr_left_2 = mod_consts[14];
        if (par_alpha == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 256;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_sub_expr_right_2 = par_alpha;
        tmp_kw_call_dict_value_0_3 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 256;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_1a6ce2c4e5fc56421b40861a3fbbcd17->m_frame.f_lineno = 256;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_5, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_dict_value_0_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_square_avg);
        tmp_expression_value_10 = var_square_avg;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[60]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_grad_avg);
        tmp_tuple_element_1 = var_grad_avg;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_grad_avg);
        tmp_tuple_element_1 = var_grad_avg;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[61]);
        frame_1a6ce2c4e5fc56421b40861a3fbbcd17->m_frame.f_lineno = 257;
        tmp_called_instance_1 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_1a6ce2c4e5fc56421b40861a3fbbcd17->m_frame.f_lineno = 257;
        tmp_expression_value_9 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[24]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[19]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_eps == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_4 = par_eps;
        frame_1a6ce2c4e5fc56421b40861a3fbbcd17->m_frame.f_lineno = 257;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_avg;
            var_avg = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(var_square_avg);
        tmp_called_instance_2 = var_square_avg;
        frame_1a6ce2c4e5fc56421b40861a3fbbcd17->m_frame.f_lineno = 259;
        tmp_expression_value_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[32]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[19]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_eps == NULL) {
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 259;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_5 = par_eps;
        frame_1a6ce2c4e5fc56421b40861a3fbbcd17->m_frame.f_lineno = 259;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_9);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_avg;
            var_avg = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    branch_end_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (par_momentum == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 261;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_2 = par_momentum;
        tmp_cmp_expr_right_2 = mod_consts[2];
        tmp_condition_result_3 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_momentum_buffer_list);
        tmp_expression_value_12 = par_momentum_buffer_list;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_4 = var_i;
        tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_4);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_buf;
            var_buf = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(var_buf);
        tmp_expression_value_13 = var_buf;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[40]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_momentum == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 263;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_6 = par_momentum;
        frame_1a6ce2c4e5fc56421b40861a3fbbcd17->m_frame.f_lineno = 263;
        tmp_called_instance_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_10);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_grad);
        tmp_args_element_value_7 = var_grad;
        CHECK_OBJECT(var_avg);
        tmp_args_element_value_8 = var_avg;
        frame_1a6ce2c4e5fc56421b40861a3fbbcd17->m_frame.f_lineno = 263;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[33],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_4;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_operand_value_1;
        if (var_param == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 264;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_14 = var_param;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[19]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_buf);
        tmp_kw_call_arg_value_0_4 = var_buf;
        CHECK_OBJECT(par_lr);
        tmp_operand_value_1 = par_lr;
        tmp_kw_call_dict_value_0_4 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        if (tmp_kw_call_dict_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 264;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_1a6ce2c4e5fc56421b40861a3fbbcd17->m_frame.f_lineno = 264;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_11, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_kw_call_dict_value_0_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_5;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_dict_value_0_5;
        PyObject *tmp_operand_value_2;
        if (var_param == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_15 = var_param;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[33]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_grad);
        tmp_kw_call_arg_value_0_5 = var_grad;
        CHECK_OBJECT(var_avg);
        tmp_kw_call_arg_value_1_2 = var_avg;
        CHECK_OBJECT(par_lr);
        tmp_operand_value_2 = par_lr;
        tmp_kw_call_dict_value_0_5 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
        if (tmp_kw_call_dict_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_1a6ce2c4e5fc56421b40861a3fbbcd17->m_frame.f_lineno = 266;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_5};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_12, args, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_kw_call_dict_value_0_5);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_end_3:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 245;
        type_description_1 = "oooooooooooooooooo";
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1a6ce2c4e5fc56421b40861a3fbbcd17, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a6ce2c4e5fc56421b40861a3fbbcd17->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a6ce2c4e5fc56421b40861a3fbbcd17, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1a6ce2c4e5fc56421b40861a3fbbcd17,
        type_description_1,
        par_params,
        par_grads,
        par_square_avgs,
        par_grad_avgs,
        par_momentum_buffer_list,
        par_lr,
        par_alpha,
        par_eps,
        par_weight_decay,
        par_momentum,
        par_centered,
        var_i,
        var_param,
        var_grad,
        var_square_avg,
        var_grad_avg,
        var_avg,
        var_buf
    );


    // Release cached frame if used for exception.
    if (frame_1a6ce2c4e5fc56421b40861a3fbbcd17 == cache_frame_1a6ce2c4e5fc56421b40861a3fbbcd17) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1a6ce2c4e5fc56421b40861a3fbbcd17);
        cache_frame_1a6ce2c4e5fc56421b40861a3fbbcd17 = NULL;
    }

    assertFrameObject(frame_1a6ce2c4e5fc56421b40861a3fbbcd17);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_param);
    var_param = NULL;
    Py_XDECREF(var_grad);
    var_grad = NULL;
    Py_XDECREF(var_square_avg);
    var_square_avg = NULL;
    Py_XDECREF(var_grad_avg);
    var_grad_avg = NULL;
    Py_XDECREF(var_avg);
    var_avg = NULL;
    Py_XDECREF(var_buf);
    var_buf = NULL;
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

    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_param);
    var_param = NULL;
    Py_XDECREF(var_grad);
    var_grad = NULL;
    Py_XDECREF(var_square_avg);
    var_square_avg = NULL;
    Py_XDECREF(var_grad_avg);
    var_grad_avg = NULL;
    Py_XDECREF(var_avg);
    var_avg = NULL;
    Py_XDECREF(var_buf);
    var_buf = NULL;
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
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_grads);
    Py_DECREF(par_grads);
    CHECK_OBJECT(par_square_avgs);
    Py_DECREF(par_square_avgs);
    CHECK_OBJECT(par_grad_avgs);
    Py_DECREF(par_grad_avgs);
    CHECK_OBJECT(par_momentum_buffer_list);
    Py_DECREF(par_momentum_buffer_list);
    CHECK_OBJECT(par_lr);
    Py_DECREF(par_lr);
    CHECK_OBJECT(par_alpha);
    Py_DECREF(par_alpha);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    CHECK_OBJECT(par_weight_decay);
    Py_DECREF(par_weight_decay);
    CHECK_OBJECT(par_momentum);
    Py_DECREF(par_momentum);
    CHECK_OBJECT(par_centered);
    Py_DECREF(par_centered);
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
    CHECK_OBJECT(par_grad_avgs);
    Py_DECREF(par_grad_avgs);
    CHECK_OBJECT(par_momentum_buffer_list);
    Py_DECREF(par_momentum_buffer_list);
    CHECK_OBJECT(par_lr);
    Py_DECREF(par_lr);
    CHECK_OBJECT(par_alpha);
    Py_DECREF(par_alpha);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    CHECK_OBJECT(par_weight_decay);
    Py_DECREF(par_weight_decay);
    CHECK_OBJECT(par_momentum);
    Py_DECREF(par_momentum);
    CHECK_OBJECT(par_centered);
    Py_DECREF(par_centered);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$optim$_functional$$$function__8_rprop(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_params = python_pars[0];
    PyObject *par_grads = python_pars[1];
    PyObject *par_prevs = python_pars[2];
    PyObject *par_step_sizes = python_pars[3];
    PyObject *par_step_size_min = python_pars[4];
    PyObject *par_step_size_max = python_pars[5];
    PyObject *par_etaminus = python_pars[6];
    PyObject *par_etaplus = python_pars[7];
    PyObject *var_i = NULL;
    PyObject *var_param = NULL;
    PyObject *var_grad = NULL;
    PyObject *var_prev = NULL;
    PyObject *var_step_size = NULL;
    PyObject *var_sign = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_4cbf6e0ecca94a31c8a2fa968e847035;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_4cbf6e0ecca94a31c8a2fa968e847035 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4cbf6e0ecca94a31c8a2fa968e847035)) {
        Py_XDECREF(cache_frame_4cbf6e0ecca94a31c8a2fa968e847035);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4cbf6e0ecca94a31c8a2fa968e847035 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4cbf6e0ecca94a31c8a2fa968e847035 = MAKE_FUNCTION_FRAME(codeobj_4cbf6e0ecca94a31c8a2fa968e847035, module_torch$optim$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4cbf6e0ecca94a31c8a2fa968e847035->m_type_description == NULL);
    frame_4cbf6e0ecca94a31c8a2fa968e847035 = cache_frame_4cbf6e0ecca94a31c8a2fa968e847035;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4cbf6e0ecca94a31c8a2fa968e847035);
    assert(Py_REFCNT(frame_4cbf6e0ecca94a31c8a2fa968e847035) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_params);
        tmp_args_element_value_1 = par_params;
        frame_4cbf6e0ecca94a31c8a2fa968e847035->m_frame.f_lineno = 283;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oooooooooooooo";
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
                type_description_1 = "oooooooooooooo";
                exception_lineno = 283;
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


            exception_lineno = 283;
            type_description_1 = "oooooooooooooo";
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 283;
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 283;
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

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 283;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooo";
            exception_lineno = 283;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_6;
            Py_INCREF(var_i);
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
            PyObject *old = var_param;
            var_param = tmp_assign_source_7;
            Py_INCREF(var_param);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_grads);
        tmp_expression_value_1 = par_grads;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_1 = var_i;
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_grad;
            var_grad = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_prevs);
        tmp_expression_value_2 = par_prevs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_2 = var_i;
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_prev;
            var_prev = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_step_sizes);
        tmp_expression_value_3 = par_step_sizes;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_3 = var_i;
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_step_size;
            var_step_size = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_grad);
        tmp_called_instance_2 = var_grad;
        CHECK_OBJECT(var_prev);
        tmp_args_element_value_2 = var_prev;
        frame_4cbf6e0ecca94a31c8a2fa968e847035->m_frame.f_lineno = 288;
        tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[63], tmp_args_element_value_2);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        frame_4cbf6e0ecca94a31c8a2fa968e847035->m_frame.f_lineno = 288;
        tmp_assign_source_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[64]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_sign;
            var_sign = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_called_instance_3;
        if (par_etaplus == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 289;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subvalue_1 = par_etaplus;
        CHECK_OBJECT(var_sign);
        tmp_ass_subscribed_1 = var_sign;
        CHECK_OBJECT(var_sign);
        tmp_called_instance_3 = var_sign;
        frame_4cbf6e0ecca94a31c8a2fa968e847035->m_frame.f_lineno = 289;
        tmp_ass_subscript_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[66],
            PyTuple_GET_ITEM(mod_consts[67], 0)
        );

        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_called_instance_4;
        if (par_etaminus == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 290;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subvalue_2 = par_etaminus;
        CHECK_OBJECT(var_sign);
        tmp_ass_subscribed_2 = var_sign;
        CHECK_OBJECT(var_sign);
        tmp_called_instance_4 = var_sign;
        frame_4cbf6e0ecca94a31c8a2fa968e847035->m_frame.f_lineno = 290;
        tmp_ass_subscript_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[69],
            PyTuple_GET_ITEM(mod_consts[67], 0)
        );

        if (tmp_ass_subscript_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        PyObject *tmp_called_instance_5;
        tmp_ass_subvalue_3 = mod_consts[14];
        CHECK_OBJECT(var_sign);
        tmp_ass_subscribed_3 = var_sign;
        CHECK_OBJECT(var_sign);
        tmp_called_instance_5 = var_sign;
        frame_4cbf6e0ecca94a31c8a2fa968e847035->m_frame.f_lineno = 291;
        tmp_ass_subscript_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_5,
            mod_consts[70],
            PyTuple_GET_ITEM(mod_consts[67], 0)
        );

        if (tmp_ass_subscript_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscript_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(var_step_size);
        tmp_called_instance_6 = var_step_size;
        CHECK_OBJECT(var_sign);
        tmp_args_element_value_3 = var_sign;
        frame_4cbf6e0ecca94a31c8a2fa968e847035->m_frame.f_lineno = 294;
        tmp_expression_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[40], tmp_args_element_value_3);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[71]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_step_size_min == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 294;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_4 = par_step_size_min;
        if (par_step_size_max == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 294;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_5 = par_step_size_max;
        frame_4cbf6e0ecca94a31c8a2fa968e847035->m_frame.f_lineno = 294;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_grad);
        tmp_expression_value_5 = var_grad;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[49]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 298;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[74]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 298;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        frame_4cbf6e0ecca94a31c8a2fa968e847035->m_frame.f_lineno = 298;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_12 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[75]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_grad;
            assert(old != NULL);
            var_grad = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_6;
        tmp_ass_subvalue_4 = mod_consts[2];
        CHECK_OBJECT(var_grad);
        tmp_ass_subscribed_4 = var_grad;
        CHECK_OBJECT(var_sign);
        tmp_expression_value_7 = var_sign;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[70]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_etaminus == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 299;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_6 = par_etaminus;
        frame_4cbf6e0ecca94a31c8a2fa968e847035->m_frame.f_lineno = 299;
        tmp_ass_subscript_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_4);
        if (tmp_ass_subscript_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subscript_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(var_param);
        tmp_expression_value_8 = var_param;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[29]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_grad);
        tmp_called_instance_7 = var_grad;
        frame_4cbf6e0ecca94a31c8a2fa968e847035->m_frame.f_lineno = 302;
        tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[64]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 302;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_step_size);
        tmp_tuple_element_1 = var_step_size;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[61]);
        frame_4cbf6e0ecca94a31c8a2fa968e847035->m_frame.f_lineno = 302;
        tmp_call_result_2 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(var_prev);
        tmp_called_instance_8 = var_prev;
        CHECK_OBJECT(var_grad);
        tmp_args_element_value_7 = var_grad;
        frame_4cbf6e0ecca94a31c8a2fa968e847035->m_frame.f_lineno = 304;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[76], tmp_args_element_value_7);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 283;
        type_description_1 = "oooooooooooooo";
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4cbf6e0ecca94a31c8a2fa968e847035, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4cbf6e0ecca94a31c8a2fa968e847035->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4cbf6e0ecca94a31c8a2fa968e847035, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4cbf6e0ecca94a31c8a2fa968e847035,
        type_description_1,
        par_params,
        par_grads,
        par_prevs,
        par_step_sizes,
        par_step_size_min,
        par_step_size_max,
        par_etaminus,
        par_etaplus,
        var_i,
        var_param,
        var_grad,
        var_prev,
        var_step_size,
        var_sign
    );


    // Release cached frame if used for exception.
    if (frame_4cbf6e0ecca94a31c8a2fa968e847035 == cache_frame_4cbf6e0ecca94a31c8a2fa968e847035) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4cbf6e0ecca94a31c8a2fa968e847035);
        cache_frame_4cbf6e0ecca94a31c8a2fa968e847035 = NULL;
    }

    assertFrameObject(frame_4cbf6e0ecca94a31c8a2fa968e847035);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_param);
    var_param = NULL;
    Py_XDECREF(var_grad);
    var_grad = NULL;
    Py_XDECREF(var_prev);
    var_prev = NULL;
    Py_XDECREF(var_step_size);
    var_step_size = NULL;
    Py_XDECREF(var_sign);
    var_sign = NULL;
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

    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_param);
    var_param = NULL;
    Py_XDECREF(var_grad);
    var_grad = NULL;
    Py_XDECREF(var_prev);
    var_prev = NULL;
    Py_XDECREF(var_step_size);
    var_step_size = NULL;
    Py_XDECREF(var_sign);
    var_sign = NULL;
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
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_grads);
    Py_DECREF(par_grads);
    CHECK_OBJECT(par_prevs);
    Py_DECREF(par_prevs);
    CHECK_OBJECT(par_step_sizes);
    Py_DECREF(par_step_sizes);
    CHECK_OBJECT(par_step_size_min);
    Py_DECREF(par_step_size_min);
    CHECK_OBJECT(par_step_size_max);
    Py_DECREF(par_step_size_max);
    CHECK_OBJECT(par_etaminus);
    Py_DECREF(par_etaminus);
    CHECK_OBJECT(par_etaplus);
    Py_DECREF(par_etaplus);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_grads);
    Py_DECREF(par_grads);
    CHECK_OBJECT(par_prevs);
    Py_DECREF(par_prevs);
    CHECK_OBJECT(par_step_sizes);
    Py_DECREF(par_step_sizes);
    CHECK_OBJECT(par_step_size_min);
    Py_DECREF(par_step_size_min);
    CHECK_OBJECT(par_step_size_max);
    Py_DECREF(par_step_size_max);
    CHECK_OBJECT(par_etaminus);
    Py_DECREF(par_etaminus);
    CHECK_OBJECT(par_etaplus);
    Py_DECREF(par_etaplus);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$optim$_functional$$$function__9_adamax(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_params = python_pars[0];
    PyObject *par_grads = python_pars[1];
    PyObject *par_exp_avgs = python_pars[2];
    PyObject *par_exp_infs = python_pars[3];
    PyObject *par_state_steps = python_pars[4];
    PyObject *par_eps = python_pars[5];
    PyObject *par_beta1 = python_pars[6];
    PyObject *par_beta2 = python_pars[7];
    PyObject *par_lr = python_pars[8];
    PyObject *par_weight_decay = python_pars[9];
    PyObject *var_i = NULL;
    PyObject *var_param = NULL;
    PyObject *var_grad = NULL;
    PyObject *var_exp_avg = NULL;
    PyObject *var_exp_inf = NULL;
    PyObject *var_step = NULL;
    PyObject *var_norm_buf = NULL;
    PyObject *var_bias_correction = NULL;
    PyObject *var_clr = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_f0017e915de489a0d5abbebd0b70cffa;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_f0017e915de489a0d5abbebd0b70cffa = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f0017e915de489a0d5abbebd0b70cffa)) {
        Py_XDECREF(cache_frame_f0017e915de489a0d5abbebd0b70cffa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f0017e915de489a0d5abbebd0b70cffa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f0017e915de489a0d5abbebd0b70cffa = MAKE_FUNCTION_FRAME(codeobj_f0017e915de489a0d5abbebd0b70cffa, module_torch$optim$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f0017e915de489a0d5abbebd0b70cffa->m_type_description == NULL);
    frame_f0017e915de489a0d5abbebd0b70cffa = cache_frame_f0017e915de489a0d5abbebd0b70cffa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f0017e915de489a0d5abbebd0b70cffa);
    assert(Py_REFCNT(frame_f0017e915de489a0d5abbebd0b70cffa) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_params);
        tmp_args_element_value_1 = par_params;
        frame_f0017e915de489a0d5abbebd0b70cffa->m_frame.f_lineno = 323;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooooooooooooooooooo";
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
                type_description_1 = "ooooooooooooooooooo";
                exception_lineno = 323;
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


            exception_lineno = 323;
            type_description_1 = "ooooooooooooooooooo";
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


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 323;
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


            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 323;
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

                    type_description_1 = "ooooooooooooooooooo";
                    exception_lineno = 323;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooo";
            exception_lineno = 323;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_6;
            Py_INCREF(var_i);
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
            PyObject *old = var_param;
            var_param = tmp_assign_source_7;
            Py_INCREF(var_param);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_grads);
        tmp_expression_value_1 = par_grads;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_1 = var_i;
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_grad;
            var_grad = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_exp_avgs);
        tmp_expression_value_2 = par_exp_avgs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_2 = var_i;
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_exp_avg;
            var_exp_avg = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_exp_infs);
        tmp_expression_value_3 = par_exp_infs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_3 = var_i;
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_exp_inf;
            var_exp_inf = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_state_steps);
        tmp_expression_value_4 = par_state_steps;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_4 = var_i;
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_step;
            var_step = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (par_weight_decay == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 329;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_1 = par_weight_decay;
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "ooooooooooooooooooo";
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(var_grad);
        tmp_expression_value_5 = var_grad;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[11]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_param);
        tmp_kw_call_arg_value_0_1 = var_param;
        if (par_weight_decay == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_kw_call_dict_value_0_1 = par_weight_decay;
        frame_f0017e915de489a0d5abbebd0b70cffa->m_frame.f_lineno = 330;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_grad;
            assert(old != NULL);
            var_grad = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        CHECK_OBJECT(var_exp_avg);
        tmp_expression_value_7 = var_exp_avg;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[40]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_beta1 == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 333;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_2 = par_beta1;
        frame_f0017e915de489a0d5abbebd0b70cffa->m_frame.f_lineno = 333;
        tmp_expression_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[19]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_grad);
        tmp_kw_call_arg_value_0_2 = var_grad;
        tmp_sub_expr_left_1 = mod_consts[14];
        if (par_beta1 == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 333;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_sub_expr_right_1 = par_beta1;
        tmp_kw_call_dict_value_0_2 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 333;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_f0017e915de489a0d5abbebd0b70cffa->m_frame.f_lineno = 333;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[78]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_exp_inf);
        tmp_expression_value_9 = var_exp_inf;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[40]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 336;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_beta2 == NULL) {
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 336;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_4 = par_beta2;
        frame_f0017e915de489a0d5abbebd0b70cffa->m_frame.f_lineno = 336;
        tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_6);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 336;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_f0017e915de489a0d5abbebd0b70cffa->m_frame.f_lineno = 336;
        tmp_list_element_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[79],
            PyTuple_GET_ITEM(mod_consts[67], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 336;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_3 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_called_value_7;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_5;
            PyList_SET_ITEM(tmp_args_element_value_3, 0, tmp_list_element_1);
            CHECK_OBJECT(var_grad);
            tmp_called_instance_3 = var_grad;
            frame_f0017e915de489a0d5abbebd0b70cffa->m_frame.f_lineno = 337;
            tmp_expression_value_10 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[80]);
            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;
                type_description_1 = "ooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[19]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;
                type_description_1 = "ooooooooooooooooooo";
                goto list_build_exception_1;
            }
            if (par_eps == NULL) {
                Py_DECREF(tmp_called_value_7);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 337;
                type_description_1 = "ooooooooooooooooooo";
                goto list_build_exception_1;
            }

            tmp_args_element_value_5 = par_eps;
            frame_f0017e915de489a0d5abbebd0b70cffa->m_frame.f_lineno = 337;
            tmp_called_instance_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_7);
            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;
                type_description_1 = "ooooooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_f0017e915de489a0d5abbebd0b70cffa->m_frame.f_lineno = 337;
            tmp_list_element_1 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_2,
                mod_consts[81],
                PyTuple_GET_ITEM(mod_consts[67], 0)
            );

            Py_DECREF(tmp_called_instance_2);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;
                type_description_1 = "ooooooooooooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_3, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        goto try_except_handler_2;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_args_element_value_6 = mod_consts[2];
        frame_f0017e915de489a0d5abbebd0b70cffa->m_frame.f_lineno = 335;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_6};
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_norm_buf;
            var_norm_buf = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[82]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_norm_buf);
        tmp_kw_call_arg_value_0_3 = var_norm_buf;
        tmp_kw_call_arg_value_1_1 = mod_consts[2];
        tmp_kw_call_dict_value_0_3 = Py_False;
        CHECK_OBJECT(var_exp_inf);
        tmp_kw_call_dict_value_1_1 = var_exp_inf;
        frame_f0017e915de489a0d5abbebd0b70cffa->m_frame.f_lineno = 339;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_1};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_8, args, kw_values, mod_consts[83]);
        }

        Py_DECREF(tmp_called_value_8);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_pow_expr_left_1;
        PyObject *tmp_pow_expr_right_1;
        tmp_sub_expr_left_2 = mod_consts[14];
        if (par_beta1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 341;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_pow_expr_left_1 = par_beta1;
        CHECK_OBJECT(var_step);
        tmp_pow_expr_right_1 = var_step;
        tmp_sub_expr_right_2 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
        if (tmp_sub_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_14 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_right_2);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_bias_correction;
            var_bias_correction = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        if (par_lr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_truediv_expr_left_1 = par_lr;
        CHECK_OBJECT(var_bias_correction);
        tmp_truediv_expr_right_1 = var_bias_correction;
        tmp_assign_source_15 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_clr;
            var_clr = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_operand_value_1;
        if (var_param == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 344;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_12 = var_param;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[33]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_exp_avg);
        tmp_kw_call_arg_value_0_4 = var_exp_avg;
        CHECK_OBJECT(var_exp_inf);
        tmp_kw_call_arg_value_1_2 = var_exp_inf;
        CHECK_OBJECT(var_clr);
        tmp_operand_value_1 = var_clr;
        tmp_kw_call_dict_value_0_4 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        if (tmp_kw_call_dict_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 344;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_f0017e915de489a0d5abbebd0b70cffa->m_frame.f_lineno = 344;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_9, args, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_kw_call_dict_value_0_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 323;
        type_description_1 = "ooooooooooooooooooo";
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f0017e915de489a0d5abbebd0b70cffa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f0017e915de489a0d5abbebd0b70cffa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f0017e915de489a0d5abbebd0b70cffa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f0017e915de489a0d5abbebd0b70cffa,
        type_description_1,
        par_params,
        par_grads,
        par_exp_avgs,
        par_exp_infs,
        par_state_steps,
        par_eps,
        par_beta1,
        par_beta2,
        par_lr,
        par_weight_decay,
        var_i,
        var_param,
        var_grad,
        var_exp_avg,
        var_exp_inf,
        var_step,
        var_norm_buf,
        var_bias_correction,
        var_clr
    );


    // Release cached frame if used for exception.
    if (frame_f0017e915de489a0d5abbebd0b70cffa == cache_frame_f0017e915de489a0d5abbebd0b70cffa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f0017e915de489a0d5abbebd0b70cffa);
        cache_frame_f0017e915de489a0d5abbebd0b70cffa = NULL;
    }

    assertFrameObject(frame_f0017e915de489a0d5abbebd0b70cffa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_param);
    var_param = NULL;
    Py_XDECREF(var_grad);
    var_grad = NULL;
    Py_XDECREF(var_exp_avg);
    var_exp_avg = NULL;
    Py_XDECREF(var_exp_inf);
    var_exp_inf = NULL;
    Py_XDECREF(var_step);
    var_step = NULL;
    Py_XDECREF(var_norm_buf);
    var_norm_buf = NULL;
    Py_XDECREF(var_bias_correction);
    var_bias_correction = NULL;
    Py_XDECREF(var_clr);
    var_clr = NULL;
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

    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_param);
    var_param = NULL;
    Py_XDECREF(var_grad);
    var_grad = NULL;
    Py_XDECREF(var_exp_avg);
    var_exp_avg = NULL;
    Py_XDECREF(var_exp_inf);
    var_exp_inf = NULL;
    Py_XDECREF(var_step);
    var_step = NULL;
    Py_XDECREF(var_norm_buf);
    var_norm_buf = NULL;
    Py_XDECREF(var_bias_correction);
    var_bias_correction = NULL;
    Py_XDECREF(var_clr);
    var_clr = NULL;
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
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_grads);
    Py_DECREF(par_grads);
    CHECK_OBJECT(par_exp_avgs);
    Py_DECREF(par_exp_avgs);
    CHECK_OBJECT(par_exp_infs);
    Py_DECREF(par_exp_infs);
    CHECK_OBJECT(par_state_steps);
    Py_DECREF(par_state_steps);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    CHECK_OBJECT(par_beta1);
    Py_DECREF(par_beta1);
    CHECK_OBJECT(par_beta2);
    Py_DECREF(par_beta2);
    CHECK_OBJECT(par_lr);
    Py_DECREF(par_lr);
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
    CHECK_OBJECT(par_exp_avgs);
    Py_DECREF(par_exp_avgs);
    CHECK_OBJECT(par_exp_infs);
    Py_DECREF(par_exp_infs);
    CHECK_OBJECT(par_state_steps);
    Py_DECREF(par_state_steps);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    CHECK_OBJECT(par_beta1);
    Py_DECREF(par_beta1);
    CHECK_OBJECT(par_beta2);
    Py_DECREF(par_beta2);
    CHECK_OBJECT(par_lr);
    Py_DECREF(par_lr);
    CHECK_OBJECT(par_weight_decay);
    Py_DECREF(par_weight_decay);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$optim$_functional$$$function__10_asgd(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_params = python_pars[0];
    PyObject *par_grads = python_pars[1];
    PyObject *par_axs = python_pars[2];
    PyObject *par_mus = python_pars[3];
    PyObject *par_etas = python_pars[4];
    PyObject *par_weight_decay = python_pars[5];
    PyObject *par_lambd = python_pars[6];
    PyObject *var_i = NULL;
    PyObject *var_param = NULL;
    PyObject *var_grad = NULL;
    PyObject *var_mu = NULL;
    PyObject *var_ax = NULL;
    PyObject *var_eta = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_4d34c784f2406b8a445b50e82e0db550;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_4d34c784f2406b8a445b50e82e0db550 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4d34c784f2406b8a445b50e82e0db550)) {
        Py_XDECREF(cache_frame_4d34c784f2406b8a445b50e82e0db550);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4d34c784f2406b8a445b50e82e0db550 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4d34c784f2406b8a445b50e82e0db550 = MAKE_FUNCTION_FRAME(codeobj_4d34c784f2406b8a445b50e82e0db550, module_torch$optim$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4d34c784f2406b8a445b50e82e0db550->m_type_description == NULL);
    frame_4d34c784f2406b8a445b50e82e0db550 = cache_frame_4d34c784f2406b8a445b50e82e0db550;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4d34c784f2406b8a445b50e82e0db550);
    assert(Py_REFCNT(frame_4d34c784f2406b8a445b50e82e0db550) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_params);
        tmp_args_element_value_1 = par_params;
        frame_4d34c784f2406b8a445b50e82e0db550->m_frame.f_lineno = 360;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooooooooooooo";
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
                type_description_1 = "ooooooooooooo";
                exception_lineno = 360;
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


            exception_lineno = 360;
            type_description_1 = "ooooooooooooo";
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 360;
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 360;
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

                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 360;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooo";
            exception_lineno = 360;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_6;
            Py_INCREF(var_i);
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
            PyObject *old = var_param;
            var_param = tmp_assign_source_7;
            Py_INCREF(var_param);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_grads);
        tmp_expression_value_1 = par_grads;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_1 = var_i;
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_grad;
            var_grad = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_mus);
        tmp_expression_value_2 = par_mus;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_2 = var_i;
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_mu;
            var_mu = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_axs);
        tmp_expression_value_3 = par_axs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_3 = var_i;
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_ax;
            var_ax = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_etas);
        tmp_expression_value_4 = par_etas;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_4 = var_i;
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_eta;
            var_eta = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (par_weight_decay == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 366;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_1 = par_weight_decay;
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooooooooooooo";
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(var_grad);
        tmp_expression_value_5 = var_grad;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[11]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_param);
        tmp_kw_call_arg_value_0_1 = var_param;
        if (par_weight_decay == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 367;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_kw_call_dict_value_0_1 = par_weight_decay;
        frame_4d34c784f2406b8a445b50e82e0db550->m_frame.f_lineno = 367;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_grad;
            assert(old != NULL);
            var_grad = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        if (var_param == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 370;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_6 = var_param;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[40]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_sub_expr_left_1 = mod_consts[14];
        if (par_lambd == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 370;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_mult_expr_left_1 = par_lambd;
        CHECK_OBJECT(var_eta);
        tmp_mult_expr_right_1 = var_eta;
        tmp_sub_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 370;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_2 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 370;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        frame_4d34c784f2406b8a445b50e82e0db550->m_frame.f_lineno = 370;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_operand_value_1;
        if (var_param == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 373;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_7 = var_param;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[19]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_grad);
        tmp_kw_call_arg_value_0_2 = var_grad;
        CHECK_OBJECT(var_eta);
        tmp_operand_value_1 = var_eta;
        tmp_kw_call_dict_value_0_2 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 373;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        frame_4d34c784f2406b8a445b50e82e0db550->m_frame.f_lineno = 373;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_mu);
        tmp_cmp_expr_left_2 = var_mu;
        tmp_cmp_expr_right_2 = mod_consts[14];
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ooooooooooooo";
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
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(var_ax);
        tmp_expression_value_8 = var_ax;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[19]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_param == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 377;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = var_param;
        CHECK_OBJECT(var_ax);
        tmp_args_element_value_4 = var_ax;
        frame_4d34c784f2406b8a445b50e82e0db550->m_frame.f_lineno = 377;
        tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[86], tmp_args_element_value_4);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 377;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_mu);
        tmp_args_element_value_5 = var_mu;
        frame_4d34c784f2406b8a445b50e82e0db550->m_frame.f_lineno = 377;
        tmp_args_element_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[63], tmp_args_element_value_5);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 377;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        frame_4d34c784f2406b8a445b50e82e0db550->m_frame.f_lineno = 377;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(var_ax);
        tmp_expression_value_9 = var_ax;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[76]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_param == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 379;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_6 = var_param;
        frame_4d34c784f2406b8a445b50e82e0db550->m_frame.f_lineno = 379;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_end_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 360;
        type_description_1 = "ooooooooooooo";
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4d34c784f2406b8a445b50e82e0db550, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4d34c784f2406b8a445b50e82e0db550->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4d34c784f2406b8a445b50e82e0db550, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4d34c784f2406b8a445b50e82e0db550,
        type_description_1,
        par_params,
        par_grads,
        par_axs,
        par_mus,
        par_etas,
        par_weight_decay,
        par_lambd,
        var_i,
        var_param,
        var_grad,
        var_mu,
        var_ax,
        var_eta
    );


    // Release cached frame if used for exception.
    if (frame_4d34c784f2406b8a445b50e82e0db550 == cache_frame_4d34c784f2406b8a445b50e82e0db550) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4d34c784f2406b8a445b50e82e0db550);
        cache_frame_4d34c784f2406b8a445b50e82e0db550 = NULL;
    }

    assertFrameObject(frame_4d34c784f2406b8a445b50e82e0db550);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_param);
    var_param = NULL;
    Py_XDECREF(var_grad);
    var_grad = NULL;
    Py_XDECREF(var_mu);
    var_mu = NULL;
    Py_XDECREF(var_ax);
    var_ax = NULL;
    Py_XDECREF(var_eta);
    var_eta = NULL;
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

    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_param);
    var_param = NULL;
    Py_XDECREF(var_grad);
    var_grad = NULL;
    Py_XDECREF(var_mu);
    var_mu = NULL;
    Py_XDECREF(var_ax);
    var_ax = NULL;
    Py_XDECREF(var_eta);
    var_eta = NULL;
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
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_grads);
    Py_DECREF(par_grads);
    CHECK_OBJECT(par_axs);
    Py_DECREF(par_axs);
    CHECK_OBJECT(par_mus);
    Py_DECREF(par_mus);
    CHECK_OBJECT(par_etas);
    Py_DECREF(par_etas);
    CHECK_OBJECT(par_weight_decay);
    Py_DECREF(par_weight_decay);
    CHECK_OBJECT(par_lambd);
    Py_DECREF(par_lambd);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_grads);
    Py_DECREF(par_grads);
    CHECK_OBJECT(par_axs);
    Py_DECREF(par_axs);
    CHECK_OBJECT(par_mus);
    Py_DECREF(par_mus);
    CHECK_OBJECT(par_etas);
    Py_DECREF(par_etas);
    CHECK_OBJECT(par_weight_decay);
    Py_DECREF(par_weight_decay);
    CHECK_OBJECT(par_lambd);
    Py_DECREF(par_lambd);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$optim$_functional$$$function__11_nadam(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_params = python_pars[0];
    PyObject *par_grads = python_pars[1];
    PyObject *par_exp_avgs = python_pars[2];
    PyObject *par_exp_avg_sqs = python_pars[3];
    PyObject *par_mu_products = python_pars[4];
    PyObject *par_state_steps = python_pars[5];
    PyObject *par_beta1 = python_pars[6];
    PyObject *par_beta2 = python_pars[7];
    PyObject *par_lr = python_pars[8];
    PyObject *par_weight_decay = python_pars[9];
    PyObject *par_momentum_decay = python_pars[10];
    PyObject *par_eps = python_pars[11];
    PyObject *var_i = NULL;
    PyObject *var_param = NULL;
    PyObject *var_grad = NULL;
    PyObject *var_exp_avg = NULL;
    PyObject *var_exp_avg_sq = NULL;
    PyObject *var_mu_product = NULL;
    PyObject *var_step = NULL;
    PyObject *var_bias_correction2 = NULL;
    PyObject *var_mu = NULL;
    PyObject *var_mu_next = NULL;
    PyObject *var_mu_product_next = NULL;
    PyObject *var_denom = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b0a87e0af404722c97c3c6e1dec5f433;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_b0a87e0af404722c97c3c6e1dec5f433 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b0a87e0af404722c97c3c6e1dec5f433)) {
        Py_XDECREF(cache_frame_b0a87e0af404722c97c3c6e1dec5f433);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b0a87e0af404722c97c3c6e1dec5f433 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b0a87e0af404722c97c3c6e1dec5f433 = MAKE_FUNCTION_FRAME(codeobj_b0a87e0af404722c97c3c6e1dec5f433, module_torch$optim$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b0a87e0af404722c97c3c6e1dec5f433->m_type_description == NULL);
    frame_b0a87e0af404722c97c3c6e1dec5f433 = cache_frame_b0a87e0af404722c97c3c6e1dec5f433;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b0a87e0af404722c97c3c6e1dec5f433);
    assert(Py_REFCNT(frame_b0a87e0af404722c97c3c6e1dec5f433) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_params);
        tmp_args_element_value_1 = par_params;
        frame_b0a87e0af404722c97c3c6e1dec5f433->m_frame.f_lineno = 400;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooooooooooooooooooooooo";
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
                type_description_1 = "oooooooooooooooooooooooo";
                exception_lineno = 400;
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


            exception_lineno = 400;
            type_description_1 = "oooooooooooooooooooooooo";
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


            type_description_1 = "oooooooooooooooooooooooo";
            exception_lineno = 400;
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


            type_description_1 = "oooooooooooooooooooooooo";
            exception_lineno = 400;
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

                    type_description_1 = "oooooooooooooooooooooooo";
                    exception_lineno = 400;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooo";
            exception_lineno = 400;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_6;
            Py_INCREF(var_i);
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
            PyObject *old = var_param;
            var_param = tmp_assign_source_7;
            Py_INCREF(var_param);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_grads);
        tmp_expression_value_1 = par_grads;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_1 = var_i;
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_grad;
            var_grad = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_exp_avgs);
        tmp_expression_value_2 = par_exp_avgs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_2 = var_i;
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_exp_avg;
            var_exp_avg = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_exp_avg_sqs);
        tmp_expression_value_3 = par_exp_avg_sqs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_3 = var_i;
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_exp_avg_sq;
            var_exp_avg_sq = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_mu_products);
        tmp_expression_value_4 = par_mu_products;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_4 = var_i;
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_mu_product;
            var_mu_product = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(par_state_steps);
        tmp_expression_value_5 = par_state_steps;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_5 = var_i;
        tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_5);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_step;
            var_step = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_pow_expr_left_1;
        PyObject *tmp_pow_expr_right_1;
        tmp_sub_expr_left_1 = mod_consts[14];
        if (par_beta2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 407;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_pow_expr_left_1 = par_beta2;
        CHECK_OBJECT(var_step);
        tmp_pow_expr_right_1 = var_step;
        tmp_sub_expr_right_1 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_13 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_bias_correction2;
            var_bias_correction2 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (par_weight_decay == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 409;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_1 = par_weight_decay;
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "oooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(var_grad);
        tmp_expression_value_6 = var_grad;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[11]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_param);
        tmp_kw_call_arg_value_0_1 = var_param;
        if (par_weight_decay == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 410;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_kw_call_dict_value_0_1 = par_weight_decay;
        frame_b0a87e0af404722c97c3c6e1dec5f433->m_frame.f_lineno = 410;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_grad;
            assert(old != NULL);
            var_grad = tmp_assign_source_14;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_pow_expr_left_2;
        PyObject *tmp_pow_expr_right_2;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        if (par_beta1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 413;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_mult_expr_left_1 = par_beta1;
        tmp_sub_expr_left_2 = mod_consts[88];
        tmp_mult_expr_left_2 = mod_consts[89];
        tmp_pow_expr_left_2 = mod_consts[90];
        CHECK_OBJECT(var_step);
        tmp_mult_expr_left_3 = var_step;
        if (par_momentum_decay == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 413;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_mult_expr_right_3 = par_momentum_decay;
        tmp_pow_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_pow_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_mult_expr_right_2 = BINARY_OPERATION_POW_OBJECT_FLOAT_OBJECT(tmp_pow_expr_left_2, tmp_pow_expr_right_2);
        Py_DECREF(tmp_pow_expr_right_2);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_sub_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_sub_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_mult_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_FLOAT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_right_2);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_15 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_mu;
            var_mu = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        PyObject *tmp_pow_expr_left_3;
        PyObject *tmp_pow_expr_right_3;
        PyObject *tmp_mult_expr_left_6;
        PyObject *tmp_mult_expr_right_6;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        if (par_beta1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 414;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_mult_expr_left_4 = par_beta1;
        tmp_sub_expr_left_3 = mod_consts[88];
        tmp_mult_expr_left_5 = mod_consts[89];
        tmp_pow_expr_left_3 = mod_consts[90];
        CHECK_OBJECT(var_step);
        tmp_add_expr_left_1 = var_step;
        tmp_add_expr_right_1 = mod_consts[14];
        tmp_mult_expr_left_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_mult_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_momentum_decay == NULL) {
            Py_DECREF(tmp_mult_expr_left_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 414;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_mult_expr_right_6 = par_momentum_decay;
        tmp_pow_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
        Py_DECREF(tmp_mult_expr_left_6);
        if (tmp_pow_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_mult_expr_right_5 = BINARY_OPERATION_POW_OBJECT_FLOAT_OBJECT(tmp_pow_expr_left_3, tmp_pow_expr_right_3);
        Py_DECREF(tmp_pow_expr_right_3);
        if (tmp_mult_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_sub_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        Py_DECREF(tmp_mult_expr_right_5);
        if (tmp_sub_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_mult_expr_right_4 = BINARY_OPERATION_SUB_OBJECT_FLOAT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_right_3);
        if (tmp_mult_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_16 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        Py_DECREF(tmp_mult_expr_right_4);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_mu_next;
            var_mu_next = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_mult_expr_left_7;
        PyObject *tmp_mult_expr_right_7;
        CHECK_OBJECT(var_mu_product);
        tmp_mult_expr_left_7 = var_mu_product;
        CHECK_OBJECT(var_mu);
        tmp_mult_expr_right_7 = var_mu;
        tmp_assign_source_17 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_mu_product;
            assert(old != NULL);
            var_mu_product = tmp_assign_source_17;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_mult_expr_left_8;
        PyObject *tmp_mult_expr_right_8;
        PyObject *tmp_mult_expr_left_9;
        PyObject *tmp_mult_expr_right_9;
        CHECK_OBJECT(var_mu_product);
        tmp_mult_expr_left_9 = var_mu_product;
        CHECK_OBJECT(var_mu);
        tmp_mult_expr_right_9 = var_mu;
        tmp_mult_expr_left_8 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_9, tmp_mult_expr_right_9);
        if (tmp_mult_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_mu_next);
        tmp_mult_expr_right_8 = var_mu_next;
        tmp_assign_source_18 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
        Py_DECREF(tmp_mult_expr_left_8);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_mu_product_next;
            var_mu_product_next = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_sub_expr_left_4;
        PyObject *tmp_sub_expr_right_4;
        CHECK_OBJECT(var_exp_avg);
        tmp_expression_value_8 = var_exp_avg;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[40]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_beta1 == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 419;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_2 = par_beta1;
        frame_b0a87e0af404722c97c3c6e1dec5f433->m_frame.f_lineno = 419;
        tmp_expression_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[19]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_grad);
        tmp_kw_call_arg_value_0_2 = var_grad;
        tmp_sub_expr_left_4 = mod_consts[14];
        if (par_beta1 == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 419;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_sub_expr_right_4 = par_beta1;
        tmp_kw_call_dict_value_0_2 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 419;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_b0a87e0af404722c97c3c6e1dec5f433->m_frame.f_lineno = 419;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_sub_expr_left_5;
        PyObject *tmp_sub_expr_right_5;
        CHECK_OBJECT(var_exp_avg_sq);
        tmp_expression_value_10 = var_exp_avg_sq;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[40]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_beta2 == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 420;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_3 = par_beta2;
        frame_b0a87e0af404722c97c3c6e1dec5f433->m_frame.f_lineno = 420;
        tmp_expression_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_6);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[29]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_grad);
        tmp_kw_call_arg_value_0_3 = var_grad;
        CHECK_OBJECT(var_grad);
        tmp_kw_call_arg_value_1_1 = var_grad;
        tmp_sub_expr_left_5 = mod_consts[14];
        if (par_beta2 == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 420;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_sub_expr_right_5 = par_beta2;
        tmp_kw_call_dict_value_0_3 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 420;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_b0a87e0af404722c97c3c6e1dec5f433->m_frame.f_lineno = 420;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_5, args, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_dict_value_0_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(var_exp_avg_sq);
        tmp_called_instance_2 = var_exp_avg_sq;
        CHECK_OBJECT(var_bias_correction2);
        tmp_args_element_value_4 = var_bias_correction2;
        frame_b0a87e0af404722c97c3c6e1dec5f433->m_frame.f_lineno = 422;
        tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[92], tmp_args_element_value_4);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_b0a87e0af404722c97c3c6e1dec5f433->m_frame.f_lineno = 422;
        tmp_expression_value_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[32]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[19]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_eps == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 422;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_5 = par_eps;
        frame_b0a87e0af404722c97c3c6e1dec5f433->m_frame.f_lineno = 422;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_denom;
            var_denom = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_mult_expr_left_10;
        PyObject *tmp_mult_expr_right_10;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_sub_expr_left_6;
        PyObject *tmp_sub_expr_right_6;
        PyObject *tmp_sub_expr_left_7;
        PyObject *tmp_sub_expr_right_7;
        if (var_param == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 423;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_12 = var_param;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[33]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_grad);
        tmp_kw_call_arg_value_0_4 = var_grad;
        CHECK_OBJECT(var_denom);
        tmp_kw_call_arg_value_1_2 = var_denom;
        CHECK_OBJECT(par_lr);
        tmp_operand_value_1 = par_lr;
        tmp_mult_expr_left_10 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        if (tmp_mult_expr_left_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 423;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_sub_expr_left_6 = mod_consts[88];
        CHECK_OBJECT(var_mu);
        tmp_sub_expr_right_6 = var_mu;
        tmp_mult_expr_right_10 = BINARY_OPERATION_SUB_OBJECT_FLOAT_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
        if (tmp_mult_expr_right_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_mult_expr_left_10);

            exception_lineno = 423;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truediv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_10, tmp_mult_expr_right_10);
        Py_DECREF(tmp_mult_expr_left_10);
        Py_DECREF(tmp_mult_expr_right_10);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 423;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_sub_expr_left_7 = mod_consts[88];
        CHECK_OBJECT(var_mu_product);
        tmp_sub_expr_right_7 = var_mu_product;
        tmp_truediv_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_FLOAT_OBJECT(tmp_sub_expr_left_7, tmp_sub_expr_right_7);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 423;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_dict_value_0_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_kw_call_dict_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 423;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_b0a87e0af404722c97c3c6e1dec5f433->m_frame.f_lineno = 423;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_8, args, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_kw_call_dict_value_0_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_4;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_kw_call_dict_value_0_5;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_mult_expr_left_11;
        PyObject *tmp_mult_expr_right_11;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_sub_expr_left_8;
        PyObject *tmp_sub_expr_right_8;
        if (var_param == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 424;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_13 = var_param;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[33]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_exp_avg);
        tmp_kw_call_arg_value_0_5 = var_exp_avg;
        CHECK_OBJECT(var_denom);
        tmp_kw_call_arg_value_1_3 = var_denom;
        CHECK_OBJECT(par_lr);
        tmp_operand_value_2 = par_lr;
        tmp_mult_expr_left_11 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
        if (tmp_mult_expr_left_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 424;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_mu_next);
        tmp_mult_expr_right_11 = var_mu_next;
        tmp_truediv_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_11, tmp_mult_expr_right_11);
        Py_DECREF(tmp_mult_expr_left_11);
        if (tmp_truediv_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 424;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_sub_expr_left_8 = mod_consts[88];
        CHECK_OBJECT(var_mu_product_next);
        tmp_sub_expr_right_8 = var_mu_product_next;
        tmp_truediv_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_FLOAT_OBJECT(tmp_sub_expr_left_8, tmp_sub_expr_right_8);
        if (tmp_truediv_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_truediv_expr_left_2);

            exception_lineno = 424;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_dict_value_0_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_left_2);
        Py_DECREF(tmp_truediv_expr_right_2);
        if (tmp_kw_call_dict_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 424;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_b0a87e0af404722c97c3c6e1dec5f433->m_frame.f_lineno = 424;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5, tmp_kw_call_arg_value_1_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_5};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_9, args, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_kw_call_dict_value_0_5);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 400;
        type_description_1 = "oooooooooooooooooooooooo";
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b0a87e0af404722c97c3c6e1dec5f433, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b0a87e0af404722c97c3c6e1dec5f433->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b0a87e0af404722c97c3c6e1dec5f433, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b0a87e0af404722c97c3c6e1dec5f433,
        type_description_1,
        par_params,
        par_grads,
        par_exp_avgs,
        par_exp_avg_sqs,
        par_mu_products,
        par_state_steps,
        par_beta1,
        par_beta2,
        par_lr,
        par_weight_decay,
        par_momentum_decay,
        par_eps,
        var_i,
        var_param,
        var_grad,
        var_exp_avg,
        var_exp_avg_sq,
        var_mu_product,
        var_step,
        var_bias_correction2,
        var_mu,
        var_mu_next,
        var_mu_product_next,
        var_denom
    );


    // Release cached frame if used for exception.
    if (frame_b0a87e0af404722c97c3c6e1dec5f433 == cache_frame_b0a87e0af404722c97c3c6e1dec5f433) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b0a87e0af404722c97c3c6e1dec5f433);
        cache_frame_b0a87e0af404722c97c3c6e1dec5f433 = NULL;
    }

    assertFrameObject(frame_b0a87e0af404722c97c3c6e1dec5f433);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_param);
    var_param = NULL;
    Py_XDECREF(var_grad);
    var_grad = NULL;
    Py_XDECREF(var_exp_avg);
    var_exp_avg = NULL;
    Py_XDECREF(var_exp_avg_sq);
    var_exp_avg_sq = NULL;
    Py_XDECREF(var_mu_product);
    var_mu_product = NULL;
    Py_XDECREF(var_step);
    var_step = NULL;
    Py_XDECREF(var_bias_correction2);
    var_bias_correction2 = NULL;
    Py_XDECREF(var_mu);
    var_mu = NULL;
    Py_XDECREF(var_mu_next);
    var_mu_next = NULL;
    Py_XDECREF(var_mu_product_next);
    var_mu_product_next = NULL;
    Py_XDECREF(var_denom);
    var_denom = NULL;
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

    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_param);
    var_param = NULL;
    Py_XDECREF(var_grad);
    var_grad = NULL;
    Py_XDECREF(var_exp_avg);
    var_exp_avg = NULL;
    Py_XDECREF(var_exp_avg_sq);
    var_exp_avg_sq = NULL;
    Py_XDECREF(var_mu_product);
    var_mu_product = NULL;
    Py_XDECREF(var_step);
    var_step = NULL;
    Py_XDECREF(var_bias_correction2);
    var_bias_correction2 = NULL;
    Py_XDECREF(var_mu);
    var_mu = NULL;
    Py_XDECREF(var_mu_next);
    var_mu_next = NULL;
    Py_XDECREF(var_mu_product_next);
    var_mu_product_next = NULL;
    Py_XDECREF(var_denom);
    var_denom = NULL;
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
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_grads);
    Py_DECREF(par_grads);
    CHECK_OBJECT(par_exp_avgs);
    Py_DECREF(par_exp_avgs);
    CHECK_OBJECT(par_exp_avg_sqs);
    Py_DECREF(par_exp_avg_sqs);
    CHECK_OBJECT(par_mu_products);
    Py_DECREF(par_mu_products);
    CHECK_OBJECT(par_state_steps);
    Py_DECREF(par_state_steps);
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
    CHECK_OBJECT(par_exp_avgs);
    Py_DECREF(par_exp_avgs);
    CHECK_OBJECT(par_exp_avg_sqs);
    Py_DECREF(par_exp_avg_sqs);
    CHECK_OBJECT(par_mu_products);
    Py_DECREF(par_mu_products);
    CHECK_OBJECT(par_state_steps);
    Py_DECREF(par_state_steps);
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


static PyObject *impl_torch$optim$_functional$$$function__12_radam(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_params = python_pars[0];
    PyObject *par_grads = python_pars[1];
    PyObject *par_exp_avgs = python_pars[2];
    PyObject *par_exp_avg_sqs = python_pars[3];
    PyObject *par_state_steps = python_pars[4];
    PyObject *par_beta1 = python_pars[5];
    PyObject *par_beta2 = python_pars[6];
    PyObject *par_lr = python_pars[7];
    PyObject *par_weight_decay = python_pars[8];
    PyObject *par_eps = python_pars[9];
    PyObject *var_i = NULL;
    PyObject *var_param = NULL;
    PyObject *var_grad = NULL;
    PyObject *var_exp_avg = NULL;
    PyObject *var_exp_avg_sq = NULL;
    PyObject *var_step = NULL;
    PyObject *var_bias_correction1 = NULL;
    PyObject *var_bias_correction2 = NULL;
    PyObject *var_bias_corrected_exp_avg = NULL;
    PyObject *var_rho_inf = NULL;
    PyObject *var_rho_t = NULL;
    PyObject *var_rect = NULL;
    PyObject *var_adaptive_lr = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_1c1066f4b7bffe9fc266f212034b6413;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_1c1066f4b7bffe9fc266f212034b6413 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1c1066f4b7bffe9fc266f212034b6413)) {
        Py_XDECREF(cache_frame_1c1066f4b7bffe9fc266f212034b6413);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1c1066f4b7bffe9fc266f212034b6413 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1c1066f4b7bffe9fc266f212034b6413 = MAKE_FUNCTION_FRAME(codeobj_1c1066f4b7bffe9fc266f212034b6413, module_torch$optim$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1c1066f4b7bffe9fc266f212034b6413->m_type_description == NULL);
    frame_1c1066f4b7bffe9fc266f212034b6413 = cache_frame_1c1066f4b7bffe9fc266f212034b6413;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1c1066f4b7bffe9fc266f212034b6413);
    assert(Py_REFCNT(frame_1c1066f4b7bffe9fc266f212034b6413) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_params);
        tmp_args_element_value_1 = par_params;
        frame_1c1066f4b7bffe9fc266f212034b6413->m_frame.f_lineno = 443;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooooooooooooooooooooooo";
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
                type_description_1 = "ooooooooooooooooooooooo";
                exception_lineno = 443;
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


            exception_lineno = 443;
            type_description_1 = "ooooooooooooooooooooooo";
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


            type_description_1 = "ooooooooooooooooooooooo";
            exception_lineno = 443;
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


            type_description_1 = "ooooooooooooooooooooooo";
            exception_lineno = 443;
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

                    type_description_1 = "ooooooooooooooooooooooo";
                    exception_lineno = 443;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooooo";
            exception_lineno = 443;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_6;
            Py_INCREF(var_i);
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
            PyObject *old = var_param;
            var_param = tmp_assign_source_7;
            Py_INCREF(var_param);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_grads);
        tmp_expression_value_1 = par_grads;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_1 = var_i;
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_grad;
            var_grad = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_exp_avgs);
        tmp_expression_value_2 = par_exp_avgs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_2 = var_i;
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_exp_avg;
            var_exp_avg = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_exp_avg_sqs);
        tmp_expression_value_3 = par_exp_avg_sqs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_3 = var_i;
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_exp_avg_sq;
            var_exp_avg_sq = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_state_steps);
        tmp_expression_value_4 = par_state_steps;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_4 = var_i;
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_step;
            var_step = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_pow_expr_left_1;
        PyObject *tmp_pow_expr_right_1;
        tmp_sub_expr_left_1 = mod_consts[14];
        if (par_beta1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_pow_expr_left_1 = par_beta1;
        CHECK_OBJECT(var_step);
        tmp_pow_expr_right_1 = var_step;
        tmp_sub_expr_right_1 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_12 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_bias_correction1;
            var_bias_correction1 = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_pow_expr_left_2;
        PyObject *tmp_pow_expr_right_2;
        tmp_sub_expr_left_2 = mod_consts[14];
        if (par_beta2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 450;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_pow_expr_left_2 = par_beta2;
        CHECK_OBJECT(var_step);
        tmp_pow_expr_right_2 = var_step;
        tmp_sub_expr_right_2 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_2, tmp_pow_expr_right_2);
        if (tmp_sub_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_13 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_right_2);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_bias_correction2;
            var_bias_correction2 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (par_weight_decay == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 452;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_1 = par_weight_decay;
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "ooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(var_grad);
        tmp_expression_value_5 = var_grad;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[11]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_param);
        tmp_kw_call_arg_value_0_1 = var_param;
        if (par_weight_decay == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 453;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_kw_call_dict_value_0_1 = par_weight_decay;
        frame_1c1066f4b7bffe9fc266f212034b6413->m_frame.f_lineno = 453;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_grad;
            assert(old != NULL);
            var_grad = tmp_assign_source_14;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        CHECK_OBJECT(var_exp_avg);
        tmp_expression_value_7 = var_exp_avg;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[40]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_beta1 == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_2 = par_beta1;
        frame_1c1066f4b7bffe9fc266f212034b6413->m_frame.f_lineno = 456;
        tmp_expression_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[19]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_grad);
        tmp_kw_call_arg_value_0_2 = var_grad;
        tmp_sub_expr_left_3 = mod_consts[14];
        if (par_beta1 == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_sub_expr_right_3 = par_beta1;
        tmp_kw_call_dict_value_0_2 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_1c1066f4b7bffe9fc266f212034b6413->m_frame.f_lineno = 456;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_sub_expr_left_4;
        PyObject *tmp_sub_expr_right_4;
        CHECK_OBJECT(var_exp_avg_sq);
        tmp_expression_value_9 = var_exp_avg_sq;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[40]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_beta2 == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 457;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_3 = par_beta2;
        frame_1c1066f4b7bffe9fc266f212034b6413->m_frame.f_lineno = 457;
        tmp_expression_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_6);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[29]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_grad);
        tmp_kw_call_arg_value_0_3 = var_grad;
        CHECK_OBJECT(var_grad);
        tmp_kw_call_arg_value_1_1 = var_grad;
        tmp_sub_expr_left_4 = mod_consts[14];
        if (par_beta2 == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 457;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_sub_expr_right_4 = par_beta2;
        tmp_kw_call_dict_value_0_3 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 457;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_1c1066f4b7bffe9fc266f212034b6413->m_frame.f_lineno = 457;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_5, args, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_dict_value_0_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        CHECK_OBJECT(var_exp_avg);
        tmp_truediv_expr_left_1 = var_exp_avg;
        CHECK_OBJECT(var_bias_correction1);
        tmp_truediv_expr_right_1 = var_bias_correction1;
        tmp_assign_source_15 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_bias_corrected_exp_avg;
            var_bias_corrected_exp_avg = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_sub_expr_left_5;
        PyObject *tmp_sub_expr_right_5;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_sub_expr_left_6;
        PyObject *tmp_sub_expr_right_6;
        tmp_truediv_expr_left_2 = mod_consts[94];
        tmp_sub_expr_left_6 = mod_consts[14];
        if (par_beta2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 463;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_sub_expr_right_6 = par_beta2;
        tmp_truediv_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
        if (tmp_truediv_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_sub_expr_left_5 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_right_2);
        if (tmp_sub_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_sub_expr_right_5 = mod_consts[14];
        tmp_assign_source_16 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
        Py_DECREF(tmp_sub_expr_left_5);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_rho_inf;
            var_rho_inf = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_sub_expr_left_7;
        PyObject *tmp_sub_expr_right_7;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_pow_expr_left_3;
        PyObject *tmp_pow_expr_right_3;
        CHECK_OBJECT(var_rho_inf);
        tmp_sub_expr_left_7 = var_rho_inf;
        tmp_mult_expr_left_2 = mod_consts[94];
        CHECK_OBJECT(var_step);
        tmp_mult_expr_right_2 = var_step;
        tmp_mult_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_beta2 == NULL) {
            Py_DECREF(tmp_mult_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 465;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_pow_expr_left_3 = par_beta2;
        CHECK_OBJECT(var_step);
        tmp_pow_expr_right_3 = var_step;
        tmp_mult_expr_right_1 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_3, tmp_pow_expr_right_3);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 465;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truediv_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_truediv_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_bias_correction2);
        tmp_truediv_expr_right_3 = var_bias_correction2;
        tmp_sub_expr_right_7 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        Py_DECREF(tmp_truediv_expr_left_3);
        if (tmp_sub_expr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_17 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_7, tmp_sub_expr_right_7);
        Py_DECREF(tmp_sub_expr_right_7);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_rho_t;
            var_rho_t = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_rho_t);
        tmp_cmp_expr_left_2 = var_rho_t;
        tmp_cmp_expr_right_2 = mod_consts[95];
        tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "ooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_truediv_expr_left_4;
        PyObject *tmp_truediv_expr_right_4;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        PyObject *tmp_sub_expr_left_8;
        PyObject *tmp_sub_expr_right_8;
        PyObject *tmp_sub_expr_left_9;
        PyObject *tmp_sub_expr_right_9;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        PyObject *tmp_mult_expr_left_6;
        PyObject *tmp_mult_expr_right_6;
        PyObject *tmp_sub_expr_left_10;
        PyObject *tmp_sub_expr_right_10;
        PyObject *tmp_sub_expr_left_11;
        PyObject *tmp_sub_expr_right_11;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[32]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_rho_t);
        tmp_sub_expr_left_8 = var_rho_t;
        tmp_sub_expr_right_8 = mod_consts[96];
        tmp_mult_expr_left_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_8, tmp_sub_expr_right_8);
        if (tmp_mult_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 469;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_rho_t);
        tmp_sub_expr_left_9 = var_rho_t;
        tmp_sub_expr_right_9 = mod_consts[94];
        tmp_mult_expr_right_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_9, tmp_sub_expr_right_9);
        if (tmp_mult_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_mult_expr_left_4);

            exception_lineno = 469;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_mult_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        Py_DECREF(tmp_mult_expr_left_4);
        Py_DECREF(tmp_mult_expr_right_4);
        if (tmp_mult_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 469;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_rho_inf);
        tmp_mult_expr_right_3 = var_rho_inf;
        tmp_truediv_expr_left_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_left_3);
        if (tmp_truediv_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 469;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_rho_inf);
        tmp_sub_expr_left_10 = var_rho_inf;
        tmp_sub_expr_right_10 = mod_consts[96];
        tmp_mult_expr_left_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_10, tmp_sub_expr_right_10);
        if (tmp_mult_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_truediv_expr_left_4);

            exception_lineno = 469;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_rho_inf);
        tmp_sub_expr_left_11 = var_rho_inf;
        tmp_sub_expr_right_11 = mod_consts[94];
        tmp_mult_expr_right_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_11, tmp_sub_expr_right_11);
        if (tmp_mult_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_truediv_expr_left_4);
            Py_DECREF(tmp_mult_expr_left_6);

            exception_lineno = 469;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_mult_expr_left_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
        Py_DECREF(tmp_mult_expr_left_6);
        Py_DECREF(tmp_mult_expr_right_6);
        if (tmp_mult_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_truediv_expr_left_4);

            exception_lineno = 469;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_rho_t);
        tmp_mult_expr_right_5 = var_rho_t;
        tmp_truediv_expr_right_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        Py_DECREF(tmp_mult_expr_left_5);
        if (tmp_truediv_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_truediv_expr_left_4);

            exception_lineno = 469;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
        Py_DECREF(tmp_truediv_expr_left_4);
        Py_DECREF(tmp_truediv_expr_right_4);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 469;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_1c1066f4b7bffe9fc266f212034b6413->m_frame.f_lineno = 469;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_rect;
            var_rect = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_truediv_expr_left_5;
        PyObject *tmp_truediv_expr_right_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_bias_correction2);
        tmp_args_element_value_5 = var_bias_correction2;
        frame_1c1066f4b7bffe9fc266f212034b6413->m_frame.f_lineno = 470;
        tmp_truediv_expr_left_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[32], tmp_args_element_value_5);
        if (tmp_truediv_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_exp_avg_sq);
        tmp_called_instance_2 = var_exp_avg_sq;
        frame_1c1066f4b7bffe9fc266f212034b6413->m_frame.f_lineno = 470;
        tmp_expression_value_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[32]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_5);

            exception_lineno = 470;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[19]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_5);

            exception_lineno = 470;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_eps == NULL) {
            Py_DECREF(tmp_truediv_expr_left_5);
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 470;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_6 = par_eps;
        frame_1c1066f4b7bffe9fc266f212034b6413->m_frame.f_lineno = 470;
        tmp_truediv_expr_right_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_8);
        if (tmp_truediv_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_5);

            exception_lineno = 470;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_19 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_5, tmp_truediv_expr_right_5);
        Py_DECREF(tmp_truediv_expr_left_5);
        Py_DECREF(tmp_truediv_expr_right_5);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_adaptive_lr;
            var_adaptive_lr = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mult_expr_left_7;
        PyObject *tmp_mult_expr_right_7;
        PyObject *tmp_mult_expr_left_8;
        PyObject *tmp_mult_expr_right_8;
        PyObject *tmp_mult_expr_left_9;
        PyObject *tmp_mult_expr_right_9;
        PyObject *tmp_kwargs_value_1;
        if (var_param == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_12 = var_param;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[19]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_bias_corrected_exp_avg);
        tmp_mult_expr_left_9 = var_bias_corrected_exp_avg;
        if (par_lr == NULL) {
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_mult_expr_right_9 = par_lr;
        tmp_mult_expr_left_8 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_9, tmp_mult_expr_right_9);
        if (tmp_mult_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_adaptive_lr);
        tmp_mult_expr_right_8 = var_adaptive_lr;
        tmp_mult_expr_left_7 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
        Py_DECREF(tmp_mult_expr_left_8);
        if (tmp_mult_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_rect);
        tmp_mult_expr_right_7 = var_rect;
        tmp_tuple_element_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
        Py_DECREF(tmp_mult_expr_left_7);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[97]);
        frame_1c1066f4b7bffe9fc266f212034b6413->m_frame.f_lineno = 472;
        tmp_call_result_3 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mult_expr_left_10;
        PyObject *tmp_mult_expr_right_10;
        PyObject *tmp_kwargs_value_2;
        if (var_param == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 474;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_13 = var_param;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[19]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_bias_corrected_exp_avg);
        tmp_mult_expr_left_10 = var_bias_corrected_exp_avg;
        if (par_lr == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 474;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_mult_expr_right_10 = par_lr;
        tmp_tuple_element_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_10, tmp_mult_expr_right_10);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 474;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_2, 0, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[97]);
        frame_1c1066f4b7bffe9fc266f212034b6413->m_frame.f_lineno = 474;
        tmp_call_result_4 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_end_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 443;
        type_description_1 = "ooooooooooooooooooooooo";
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1c1066f4b7bffe9fc266f212034b6413, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1c1066f4b7bffe9fc266f212034b6413->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c1066f4b7bffe9fc266f212034b6413, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1c1066f4b7bffe9fc266f212034b6413,
        type_description_1,
        par_params,
        par_grads,
        par_exp_avgs,
        par_exp_avg_sqs,
        par_state_steps,
        par_beta1,
        par_beta2,
        par_lr,
        par_weight_decay,
        par_eps,
        var_i,
        var_param,
        var_grad,
        var_exp_avg,
        var_exp_avg_sq,
        var_step,
        var_bias_correction1,
        var_bias_correction2,
        var_bias_corrected_exp_avg,
        var_rho_inf,
        var_rho_t,
        var_rect,
        var_adaptive_lr
    );


    // Release cached frame if used for exception.
    if (frame_1c1066f4b7bffe9fc266f212034b6413 == cache_frame_1c1066f4b7bffe9fc266f212034b6413) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1c1066f4b7bffe9fc266f212034b6413);
        cache_frame_1c1066f4b7bffe9fc266f212034b6413 = NULL;
    }

    assertFrameObject(frame_1c1066f4b7bffe9fc266f212034b6413);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_param);
    var_param = NULL;
    Py_XDECREF(var_grad);
    var_grad = NULL;
    Py_XDECREF(var_exp_avg);
    var_exp_avg = NULL;
    Py_XDECREF(var_exp_avg_sq);
    var_exp_avg_sq = NULL;
    Py_XDECREF(var_step);
    var_step = NULL;
    Py_XDECREF(var_bias_correction1);
    var_bias_correction1 = NULL;
    Py_XDECREF(var_bias_correction2);
    var_bias_correction2 = NULL;
    Py_XDECREF(var_bias_corrected_exp_avg);
    var_bias_corrected_exp_avg = NULL;
    Py_XDECREF(var_rho_inf);
    var_rho_inf = NULL;
    Py_XDECREF(var_rho_t);
    var_rho_t = NULL;
    Py_XDECREF(var_rect);
    var_rect = NULL;
    Py_XDECREF(var_adaptive_lr);
    var_adaptive_lr = NULL;
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

    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_param);
    var_param = NULL;
    Py_XDECREF(var_grad);
    var_grad = NULL;
    Py_XDECREF(var_exp_avg);
    var_exp_avg = NULL;
    Py_XDECREF(var_exp_avg_sq);
    var_exp_avg_sq = NULL;
    Py_XDECREF(var_step);
    var_step = NULL;
    Py_XDECREF(var_bias_correction1);
    var_bias_correction1 = NULL;
    Py_XDECREF(var_bias_correction2);
    var_bias_correction2 = NULL;
    Py_XDECREF(var_bias_corrected_exp_avg);
    var_bias_corrected_exp_avg = NULL;
    Py_XDECREF(var_rho_inf);
    var_rho_inf = NULL;
    Py_XDECREF(var_rho_t);
    var_rho_t = NULL;
    Py_XDECREF(var_rect);
    var_rect = NULL;
    Py_XDECREF(var_adaptive_lr);
    var_adaptive_lr = NULL;
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
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_grads);
    Py_DECREF(par_grads);
    CHECK_OBJECT(par_exp_avgs);
    Py_DECREF(par_exp_avgs);
    CHECK_OBJECT(par_exp_avg_sqs);
    Py_DECREF(par_exp_avg_sqs);
    CHECK_OBJECT(par_state_steps);
    Py_DECREF(par_state_steps);
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
    CHECK_OBJECT(par_exp_avg_sqs);
    Py_DECREF(par_exp_avg_sqs);
    CHECK_OBJECT(par_state_steps);
    Py_DECREF(par_state_steps);
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


static PyObject *impl_torch$optim$_functional$$$function__13_sparse_adam(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_params = python_pars[0];
    PyObject *par_grads = python_pars[1];
    PyObject *par_exp_avgs = python_pars[2];
    PyObject *par_exp_avg_sqs = python_pars[3];
    PyObject *par_state_steps = python_pars[4];
    PyObject *par_eps = python_pars[5];
    PyObject *par_beta1 = python_pars[6];
    PyObject *par_beta2 = python_pars[7];
    PyObject *par_lr = python_pars[8];
    PyObject *var_i = NULL;
    PyObject *var_param = NULL;
    struct Nuitka_CellObject *var_grad = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_grad_indices = Nuitka_Cell_Empty();
    PyObject *var_grad_values = NULL;
    struct Nuitka_CellObject *var_size = Nuitka_Cell_Empty();
    PyObject *var_exp_avg = NULL;
    PyObject *var_exp_avg_sq = NULL;
    PyObject *var_step = NULL;
    PyObject *var_make_sparse = NULL;
    PyObject *var_old_exp_avg_values = NULL;
    PyObject *var_exp_avg_update_values = NULL;
    PyObject *var_old_exp_avg_sq_values = NULL;
    PyObject *var_exp_avg_sq_update_values = NULL;
    PyObject *var_numer = NULL;
    PyObject *var_denom = NULL;
    PyObject *var_bias_correction1 = NULL;
    PyObject *var_bias_correction2 = NULL;
    PyObject *var_step_size = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_fe9f16d6c89a44c243f64e1b78c6c44b;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_fe9f16d6c89a44c243f64e1b78c6c44b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_fe9f16d6c89a44c243f64e1b78c6c44b)) {
        Py_XDECREF(cache_frame_fe9f16d6c89a44c243f64e1b78c6c44b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fe9f16d6c89a44c243f64e1b78c6c44b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fe9f16d6c89a44c243f64e1b78c6c44b = MAKE_FUNCTION_FRAME(codeobj_fe9f16d6c89a44c243f64e1b78c6c44b, module_torch$optim$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fe9f16d6c89a44c243f64e1b78c6c44b->m_type_description == NULL);
    frame_fe9f16d6c89a44c243f64e1b78c6c44b = cache_frame_fe9f16d6c89a44c243f64e1b78c6c44b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fe9f16d6c89a44c243f64e1b78c6c44b);
    assert(Py_REFCNT(frame_fe9f16d6c89a44c243f64e1b78c6c44b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_params);
        tmp_args_element_value_1 = par_params;
        frame_fe9f16d6c89a44c243f64e1b78c6c44b->m_frame.f_lineno = 491;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "oooooooooooccocooooooooooooo";
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
                type_description_1 = "oooooooooooccocooooooooooooo";
                exception_lineno = 491;
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


            exception_lineno = 491;
            type_description_1 = "oooooooooooccocooooooooooooo";
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


            type_description_1 = "oooooooooooccocooooooooooooo";
            exception_lineno = 491;
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


            type_description_1 = "oooooooooooccocooooooooooooo";
            exception_lineno = 491;
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

                    type_description_1 = "oooooooooooccocooooooooooooo";
                    exception_lineno = 491;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[37];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooccocooooooooooooo";
            exception_lineno = 491;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_6;
            Py_INCREF(var_i);
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
            PyObject *old = var_param;
            var_param = tmp_assign_source_7;
            Py_INCREF(var_param);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_grads);
        tmp_expression_value_1 = par_grads;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_1 = var_i;
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = Nuitka_Cell_GET(var_grad);
            PyCell_SET(var_grad, tmp_assign_source_8);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_grad));
        tmp_called_instance_1 = Nuitka_Cell_GET(var_grad);
        frame_fe9f16d6c89a44c243f64e1b78c6c44b->m_frame.f_lineno = 493;
        tmp_assign_source_9 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[16]);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = Nuitka_Cell_GET(var_grad);
            PyCell_SET(var_grad, tmp_assign_source_9);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(Nuitka_Cell_GET(var_grad));
        tmp_called_instance_2 = Nuitka_Cell_GET(var_grad);
        frame_fe9f16d6c89a44c243f64e1b78c6c44b->m_frame.f_lineno = 494;
        tmp_assign_source_10 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[17]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = Nuitka_Cell_GET(var_grad_indices);
            PyCell_SET(var_grad_indices, tmp_assign_source_10);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(Nuitka_Cell_GET(var_grad));
        tmp_called_instance_3 = Nuitka_Cell_GET(var_grad);
        frame_fe9f16d6c89a44c243f64e1b78c6c44b->m_frame.f_lineno = 495;
        tmp_assign_source_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[18]);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_grad_values;
            var_grad_values = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(Nuitka_Cell_GET(var_grad));
        tmp_called_instance_4 = Nuitka_Cell_GET(var_grad);
        frame_fe9f16d6c89a44c243f64e1b78c6c44b->m_frame.f_lineno = 496;
        tmp_assign_source_12 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[0]);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = Nuitka_Cell_GET(var_size);
            PyCell_SET(var_size, tmp_assign_source_12);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_exp_avgs);
        tmp_expression_value_2 = par_exp_avgs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_2 = var_i;
        tmp_assign_source_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_exp_avg;
            var_exp_avg = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_exp_avg_sqs);
        tmp_expression_value_3 = par_exp_avg_sqs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_3 = var_i;
        tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_exp_avg_sq;
            var_exp_avg_sq = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_state_steps);
        tmp_expression_value_4 = par_state_steps;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_4 = var_i;
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_step;
            var_step = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = var_grad;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = var_grad_indices;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = var_size;
        Py_INCREF(tmp_closure_1[2]);

        tmp_assign_source_16 = MAKE_FUNCTION_torch$optim$_functional$$$function__13_sparse_adam$$$function__1_make_sparse(tmp_closure_1);

        {
            PyObject *old = var_make_sparse;
            var_make_sparse = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_exp_avg);
        tmp_called_instance_6 = var_exp_avg;
        CHECK_OBJECT(Nuitka_Cell_GET(var_grad));
        tmp_args_element_value_2 = Nuitka_Cell_GET(var_grad);
        frame_fe9f16d6c89a44c243f64e1b78c6c44b->m_frame.f_lineno = 512;
        tmp_called_instance_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[23], tmp_args_element_value_2);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        frame_fe9f16d6c89a44c243f64e1b78c6c44b->m_frame.f_lineno = 512;
        tmp_assign_source_17 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[18]);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_old_exp_avg_values;
            var_old_exp_avg_values = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        CHECK_OBJECT(var_grad_values);
        tmp_called_instance_7 = var_grad_values;
        CHECK_OBJECT(var_old_exp_avg_values);
        tmp_args_element_value_3 = var_old_exp_avg_values;
        frame_fe9f16d6c89a44c243f64e1b78c6c44b->m_frame.f_lineno = 513;
        tmp_expression_value_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[86], tmp_args_element_value_3);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[40]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_sub_expr_left_1 = mod_consts[14];
        if (par_beta1 == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 513;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_sub_expr_right_1 = par_beta1;
        tmp_args_element_value_4 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 513;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        frame_fe9f16d6c89a44c243f64e1b78c6c44b->m_frame.f_lineno = 513;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_exp_avg_update_values;
            var_exp_avg_update_values = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(var_exp_avg);
        tmp_expression_value_6 = var_exp_avg;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[19]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_make_sparse);
        tmp_called_value_4 = var_make_sparse;
        CHECK_OBJECT(var_exp_avg_update_values);
        tmp_args_element_value_6 = var_exp_avg_update_values;
        frame_fe9f16d6c89a44c243f64e1b78c6c44b->m_frame.f_lineno = 514;
        tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 514;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        frame_fe9f16d6c89a44c243f64e1b78c6c44b->m_frame.f_lineno = 514;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(var_exp_avg_sq);
        tmp_called_instance_9 = var_exp_avg_sq;
        CHECK_OBJECT(Nuitka_Cell_GET(var_grad));
        tmp_args_element_value_7 = Nuitka_Cell_GET(var_grad);
        frame_fe9f16d6c89a44c243f64e1b78c6c44b->m_frame.f_lineno = 515;
        tmp_called_instance_8 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[23], tmp_args_element_value_7);
        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        frame_fe9f16d6c89a44c243f64e1b78c6c44b->m_frame.f_lineno = 515;
        tmp_assign_source_19 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[18]);
        Py_DECREF(tmp_called_instance_8);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_old_exp_avg_sq_values;
            var_old_exp_avg_sq_values = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        CHECK_OBJECT(var_grad_values);
        tmp_called_instance_11 = var_grad_values;
        frame_fe9f16d6c89a44c243f64e1b78c6c44b->m_frame.f_lineno = 516;
        tmp_called_instance_10 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_11,
            mod_consts[21],
            PyTuple_GET_ITEM(mod_consts[22], 0)
        );

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_old_exp_avg_sq_values);
        tmp_args_element_value_8 = var_old_exp_avg_sq_values;
        frame_fe9f16d6c89a44c243f64e1b78c6c44b->m_frame.f_lineno = 516;
        tmp_expression_value_7 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_10, mod_consts[101], tmp_args_element_value_8);
        Py_DECREF(tmp_called_instance_10);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[40]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_sub_expr_left_2 = mod_consts[14];
        if (par_beta2 == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 516;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_sub_expr_right_2 = par_beta2;
        tmp_args_element_value_9 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 516;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        frame_fe9f16d6c89a44c243f64e1b78c6c44b->m_frame.f_lineno = 516;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_exp_avg_sq_update_values;
            var_exp_avg_sq_update_values = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_11;
        CHECK_OBJECT(var_exp_avg_sq);
        tmp_expression_value_8 = var_exp_avg_sq;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[19]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_make_sparse);
        tmp_called_value_7 = var_make_sparse;
        CHECK_OBJECT(var_exp_avg_sq_update_values);
        tmp_args_element_value_11 = var_exp_avg_sq_update_values;
        frame_fe9f16d6c89a44c243f64e1b78c6c44b->m_frame.f_lineno = 517;
        tmp_args_element_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_11);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 517;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        frame_fe9f16d6c89a44c243f64e1b78c6c44b->m_frame.f_lineno = 517;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_args_element_value_12;
        CHECK_OBJECT(var_exp_avg_update_values);
        tmp_called_instance_12 = var_exp_avg_update_values;
        CHECK_OBJECT(var_old_exp_avg_values);
        tmp_args_element_value_12 = var_old_exp_avg_values;
        frame_fe9f16d6c89a44c243f64e1b78c6c44b->m_frame.f_lineno = 520;
        tmp_assign_source_21 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_12, mod_consts[19], tmp_args_element_value_12);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_numer;
            var_numer = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_13;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_13;
        CHECK_OBJECT(var_exp_avg_sq_update_values);
        tmp_called_instance_13 = var_exp_avg_sq_update_values;
        CHECK_OBJECT(var_old_exp_avg_sq_values);
        tmp_args_element_value_13 = var_old_exp_avg_sq_values;
        frame_fe9f16d6c89a44c243f64e1b78c6c44b->m_frame.f_lineno = 521;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_13, mod_consts[19], tmp_args_element_value_13);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_args_element_value_14;
        CHECK_OBJECT(var_exp_avg_sq_update_values);
        tmp_called_instance_14 = var_exp_avg_sq_update_values;
        frame_fe9f16d6c89a44c243f64e1b78c6c44b->m_frame.f_lineno = 522;
        tmp_expression_value_9 = CALL_METHOD_NO_ARGS(tmp_called_instance_14, mod_consts[24]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[19]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_eps == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 522;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_14 = par_eps;
        frame_fe9f16d6c89a44c243f64e1b78c6c44b->m_frame.f_lineno = 522;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_denom;
            var_denom = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    CHECK_OBJECT(var_exp_avg_update_values);
    Py_DECREF(var_exp_avg_update_values);
    var_exp_avg_update_values = NULL;

    CHECK_OBJECT(var_exp_avg_sq_update_values);
    Py_DECREF(var_exp_avg_sq_update_values);
    var_exp_avg_sq_update_values = NULL;

    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_pow_expr_left_1;
        PyObject *tmp_pow_expr_right_1;
        tmp_sub_expr_left_3 = mod_consts[14];
        if (par_beta1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 525;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_pow_expr_left_1 = par_beta1;
        CHECK_OBJECT(var_step);
        tmp_pow_expr_right_1 = var_step;
        tmp_sub_expr_right_3 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
        if (tmp_sub_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_23 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_right_3);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_bias_correction1;
            var_bias_correction1 = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_sub_expr_left_4;
        PyObject *tmp_sub_expr_right_4;
        PyObject *tmp_pow_expr_left_2;
        PyObject *tmp_pow_expr_right_2;
        tmp_sub_expr_left_4 = mod_consts[14];
        if (par_beta2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 526;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_pow_expr_left_2 = par_beta2;
        CHECK_OBJECT(var_step);
        tmp_pow_expr_right_2 = var_step;
        tmp_sub_expr_right_4 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_2, tmp_pow_expr_right_2);
        if (tmp_sub_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_24 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
        Py_DECREF(tmp_sub_expr_right_4);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_bias_correction2;
            var_bias_correction2 = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_called_instance_15;
        PyObject *tmp_args_element_value_15;
        if (par_lr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 527;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_mult_expr_left_1 = par_lr;
        tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_instance_15 == NULL)) {
            tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_instance_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_bias_correction2);
        tmp_args_element_value_15 = var_bias_correction2;
        frame_fe9f16d6c89a44c243f64e1b78c6c44b->m_frame.f_lineno = 527;
        tmp_mult_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_15, mod_consts[32], tmp_args_element_value_15);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truediv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_bias_correction1);
        tmp_truediv_expr_right_1 = var_bias_correction1;
        tmp_assign_source_25 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_step_size;
            var_step_size = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_16;
        PyObject *tmp_args_element_value_18;
        CHECK_OBJECT(var_param);
        tmp_expression_value_10 = var_param;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[19]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_make_sparse);
        tmp_called_value_10 = var_make_sparse;
        CHECK_OBJECT(var_step_size);
        tmp_operand_value_1 = var_step_size;
        tmp_mult_expr_left_2 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 529;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_numer);
        tmp_called_instance_16 = var_numer;
        CHECK_OBJECT(var_denom);
        tmp_args_element_value_18 = var_denom;
        frame_fe9f16d6c89a44c243f64e1b78c6c44b->m_frame.f_lineno = 529;
        tmp_mult_expr_right_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_16, mod_consts[56], tmp_args_element_value_18);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_mult_expr_left_2);

            exception_lineno = 529;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_17 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 529;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        frame_fe9f16d6c89a44c243f64e1b78c6c44b->m_frame.f_lineno = 529;
        tmp_args_element_value_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_17);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 529;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        frame_fe9f16d6c89a44c243f64e1b78c6c44b->m_frame.f_lineno = 529;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;
            type_description_1 = "oooooooooooccocooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 491;
        type_description_1 = "oooooooooooccocooooooooooooo";
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fe9f16d6c89a44c243f64e1b78c6c44b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fe9f16d6c89a44c243f64e1b78c6c44b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fe9f16d6c89a44c243f64e1b78c6c44b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fe9f16d6c89a44c243f64e1b78c6c44b,
        type_description_1,
        par_params,
        par_grads,
        par_exp_avgs,
        par_exp_avg_sqs,
        par_state_steps,
        par_eps,
        par_beta1,
        par_beta2,
        par_lr,
        var_i,
        var_param,
        var_grad,
        var_grad_indices,
        var_grad_values,
        var_size,
        var_exp_avg,
        var_exp_avg_sq,
        var_step,
        var_make_sparse,
        var_old_exp_avg_values,
        var_exp_avg_update_values,
        var_old_exp_avg_sq_values,
        var_exp_avg_sq_update_values,
        var_numer,
        var_denom,
        var_bias_correction1,
        var_bias_correction2,
        var_step_size
    );


    // Release cached frame if used for exception.
    if (frame_fe9f16d6c89a44c243f64e1b78c6c44b == cache_frame_fe9f16d6c89a44c243f64e1b78c6c44b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fe9f16d6c89a44c243f64e1b78c6c44b);
        cache_frame_fe9f16d6c89a44c243f64e1b78c6c44b = NULL;
    }

    assertFrameObject(frame_fe9f16d6c89a44c243f64e1b78c6c44b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_param);
    var_param = NULL;
    CHECK_OBJECT(var_grad);
    Py_DECREF(var_grad);
    var_grad = NULL;
    CHECK_OBJECT(var_grad_indices);
    Py_DECREF(var_grad_indices);
    var_grad_indices = NULL;
    Py_XDECREF(var_grad_values);
    var_grad_values = NULL;
    CHECK_OBJECT(var_size);
    Py_DECREF(var_size);
    var_size = NULL;
    Py_XDECREF(var_exp_avg);
    var_exp_avg = NULL;
    Py_XDECREF(var_exp_avg_sq);
    var_exp_avg_sq = NULL;
    Py_XDECREF(var_step);
    var_step = NULL;
    Py_XDECREF(var_make_sparse);
    var_make_sparse = NULL;
    Py_XDECREF(var_old_exp_avg_values);
    var_old_exp_avg_values = NULL;
    Py_XDECREF(var_exp_avg_update_values);
    var_exp_avg_update_values = NULL;
    Py_XDECREF(var_old_exp_avg_sq_values);
    var_old_exp_avg_sq_values = NULL;
    Py_XDECREF(var_exp_avg_sq_update_values);
    var_exp_avg_sq_update_values = NULL;
    Py_XDECREF(var_numer);
    var_numer = NULL;
    Py_XDECREF(var_denom);
    var_denom = NULL;
    Py_XDECREF(var_bias_correction1);
    var_bias_correction1 = NULL;
    Py_XDECREF(var_bias_correction2);
    var_bias_correction2 = NULL;
    Py_XDECREF(var_step_size);
    var_step_size = NULL;
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

    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_param);
    var_param = NULL;
    CHECK_OBJECT(var_grad);
    Py_DECREF(var_grad);
    var_grad = NULL;
    CHECK_OBJECT(var_grad_indices);
    Py_DECREF(var_grad_indices);
    var_grad_indices = NULL;
    Py_XDECREF(var_grad_values);
    var_grad_values = NULL;
    CHECK_OBJECT(var_size);
    Py_DECREF(var_size);
    var_size = NULL;
    Py_XDECREF(var_exp_avg);
    var_exp_avg = NULL;
    Py_XDECREF(var_exp_avg_sq);
    var_exp_avg_sq = NULL;
    Py_XDECREF(var_step);
    var_step = NULL;
    Py_XDECREF(var_make_sparse);
    var_make_sparse = NULL;
    Py_XDECREF(var_old_exp_avg_values);
    var_old_exp_avg_values = NULL;
    Py_XDECREF(var_exp_avg_update_values);
    var_exp_avg_update_values = NULL;
    Py_XDECREF(var_old_exp_avg_sq_values);
    var_old_exp_avg_sq_values = NULL;
    Py_XDECREF(var_exp_avg_sq_update_values);
    var_exp_avg_sq_update_values = NULL;
    Py_XDECREF(var_numer);
    var_numer = NULL;
    Py_XDECREF(var_denom);
    var_denom = NULL;
    Py_XDECREF(var_bias_correction1);
    var_bias_correction1 = NULL;
    Py_XDECREF(var_bias_correction2);
    var_bias_correction2 = NULL;
    Py_XDECREF(var_step_size);
    var_step_size = NULL;
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
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_grads);
    Py_DECREF(par_grads);
    CHECK_OBJECT(par_exp_avgs);
    Py_DECREF(par_exp_avgs);
    CHECK_OBJECT(par_exp_avg_sqs);
    Py_DECREF(par_exp_avg_sqs);
    CHECK_OBJECT(par_state_steps);
    Py_DECREF(par_state_steps);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    CHECK_OBJECT(par_beta1);
    Py_DECREF(par_beta1);
    CHECK_OBJECT(par_beta2);
    Py_DECREF(par_beta2);
    CHECK_OBJECT(par_lr);
    Py_DECREF(par_lr);
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
    CHECK_OBJECT(par_exp_avg_sqs);
    Py_DECREF(par_exp_avg_sqs);
    CHECK_OBJECT(par_state_steps);
    Py_DECREF(par_state_steps);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    CHECK_OBJECT(par_beta1);
    Py_DECREF(par_beta1);
    CHECK_OBJECT(par_beta2);
    Py_DECREF(par_beta2);
    CHECK_OBJECT(par_lr);
    Py_DECREF(par_lr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$optim$_functional$$$function__13_sparse_adam$$$function__1_make_sparse(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_values = python_pars[0];
    PyObject *var_constructor = NULL;
    struct Nuitka_FrameObject *frame_d9bc94e707d1030c80c8c4692d945e79;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d9bc94e707d1030c80c8c4692d945e79 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d9bc94e707d1030c80c8c4692d945e79)) {
        Py_XDECREF(cache_frame_d9bc94e707d1030c80c8c4692d945e79);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d9bc94e707d1030c80c8c4692d945e79 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d9bc94e707d1030c80c8c4692d945e79 = MAKE_FUNCTION_FRAME(codeobj_d9bc94e707d1030c80c8c4692d945e79, module_torch$optim$_functional, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d9bc94e707d1030c80c8c4692d945e79->m_type_description == NULL);
    frame_d9bc94e707d1030c80c8c4692d945e79 = cache_frame_d9bc94e707d1030c80c8c4692d945e79;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d9bc94e707d1030c80c8c4692d945e79);
    assert(Py_REFCNT(frame_d9bc94e707d1030c80c8c4692d945e79) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 504;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[103]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        assert(var_constructor == NULL);
        var_constructor = tmp_assign_source_1;
    }
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
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 505;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[1]);
        frame_d9bc94e707d1030c80c8c4692d945e79->m_frame.f_lineno = 505;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[105]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_values);
        tmp_called_instance_2 = par_values;
        frame_d9bc94e707d1030c80c8c4692d945e79->m_frame.f_lineno = 505;
        tmp_cmp_expr_left_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[105]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[2];
        tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "ooccc";
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_constructor);
        tmp_called_value_2 = var_constructor;
        frame_d9bc94e707d1030c80c8c4692d945e79->m_frame.f_lineno = 506;
        tmp_expression_value_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[106]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 506;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_d9bc94e707d1030c80c8c4692d945e79->m_frame.f_lineno = 506;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_constructor);
        tmp_called_value_3 = var_constructor;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 507;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        if (par_values == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 507;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = par_values;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 507;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = Nuitka_Cell_GET(self->m_closure[2]);
        frame_d9bc94e707d1030c80c8c4692d945e79->m_frame.f_lineno = 507;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_1 = "ooccc";
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
        exception_tb = MAKE_TRACEBACK(frame_d9bc94e707d1030c80c8c4692d945e79, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d9bc94e707d1030c80c8c4692d945e79->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d9bc94e707d1030c80c8c4692d945e79, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d9bc94e707d1030c80c8c4692d945e79,
        type_description_1,
        par_values,
        var_constructor,
        self->m_closure[0],
        self->m_closure[1],
        self->m_closure[2]
    );


    // Release cached frame if used for exception.
    if (frame_d9bc94e707d1030c80c8c4692d945e79 == cache_frame_d9bc94e707d1030c80c8c4692d945e79) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d9bc94e707d1030c80c8c4692d945e79);
        cache_frame_d9bc94e707d1030c80c8c4692d945e79 = NULL;
    }

    assertFrameObject(frame_d9bc94e707d1030c80c8c4692d945e79);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_constructor);
    var_constructor = NULL;
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

    Py_XDECREF(var_constructor);
    var_constructor = NULL;
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
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torch$optim$_functional$$$function__10_asgd(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$_functional$$$function__10_asgd,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4d34c784f2406b8a445b50e82e0db550,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$optim$_functional,
        mod_consts[87],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$_functional$$$function__11_nadam(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$_functional$$$function__11_nadam,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b0a87e0af404722c97c3c6e1dec5f433,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$optim$_functional,
        mod_consts[93],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$_functional$$$function__12_radam(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$_functional$$$function__12_radam,
        mod_consts[150],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1c1066f4b7bffe9fc266f212034b6413,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$optim$_functional,
        mod_consts[98],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$_functional$$$function__13_sparse_adam(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$_functional$$$function__13_sparse_adam,
        mod_consts[151],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fe9f16d6c89a44c243f64e1b78c6c44b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$optim$_functional,
        mod_consts[102],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$_functional$$$function__13_sparse_adam$$$function__1_make_sparse(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$_functional$$$function__13_sparse_adam$$$function__1_make_sparse,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        mod_consts[100],
#endif
        codeobj_d9bc94e707d1030c80c8c4692d945e79,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$optim$_functional,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$_functional$$$function__1__make_sparse() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$_functional$$$function__1__make_sparse,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2afe5bb62bee0a711b2bfa03527c4b1e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$optim$_functional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$_functional$$$function__2_adagrad(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$_functional$$$function__2_adagrad,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bebd4b335fe55c74c16860993bb95af9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$optim$_functional,
        mod_consts[36],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$_functional$$$function__3_adam(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$_functional$$$function__3_adam,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_53120334105ed829c779aa74ccf52915,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$optim$_functional,
        mod_consts[45],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$_functional$$$function__4_adamw(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$_functional$$$function__4_adamw,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e886a0d0f852401d6fe4cb2c61ad254d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$optim$_functional,
        mod_consts[46],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$_functional$$$function__5_sgd(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$_functional$$$function__5_sgd,
        mod_consts[132],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b011d3803280b48e4c54cea5f44713f5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$optim$_functional,
        mod_consts[54],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$_functional$$$function__6_adadelta(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$_functional$$$function__6_adadelta,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f0d0e832a60569c4d77bc02656c328f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$optim$_functional,
        mod_consts[58],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$_functional$$$function__7_rmsprop(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$_functional$$$function__7_rmsprop,
        mod_consts[138],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1a6ce2c4e5fc56421b40861a3fbbcd17,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$optim$_functional,
        mod_consts[62],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$_functional$$$function__8_rprop(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$_functional$$$function__8_rprop,
        mod_consts[141],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4cbf6e0ecca94a31c8a2fa968e847035,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$optim$_functional,
        mod_consts[77],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$optim$_functional$$$function__9_adamax(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$optim$_functional$$$function__9_adamax,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f0017e915de489a0d5abbebd0b70cffa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$optim$_functional,
        mod_consts[84],
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

function_impl_code functable_torch$optim$_functional[] = {
    impl_torch$optim$_functional$$$function__13_sparse_adam$$$function__1_make_sparse,
    impl_torch$optim$_functional$$$function__1__make_sparse,
    impl_torch$optim$_functional$$$function__2_adagrad,
    impl_torch$optim$_functional$$$function__3_adam,
    impl_torch$optim$_functional$$$function__4_adamw,
    impl_torch$optim$_functional$$$function__5_sgd,
    impl_torch$optim$_functional$$$function__6_adadelta,
    impl_torch$optim$_functional$$$function__7_rmsprop,
    impl_torch$optim$_functional$$$function__8_rprop,
    impl_torch$optim$_functional$$$function__9_adamax,
    impl_torch$optim$_functional$$$function__10_asgd,
    impl_torch$optim$_functional$$$function__11_nadam,
    impl_torch$optim$_functional$$$function__12_radam,
    impl_torch$optim$_functional$$$function__13_sparse_adam,
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

    function_impl_code *current = functable_torch$optim$_functional;
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

    if (offset > sizeof(functable_torch$optim$_functional) || offset < 0) {
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
        functable_torch$optim$_functional[offset],
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
        module_torch$optim$_functional,
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
PyObject *modulecode_torch$optim$_functional(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch.optim._functional");

    // Store the module for future use.
    module_torch$optim$_functional = module;

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
        PRINT_STRING("torch.optim._functional: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.optim._functional: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.optim._functional: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$optim$_functional\n");

    moduledict_torch$optim$_functional = MODULE_DICT(module_torch$optim$_functional);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$optim$_functional,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$optim$_functional,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[168]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$optim$_functional,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$optim$_functional,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$optim$_functional,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$optim$_functional);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$optim$_functional, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$optim$_functional, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$optim$_functional, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$optim$_functional);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$optim$_functional, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_cbd92c58fec2bb7288d428a482a6b4e5;
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
        tmp_assign_source_1 = mod_consts[107];
        UPDATE_STRING_DICT0(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_2);
    }
    frame_cbd92c58fec2bb7288d428a482a6b4e5 = MAKE_MODULE_FRAME(codeobj_cbd92c58fec2bb7288d428a482a6b4e5, module_torch$optim$_functional);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cbd92c58fec2bb7288d428a482a6b4e5);
    assert(Py_REFCNT(frame_cbd92c58fec2bb7288d428a482a6b4e5) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[110]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[110]);

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
        UPDATE_STRING_DICT0(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[44];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$optim$_functional;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[2];
        frame_cbd92c58fec2bb7288d428a482a6b4e5->m_frame.f_lineno = 2;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[3];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$optim$_functional;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[2];
        frame_cbd92c58fec2bb7288d428a482a6b4e5->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_5);
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
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torch$optim$_functional;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[114];
        tmp_level_value_3 = mod_consts[2];
        frame_cbd92c58fec2bb7288d428a482a6b4e5->m_frame.f_lineno = 4;
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
                (PyObject *)moduledict_torch$optim$_functional,
                mod_consts[115],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[115]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_6);
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
                (PyObject *)moduledict_torch$optim$_functional,
                mod_consts[116],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[116]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torch$optim$_functional,
                mod_consts[117],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[117]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_9);
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


        tmp_assign_source_10 = MAKE_FUNCTION_torch$optim$_functional$$$function__1__make_sparse();

        UPDATE_STRING_DICT1(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_dict_key_1 = mod_consts[118];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_subscript_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_subscript_value_1 == NULL)) {
            tmp_subscript_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        assert(!(tmp_subscript_value_1 == NULL));
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 8 );
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
            tmp_dict_key_1 = mod_consts[119];
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_2 == NULL)) {
                tmp_subscript_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[120];
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_3 == NULL)) {
                tmp_subscript_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[121];
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_4 = (PyObject *)&PyLong_Type;
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[13];
            tmp_dict_value_1 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[8];
            tmp_dict_value_1 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[15];
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


        tmp_assign_source_11 = MAKE_FUNCTION_torch$optim$_functional$$$function__2_adagrad(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        tmp_dict_key_2 = mod_consts[118];
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_subscript_value_5 == NULL)) {
            tmp_subscript_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_subscript_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_5);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 13 );
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_10;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[119];
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_6 == NULL)) {
                tmp_subscript_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_6);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[123];
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_7 == NULL)) {
                tmp_subscript_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_7);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[124];
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_8 == NULL)) {
                tmp_subscript_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_8);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[125];
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_9 == NULL)) {
                tmp_subscript_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_9);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[121];
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_10 = (PyObject *)&PyLong_Type;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_10);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[126];
            tmp_dict_value_2 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[38];
            tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[39];
            tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[13];
            tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[8];
            tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[25];
            tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[127];
            tmp_dict_value_2 = (PyObject *)&PyBool_Type;
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


        tmp_assign_source_12 = MAKE_FUNCTION_torch$optim$_functional$$$function__3_adam(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_11;
        tmp_dict_key_3 = mod_consts[118];
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_subscript_value_11 == NULL)) {
            tmp_subscript_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_subscript_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_11);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 13 );
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_13;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_subscript_value_15;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_16;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[119];
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_12 == NULL)) {
                tmp_subscript_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_12);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[123];
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_13 == NULL)) {
                tmp_subscript_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_13);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[124];
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_14 == NULL)) {
                tmp_subscript_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_14);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[125];
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_15 == NULL)) {
                tmp_subscript_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_15);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[121];
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_16 = (PyObject *)&PyLong_Type;
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_16);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[126];
            tmp_dict_value_3 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[38];
            tmp_dict_value_3 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[39];
            tmp_dict_value_3 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[13];
            tmp_dict_value_3 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[8];
            tmp_dict_value_3 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[25];
            tmp_dict_value_3 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[127];
            tmp_dict_value_3 = (PyObject *)&PyBool_Type;
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


        tmp_assign_source_13 = MAKE_FUNCTION_torch$optim$_functional$$$function__4_adamw(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_17;
        tmp_dict_key_4 = mod_consts[118];
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_subscript_value_17 == NULL)) {
            tmp_subscript_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_subscript_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_17);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 9 );
        {
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_19;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_subscript_value_20;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[130];
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_18 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_18 == NULL)) {
                tmp_subscript_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_18);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[48];
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto dict_build_exception_4;
            }
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[117]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_20 == NULL)) {
                tmp_subscript_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_20);
            if (tmp_subscript_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_19);
            Py_DECREF(tmp_subscript_value_19);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[8];
            tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[47];
            tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[13];
            tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[51];
            tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[131];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[127];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
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


        tmp_assign_source_14 = MAKE_FUNCTION_torch$optim$_functional$$$function__5_sgd(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_21;
        tmp_dict_key_5 = mod_consts[118];
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_21 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_subscript_value_21 == NULL)) {
            tmp_subscript_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_subscript_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_21);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 8 );
        {
            PyObject *tmp_expression_value_22;
            PyObject *tmp_subscript_value_22;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_23;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_subscript_value_24;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[119];
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_22 == NULL)) {
                tmp_subscript_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto dict_build_exception_5;
            }
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_22);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[133];
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_23 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_23 == NULL)) {
                tmp_subscript_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;

                goto dict_build_exception_5;
            }
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_23);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[134];
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_24 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_24 == NULL)) {
                tmp_subscript_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto dict_build_exception_5;
            }
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_24);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[13];
            tmp_dict_value_5 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[55];
            tmp_dict_value_5 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[25];
            tmp_dict_value_5 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[8];
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


        tmp_assign_source_15 = MAKE_FUNCTION_torch$optim$_functional$$$function__6_adadelta(tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_25;
        tmp_dict_key_6 = mod_consts[118];
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_25 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_subscript_value_25 == NULL)) {
            tmp_subscript_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_subscript_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_25);
        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_annotations_6 = _PyDict_NewPresized( 11 );
        {
            PyObject *tmp_expression_value_26;
            PyObject *tmp_subscript_value_26;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_subscript_value_27;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_subscript_value_28;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_subscript_value_29;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[119];
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_26 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_26 == NULL)) {
                tmp_subscript_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
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
            tmp_dict_key_6 = mod_consts[133];
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_27 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_27 == NULL)) {
                tmp_subscript_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
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
            tmp_dict_key_6 = mod_consts[136];
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_28 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_28 == NULL)) {
                tmp_subscript_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto dict_build_exception_6;
            }
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_28);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[48];
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_29 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_29 == NULL)) {
                tmp_subscript_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;

                goto dict_build_exception_6;
            }
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_29);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[13];
            tmp_dict_value_6 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[59];
            tmp_dict_value_6 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[25];
            tmp_dict_value_6 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[8];
            tmp_dict_value_6 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[47];
            tmp_dict_value_6 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[137];
            tmp_dict_value_6 = (PyObject *)&PyBool_Type;
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


        tmp_assign_source_16 = MAKE_FUNCTION_torch$optim$_functional$$$function__7_rmsprop(tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_annotations_7;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_subscript_value_30;
        tmp_dict_key_7 = mod_consts[118];
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_30 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_subscript_value_30 == NULL)) {
            tmp_subscript_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_subscript_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_30);
        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_annotations_7 = _PyDict_NewPresized( 8 );
        {
            PyObject *tmp_expression_value_31;
            PyObject *tmp_subscript_value_31;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_subscript_value_32;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_subscript_value_33;
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[119];
            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;

                goto dict_build_exception_7;
            }
            tmp_subscript_value_31 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_31 == NULL)) {
                tmp_subscript_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;

                goto dict_build_exception_7;
            }
            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_31);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[139];
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;

                goto dict_build_exception_7;
            }
            tmp_subscript_value_32 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_32 == NULL)) {
                tmp_subscript_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;

                goto dict_build_exception_7;
            }
            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_32);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[140];
            tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_33 == NULL)) {
                tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;

                goto dict_build_exception_7;
            }
            tmp_subscript_value_33 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_33 == NULL)) {
                tmp_subscript_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;

                goto dict_build_exception_7;
            }
            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_33);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[72];
            tmp_dict_value_7 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[73];
            tmp_dict_value_7 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[68];
            tmp_dict_value_7 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[65];
            tmp_dict_value_7 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_7;
        // Exception handling pass through code for dict_build:
        dict_build_exception_7:;
        Py_DECREF(tmp_annotations_7);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_7:;


        tmp_assign_source_17 = MAKE_FUNCTION_torch$optim$_functional$$$function__8_rprop(tmp_annotations_7);

        UPDATE_STRING_DICT1(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_annotations_8;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_subscript_value_34;
        tmp_dict_key_8 = mod_consts[118];
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_34 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_subscript_value_34 == NULL)) {
            tmp_subscript_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_subscript_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_34);
        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_annotations_8 = _PyDict_NewPresized( 10 );
        {
            PyObject *tmp_expression_value_35;
            PyObject *tmp_subscript_value_35;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_subscript_value_36;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_subscript_value_37;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_subscript_value_38;
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[119];
            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_35 == NULL)) {
                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;

                goto dict_build_exception_8;
            }
            tmp_subscript_value_35 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_35 == NULL)) {
                tmp_subscript_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;

                goto dict_build_exception_8;
            }
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_35);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[123];
            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_36 == NULL)) {
                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;

                goto dict_build_exception_8;
            }
            tmp_subscript_value_36 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_36 == NULL)) {
                tmp_subscript_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;

                goto dict_build_exception_8;
            }
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_36);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[142];
            tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_37 == NULL)) {
                tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;

                goto dict_build_exception_8;
            }
            tmp_subscript_value_37 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_37 == NULL)) {
                tmp_subscript_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;

                goto dict_build_exception_8;
            }
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_37);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[121];
            tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_38 == NULL)) {
                tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;

                goto dict_build_exception_8;
            }
            tmp_subscript_value_38 = (PyObject *)&PyLong_Type;
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_38);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[25];
            tmp_dict_value_8 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[38];
            tmp_dict_value_8 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[39];
            tmp_dict_value_8 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[13];
            tmp_dict_value_8 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[8];
            tmp_dict_value_8 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_8;
        // Exception handling pass through code for dict_build:
        dict_build_exception_8:;
        Py_DECREF(tmp_annotations_8);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_8:;


        tmp_assign_source_18 = MAKE_FUNCTION_torch$optim$_functional$$$function__9_adamax(tmp_annotations_8);

        UPDATE_STRING_DICT1(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_annotations_9;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_subscript_value_39;
        tmp_dict_key_9 = mod_consts[118];
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_39 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_subscript_value_39 == NULL)) {
            tmp_subscript_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_subscript_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_39);
        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_annotations_9 = _PyDict_NewPresized( 7 );
        {
            PyObject *tmp_expression_value_40;
            PyObject *tmp_subscript_value_40;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_subscript_value_41;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_subscript_value_42;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_subscript_value_43;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[119];
            tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_40 == NULL)) {
                tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 348;

                goto dict_build_exception_9;
            }
            tmp_subscript_value_40 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_40 == NULL)) {
                tmp_subscript_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 348;

                goto dict_build_exception_9;
            }
            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_40);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 348;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[144];
            tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_41 == NULL)) {
                tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;

                goto dict_build_exception_9;
            }
            tmp_subscript_value_41 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_41 == NULL)) {
                tmp_subscript_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;

                goto dict_build_exception_9;
            }
            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_41);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[145];
            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_42 == NULL)) {
                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 350;

                goto dict_build_exception_9;
            }
            tmp_subscript_value_42 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_42, tmp_subscript_value_42);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 350;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[146];
            tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_43 == NULL)) {
                tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;

                goto dict_build_exception_9;
            }
            tmp_subscript_value_43 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_43);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[8];
            tmp_dict_value_9 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[85];
            tmp_dict_value_9 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_9;
        // Exception handling pass through code for dict_build:
        dict_build_exception_9:;
        Py_DECREF(tmp_annotations_9);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_9:;


        tmp_assign_source_19 = MAKE_FUNCTION_torch$optim$_functional$$$function__10_asgd(tmp_annotations_9);

        UPDATE_STRING_DICT1(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_annotations_10;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_subscript_value_44;
        tmp_dict_key_10 = mod_consts[118];
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_44 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_subscript_value_44 == NULL)) {
            tmp_subscript_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_subscript_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_44, tmp_subscript_value_44);
        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        tmp_annotations_10 = _PyDict_NewPresized( 12 );
        {
            PyObject *tmp_expression_value_45;
            PyObject *tmp_subscript_value_45;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_subscript_value_46;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_subscript_value_47;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_subscript_value_48;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_subscript_value_49;
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[119];
            tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_45 == NULL)) {
                tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;

                goto dict_build_exception_10;
            }
            tmp_subscript_value_45 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_45 == NULL)) {
                tmp_subscript_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;

                goto dict_build_exception_10;
            }
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_45);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[123];
            tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_46 == NULL)) {
                tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 384;

                goto dict_build_exception_10;
            }
            tmp_subscript_value_46 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_46 == NULL)) {
                tmp_subscript_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 384;

                goto dict_build_exception_10;
            }
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_46, tmp_subscript_value_46);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 384;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[124];
            tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_47 == NULL)) {
                tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;

                goto dict_build_exception_10;
            }
            tmp_subscript_value_47 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_47 == NULL)) {
                tmp_subscript_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;

                goto dict_build_exception_10;
            }
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_47, tmp_subscript_value_47);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[148];
            tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_48 == NULL)) {
                tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;

                goto dict_build_exception_10;
            }
            tmp_subscript_value_48 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_48, tmp_subscript_value_48);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[121];
            tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_49 == NULL)) {
                tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 387;

                goto dict_build_exception_10;
            }
            tmp_subscript_value_49 = (PyObject *)&PyLong_Type;
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_49, tmp_subscript_value_49);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 387;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[38];
            tmp_dict_value_10 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[39];
            tmp_dict_value_10 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[13];
            tmp_dict_value_10 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[8];
            tmp_dict_value_10 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[91];
            tmp_dict_value_10 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[25];
            tmp_dict_value_10 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_10;
        // Exception handling pass through code for dict_build:
        dict_build_exception_10:;
        Py_DECREF(tmp_annotations_10);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_10:;


        tmp_assign_source_20 = MAKE_FUNCTION_torch$optim$_functional$$$function__11_nadam(tmp_annotations_10);

        UPDATE_STRING_DICT1(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_annotations_11;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_subscript_value_50;
        tmp_dict_key_11 = mod_consts[118];
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_50 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_subscript_value_50 == NULL)) {
            tmp_subscript_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_subscript_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_50, tmp_subscript_value_50);
        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_annotations_11 = _PyDict_NewPresized( 10 );
        {
            PyObject *tmp_expression_value_51;
            PyObject *tmp_subscript_value_51;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_subscript_value_52;
            PyObject *tmp_expression_value_53;
            PyObject *tmp_subscript_value_53;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_subscript_value_54;
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[119];
            tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_51 == NULL)) {
                tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;

                goto dict_build_exception_11;
            }
            tmp_subscript_value_51 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_51 == NULL)) {
                tmp_subscript_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;

                goto dict_build_exception_11;
            }
            tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_51, tmp_subscript_value_51);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[123];
            tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_52 == NULL)) {
                tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;

                goto dict_build_exception_11;
            }
            tmp_subscript_value_52 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_52 == NULL)) {
                tmp_subscript_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;

                goto dict_build_exception_11;
            }
            tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_52, tmp_subscript_value_52);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[124];
            tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_53 == NULL)) {
                tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;

                goto dict_build_exception_11;
            }
            tmp_subscript_value_53 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_53 == NULL)) {
                tmp_subscript_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;

                goto dict_build_exception_11;
            }
            tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_53, tmp_subscript_value_53);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[121];
            tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_54 == NULL)) {
                tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 431;

                goto dict_build_exception_11;
            }
            tmp_subscript_value_54 = (PyObject *)&PyLong_Type;
            tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_54, tmp_subscript_value_54);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 431;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[38];
            tmp_dict_value_11 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[39];
            tmp_dict_value_11 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[13];
            tmp_dict_value_11 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[8];
            tmp_dict_value_11 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[25];
            tmp_dict_value_11 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_11;
        // Exception handling pass through code for dict_build:
        dict_build_exception_11:;
        Py_DECREF(tmp_annotations_11);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_11:;


        tmp_assign_source_21 = MAKE_FUNCTION_torch$optim$_functional$$$function__12_radam(tmp_annotations_11);

        UPDATE_STRING_DICT1(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_annotations_12;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_subscript_value_55;
        tmp_dict_key_12 = mod_consts[118];
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_55 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_subscript_value_55 == NULL)) {
            tmp_subscript_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_subscript_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_55, tmp_subscript_value_55);
        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;

            goto frame_exception_exit_1;
        }
        tmp_annotations_12 = _PyDict_NewPresized( 9 );
        {
            PyObject *tmp_expression_value_56;
            PyObject *tmp_subscript_value_56;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_subscript_value_57;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_subscript_value_58;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_subscript_value_59;
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[119];
            tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_56 == NULL)) {
                tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 478;

                goto dict_build_exception_12;
            }
            tmp_subscript_value_56 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_56 == NULL)) {
                tmp_subscript_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 478;

                goto dict_build_exception_12;
            }
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_56, tmp_subscript_value_56);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 478;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[123];
            tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_57 == NULL)) {
                tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 479;

                goto dict_build_exception_12;
            }
            tmp_subscript_value_57 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_57 == NULL)) {
                tmp_subscript_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 479;

                goto dict_build_exception_12;
            }
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_57, tmp_subscript_value_57);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 479;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[124];
            tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_58 == NULL)) {
                tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 480;

                goto dict_build_exception_12;
            }
            tmp_subscript_value_58 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_subscript_value_58 == NULL)) {
                tmp_subscript_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_subscript_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 480;

                goto dict_build_exception_12;
            }
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_58, tmp_subscript_value_58);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 480;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[121];
            tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_expression_value_59 == NULL)) {
                tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_expression_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 481;

                goto dict_build_exception_12;
            }
            tmp_subscript_value_59 = (PyObject *)&PyLong_Type;
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_59, tmp_subscript_value_59);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 481;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[25];
            tmp_dict_value_12 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[38];
            tmp_dict_value_12 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[39];
            tmp_dict_value_12 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[13];
            tmp_dict_value_12 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_12;
        // Exception handling pass through code for dict_build:
        dict_build_exception_12:;
        Py_DECREF(tmp_annotations_12);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_12:;


        tmp_assign_source_22 = MAKE_FUNCTION_torch$optim$_functional$$$function__13_sparse_adam(tmp_annotations_12);

        UPDATE_STRING_DICT1(moduledict_torch$optim$_functional, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_22);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cbd92c58fec2bb7288d428a482a6b4e5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cbd92c58fec2bb7288d428a482a6b4e5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cbd92c58fec2bb7288d428a482a6b4e5, exception_lineno);
    }



    assertFrameObject(frame_cbd92c58fec2bb7288d428a482a6b4e5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch.optim._functional", false);

    Py_INCREF(module_torch$optim$_functional);
    return module_torch$optim$_functional;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$optim$_functional, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$optim$_functional", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
